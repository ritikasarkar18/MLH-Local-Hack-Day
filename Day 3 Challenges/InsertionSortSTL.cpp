#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>&,int);

int main(){
    int n;
    printf("Enter number of entries");
    scanf("%d",&n);
    vector<int> a;
    
    int inp;
    for (int i=0; i<n; i++) {
        scanf("%d",&inp);
        a.push_back(inp);
    }
    printf("\nThe entered array\n");
    for (int i=0; i<n; i++)printf("%d\t",a[i]);
    insertionSort(a,n);
    printf("\nThe sorted array\n");
    for (int i=0; i<n; i++)printf("%d\t",a[i]);
    return 0;
}

void insertionSort(vector<int> &a,int n){
    for (int i=1; i<n; i++){
        int next=a[i];
        int j;
        for (j=i-1; j>=0 && a[j]>next; j--){
            a[j+1]=a[j];
        }
        a[j+1]=next;
    }

}