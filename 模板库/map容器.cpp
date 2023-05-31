//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void test_pair() {
//
//
//	//pair:可以将两个不同类型数据整合到一起，KV
//
//	//
//	pair<string, int>p1("test", 99);
//	cout << p1.first << endl;
//	cout << p1.second << endl;
//
//	//
//	pair<string, int>p2 = make_pair("test", 98);
//	cout << p1.first << endl;
//	cout << p1.second << endl;
//}
//
////map存储特点：
////1、KV存储
////2、按照key进行排序
////3、不允许出现重复的键（mutilmap可以）
////可以通过迭代器修改值，键不可以
//
//
//void printMap(map<string,int>& m) {
//#if 0
//	
//	for (map<string,int>::iterator it=m.begin();it!=m.end();it++)
//	{
//		cout << "key= " << (*it).first << ",value=" << (*it).second << '\t';
//	}
//#else
//
//	for (pair<string,int>p:m)
//	{
//		cout << "key= " << p.first << ",value=" << p.second << '\t';
//	}
//
//#endif // 1
//
//
//}
//
//int main() {
//
//	map<string, int> m;
//
//	//插入
//	m.insert(pair<string,int>("chinese",99));
//	m.insert(make_pair("math", 99));
//	m.insert(map<string,int>::value_type("english",87));
//	m["cs"] = 89;
//
//	printMap(m);
//
//
//	//删除
//	//.erase(m.begin());
//	//m.erase("math");//按照键删除
//
//	//查找
//	map<string,int>::iterator it1=m.find("english");//查找具有指定键的键值的迭代器
//	cout << m.count("english") << endl;
//
//
//
//
//
//
//
//
//
//
//	return EXIT_SUCCESS;
//}