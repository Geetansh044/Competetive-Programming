int main(){
int a,t,b,c,d;
cin>>t;
while(t--){
    cin>>a>>b;
    d=abs(a-b);
    if(d%5==0)
    {
        cout<<d/5<<endl;
    }
    else if(d%5==1){
        d-=1;
        cout<<(1+d/5)<<endl;
    }
    else if(d%5==2){
        d-=2;
        cout<<(1+d/5)<<endl;
    }else if(d%5==3){
        d-=3;
        cout<<(d/5+2)<<endl;
    }
    else{
        d+=1;
        cout<<1+d/5<<endl;
    }
}
}
