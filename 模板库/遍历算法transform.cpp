//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
///*
//transform�㷨; ��ָ����������Ԫ�ذ��˵���һ����
//ע��;transform�����Ŀ�����������ڴ�
//*/
//
//class NumOperatate
//{
//public:
//	int operator()(int i) {
//		return i + 100;
//	}
//	
//
//
//
//};
//
//class SumOperate
//{
//public:
//	int operator()(int n1,int n2) {
//
//		return n1 + n2;
//	}
//};
//
//
//struct Print
//{
//	void operator()(int i) {
//		cout << i << ",";
//	}
//};
//
//
//
//int main() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//
//	vector<int> v2;
//	v2.resize(v1.size());
//
//	//Ԫ�ؿ���
//	transform(v1.begin(),v1.end(),v2.begin(),NumOperatate());
//	for_each(v2.begin(),v2.end(),Print());
//	cout << endl;
//
//	//v1+v2
//	vector<int> v3;
//	v3.resize(v1.size());
//	transform(v1.begin(),v1.end(),v2.begin(),v3.begin(),SumOperate());
//	for_each(v3.begin(), v3.end(), Print());
//
//	return EXIT_SUCCESS;
//}