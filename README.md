# TemplateMetaProgramming-StaticPolymorphism
This is simple example of how Static Polymorphism is achieved by using Template Meta Programming(TMP) Technique.

Pls see the result files attached for both cases.

FEW DIFFERENCES BETWEEN DynamicPolymorphism.cpp AND TemplateMetaProgramming.cpp
--------------------------------------------------------------------------------
A) DynamicPolymorphism.cpp:
1. GenericProcessor is non-Templated Class
2. Method customiseProcess() is virtual 
3. Method customiseProcess() is empty

B) TemplateMetaProgramming.cpp
1. GenericProcessor has become Templated Class
2. Method customiseProcess() has become non-virtual
3. Method customiseProcess() is no more empty

Both above cases achieve same result but Static Polymorphism doesn't pay (unlike Dynamic Polymorphism) :
1) Runtime cost
2) Extra space due to virtual table and vptr.
