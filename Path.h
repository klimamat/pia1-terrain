#ifndef PATH_P
#define PATH_P

#include "TerrainMap.h"

// Abstract class which needs to be extended to contain the actual path finding algorithm

class Path {
public:
    Path(TerrainMap& m, std::string name_in, Point start_in, Point finish_in);
    virtual bool find() = 0;     // Implement this method to find the route and save it in vector<Point> path
    void printStats() const;     // Print out path statistics
    void saveToFile() const;     // Save path to file "name.dat"
    std::string getName() const; // Returns path name
protected:
    TerrainMap& map;
    std::vector<Point> path;
    const Point start; 
    const Point finish;
private:
    std::string name;
};

#endif