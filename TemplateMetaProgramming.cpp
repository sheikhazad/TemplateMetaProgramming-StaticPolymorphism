#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////////
//This is simple example of how Static Polymorphism is achieved by using Template Meta Programming(TMP)
//FEW CHANGES FROM DynamicPolymorphism.cpp :
//1. GenericProcessor has become Templated Class
//2. Method customiseProcess() has become non-virtual
//3. Method customiseProcess() is no more empty
////////////////////////////////////////////////////////////////////////////

template<typename T>
class GenericProcessor
{
  public:

    //A generic function
    void process()
    {
        customiseProcess();
    }

    //A customisable function in derived class
    void customiseProcess()
    {
        //Calling T::customiseProcess()
        static_cast<T*>(this)->customiseProcess();
    }

    virtual ~GenericProcessor(){}

};

class CustomisedProcessor final : public GenericProcessor<CustomisedProcessor>
{
  public:

    void customiseProcess()
    {
        cout<< "Customised: I'm executed through Template Meta-programming Technique(Static Polymorphism)." <<endl;
    }

    ~CustomisedProcessor() {}
};

int main()
{
    CustomisedProcessor cp;
    cp.process();
}
