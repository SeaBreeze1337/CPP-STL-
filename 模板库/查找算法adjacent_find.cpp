//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
////adjacent_find：查找相邻重复元素
//
//void test01() {
//
//		vector<int> v;
//		v.push_back(1);
//		v.push_back(2);
//		v.push_back(3);
//		v.push_back(4);
//		v.push_back(5);
//		v.push_back(5);
//		v.push_back(6);
//		v.push_back(1);
//
//		auto it= adjacent_find(v.begin(),v.end());
//			if (it==v.end())
//	{
//		cout << "NotFound!" << endl;
//	}
//	else
//	{
//		cout << "Founded:" << *it<<endl;
//	}
//
//}
//
//
//
//class Person
//{
//public:
//	string name;
//	int age;
//
//	Person() = default;
//	Person(string n,int a):name(n),age(a){}
//
//
//
//};
//
//struct PersonEqualPredicate
//{
//	bool operator()(const Person& p1, const Person& p2) {
//		return p1.name == p2.name && p1.age == p2.age;
//	}
//};
//
//void test02() {
//	vector<Person> v;
//	v.push_back(Person("a",11));
//	v.push_back(Person("b", 12));
//	v.push_back(Person("c", 9));
//	v.push_back(Person("c", 9));
//	v.push_back(Person("d", 10));
//	v.push_back(Person("e", 12));
//	v.push_back(Person("e", 12));
//
//	auto it = adjacent_find(v.begin(),v.end(),PersonEqualPredicate());
//	if (it == v.end())
//	{
//		cout << "NotFound!" << endl;
//	}
//	else
//	{
//		cout << "Founded,name=" << it->name<<",age=" <<it->age<< endl;
//	}
//}
//
//
//
//int main() {
//
//	test02();
//
//	return EXIT_SUCCESS;
//}