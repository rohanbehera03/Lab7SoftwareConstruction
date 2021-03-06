#ifndef __DIV_HPP__
#define __DIV_HPP__
 
 #include "base.hpp"
 #include "op.hpp"
 #include <string>
 #include <sstream>
#include <iomanip>
using namespace std;
 
 class Div : public Base {
          private:
                 Base* leftChild = NULL;
                 Base* rightChild = NULL;
          public:
                  Div(Base* left, Base* right) {
                          this->leftChild = left;
                         this->rightChild = right;
                  }
                  virtual double evaluate() {
                          return leftChild->evaluate() / rightChild->evaluate();
                  }
                  virtual std::string stringify() {
                          std::stringstream out;
		          out  << setprecision(5) << leftChild->stringify() << " / " << rightChild->stringify();
                          return out.str();
                  }
 };
 
 #endif //__DIV_HPP__
