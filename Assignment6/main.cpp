#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"
#include "headers/Translation.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output/output.txt", outTriangles);

    Translation translation(triangles);
    std::vector<Triangle> traslatedGeometery = translation.translate(triangles);
    writer.write("output/translatedOutput.txt", traslatedGeometery);

    std::cout<<"Press enter to exit\n";
}