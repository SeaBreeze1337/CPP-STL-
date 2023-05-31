//#include<iostream>
//using namespace std;
//
////string的构造
//void test01() {
//
//	//无参构造
//	string str1 = string();
//
//	//通过一个字符串构造另外一个字符串
//	string str2 = string("hello world");
//
//	//通过一个字符数组构造一个字符串
//	const char* array = "hello world";
//	string str3 = string(array);
//
//	string str4 = string(5, 'a');
//}
//
////string的赋值
//void test02() {
//
//	string str;
//	 
//	//通过等号赋值,等号已经被string进行运算符重载
//
//	str = "hello world";
//
//	//通过字符数组进行赋值
//	const char* arr = "abc";
//	str = arr;
//
//	//通过字符进行赋值
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
//	//取数组前2位
//	str.assign(arr, 2);
//	
//	//从第3位开始拷贝4个字符
//	str.assign("hello world", 3, 4);
//}
//
////string的存取字符
//void test03() {
//	//通过下标获取字符
//	string str = "hello world";
//	cout << str[4] << endl;
//	cout << str.at(4) << endl;
//
//	//使用字符引用返回值，存储一下字符串中，指定下标位字符的引用
//	char& c = str[4];
//	//修改引用的值，因为这里引用的是字符串中字符数组中指定下标位的元素，所以这里c发生变更，也会影响数组元素
//	c = '!';
//	cout << str << endl;
//
//
//	//注意事项：
//	//一旦字符串中的字符数组内存重新分配，使用之前的引用在进行空间访问，可能会出问题
//	//一个内存空间存储单元是16位
//	//c_str:将c++风格字符串，转成c风格的字符串（返回c++的string类中维护的字符数组指针）
//	cout << (int*)str.c_str() << endl;
//	str = "1234567890123456";
//	cout << (int*)str.c_str() << endl;
//	c = 'A';
//	cout << str << endl;
//}
//
////string的拼接
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
//	//把字符串s的前n个字符链接到当前字符串结尾
//	str.append(" nihao",3);
//
//	//把字符串s中从第11位开始的4个字符拼接到当前字符串
//	str.append("c++ is the best programing language", 11, 4);
//
//	//
//}
//
////string的查找和替换
//void test05() {
//
//	string str = "c++ is the most popular,most useful language in the world";
//
//	str.find("most");
//
//	//从第20开始找
//	str.find("most",20);
//
//	//从第0位开始查找most，mostmost截取4位
//	int res = str.find("mostmost",0,4);
//
//	str.find('s');//字符第一次出现的位置
//
//	//查找most最后一次出现的位置，从第20开始找(往后查找)
//	cout << str.rfind("most", 20) << endl;
//
//	//
//	cout << str.rfind("mostmost", 20,4) << endl;
//	//查找单个字符最后一次出现的位置
//	cout << str.rfind('m') << endl;
//
//	//替换
//
//	str.replace(11, 24, "best");//str从第11位开始替换
//
//
//}
//
////sitrng比较
//void test06() {
//
//	string str1 = "abc";
//	string str2 = "abe";
//
//	//比的是字典顺序（字符集映射的数字），有一定局限性，比较的结果是bool类型
//	cout << (str1 < str2) << endl;
//
//	//compare函数返回值是int类型：1：前面大于后面；-1：前面小于后面；0：相等
//	cout << str1.compare(str2) << endl;
//	
//
//
//}
//
////string子串的获取
//void test07() {
//
//	string str = "hello";
//
//	//注意事项：1.不要越界，下标pos
//	cout << str.substr(2, 2)<<endl;//第2位开始，截取2个字符
//}
//
////string子串的插入删除
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