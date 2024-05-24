#include<bits/stdc++.h>

using namespace std;

const int Size = 2e5 + 1 ;

int N , W ;

int arr[Size] ;

int main(){

    ios_base :: sync_with_stdio(0);

    cin >> N >> W ;

    for (int i = 0 ; i < N ; i ++ )cin >> arr[i] ;

    sort(arr , arr + N) ;

    int i = 0 , j = N - 1 , ans = 0 ;

    while(i <= j){

        if(i == j){
            ans ++ ;
            i ++ ;
            j -- ;
        }
        else {
            if(arr[i] + arr[j] <= W){
                ans ++ ;
                i ++ ;
                j -- ;
            }
            else {
                ans ++ ;
                j -- ;
            }
        }

    }

    cout << ans ;

    return 0 ;
}