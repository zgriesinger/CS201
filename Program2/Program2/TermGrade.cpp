#include <iostream>
#include <fstream>
#include "TermGrade.h"



bool TermGrade::ReadData(ifstream& fin, ofstream& fout)
{

    if (fin >> ID)
    {
        fin >> assignments >> exam1 >> exam2 >> final_grade;
        return true;
    }
    else
    {
        return false;
    }
}
/*
const bool TermGrade::MidsemesterScore()
{

}

const double TermGrade::FinalScore()
{

}
*/
const char TermGrade::LetterGrade(double final_grade)
{
    if (final_grade >= 90)
    {
        return 'A';
        
    }
    else if (final_grade >= 80)
    {
        return 'B';
    }
    else if (final_grade >= 70)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

void TermGrade::OutputTest()
{
    cout << ID << " " << assignments << " " << exam1 << " " << exam2 << " " << final_grade << endl;
}

void TermGrade::SetGrade(double grade)
{
    final_grade = grade;
}