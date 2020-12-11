#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class vertex
{
public:
	vertex() :
		_data(0)
	{	}

	vertex(const T& node) :
		_data(node)
	{	}

	T get_data()
		return _data;
private:
	T _data;
};


class edge
{
public:

	edge() :
		_from(0),
		_to(0)
	{	}
	edge(const int& from, const int& to) :
		_from(from),
		_to(to)
	{	}

	int get_from()
	{
		return _from;
	}
	int get_to()
	{
		return _to;
	}

	void set_from(const int& from)
	{
		_from = from;
	}
	void set_to(const int& to)
	{
		_to = to;
	}

private:
	int _from, _to;
};

template <typename T>
class graph
{
public:
	graph() :
	{	}


	void delete_vertex(const T& data);
	void add_vertex(const T& data);
	bool find_vertex_data(const T& data);

	void add_edge(const int& from, const int& to);
	bool find_edge(const T& from, const T& to);


private:
	vector<vertex<T>> _vertexes;
	vector<edge> _edges;
};


template<typename T>
inline void graph<T>::delete_vertex(const T& data)
{
	//...
}

template<typename T>
inline void graph<T>::add_vertex(const T& data)
{
	if (find_vertex(data) == false)
		_vertexes.push_back(vertex<T>(data));
	else
		cout << "Math founded!" << endl;
}

template<typename T>
inline bool graph<T>::find_vertex_data(const T& data)
{
	for (int i = 0; i < _vertexes.size(); ++i)
		if (_vertexes[i].get_data() == data)
			return true;
	return false;
}

template<typename T>
inline void graph<T>::add_edge(const int& from, const int& to)
{
}

template<typename T>
inline bool graph<T>::find_edge(const T& from, const T& to)
{
	for (int i =0; i < _edges.size(); ++i)
		if (_vertexes[_edges[i]._first])
}


