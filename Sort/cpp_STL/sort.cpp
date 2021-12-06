#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	bool operator < (const Student &student)const {
		return this->score < student.score;
	}
};

// 정렬 기준(오름차순 < , 내림차순 >)
bool compare(int a, int b) {
	return a > b;
}
 
int main() {
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare);
	for(int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	Student students[] = {
		Student("원천표", 90),
		Student("원천하", 90),
		Student("원천배", 50),
		Student("고루비", 70),
		Student("호빵이", 100)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}

	return 0;
}
