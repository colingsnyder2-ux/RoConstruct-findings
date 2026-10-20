// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_humanoidtransparencynative9fc411387f8649f2.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include <vector>
namespace RBX {
class Instance {public: virtual ~Instance();};
class PartInstance {public: char pad[0x104]; Instance* parent; void setValue(float);};
class ModelInstance:public Instance {public: void visit(void (__cdecl*)(),std::vector<PartInstance*>*);};
class Tool:public Instance {};
struct GetSetImpl {static PartInstance* get(PartInstance*);};
extern void __cdecl collectParts();
struct Humanoid {void f(float);};
void Humanoid::f(float value) {
 std::vector<PartInstance*> parts;
 char* instance=(char*)this-0x14c;
 if(instance) {ModelInstance* model=dynamic_cast<ModelInstance*>(*(Instance**)(instance+0x104));if(model) model->visit(collectParts,&parts);}
 float result=1.0f;
 if(value<3.0f) result=0.0f; else if(value<6.0f) result=0.5f;
 for(unsigned i=0;i<parts.size();++i) {PartInstance* part=GetSetImpl::get(parts[i]);if(!dynamic_cast<Tool*>(part->parent)) part->setValue(result);}
}
}
