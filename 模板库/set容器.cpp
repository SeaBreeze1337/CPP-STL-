//#include<iostream>
//#include<set>
//using namespace std;
//
//void printSet(set<int>& s) {
//
//#if 0
//	//set�ĵ�������һ��ֻ���ĵ�������ֻ����ͨ����������ȡ��Ԫ�ص�ֵ�����ǲ����޸�
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
//	//set�������ظ�Ԫ�أ�mutilset��֮
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
//	//ɾ��Ԫ��
//	set<int>::iterator it = s.begin();
//	s.erase(it);
//	//s.clear();
//	printSet(s);
//
//	//���ң�set����û���±����
//	set<int>::iterator target = s.find(100);//����Ԫ���Ƿ���ڣ��Ƿ���Ԫ�ص��������񷵻�set.end()
//	cout << s.count(100) << endl;//����Ԫ�صĸ���
//	set<int>::iterator res1=s.lower_bound(111);//���ص�һ��Ԫ��<=ָ��Ԫ�ص�����
//	set<int>::iterator res2 = s.upper_bound(111);//���ص�һ��Ԫ��>ָ��Ԫ�ص�����
//
//
//	//
//	cout << s.size() << endl;
//	cout << s.empty() << endl;
//
//	return EXIT_SUCCESS;
//}