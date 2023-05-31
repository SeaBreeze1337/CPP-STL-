#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//set_intersection:������set���ϵĽ���
//set_union:�󲢼�
//set_difference:��
//����������


struct Print
{
	void operator()(int i) {
		cout << i << ",";
	}
};

int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	int arr2[] = {1,3,5,7,11,12,13,14,15,16};

	vector<int> v1(arr1, arr1 + (sizeof(arr1) / sizeof(int)));
	vector<int> v2(arr2, arr2 + (sizeof(arr2) / sizeof(int)));

	//����
	vector<int> res1;
	res1.resize(min(v1.size(),v2.size()));
	//���ص��ǽ��������һ��Ԫ�ص���һλ������
	vector<int>::iterator it1=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),res1.begin());
	for_each(res1.begin(),it1,Print());
	cout << endl;


	//����
	vector<int> res2;
	res2.resize(v1.size()+v2.size());
	auto it2 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), res2.begin());
	for_each(res2.begin(), it2, Print());
	cout << endl;

	//�
	vector<int> res3;
	res3.resize(max(v1.size(), v2.size()));
	auto it3 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), res3.begin());
	for_each(res3.begin(), it3, Print());
	cout << endl;
	 
	return EXIT_SUCCESS;
}