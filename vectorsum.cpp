// C++ program to find the sum 
// of Array using accumulate() in STL 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Get the vector 
	vector<int> a = { 1, 45, 54, 71, 76, 12 }; 

	// Print the vector 
	cout << "Vector: "; 
	for (int i = 0; i < a.size(); i++) 
		cout << a[i] << " "; 
	cout << endl; 

	// Find the sum of the vector 
	cout << "\nSum = "
		<< accumulate(a.begin(), a.end(), 0); 
	return 0; 
} 
