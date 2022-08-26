#include <bits/stdc++.h>

using namespace std;


void findNonRepeat(int* a, int n){
    //Declare the map
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){//creating the map
        hash[a[i]]++;//for same key increase frequency
    }
    
    cout<<"the non-repeated numbers are: ";
    //iterator->first == key(element value)
    //iterator->second == value(frequency)
    
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second==1)//frequency==1 means non-repeating element
    printf("%d ",it->first);
    
    printf("\n");
    

}

int main()
{
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    //function to print repeating elements with their frequencies
    findNonRepeat(a,n);

    return 0;
}