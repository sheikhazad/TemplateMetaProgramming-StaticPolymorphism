#include <iostream>

using namespace std;

class GenericProcessor
{
  public:

    //A generic function
    void process()
    {
        customiseProcess();
    }

    //A customisable function in derived class
    virtual void customiseProcess()
    {
        //Empty
    }

    virtual ~GenericProcessor(){}
};

class CustomisedProcessor final : public GenericProcessor
{
  public:

    void customiseProcess()
    {
        cout<< "Customised: I'm executed through Dynamic Polymorphism)." <<endl;
    }

    ~CustomisedProcessor() {}
};

int main()
{
    CustomisedProcessor cp;
    cp.process();
}
