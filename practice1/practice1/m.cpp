#if 0
#include <iostream>
void help() {
	std::cout << "计算器\n";
	std::cout << "请输入：左运算数 运算符 右运算数";
}
int main() {
	while (1) {
		help();
		double a, b;
		char op;
		std::cin >> a >> op >> b;
		if (op ==  '+') {
			std::cout << a + b << std::endl;

		}
		if (op == '-') {
			std::cout << a - b << std::endl;

		}
		if (op == '*') {
			std::cout << a * b << std::endl;

		}
		if (op == '/') {
			std::cout << a / b << std::endl;

		}

	}
		

}
#endif
#if 0
#include <fstream>
#include<iostream>
#include<string>
using namespace std;
int main() {
	ofstream oF("test.txt");
	oF <<3.14 << " " << "helloworld\n";
	return 0;
	oF.close();
	ifstream iF("test.txt");
	double a;
	string b;
	iF >> a >> b;
	cout << a<<" " << b;
	return 0;
}
#endif
#if 0
#include<iostream>
using namespace std;
int main() {
	int a=3;
	int& r = a;//定义引用变量用&，相当于别名，跟原来的变量是同一个地址，同一块内存
	cout << a << '\t' << r << endl;
	r = 5;
	cout << a << '\t' << r << endl;
	return 0;
}
#endif
#if 0
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
#include <iostream>
using namespace std;
int main()
{
	int a=3, b=4;
	cout << a << '\t' << b << endl;
	swap(a, b);
	cout << a << b<<'\t'<<b<<endl;

}
#endif
#if 0
#include <iostream>//函数重载：形参个数或者类型要不一样
using namespace std;
int add(int x, int y = 2) {
	return x + y;
}
double add(double x, double y = 2.0) {
	return x + y;
}
int main()
{
	cout << add(5, 3) << endl;
	cout << add(5.0, 3.1) << endl;
	return 0;
}
#endif
#if 0
#include<iostream>
#include<string>
using namespace std;
template<typename T>//函数模板
T add(T x, T y) {
	return x + y;
}
int
main() {
	cout << add<int>(5, 3) << endl;
	cout << add<double>(5.1, 3.1) << endl;
	cout << add<string>("hello", "world") << endl;
}

#endif
#if 0
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s = "hello", s2("world");
	cout << s.size() << endl;//访问运算符.
	string s3 = s.substr(1, 3);
	cout << s3 << endl;
	
	string s4 = s + " " + s2;//通过运算符对字符串进行拼接
	cout << s4 << endl;
	s4[0] = 'H';
	s4[4] = 'X';
	cout << s4 << endl;
	return 0;
}
#endif
#if 0
#include<iostream>
#include<vector>//向量，类似于数组可以动态增长，是一个类模板，实例化产生一个类
using namespace std;
int main() {
	vector<int> v = { 7,5,16,18 };
	v.push_back(25);
	v.push_back(21);
	for (int i=0; i < v.size(); i++)
	{
		cout << v[i] << '\t';
		cout << '\n';
		v.pop_back();
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << '\t';
			cout << '\n';
		}
	}
	v.resize(2);
}
#endif
#if 0
#include<iostream>
using namespace std;
int main() {
	int arr[] = { 10,20,30,40 };//堆栈
	int* p = arr;
	cout << *(p + 2) << p[2] << arr[2] << endl;//*(p+2)就是p[2]
	for (int* q = p + 4; p < q; p++) {
		cout << *p << '\t';
	}

}
#endif
#if 0//堆存储区，所有程序共享的空闲的内存，用new在这里申请内存，动态内存分配
#include<iostream>
using namespace std;
int main() {
	int* p = new int;//申请一块int大小的内存并且赋值给int型的指针变量
	*p = 3;
	cout << p << '\t' << *p << endl;
	delete p;//内存泄漏
	p = new int;
	*p = 5;
	cout << p << '\t' << *p << endl;
	delete p;
}
#endif
#if 0
#include<iostream>
using namespace std;
int main() {
	int n = 4;
	int* p = new int[n];//p指向4个int型的第一个int的地址
	for (int i =0; i < n; i++)
	{
		p[i] = 2 * 1 + 1;
	}
	for (int *q = p + n; p < q; p++)
	{
		cout << *p << '\t';
		cout<<'\n';
	}
	char* s = (char*)p;//强制类型转换
	char ch = 'A';
	int n2 = n * sizeof(int) / sizeof(char);
	for (int i = 0; i < n2; i++)
	{
		s[i] = ch + i;
	}
	for (char* r = s + n2; s < r; s++) {
		cout << *s;
		cout << '\n';
	}
	delete []p;//全部释放
}
#endif
#if 0
#include<iostream>
#include <string>
#include<vector>
using namespace std;
struct student {
	string name;
	double score;
	void print() {
		cout << name << " " << score << endl;

	}

};
int main() {
	vector<student> students;
	while (1) {
		student stu;
		cout << "请输入姓名 分数 : \n";
		cin >> stu.name >> stu.score;
		if (stu.score < 0)break;
		students.push_back(stu);
	}
	for (int i = 0; i < students.size(); i++) {
		students[i].print();
	}
}
#endif
#if 0
#include<iostream>
#include<string>
using namespace std;
class student {
	string name;
	double score;
public:
	void print() { cout <<name << " " << score<<endl; }
	string get_name() { return name; }
	double get_score() { return score; }
	void set_name(string n) { name = n; }
	void set_score(double s) { score = s; }
	int main()
	{
		student stu;
		stu.set_name("liping");
		stu.set_score(87.1);
		stu.print();
		cout << get_name() << " " << get_score();
	}

};
#endif
#if 0
#include <iostream>
#include<string>
using namespace std;
class student {
	string name;
	double score;
public:
	student() {
		name = "no"; score = 0;
		cout << "构造函数"; }//默认构造函数不带参数或者参数都有默认值
	void print() { 
		cout << name << " " << score << endl; }

};
int main() {
	student stu;//创建一个类对象时会自动调用称为“构造函数”的成员函数
	stu.print();
}
#endif
#if 0//运算符重载用operator函数
#include <iostream>
#include <string>
using namespace std;
class student {
	string name;
	double score;
public:
	student(string n, double m) {
		name = n;
		score = m;
	}//定义构造函数
	friend ostream& operator<<(ostream& o, student s);
	friend istream& operator>>(istream& in, student& s);//友元函数
};
ostream& operator<<(ostream &o, student s) {
	cout << s.name << " " << s.score << endl;
	return o;
}//运算符重载
istream& operator>>(istream& in, student& s) {
	cin >> s.name >> s.score;
	return in;
}//输入流函数传参数要用引用
int main() {
	student stu("liping", 87.1);
	cin >> stu;
	cout << stu;
}
#endif

#if 0
#include <iostream>
#include<string>
using namespace std;
class Point{
	double x, y;
public:
	double operator[](int i) {//下标运算符重载
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw"下标异常！";
	 }
	Point(double x_, double y_) {
		x = x_;
		y = y_;
	}
	friend ostream& operator<<(ostream& o, Point p);
	friend istream& operator>>(istream& in, Point p);
};
ostream& operator<<(ostream& o, Point p) {
	cout << p.x << " " << p.y << endl;
	return o;
}
istream& operator>>(istream& in, Point p) {
	cin >> p.x >> p.y;
	return in;
}
int main() {
	Point p(3.1, 4.2);
	cin >> p;
	cout << p;
	cout << p[0] << " " << p[1];
}
#endif


#if 0
#include <iostream>
using namespace std;

//enum suit {
//	club,
//	diamonds,
//	hearts,
//	spades
//} card;

enum suit {
	club = 0,
	diamonds = 10,
	hearts,
	spades
} card;

int main()
{
	card = club;
	cout << "card " << int(card) << " bytes.";
	card = diamonds;
	cout << "card " << int(card) << " bytes.";
	card = hearts;
	cout << "card " << int(card) << " bytes.";
	card = spades;
	cout << "card " << int(card) << " bytes.";
	return 0;
}
#endif


#if 1

#include<iostream>
using namespace std;

typedef enum workday
{
	Sunday = 0,
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
};

void chooseday(workday tempday);

int main()
{
	int today;
	cin >> today;

	chooseday(workday(today));

	system("pause");

}

void chooseday(workday tempday)
{
	switch (tempday)
	{
	case Sunday:
	{
		cout << "Work,and go shopping." << endl;
		break;
	}
	case Monday:
	{
		cout << "Work,and read books." << endl;
		break;
	}
	case Tuesday:
	{
		cout << "Travel." << endl;
		break;
	}
	case Thursday:
	{
		cout << "Work,and visit friends." << endl;
		break;
	}
	case Friday:
	{
		cout << "Have a party." << endl;
		break;
	}
	default:
		cout << "Wrong input!" << endl;
		break;
	}
}

#endif