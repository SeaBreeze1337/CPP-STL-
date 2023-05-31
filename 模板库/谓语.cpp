//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
////谓语Predicate
////如果一个函数对象（仿函数），重载的（）返回值类型是bool类型，这样的函数对象（仿函数）其实就是谓语Predicate
////
//
//class Student {
//private:
//	string _name;
//	int	_age;
//
//public:
//	Student() {};
//	Student(string name,int age):_name(name),_age(age) {};
//
//	void desc() {
//
//		cout << "name:" << _name << ",age=" <<_age << endl;
//	}
//
//	int age = _age;
//};
//
//class Younger {
//
//public:
//	bool operator()(Student& s) const{
//		return s.age<18;
//	}
//};
//
//class MyComparator{
//
//public:
//	bool operator()(Student& s1,Student& s2) const {
//		return s1.age < s2.age; 
//	}
//};
//
//void test01() {
//
//	vector<Student> v;
//	v.push_back(Student("aa",19));
//	v.push_back(Student("bb",18));
//	v.push_back(Student("cc",17));
//	v.push_back(Student("dd",21));
//	v.push_back(Student("ee",16));
//
//	//找到未成年
//	//find_if(start,end,predicate):从给定的范围，查找满足条件的元素，如果找到了，返回元素迭代器，否则返回end
//	vector<Student>::iterator it = find_if(v.begin(), v.end(),Younger());
//
//	if (it==v.end())
//	{
//		cout << "没有找到元素" << endl;
//	}
//	else
//	{
//		(*it).desc();
//	}
//
//
//
//	//按照年龄进行排序
//	//sort(start,end,predicate):从给定的范围，查找满足条件的元素，如果找到了，返回元素迭代器，否则返回end
//	sort(v.begin(), v.end(), MyComparator());
//	for (Student& s:v)
//	{
//		s.desc();
//	}
//
//
//}
//
//
//int main() {
//
//	test01();
//	
//
//	return EXIT_SUCCESS;
//}