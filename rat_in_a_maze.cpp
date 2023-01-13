/*class Solution{

private:
void solve(vector<vector<int>> m,int n,string object,vector<string> &ans,int rows,int cols)
{
    m[rows][cols] =0;
    if((rows == (n-1)) && (cols == (n-1)))
    { ans.push_back(object);
  
     return;
  
    }
  
  
  string s1 = "UDLR";
  
  
  
  
    
   if((rows -1)>=0 && m[rows-1][cols] ==1)
   {
       object.push_back(s1[0]);
       solve(m,n,object,ans,rows-1,cols);
       object.pop_back();
       
   }
   
    if((rows+1)<n && m[rows+1][cols] ==1)
   {
       object.push_back(s1[1]);
       solve(m,n,object,ans,rows+1,cols);
       object.pop_back();
       
   }
   
   if((cols -1)>=0 && m[rows][cols-1] ==1)
   {
       object.push_back(s1[2]);
       solve(m,n,object,ans,rows,cols-1);
       object.pop_back();
       
   }
   
   if((cols+1)<n && m[rows][cols+1] ==1)
   {
       object.push_back(s1[3]);
       solve(m,n,object,ans,rows,cols+1);
       object.pop_back();
       
   }
   
//return;  
}


    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
vector<string> ans;
 string object;
 
 
 if(m[0][0] == 0)
 return ans;
 
 
 
 solve(m,n,object,ans,0,0);
        
        
        
        
        return ans;
        
        
        
        
        
        
    }
};
*/