#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, int> word_count;

  // // insertion mtd 1
  // pair<string, int> p("abc", 1);
  // word_count.insert(p);

  // // insertion mtd 2
  // word_count["def"] = 1;

  // // insertion mtd 3
  // word_count.insert(make_pair("ghi", 1));
  
  string str = "mera name Anurag hai mera Anurag Anurag";

  string word = "";
  for (int i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      if(word != ""){
        word_count[word]++;
        word = "";
      }
    }
    else{
      word = word + str[i];
    } 
  }

  if(word != ""){
    word_count[word]++;
  }
  
  for(auto it : word_count){
    cout << it.first << " " << it.second << endl;
  }
}