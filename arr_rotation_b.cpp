#include <iostream>
using namespace std;

int main() {
	int T;
	    cin >> T;
	while(T--){
	    int N,D;
	    cin >> N >> D;
	    int arr[N];
	    for(int i=0;i<N;i++){
	    cin >> arr[i];
	    }
	    
	    for(int i=0;i<N;i++){
	        cout << arr[(i+N+D)%N] << " ";
	    }
	        
    cout << "\n";
	}
	    
	return 0;
}
