#pragma once
#ifndef SAMPLE_H
#define SAMPLE_H


template <class T>
class Sample
{
	private:
		T Value;
		int Index;
	public:
		
		Sample(const T value, const int index);

		T getValue();
		int getIndex();

};
#endif