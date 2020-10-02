    int main(){
int n,m,z,x;
cin>>n>>m>>z;
std::vector<int> a,b;
for(int i=1;i<INT_MAX;i++){
    x=n*i;
    if(x>z)break;
    else a.push_back(x);
}
for(int i=1;i<INT_MAX;i++){
    x=m*i;
    if(x>z)break;
    else b.push_back(x);
}
int c=0;
if(a.size()>b.size())
{
    for(int i=0;i<a.size();i++){
        if(count(b.begin(),b.end(),a[i]))c++;
    }
}
else{
      for(int i=0;i<b.size();i++){
        if(count(a.begin(),a.end(),b[i]))c++;
    }
}
cout<<c;
 }
