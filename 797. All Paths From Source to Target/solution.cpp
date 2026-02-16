src){
    tmp.push_back(src);
    if(src==graph.size()-1){
        
      ans.push_back(tmp);
       tmp.pop_back();
        return ;
    }
    
    
    vector<int>neigh=graph[src];
  void helper(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int> tmp,int 
public:
class Solution {