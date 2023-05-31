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
////vector�����ı���
//void test01() {
//
//	//����vector����,ͨ��vector���޲ι��죬�������һ���յ�vector����
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//
//	//��������ʹ����ָͨ�룬����ָ��vector�е�ÿһ��Ԫ��
//	//begin��������Ԫ�ص�ַ
//	//end���������һλԪ�ص���һλָ��
//	
//	for (vector<int>::iterator it = v.begin();it!=v.end();it++)
//	{
//		//ֱ�����ָ��ָ��Ԫ��
//		//cout << *it << endl;
//		if (*it==20)
//		{
//			*it = 200;
//		}
//	}
//
//	//����������������
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//
//
//	//ʹ�õ���������������ʱ�򣬿�����д
//	//���ν�v�����е�ÿ��Ԫ�أ���ele���и�ֵ
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
//	//�������������������
//	for (vector<int>::iterator it = v.end(); it != v.begin();) {
//		it--;
//		cout << *it << endl;
//	}
//}
//
//
////vector�Ĺ��캯��
//void test02() {
//
//	//�޲ι���
//	vector<int> v1;
//
//	//vector(n,ele)
//	vector<int> v2(10,5);//10��5���
//
//	printVector(v2);
//
//
//	//vector(const vector& v)�������캯��
//
//	//vector��v.begin(),v.end()��
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
////vector��ֵ
//void test03() {
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//
//	vector<int> v1;
//
//	//ͨ����ʼָ��
//	v1.assign(arr, arr + 6);
//	printVector(v1);
//
//	//ͨ��ָ������
//	vector<int> v2;
//	v2.assign(5, 10);
//	printVector(v2);
//
//	//���������
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
////vector��С����
//void test04() {
//
//	vector<int> v(10, 5);
//
//	//���������ж��ٸ�Ԫ��
//	cout << v.size() << endl;
//	//�ж������Ƿ�Ϊ��
//	cout << v.empty() << endl;
//	//������������
//	cout << v.capacity() << endl;
//
//	//����ָ���������ȣ�����µĳ���С��ԭ���ĳ��ȣ�����������
//	v.resize(5);
//	//����ָ���������ȣ�����µĳ���С��ԭ���ĳ��ȣ��ں������Ĭ��Ԫ��
//	v.resize(15);
//	//����ָ���������ȣ�����µĳ���С��ԭ���ĳ��ȣ��ں������ָ��Ԫ��
//	v.resize(15,9);
//
//	cout << "size=" << v.size() << endl;
//	printVector(v);
//
//
//}
//
////vector���ݴ�ȡ����
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
////vector���ݲ����ɾ��
//void test06() {
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	vector<int> v(array, array + (sizeof(array) / sizeof(int)));
//
//	//��3λ����Ԫ��
//	v.insert(v.begin()+3,5,0);
//	printVector(v);
//
//	//β������Ԫ��ele
//	v.push_back(20);
//	printVector(v);
//
//	//ɾ�����һ��Ԫ��
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
////vectorС����������swap�����ռ�
//void test07() {
//	//capacity�����ڴ��Ͽ����˶��ٿռ�
//	//size��ʵ�������д�ŵ�Ԫ������
//
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "size=" << v.size() << endl;
//	cout << "capacity=" << v.capacity() << endl;
//
//	//ʹ��resize��������Ԫ������
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