#if 0
#include <iostream>
void help() {
	std::cout << "������\n";
	std::cout << "�����룺�������� ����� ��������";
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
	int& r = a;//�������ñ�����&���൱�ڱ�������ԭ���ı�����ͬһ����ַ��ͬһ���ڴ�
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
#include <iostream>//�������أ��βθ�����������Ҫ��һ��
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
template<typename T>//����ģ��
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
	cout << s.size() << endl;//���������.
	string s3 = s.substr(1, 3);
	cout << s3 << endl;
	
	string s4 = s + " " + s2;//ͨ����������ַ�������ƴ��
	cout << s4 << endl;
	s4[0] = 'H';
	s4[4] = 'X';
	cout << s4 << endl;
	return 0;
}
#endif
#if 0
#include<iostream>
#include<vector>//������������������Զ�̬��������һ����ģ�壬ʵ��������һ����
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
	int arr[] = { 10,20,30,40 };//��ջ
	int* p = arr;
	cout << *(p + 2) << p[2] << arr[2] << endl;//*(p+2)����p[2]
	for (int* q = p + 4; p < q; p++) {
		cout << *p << '\t';
	}

}
#endif
#if 0//�Ѵ洢�������г�����Ŀ��е��ڴ棬��new�����������ڴ棬��̬�ڴ����
#include<iostream>
using namespace std;
int main() {
	int* p = new int;//����һ��int��С���ڴ沢�Ҹ�ֵ��int�͵�ָ�����
	*p = 3;
	cout << p << '\t' << *p << endl;
	delete p;//�ڴ�й©
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
	int* p = new int[n];//pָ��4��int�͵ĵ�һ��int�ĵ�ַ
	for (int i =0; i < n; i++)
	{
		p[i] = 2 * 1 + 1;
	}
	for (int *q = p + n; p < q; p++)
	{
		cout << *p << '\t';
		cout<<'\n';
	}
	char* s = (char*)p;//ǿ������ת��
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
	delete []p;//ȫ���ͷ�
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
		cout << "���������� ���� : \n";
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
		cout << "���캯��"; }//Ĭ�Ϲ��캯�������������߲�������Ĭ��ֵ
	void print() { 
		cout << name << " " << score << endl; }

};
int main() {
	student stu;//����һ�������ʱ���Զ����ó�Ϊ�����캯�����ĳ�Ա����
	stu.print();
}
#endif
#if 0//�����������operator����
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
	}//���幹�캯��
	friend ostream& operator<<(ostream& o, student s);
	friend istream& operator>>(istream& in, student& s);//��Ԫ����
};
ostream& operator<<(ostream &o, student s) {
	cout << s.name << " " << s.score << endl;
	return o;
}//���������
istream& operator>>(istream& in, student& s) {
	cin >> s.name >> s.score;
	return in;
}//����������������Ҫ������
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
	double operator[](int i) {//�±����������
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw"�±��쳣��";
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