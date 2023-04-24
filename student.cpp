/* 
Arely Aguirre
UID: 605505030
Disc: 1C
*/

#include <iostream>
#include <string>

using namespace std;

class StudentScores {
	public:
		StudentScores();
		void get_name();
		void add_quiz();
		int get_total_score() const;
		double get_average_score() const;
	private:
		string f_name;
		string l_name;
		int total_score;
		double average_score;
		double quiz_count;
		int score;
};

StudentScores::StudentScores()
//clears any values in data members when object is first implemented
{
	total_score = 0;
	average_score = 0;
	quiz_count = 0;
	score = 0;
}

void StudentScores::get_name()
// allows input for a first and last name
{
	cin >> f_name >> l_name;
}

void StudentScores::add_quiz()
// keeps count of how many quizzes were inputted
// keeps track of score total and divides by count to find average score
{
	while (cin >> score)
	{
		total_score = total_score + score;
		quiz_count++;
	}
	average_score = total_score / quiz_count;
}

int StudentScores::get_total_score() const
{
	return total_score;
}

double StudentScores::get_average_score() const
{
	return average_score;
}

int main()
{	
	StudentScores student1;
	cout << "Enter name: ";
	student1.get_name();
	cout << "Enter quiz scores (Q when done): ";
	student1.add_quiz();
	cout << "Total score: " << student1.get_total_score() << endl;
	cout << "Average score: " << student1.get_average_score() << endl;
	return 0;
}
	