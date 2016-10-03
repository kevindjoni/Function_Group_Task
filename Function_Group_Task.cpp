#include<iostream>
using namespace std;

void getJudgeData(double &);

int main()
{
	double score1, 
		   score2,
		   score3,
	       score4,
		   score5;
	
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	
	calcScore(score1,score2,score3,score4,score5);	   
	
	return 0;
}

void getJudgeData(double &score)
{
	do{
		cout<<"Please enter the judges' score (0-10): ";
		cin>>score;
	}
	while
		(score < 0 || score > 10);
	return;
}

