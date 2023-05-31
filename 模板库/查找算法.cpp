//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//void test01() {
//
//	vector<int> v;
//	for (size_t i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//²éÕÒ5
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it==v.end())
//	{
//		cout << "NotFound!" << endl;
//	}
//	else
//	{
//		cout << "Founded:" << *it<<endl;
//	}
//}
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
//	bool operator==(const Person& p) {
//		return name == p.name && age == p.age;
//	}
//
//};
//
//
//
//void test02() {
//	vector<Person> v;
//	v.push_back(Person("a",11));
//	v.push_back(Person("b", 12));
//	v.push_back(Person("c", 9));
//	v.push_back(Person("d", 10));
//	v.push_back(Person("e", 12));
//
//	vector<Person>::iterator it= find(v.begin(), v.end(),Person("d",10));
//	if (it == v.end())
//	{
//		cout << "NotFound!" << endl;
//	}
//	else
//	{
//		cout << "Founded" << endl;
//	}
//}
//
//
//int main() {
//
//	test02();
//
//	return EXIT_SUCCESS;
//}