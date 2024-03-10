/*
MIT License
Copyright (c) 2020: Michele Maione
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#pragma once

#include <memory>

#include <set>
#include <string>
#include <vector>

#include "Base/TSP.hpp"
#include "../ADS/Graph.hpp"

using namespace ADS;
using namespace std;

namespace TSP
{
	class Christofides : public Base::TSP
	{
	private:
		vector<set<unsigned short>> MST(Graph &G);
		set<unsigned short> OddVertices(vector<set<unsigned short>> &T);
		shared_ptr<Graph> SubGraph(Graph &G, set<unsigned short> O);
		set<shared_ptr<Edge>> PerfectMatching(shared_ptr<Graph> G);
		vector<set<unsigned short>> Multigraph(vector<set<unsigned short>> &T, set<shared_ptr<Edge>> &M);
		void Hamiltonian(vector<set<unsigned short>> &H, vector<unsigned short> &E, set<unsigned short> &visited, unsigned short c);

	protected:
		float CalcCost(vector<unsigned short> &circuit);
		string PrintPath(vector<unsigned short> &circuit);

		void Solve(float &opt, string &path);

	public:
		Christofides(const vector<vector<float>> &DistanceMatrix2D);

	};
}