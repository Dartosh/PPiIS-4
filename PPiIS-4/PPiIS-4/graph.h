#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
struct vertex
{
	T _data;

	vertex() :
		_data(0)
	{	}

	vertex(const T& node) :
		_data(node)
	{	}
};

template <typename T>
struct edge
{
	T _first, _sec;
	edge() :
		_first(0),
		_sec(0)
	{	}
	edge(const T& first, const T& sec) :
		_first(first),
		_sec(sec)
	{	}
};

template <typename T>
class graph
{
public:
	graph() :
	{	}


	void add_vertex(const T& data);
	bool find_vertex(const T& data);

private:
	vector<vertex<T>> _vertexes;
	vector<edge<T>> _edges;
};


template<typename T>
void graph<T>::add_vertex(const T& data)
{
	if (find_vertex(data) == false)
		_vertexes.push_back(vertex<T>(data));
	else
		cout << "Math founded!" << endl;
}

template<typename T>
bool graph<T>::find_vertex(const T& data)
{
	for (int i = 0; i < _vertexes.size(); ++i)
		if (_vertexes[i] == data)
			return true;
	return false;
}
