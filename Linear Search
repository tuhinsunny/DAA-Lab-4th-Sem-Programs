Linear Search :
1.  #include <stdio.h>  
2.  int linearSearch(int a[], int n, int val) {  
3.    // Going through array sequencially  
4.    for (int i = 0; i < n; i++)  
5.      {  
6.          if (a[i] == val)  
7.          return i+1;  
8.      }  
9.    return -1;  
10.  }  
11.  int main() {  
12.    int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array  
13.    int val = 41; // value to be searched  
14.    int n = sizeof(a) / sizeof(a[0]); // size of array  
15.    int res = linearSearch(a, n, val); // Store result  
16.    printf("The elements of the array are - ");  
17.    for (int i = 0; i < n; i++)  
18.    printf("%d ", a[i]);   
19.    printf("\nElement to be searched is - %d", val);  
20.    if (res == -1)  
21.    printf("\nElement is not present in the array");  
22.    else  
23.    printf("\nElement is present at %d position of array", res);  
24.    return 0;  
25.  }
