#include <iostream>
#include "seqlist.h"
#include "seqlist.cpp"
using namespace std;
////�����⣺ֻ�ڶѻ���ջ���洴������ʹ�ù��캯��˽�л��ķ���
//class HeapOnly
//{
//	int m_a;
//	HeapOnly() :
//		m_a(0)
//	{
//
//	}
//public:
//	static HeapOnly * CreateObject();//�������ͨ�ĳ�Ա�����Ļ������޷�������һ��������Ϊ��ͨ����Ҫ��һ��������
//};                                  //���ã����ǵ�һ���޷���������������ѡ��̬��Ա��������һ���������ڵĳ�Ա����
//
//HeapOnly* HeapOnly:: CreateObject()
//{
//	HeapOnly * oh = new HeapOnly;
//	return oh;
//}

int main()
{

	SeqList <int> sl;

	sl.push_back(6);
	sl.push_back(7);
	sl.push_back(8);
	sl.push_back(9);

	cout << sl.size() << endl;


	return 0;
}