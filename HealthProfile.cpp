/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ IBANGA,OTUEKONG UDUAK]
 * Matric No:   [ PDS/2013/1681]
 * Department:  [ COMPUTER SCIENCE]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
   // setAge(currentDay, currentMonth, currentYear);  // call set function to calculate age
}

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(16) << getFirstName() << endl;
    cout << "Last Name: " << setw(18) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(11) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(4) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(23) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(9) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(10) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 19.5" << endl;
    cout << "Normal:        between 19.5 and 24.9" << endl;;
    cout << "Overweight:    between 23 and 26.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}


// getBMI() function
double HealthProfile::getBMI(){
    double bmi;
    bmi=weight/(height*height);
      return  bmi;                                
}                                        


//  getMaximumHeartRate function
int HealthProfile::getMaximumHeartRate(){
    int hp;
    hp=150-getAge();
    
   return hp;     
}   


// getTargetHeartRate function
double HealthProfile::getTargetHeartRate(){  
double hph;
hph=50-(75/100)*getMaximumHeartRate();
       
       
        return hph;              
} 

//  setGender function
void HealthProfile::setGender(string gend){
     gender=gend;   
}    

//  getFirstName
string HealthProfile::getFirstName(){
       return firstName;
} 

// implement getLastName
string HealthProfile::getLastName() {
   return lastName;
} 

// implement of getGender
string HealthProfile::getGender(){
       return gender;
} 

// implement setYear
void HealthProfile::setYear(int second_year){
     year=second_year;    
}    
//  getMonth furnction and implementation
int HealthProfile::getMonth() {
    return month;
} 

// define of getDay
int HealthProfile::getDay(){
       return day;
} 


// implementing setWeight
void HealthProfile::setWeight(int weig){
     weight=weig;   
}   

// get height implementation
double HealthProfile::getHeight() {
   return height;
} 

// implementation of getWeight
int HealthProfile::getWeight() {
  return weight;
} 

// finalise of getYear
int HealthProfile::getYear() {
       return year;
} 

// implementating setHeight
void HealthProfile::setHeight(double my_Height){
     height=my_Height;  
}    
// implementing getAge
int HealthProfile::getAge() {
    return age;
}


//implementation of setFirstName
void HealthProfile::setFirstName(string firstN)
  {
     firstName=firstN;  
}   


// implementation of setLastName
void HealthProfile::setLastName(string lastN){
     lastName=lastN;    
}   

// implementation of setMonth
void HealthProfile::setMonth(int Mont){
     month=Mont;    
} 


// implementation of setDay
void HealthProfile::setDay(int day_2){
     day=day_2;
}   



 

