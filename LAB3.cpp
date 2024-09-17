//#include<iostream>
//#include<cmath>
//using namespace std;
//
//void q1(int* ptr, int Size);
//void q2(int* ptr, int size);
//int q3(int** ptr);
//int calgross(int** x);
//int main() {
//	// Question 1
//	cout << "QUESTION 1" << endl << endl;
//	int Size = 6;
//	int* ptr;
//	ptr = new int[Size];
//	for (int i = 0; i < Size; i++) {
//		*(ptr + i) = rand() % 11;
//	}
//	cout << "The Array is : " << endl;
//	for (int i = 0; i < Size; i++) {
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//	q1(ptr,Size);
//	delete[] ptr;
//	ptr = NULL;
//
//	//Question 2
//	cout << endl;
//	cout << "QUESTION 2" << endl << endl;
//	int* p;
//	int s=6;
//	p = new int[s];
//	for (int i = 0; i < s; i++) {
//		*(p + i) = 1 + rand() % 10;
//	}
//	cout << "Array is : ";
//	for (int i = 0; i < s; i++) {
//		cout << *(p + i) << " ";
//	}
//	q2(p, s);
//
//	cout << "Updated Array is : ";
//	for (int i = 0; i < s; i++) {
//		cout << *(p + i) << " ";
//	}
//	cout << endl;
//	delete[] p;
//
//	//QUESTION3
//	cout << endl;
//	cout << "QUESTION 3" << endl<<endl;
//	int maximum;
//	int* ptrArray[4];
//	for (int i = 0; i < 4; i++) {
//		ptrArray[i] = new int; 
//	}
//	maximum=q3(ptrArray);
//	cout << "Maximum value is : " << maximum << endl;
//	cout << endl;
//	cout << "QUESTION 4" << endl << endl;
//
//	//QUESTION 4
//	int arr1[3];
//	int arr2[3];
//	int arr3[3];
//	int arr4[3];
//	int arr5[3];
//	int* pArray[5] = { arr1,arr2,arr3,arr4,arr5 };
//
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 3; j++) {
//			pArray[i][j] = rand() % 5;
//		}
//	}
//	cout << "Values of the Arrays are : " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << "Array " << i+1 << " : ";
//		for (int j = 0; j < 3; j++) {
//			cout << pArray[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "Sums of the Arrays are : " << endl;
//	for (int i = 0; i < 5; i++) {
//		int summ = 0;
//		for (int j = 0; j < 3; j++) {
//			summ += pArray[i][j];
//		}
//		cout << "Array " << i + 1 << " sum is " << summ << endl;
//	}
//
//	//Question 5
//	cout << endl;
//	cout << "QUESTION 5" << endl << endl;
//	int bs, gs, HRA,IA,PF;
//	int* arraypoi[5] = {&bs,&HRA,&IA,&PF,&gs};
//	gs = calgross(arraypoi);
//	cout << "Gross Salary is " << gs << endl;
//
//}
//
//void q1(int* ptr, int Size) {
//	int evensum = 0;
//	int oddprod = 1;
//	int MaxVal = 0;
//	int MinVal = 50;
//	for (int i = 0; i < Size; i++) {
//		if (*(ptr + i) % 2 == 0) {
//			evensum += *(ptr + i);
//		}
//		else {
//			oddprod *= *(ptr + i);
//		}
//	}
//
//	for (int i = 0; i < Size; i++) {
//		if (*(ptr + i) > MaxVal) {
//			MaxVal = *(ptr + i);
//		}
//		if (*(ptr + i) < MinVal) {
//			MinVal = *(ptr + i);
//		}
//	}
//	cout << "Sum of All Even Numbers is : " << evensum << endl;
//	cout << "Product of All Odd Numbers is : " << oddprod << endl;
//	cout << "Maximum Value in the Array is : " << MaxVal << endl;
//	cout << "Minimum Value in the Array is : " << MinVal << endl;
//
//}
//
//void q2(int* ptr, int size) {
//
//	cout << endl;
//	for (int i = 0; i < size; i++) {
//		*(ptr + i)*=*(ptr+i);
//	}
//
//
//}
//int q3(int** ptr) {
//	int max = 0;
//	for (int i = 0; i < 4; i++) {
//		*ptr[i] =1+ rand() % 15;
//	}
//	cout << "values stored in pointers are : ";
//	for (int i = 0; i < 4; i++) {
//		cout << **(ptr + i) << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 4; i++) {
//		if (**(ptr + i) > max) {
//			max = **(ptr + i);
//		}
//	}
//	return max;
//}
//
//int calgross(int** x) {
//	cout << "Enter basic salary of employee : ";
//	cin >> **(x);
////	cout << **x
//	if (**x <= 5000) {
//		*x[1] = 20;
//		*x[2] = 10;
//	}
//	else if (**x > 5000 && **x <= 10000) {
//		*x[1] = 25;
//		*x[2] = 15;
//	}
//	else {
//		*x[1] = 30;
//		*x[2] = 20;
//	}
//	*x[3] = 8;
//	cout << "HRA = " << 0.01* *x[1]* *x[0] << endl;
//	cout << "IA = " <<0.01* *x[2] * *x[0] << endl;
//	cout << "PF = " << 0.01 * *x[3] * *x[0] << endl;
//	*x[4]= *x[0] + 0.01 * *x[1] * *x[0] + 0.01 * *x[2] * *x[0] - (0.01 * *x[3] * *x[0]);
//	return *x[4];
//}
//
