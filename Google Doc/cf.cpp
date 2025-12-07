#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1e9;
#define vi vector<int>
#define vii vector<vector<int>> 
#define pii pair<int,int>
#define vpii vector<pii>
#define endl '\n';
#define br cout<<endl;
#define asc(v) sort(v.begin(),v.end());
#define dsc(v) sort(v.begin(),v.end(),greater<int> ());
#define input(a,n) for(int i=0;i<n;i++) {cin>>a[i];}
#define show(a) for(auto x:a) {cout<<x<<" ";}
#define fr(i, a, b) for (int i = a; i < b; i++)
bool binary(int n)
{
    string x=to_string(n);
    for(int i=0;i<x.size();i++)
    {
        if(x[i]!='0' && x[i]!='1')
        {
            return 0;
        }
    }
    return 1;
}   
bool comp(const pair<int,int> &a, const pair<int,int> &b){

    return a.second>b.second;
}

// long long pow(int a,int b){
//     long long res = 1;
//     while(b){
//         int bit = (b&1);
//         if(bit) res*=a;
//         a*=a;
//         b/=2;
//     }
//     return res;
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
vi dp(1e5+1);
int fib(int k, vi &dp)
{
    dp[0]=0;
    dp[1]=1;
     if(k<=1)
     {
        return k;
     }
  for(int i=2;i<=k;i++)
  {
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[k];
}

void dfs(int node,int parent,vector<vector<int>> &adj,vector<int> &cnt)
{
  if(adj[node].size()==1 && adj[node][0]==parent)
  {
    cnt[node]=1;
  }
  else
  {
    for(auto x:adj[node])
    {
      if(x!=parent)
      {
        dfs(x,node,adj,cnt);
        cnt[node]+=cnt[x];
      }
    }
  }
}
int div (int n)
{
  int cnt=0;
  while(n!=1)
  {
    n=n/2;
    cnt++;
  }
  return cnt;
}
int fib(int n)
{
  if(n<=1) return n;
  return fib(n-1) + fib(n-2);
}
int  sub(vector<int> v,int n, int i , vector<int> &ans, int sum, int k)
{
  if(i>=n)
  {
    if(sum==k)
    {
    // show(ans);
    // cout<<endl; 
    return 1;
    }
    return 0;
  }
  
  ans.push_back(v[i]);
  sum+=ans.back();
  int a=sub(v,n,i+1,ans,sum,k);
  // sub(v,n,i+1,ans,sum,k);

  sum-=ans.back();
  ans.pop_back();
  int b=sub(v,n,i+1,ans,sum,k);
  // sub(v,n,i+1,ans,sum,k);
  
return a+b;
}
void merge(vector<int>&v,int low,int mid, int high)
{

  vector<int> temp;
  int left=low , right=mid+1;

  while(left<=mid && right<=high)
  {
    if(v[left]<=v[right])
    {
      temp.push_back(v[left]);
      left++;
    }
    else
     {
      temp.push_back(v[right]);
      right++;
     }
  }

    while(left<=mid)
    {
      temp.push_back(v[left++]);
    }
    while(right<=high)
    {
      temp.push_back(v[right++]);
    }
 for(int i=low;i<=high;i++)
 {
  v[i]=temp[i-low];
 }
}
void mergesort(vector<int> &v, vector<int> &ans, int low, int high)
{
   
   if(low==high) return;
   int mid=(low+high)/2;
   mergesort(v,ans,low,mid);
   mergesort(v,ans,mid+1,high);
   merge(v,low,mid,high);
}

vector<int> bfs(vector<vector<int>> &adj,int sr)
{
  int v=adj.size();
  vector<bool> visited(v,false);
  vector<int> res;
  int src=sr;
  visited[src]=true;
  queue<int> q;
  q.push(src);

  while(!q.empty())
  {
    int curr=q.front();
    q.pop();
    res.push_back(curr);

    for(int x : adj[curr])
    {
      if(!visited[x])
      {
        visited[x]=true;
        q.push(x);
      }
    }
  }
  return res;
}
bool check(string s, char ch,int n)
{
  char ct=s[0];
  for(int i=1;i<n;i++)
  {
    if(s[i]!=ct)
    {
      return false;
    }
  }
  if(ch==ct)
   return true;
  
  return false;
}

void solve(){
int n;
cin>>n;
string s;
cin>>s;

string ans="";
for(char a='a';a<='z';a++)
{
  if(s.find(a)==string::npos)
  {
    ans=a;
    break;
  }
}

for(char a1='a';a1<='z';a1++)
{
  for(char a2='a';a2<='z';a2++)
  {
    string temp="";
    temp.push_back(a1);
    temp.push_back(a2);

    if(ans=="" && s.find(temp)==string::npos)
    {
      ans=temp;
    }
  }
}

for(char a1='a';a1<='z';a1++)
{
  for(char a2='a';a2<='z';a2++)
  {
    for(char a3='a';a3<='z';a3++)
    {
      string temp="";
      temp.push_back(a1);
      temp.push_back(a2);
      temp.push_back(a3);
      if(ans=="" && s.find(temp)==string::npos)
      {
        ans=temp;
      }
    }
  }
}
cout<<ans<<endl;
}

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        // cout<<"------------------"<<t<<endl;
        
        solve();
    }
    return (int32_t)0;
}