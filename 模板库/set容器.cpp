//#include<iostream>
//#include<set>
//using namespace std;
//
//void printSet(set<int>& s) {
//
//#if 0
//	//set的迭代器是一个只读的迭代器，只可以通过迭代器获取到元素的值，但是不能修改
//	for (auto it = s.begin(); it !=s.end(); it++)
//	{
//		cout << *it << ",";
//	}
//	cout << endl;
//#else
//	for (int ele:s)
//	{
//		cout << ele << ",";
//	}
//	cout << endl;
//#endif // 0
//
//
//}
//
//
//int main() {
//
//	//set不允许重复元素，mutilset反之
//	set<int> s;
//	multiset<int> ms;
//
//	s.insert(000);
//	s.insert(111); 
//	s.insert(222);
//	s.insert(000);
//	printSet(s);
//
//
//	//删除元素
//	set<int>::iterator it = s.begin();
//	s.erase(it);
//	//s.clear();
//	printSet(s);
//
//	//查找：set容器没有下标概念
//	set<int>::iterator target = s.find(100);//查找元素是否存在，是返回元素迭代器，否返回set.end()
//	cout << s.count(100) << endl;//查找元素的个数
//	set<int>::iterator res1=s.lower_bound(111);//返回第一个元素<=指定元素迭代器
//	set<int>::iterator res2 = s.upper_bound(111);//返回第一个元素>指定元素迭代器
//
//
//	//
//	cout << s.size() << endl;
//	cout << s.empty() << endl;
//
//	return EXIT_SUCCESS;
//}