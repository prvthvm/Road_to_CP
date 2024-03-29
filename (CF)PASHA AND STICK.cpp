
#include <bits/stdc++.h>
#define ll long long
#define stick n
using namespace std;

int main() {
	ll stick;
	cin>>stick;

	if(n%2) {cout<< 0; return 0;}
	n/=2;
	if(n%2) {cout << n/2;}
	else {cout<<(n/2 - 1);}

	
	return 0;
}





----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/* 

Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick. Each part must have some positive integer length and the sum of these lengths will obviously be n.

Pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that it's possible to form a rectangle using these parts, but is impossible to form a square.

Your task is to help Pasha and count the number of such ways. Two ways to cut the stick are considered distinct if there exists some integer x, such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.

Input
The first line of the input contains a positive integer n (1 ≤ n ≤ 2·109) — the length of Pasha's stick.

Output
The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length so that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.

Examples
inputCopy
6
outputCopy
1
inputCopy
20
outputCopy
4

*/
