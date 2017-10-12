#include <iostream>

using namespace std;

class BSTNode{	
    int key;
    string value;
    BSTNode * left, right, parent;
  
    public:
        BSTNode(int, string);
        void set_values (int,string);
};

BSTNode::BSTNode(int key, string value){
    key = key;
    value = value;
}

void BSTNode::set_values (int key, string value) {
    key = key;
    value = value;
}

int main() {
   BSTNode node (1,"hello");

   return 0;
}


