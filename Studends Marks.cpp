#include <iostream>
using namespace std;
int main(){
	string students[3] = {"Hadi", "Raza", "Ali"};
	int MathsMarks[3] = {70, 80, 90};
	int ChemistryMarks[3] = {75, 85, 85};
	int PhysicsMarks[3] = {65, 65, 65};
	
	
//	int addition[3] = {MathsMarks[0] + ChemistryMarks[0] + PhysicsMarks[0], MathsMarks[1] + ChemistryMarks[1] + PhysicsMarks[1], MathsMarks[2] + ChemistryMarks[2] + PhysicsMarks[2]};
//	cout<<addition[1];
int addition[3];
	for (int i=0; i<3; i++){
		addition[i]=MathsMarks[i] + ChemistryMarks[i] + PhysicsMarks[i];
		cout<<students[i]<<" " <<addition[i]<<endl;
	}
	
	
	
	
	
}
