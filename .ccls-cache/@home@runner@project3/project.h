#include <iostream>
#include <vector>
using namespace std;

struct App{
  string name, category, genre, type, contentRating, lastUpdated;
  double rating, price, installs;
  int reviews, size;
  App* left;
  App* right;

  App(){
    name = "";
    category = "";
    genre = "";
    type = "";
    contentRating = "";
    lastUpdated = "";

    rating = 0.0;
    price = 0.0;
    installs = 0.0;

    reviews = 0;
    size = 0;

    left = nullptr;
    right = nullptr;
  };

  ~App() {};

  App(string cName, string cCategory, string cGenre, string cType, string cContentRating, double cRating, double cPrice, double cInstalls, int cReviews, int cSize){
    name = cName;
    category = cCategory;
    genre = cGenre;
    type = cType;
    contentRating = cContentRating;
    
    rating = cRating;
    price = cPrice;
    installs = cInstalls;
    
    reviews = cReviews;
    size = cSize;

    left = nullptr;
    right = nullptr;
  }

  App(string cName, string cCategory, string cGenre, string cType, string cContentRating, double cRating, double cPrice, double cInstalls, int cReviews, int cSize, App* cLeft, App* cRight){
    name = cName;
    category = cCategory;
    genre = cGenre;
    type = cType;
    contentRating = cContentRating;
    
    rating = cRating;
    price = cPrice;
    installs = cInstalls;
    
    reviews = cReviews;
    size = cSize;

    left = cLeft;
    right = cRight;
  }

};

class BST{
private:
  App* root;
public:
  vector<App*> searchDFS;
  vector<App*> searchBFS;
  vector<string> filters;

//bfs method
  void breadthFirst(string searchType){
    
  }
  //dfs method
  void depthFirst(string searchType){
    if (root == nullptr) return;
    
  }

  void inorderHelper(App* app, vector<App*> &apps, string searchType){ //Anna Chen AVL
    if(node!=nullptr){
      inorderHelper(node->left, nodes);
      nodes.push_back(node);
      inorderHelper(node->right, nodes);
    }
  }

  vector<App*> inorder(string searchType){ // Anna Chen AVL
    vector<App*> apps;
    inorderHelper(root, apps, searchType);
    currentSearch = apps;
    return apps;
  }

  void printInorder(){ // Anna Chen AVL 
    printing(inorder());
  }

  void printing(vector<Node*> nodes){ // Anna Chen AVL
      for(int i = 0; i < nodes.size(); i++){
          cout << nodes[i]->name;
          if (i < nodes.size()-1){
              cout << ", "; }
      }
      cout << endl;
  }

};

