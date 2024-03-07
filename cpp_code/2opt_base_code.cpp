#include <algorithm>
#include <random>
#include <stdio.h>
#include <vector>

using namespace std;

class Point {
public:
	int x, y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point() {
		this->x = 0;
		this->y = 0;
	}

	// Distance between two points squared
	inline int dist2(const Point& other) const {
		return (x - other.x) * (x - other.x) + (y - other.y) * (y - other.y);
	}
};

// Calculate the distance of the whole path (Squared Distances between points)
int pathLengthSq(vector<Point>& path) {
	int length = 0;
	for (int i = 0; i < path.size(); i++) {
		length += path[i].dist2(path[(i + 1) % path.size()]);
	}
	return length;
}

// Perform a 2-opt swap
void do2Opt(vector<Point>& path, int i, int j) {
	reverse(begin(path) + i + 1, begin(path) + j + 1);
}

// Print the path. 
void printPath(string pathName, vector<Point>& path) {
	printf("%s = [", pathName.c_str());
	for (int i = 0; i < path.size(); i++) {
		if (i % 10 == 0) {
			printf("\n    ");
		}

		if (i < path.size() - 1) {
			printf("[ %3d, %3d], ", path[i].x, path[i].y);
		}
		else {
			printf("[ %3d, %3d]", path[i].x, path[i].y);
		}
	}
	printf("\n];\n");
}

// Create a path of length n with random points between 0 and 1000
vector<Point> createRandomPath(int n) {
	vector<Point> path;
	for (int i = 0; i < n; i++) {
		path.push_back(Point(rand() % 50, rand() % 50));
	}
	return path;
}

int main() {
	vector<Point> path = createRandomPath(10);
	printPath("path1", path);

	int curLength = pathLengthSq(path);
	int n = path.size();
	bool foundImprovement = true;
	while (foundImprovement) {
		foundImprovement = false;
		for (int i = 0; i <= n - 2; i++) {
			for (int j = i + 1; j < n; j++) {
				int lengthDelta = -path[i].dist2(path[(i + 1) % n]) - path[j].dist2(path[(j + 1) % n]) + path[i].dist2(path[j]) + path[(i + 1) % n].dist2(path[(j + 1) % n]);

				// If the length of the path is reduced, do a 2-opt swap
				if (lengthDelta < 0) {
					do2Opt(path, i, j);
					curLength += lengthDelta;
					foundImprovement = true;
				}
			}
		}
	}

	printPath("path2", path);
	return 0;
}