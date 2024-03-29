#pragma once


template <class T>
class SeqList
{
	T * m_data;
	size_t m_size;
	size_t m_capacity;

	void checkCapacity();//���ݺ���
public :
	SeqList(size_t capacity = 10) :
		m_data(new T[capacity]),
		m_size(0),
		m_capacity(capacity)
	{
	}

	T & operator [](int i)
	{
		return m_data[i];                        
	}
   


	void push_back(const T &src);
	void pop_back();

	int size();

	~SeqList();
};