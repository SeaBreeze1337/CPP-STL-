//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void test_pair() {
//
//
//	//pair:���Խ�������ͬ�����������ϵ�һ��KV
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
////map�洢�ص㣺
////1��KV�洢
////2������key��������
////3������������ظ��ļ���mutilmap���ԣ�
////����ͨ���������޸�ֵ����������
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
//	//����
//	m.insert(pair<string,int>("chinese",99));
//	m.insert(make_pair("math", 99));
//	m.insert(map<string,int>::value_type("english",87));
//	m["cs"] = 89;
//
//	printMap(m);
//
//
//	//ɾ��
//	//.erase(m.begin());
//	//m.erase("math");//���ռ�ɾ��
//
//	//����
//	map<string,int>::iterator it1=m.find("english");//���Ҿ���ָ�����ļ�ֵ�ĵ�����
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