#include <iostream>
#include <list>
#include <math.h>
using namespace std;

#define BIGNUM 600851475143

bool isPrime(int num);

int main() {
	list<int> factors;
	for(int i = 1; i < sqrt(BIGNUM); i++) {
		if(BIGNUM % i == 0 && isPrime(i)) {
			factors.push_back(i);
		}
	}
	int max = 0;
  	for (list<int>::iterator it = factors.begin(); it != factors.end(); it++) {
    	if(*it > max) {
    		max = *it;
    	}
  	}
  	cout<<max<<endl;
}

bool isPrime(int num) {
	if (num % 2 == 0) return false;
	for(int i = 3; i*i < num;  i+=2){
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}