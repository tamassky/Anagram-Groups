#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

struct data{
    int count;
    string key;
    string first;
    set<string>words;
};

int comparing_function(data a, data b){
    if(a.count == b.count){
        if(a.first.compare(b.first)<0)
            return 1;
        else 
            return 0;
    }
    if (a.count > b.count)
        return 1;
    if (a.count < b.count) 
        return 0;
}

int main()
{
    int n=0,i;
    data x[1000];
    string s,r;
    while(cin>>s){
        
        if(s.compare("END")==0) //Testing assistant
            break;
            
        r.assign(s); //Letters sorted
        sort(r.begin(),r.end());
        
        bool insterted = false;     
        for(i=1; i<=n; i++){
            if(r.compare(x[i].key)==0){ //Insert into existing anagram group
                x[i].words.insert(s);
                x[i].count++;
                if(s.compare(x[i].first)<0)
                    x[i].first.assign(s);
                insterted = true;
            }
        }
        if(!insterted){ //Create new anagram group
            n++;
            x[n].count=1;
            x[n].key.assign(r);
            x[n].words.insert(s);
            x[n].first.assign(s);
        }
    }
    
    sort(x+1, x+n+1, comparing_function); //Sort groups primarily by number of elements (descending) and secondarily by the first elements' alphabetical order (a->z)
    
    //If we have less than 5 groups we print them all, otherwise we print the five most populated groups
    if(n<5){
        for(i=1; i<=n; i++){
            cout<<"Group of size "<<x[i].count<<":";
            for(auto elem : x[i].words){
                cout<<" ";
		        cout<<elem;
            }
		    cout<<endl;
        }
    }
    else{
        for(i=1; i<=5; i++){
            cout<<"Group of size "<<x[i].count<<":";
            for(auto elem : x[i].words){
                cout<<" ";
		        cout<<elem;
            }
		    cout<<endl;
        }
    }
    return 0;
}