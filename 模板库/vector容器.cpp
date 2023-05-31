//#include <iostream>
//#include <vector>
//using namespace std;
//
//template<typename E>
//void printVector(vector<E>& vector) {
//
//	for (E& ele:vector)
//	{
//		cout << ele << ",";
//	}
//	cout << endl;
//}
//
//
////vector容器的遍历
//void test01() {
//
//	//构造vector对象,通过vector的无参构造，构造出来一个空的vector容器
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//
//	//迭代器：使用普通指针，依次指向vector中的每一个元素
//	//begin（）：首元素地址
//	//end（）：最后一位元素的下一位指针
//	
//	for (vector<int>::iterator it = v.begin();it!=v.end();it++)
//	{
//		//直接输出指针指向元素
//		//cout << *it << endl;
//		if (*it==20)
//		{
//			*it = 200;
//		}
//	}
//
//	//迭代器，遍历容器
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//
//
//	//使用迭代器遍历容器的时候，可以缩写
//	//依次将v容器中的每个元素，给ele进行赋值
//	for (int& ele : v) {
//		if (ele==200)
//		{
//			ele = 2000;
//		}
//	}
//
//	for (int ele:v) {
//		cout << ele << endl;	
//	}
//
//
//
//	//迭代器，倒序遍历容器
//	for (vector<int>::iterator it = v.end(); it != v.begin();) {
//		it--;
//		cout << *it << endl;
//	}
//}
//
//
////vector的构造函数
//void test02() {
//
//	//无参构造
//	vector<int> v1;
//
//	//vector(n,ele)
//	vector<int> v2(10,5);//10个5填充
//
//	printVector(v2);
//
//
//	//vector(const vector& v)拷贝构造函数
//
//	//vector（v.begin(),v.end()）
//	vector<int> v3(v2.begin(), v2.begin()+5);
//	printVector(v3);
//
//	int array[] = {1,2,3,4,5};
//	vector<int> v4(array,array+3);
//	printVector(v4);
//
//}
//
//
////vector赋值
//void test03() {
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//
//	vector<int> v1;
//
//	//通过起始指针
//	v1.assign(arr, arr + 6);
//	printVector(v1);
//
//	//通过指定数量
//	vector<int> v2;
//	v2.assign(5, 10);
//	printVector(v2);
//
//	//运算符重载
//	vector<int> v3;
//	v3 = v2;
//	printVector(v3);
//
//
//	v1.swap(v2);
//
//}
//
//
////vector大小操作
//void test04() {
//
//	vector<int> v(10, 5);
//
//	//返回容器有多少个元素
//	cout << v.size() << endl;
//	//判断容器是否为空
//	cout << v.empty() << endl;
//	//返回容器容量
//	cout << v.capacity() << endl;
//
//	//重新指定容器长度，如果新的长度小于原来的长度，保留容器中
//	v.resize(5);
//	//重新指定容器长度，如果新的长度小于原来的长度，在后面填充默认元素
//	v.resize(15);
//	//重新指定容器长度，如果新的长度小于原来的长度，在后面填充指定元素
//	v.resize(15,9);
//
//	cout << "size=" << v.size() << endl;
//	printVector(v);
//
//
//}
//
////vector数据存取操作
//void test05() {
//
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	vector<int> v(array, array + (sizeof(array) / sizeof(int)));
//
//	int& ele = v.at(3);
//	cout << ele << endl;
//	ele = 40;
//	printVector(v);
//
//	int& e = v[5];
//	cout << e << endl;
//	ele = 60;
//	printVector(v);
//
//	cout << v.front()<<endl;
//	cout << v.back() << endl;
//}
//
////vector数据插入和删除
//void test06() {
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	vector<int> v(array, array + (sizeof(array) / sizeof(int)));
//
//	//第3位插入元素
//	v.insert(v.begin()+3,5,0);
//	printVector(v);
//
//	//尾部插入元素ele
//	v.push_back(20);
//	printVector(v);
//
//	//删除最后一个元素
//	v.pop_back();
//	printVector(v);
//
//	v.erase(v.begin() + 5);
//	printVector(v);
//
//	//[start,end)
//	v.erase(v.begin() + 7,v.begin()+10);
//	printVector(v);
//
//	v.clear();
//	printVector(v);
//}
//
//
////vector小案例，利用swap收缩空间
//void test07() {
//	//capacity；在内存上开辟了多少空间
//	//size：实际容器中存放的元素数量
//
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "size=" << v.size() << endl;
//	cout << "capacity=" << v.capacity() << endl;
//
//	//使用resize更改容器元素数量
//	v.resize(10);
//	cout << "size=" << v.size() << endl;
//	cout << "capacity=" << v.capacity() << endl;
//
//
//#if 0
//	{
//		vector<int> v2(v);
//		cout << "v2 size=" << v2.size() << endl;
//		cout << " v2 capacity=" << v2.capacity() << endl;
//
//		v2.swap(v);
//		cout << "size=" << v.size() << endl;
//		cout << "capacity=" << v.capacity() << endl;
//		cout << "v2 size=" << v2.size() << endl;
//		cout << " v2 capacity=" << v2.capacity() << endl;
//}
//#endif // 0
//	vector<int>(v).swap(v);
//	cout << "size=" << v.size() << endl;
//	cout << "capacity=" << v.capacity() << endl;
//}
//
//int main() {
//
//
//	test07();
//	return 0;
//}