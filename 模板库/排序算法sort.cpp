//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
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
//void test01() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,6,5,3,2,1,7,8 };
//	vector<int> v(arr, arr + (sizeof(arr) / sizeof(int)));
//
//
//	//≈≈–Ú
//	sort(v.begin(),v.end());
//	for_each(v.begin(), v.end(),Print());
//
//	cout << endl;
//
//	//Ωµ–Ú
//	sort(v.begin(), v.end(),greater<int>());
//	for_each(v.begin(), v.end(), Print());
//
//}
//
//
//class Student {
//
//public:
//	string name;
//	int score;
//	Student() = default;
//	Student(string n, int s) :name(n), score(s){}
//};
//
//class StudentCompare {
//public:
//	bool operator()(const Student& s1, const Student& s2) {
//		return s1.score < s2.score;
//	}
//};
//
//void test02() {
//
//	vector<Student> v;
//	v.push_back(Student("a",11));
//	v.push_back(Student("q", 12));
//	v.push_back(Student("s", 14));
//	v.push_back(Student("fd", 51));
//	v.push_back(Student("qw", 61));
//
//
//	//∞¥’’≥…º®≈≈–Ú
//	sort(v.begin(),v.end(),StudentCompare());
//	for (Student& s:v)
//	{
//		cout << s.name << ":" << s.score << endl;
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