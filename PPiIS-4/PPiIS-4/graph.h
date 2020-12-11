#pragma once
#include <iostream>

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