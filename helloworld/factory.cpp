#include "TreeNode_lib.h"

class product{
    public:
    virtual ~product(){};
    virtual string operation() const = 0;
};

class createProduct1 : public product {
    public:
    string operation() const override{
        return "this is p1";
    }
};

class createProduct2 : public product {
    public:
    string operation() const override{
        return "this is p2";
    }
};

class creator{
    public:
    virtual ~creator(){};
    virtual product* FactoryMethod() const =0;

    string someOperations(){
        product* p = this->FactoryMethod();
        string res = "my product is: " + p->operation();
        return res;
    }
};

class p1creator : public creator{
    public:
    virtual product* FactoryMethod() const override{
        return new createProduct1;
    }
};

class p2creator : public creator{
    public:
    virtual product* FactoryMethod() const override{
        return new createProduct2;
    }
};

int main(){
    creator* cr = new p2creator;
    cout << cr->someOperations() <<endl; 
}