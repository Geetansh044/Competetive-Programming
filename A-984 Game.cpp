    int main(){
int n;
cin>>n;
std::vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int k=-1;
sort(a.begin(),a.end());
int i=0,j=n-1;
while(i<j){
    if(k==-1){
        j--;
    }
    else i++;
    k*=-1;
    
}
 cout<<a[i];
 }
