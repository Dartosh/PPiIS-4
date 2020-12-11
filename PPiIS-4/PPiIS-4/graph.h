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
	{
		return _data;
	}
		
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
	int find_vertex_data(const T& data);

	void add_edge(const int& from, const int& to);				//Addition by number
	void add_edge(const T& from, const T& to);					//Addition by value
	bool find_edge(const int& from, const int& to);				//Search by number
	int find_edge(const T& from, const T& to);					//Search by value


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
inline int graph<T>::find_vertex_data(const T& data)
{
	for (int i = 0; i < _vertexes.size(); ++i)
		if (_vertexes[i].get_data() == data)
			return i;
	return -1;
}


//Addition by number
template<typename T>
inline void graph<T>::add_edge(const int& from, const int& to)
{
	if (find_edge_data(from, to) == false)
		_edges.push_back(edge(from, to));
}

template<typename T>
inline void graph<T>::add_edge(const T& from, const T& to)
{
	int first = find_vertex_data(from), sec = find_vertex_data(to);
	if (first != -1 && sec != -1 && find_edge(first, sec) == false)

}


//Search by number
template<typename T>
inline bool graph<T>::find_edge(const int& from, const int& to)
{
	for (int i = 0; i < _edges.size(); ++i)
		if (_edges[i].get_from() == from && _edges[i].get_to())
			return true;
	return false;
}


//Search by value
template<typename T>
inline int graph<T>::find_edge(const T& from, const T& to)
{
	for (int i = 0; i < _edges.size(); ++i)
		if (_vertexes[_edges[i].get_from()].get_data() == from && _vertexes[_edges[i].get_to()].get_data() == to)
			return i;
	return -1;
}


