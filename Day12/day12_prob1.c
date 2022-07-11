//Find common elements in three sorted arrays, 3 array values are given as input to program.
algo:
1.Declare a three arrays and assign some values to three arrays.
2.Find the size of three arrays 
3.Compare a varibles of three arrays 
4.which value is same in three arrays is print 

int main()
{
    int ar1[] = { 10,90,50,20,5,4};//Declare a array1 and assign some values
    int ar2[] = { 50,54,20,7,5,4 };//Declare a array and assign2 some values
    int ar3[] = { 10,50,20,5,4};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);//find the size of array1
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) { //check the condition in three arrays values are equal or not
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        }
        else if (ar1[i] > ar2[j]) //check the array1 value is graterthan array2 value
            i++;
        else if (ar2[j] >ar3[k]) //check the array2 value is garater than array3 value
            j++;
        else
            k++;
    }


   printf("Common Elements are ");

    return 0;
}
