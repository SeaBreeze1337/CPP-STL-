//#include<iostream>
//using namespace std;
//
////string�Ĺ���
//void test01() {
//
//	//�޲ι���
//	string str1 = string();
//
//	//ͨ��һ���ַ�����������һ���ַ���
//	string str2 = string("hello world");
//
//	//ͨ��һ���ַ����鹹��һ���ַ���
//	const char* array = "hello world";
//	string str3 = string(array);
//
//	string str4 = string(5, 'a');
//}
//
////string�ĸ�ֵ
//void test02() {
//
//	string str;
//	 
//	//ͨ���ȺŸ�ֵ,�Ⱥ��Ѿ���string�������������
//
//	str = "hello world";
//
//	//ͨ���ַ�������и�ֵ
//	const char* arr = "abc";
//	str = arr;
//
//	//ͨ���ַ����и�ֵ
//	str = 'a';
//
//
//	//assign
//	str.assign("hello world");
//	cout << str << endl;
//
//	str.assign(arr);
//
//	str.assign(6, 'a');
//	
//	//ȡ����ǰ2λ
//	str.assign(arr, 2);
//	
//	//�ӵ�3λ��ʼ����4���ַ�
//	str.assign("hello world", 3, 4);
//}
//
////string�Ĵ�ȡ�ַ�
//void test03() {
//	//ͨ���±��ȡ�ַ�
//	string str = "hello world";
//	cout << str[4] << endl;
//	cout << str.at(4) << endl;
//
//	//ʹ���ַ����÷���ֵ���洢һ���ַ����У�ָ���±�λ�ַ�������
//	char& c = str[4];
//	//�޸����õ�ֵ����Ϊ�������õ����ַ������ַ�������ָ���±�λ��Ԫ�أ���������c���������Ҳ��Ӱ������Ԫ��
//	c = '!';
//	cout << str << endl;
//
//
//	//ע�����
//	//һ���ַ����е��ַ������ڴ����·��䣬ʹ��֮ǰ�������ڽ��пռ���ʣ����ܻ������
//	//һ���ڴ�ռ�洢��Ԫ��16λ
//	//c_str:��c++����ַ�����ת��c�����ַ���������c++��string����ά�����ַ�����ָ�룩
//	cout << (int*)str.c_str() << endl;
//	str = "1234567890123456";
//	cout << (int*)str.c_str() << endl;
//	c = 'A';
//	cout << str << endl;
//}
//
////string��ƴ��
//void test04() {
//
//	string str = "hello";
//
//	////+=
//	//str += "world";
//
//	//append
//	str.append(" world");
//	cout << str << endl;
//
//	//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//	str.append(" nihao",3);
//
//	//���ַ���s�дӵ�11λ��ʼ��4���ַ�ƴ�ӵ���ǰ�ַ���
//	str.append("c++ is the best programing language", 11, 4);
//
//	//
//}
//
////string�Ĳ��Һ��滻
//void test05() {
//
//	string str = "c++ is the most popular,most useful language in the world";
//
//	str.find("most");
//
//	//�ӵ�20��ʼ��
//	str.find("most",20);
//
//	//�ӵ�0λ��ʼ����most��mostmost��ȡ4λ
//	int res = str.find("mostmost",0,4);
//
//	str.find('s');//�ַ���һ�γ��ֵ�λ��
//
//	//����most���һ�γ��ֵ�λ�ã��ӵ�20��ʼ��(�������)
//	cout << str.rfind("most", 20) << endl;
//
//	//
//	cout << str.rfind("mostmost", 20,4) << endl;
//	//���ҵ����ַ����һ�γ��ֵ�λ��
//	cout << str.rfind('m') << endl;
//
//	//�滻
//
//	str.replace(11, 24, "best");//str�ӵ�11λ��ʼ�滻
//
//
//}
//
////sitrng�Ƚ�
//void test06() {
//
//	string str1 = "abc";
//	string str2 = "abe";
//
//	//�ȵ����ֵ�˳���ַ���ӳ������֣�����һ�������ԣ��ȽϵĽ����bool����
//	cout << (str1 < str2) << endl;
//
//	//compare��������ֵ��int���ͣ�1��ǰ����ں��棻-1��ǰ��С�ں��棻0�����
//	cout << str1.compare(str2) << endl;
//	
//
//
//}
//
////string�Ӵ��Ļ�ȡ
//void test07() {
//
//	string str = "hello";
//
//	//ע�����1.��ҪԽ�磬�±�pos
//	cout << str.substr(2, 2)<<endl;//��2λ��ʼ����ȡ2���ַ�
//}
//
////string�Ӵ��Ĳ���ɾ��
//void test08() {
//
//	string str = "HAHAHAHAHAHA";
//
//
//	str.insert(4, "hello");
//	cout << str << endl;
//
//
//	str.insert(4, 5, 'k');
//	cout << str << endl;
//
//	str.erase(4,5);
//	cout << str << endl;
//}
//
//int main() {
//
//	test08();
//	return EXIT_SUCCESS;
//}