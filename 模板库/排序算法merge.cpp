//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////merge算法：容器合并到另一容器
////注意：俩容器必须有序
//
//
//void Print(int i) {
//	cout << i << ",";
//
//}
//
//int main() {
//	int arr1[] = {1,2,3,5,6};
//	int arr2[] = {2,3,4,5,6,7,8};
//
//	vector<int> v1(arr1, arr1+(sizeof(arr1) / sizeof(int)));
//	vector<int> v2(arr2, arr2 + (sizeof(arr2) / sizeof(int)));
//
//	for_each(v1.begin(),v1.end(),Print);
//	cout << endl;
//
//	for_each(v2.begin(), v2.end(), Print);
//	cout << endl;
//
//	vector<int> v3;
//	v3.resize(v1.size()+v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(),v3.begin());
//	for_each(v3.begin(), v3.end(), Print);
//	cout << endl;
//
//	return EXIT_SUCCESS;
//}