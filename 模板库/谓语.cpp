//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
////ν��Predicate
////���һ���������󣨷º����������صģ�������ֵ������bool���ͣ������ĺ������󣨷º�������ʵ����ν��Predicate
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
//	//�ҵ�δ����
//	//find_if(start,end,predicate):�Ӹ����ķ�Χ����������������Ԫ�أ�����ҵ��ˣ�����Ԫ�ص����������򷵻�end
//	vector<Student>::iterator it = find_if(v.begin(), v.end(),Younger());
//
//	if (it==v.end())
//	{
//		cout << "û���ҵ�Ԫ��" << endl;
//	}
//	else
//	{
//		(*it).desc();
//	}
//
//
//
//	//���������������
//	//sort(start,end,predicate):�Ӹ����ķ�Χ����������������Ԫ�أ�����ҵ��ˣ�����Ԫ�ص����������򷵻�end
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