#include<iostream>
using namespace std;
class Students {
private:
	int studentID;
	double score;
public:
	Students(int id, double s) {
		studentID = id;
		score = s;
	}
	int getStudentID() {
		return studentID;
	}
	double getScore() {
		return score;
	}
};
void max(Students* students[], int size) {
	int maxIndex = 0;
	double maxScore = students[0]->getScore();
	for (int i = 1; i < size; i++) {
		if (students[i]->getScore() > maxScore) {
			maxScore = students[i]->getScore();
			maxIndex = i;
		}
	}
	cout << "最高成绩者的学号是：" << students[maxIndex]->getStudentID() << endl;
}
int main() {
	Students* students[5];
	students[0] = new Students(1, 85.5);
	students[1] = new Students(2, 76.0);
	students[2] = new Students(3, 92.3);
	students[3] = new Students(4, 88.9);
	students[4] = new Students(5, 78.6);
	max(students, 5);
	for (int i = 0; i < 5; i++) {
		delete students[i];
	}
	return 0;
}