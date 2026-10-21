// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espeon_reflectedtuplecallad4c07c399b23703.cpp

// Candidate translation unit (score above; library headers required).
#include "reflection/reflection.h"
namespace RBX {namespace Reflection {struct Tuple:std::vector<Value> {};}}
struct __multiple_inheritance Object;
struct Descriptor {char prefix[56];RBX::Reflection::Tuple (Object::*method)(double);void call(Object*,RBX::Reflection::Value&,RBX::Reflection::Value&) const;};
void Descriptor::call(Object* o,RBX::Reflection::Value& result,RBX::Reflection::Value& arg) const {result=(o->*method)(arg.convert<double>());}
