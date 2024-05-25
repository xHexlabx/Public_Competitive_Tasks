#include<bits/stdc++.h>

using namespace std ;

const int SIZE = 3e5 + 1 ;

int pa [SIZE] , L[SIZE] , R[SIZE] , n , m , q ;

struct event {
    int x , y ;
};

vector<event>events ;
vector<event>queries ;
vector<int>MID[SIZE] ;

void reset(){

    for(int i = 0 ; i < SIZE ; i ++ ){
        pa[i] = i ;
    }

}

int fp(int x){
    if(pa[x] == x)return x ;
    return pa[x] = fp(pa[x]) ;
}

void merge(int x , int y){
    
    int rootx = fp(x) ;
    int rooty = fp(y) ;

    pa[rooty] = rootx ;

}

bool is_merge(int x , int y){
    if(fp(x) == fp(y))return true ;
    return false ;
}

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    // parallel 

    cin >> m >> n >> q ;

    for(int i = 0 ; i < n ; i ++ ){
        event e ; cin >> e.x >> e.y ;
        events.push_back(e) ;
    }

    for(int i = 0 ; i < q ; i ++ ){
        event e ; cin >> e.x >> e.y ;
        queries.push_back(e) ;
    }

    for(int i = 0 ; i < q ; i ++ ){
        L[i] = 0 ;
        R[i] = n ;
    }

    bool finished = false ;

    while(!finished){

        // l r mid 
        int cnt = 0 ;

        for(int i = 0 ; i < q ; i ++ ){
            if(L[i] == R[i]){
                cnt ++ ;
            }
            else {
                MID[ (L[i] + R[i]) >> 1 ].push_back(i) ;
            }
        }

        if(cnt == q){
            finished = true ;
            break ;
        }
        // update 
        reset() ;

        for(int mid = 0 ; mid < n ; mid ++ ){

            merge(events[mid].x , events[mid].y) ;

            for(int query : MID[mid]){
                if(is_merge(queries[query].x , queries[query].y)){
                    R[query] = mid ;
                }
                else {
                    L[query] = mid + 1 ;
                }
            }

            MID[mid].clear() ;
        }
    }

    for(int i = 0 ; i < q ; i ++ ){
        (L[i] != n) ? cout << L[i] + 1 << '\n' : cout << -1 << '\n';
    }

    return 0 ;
}