class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
     queue<int>q;
     sort(deck.begin(), deck.end());
     for(int i = 0; i<n; i++)
     {
        q.push(i);
     } 
     vector<int>vec;
     int arr[n];
     
     for(int i = 0; i<n; i++)
     {
        arr[q.front()] = deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
     }
      for(auto it:arr)vec.emplace_back(it);
     return vec;
    }
};
