#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
	    Student(string firstName, string lastName,int id ,vector<int> scores) : Person(firstName, lastName, id ){
            this->testScores=scores;
	    }

        /*
        *   Class Constructor

        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        //vector<int> scores;
        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int co=0;
            double sum=0,av=0;
            for(int i : testScores){
                sum+=i;
                co++;}
                av=sum/co;
            if(av>= 90 && av<=100) return 'O';
            else if(av<90 && av>=80) return 'E';
            else if(av<80 && av>=70) return 'A';
            else if(av<70 && av>=55) return 'P';
            else if(av<55 && av>=40) return 'D';
            else return 'T';

            }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
