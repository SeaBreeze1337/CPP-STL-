//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct Print
//{
//	void operator()(int i) {
//		cout << i << ",";
//	}
//};
//
//void test01() {
//
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(12);
//	v1.push_back(32);
//	v1.push_back(534);
//	v1.push_back(67);
//
//	vector<int> v2;
//	v2.resize(v1.size());
//
//	copy(v1.begin(), v1.end(),v2.begin());
//	for_each(v2.begin(), v2.end(), Print());
//
//}
//
//
//void test02() {
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(1);
//	v1.push_back(4);
//	v1.push_back(1);
//	
//	//把1全换成100
//	replace(v1.begin(), v1.end(),1,100);
//	for_each(v1.begin(), v1.end(), Print());
//}
//
//struct Filter
//{
//	bool operator()(int i) {
//		return i % 2 == 1;
//	}
//};
//
//void test03() {
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(1);
//	v1.push_back(4);
//	v1.push_back(6);
//	v1.push_back(5);
//
//	//把奇数全换成100
//	replace_if(v1.begin(), v1.end(),Filter(),100);
//	for_each(v1.begin(), v1.end(), Print());
//}
//
//
//void test04() {
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,10};
//
//	vector<int> v1(arr1, arr1 + (sizeof(arr1) / sizeof(int)));
//	vector<int> v2(arr1, arr2 + (sizeof(arr2) / sizeof(int)));
//	//交换
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print());
//	
//}
//
//int main() {
//
//	test04();
//	return EXIT_SUCCESS;
//}