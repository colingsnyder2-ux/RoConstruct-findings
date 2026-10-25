// from server: 87% by king_originala_sol_resume_native
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_sol_resume_native_propertyiter_family_4063a42ce866f730.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("reflection/descriptor.h", "roc_sol_resume_native_descriptor_authheader_0acd23dba6f04ff5.cpp")
#pragma include_alias("reflection/enumconverter.h", "roc_sol_resume_native_enumconverter_authheader_297ae1c3351d4ab6.cpp")
#pragma include_alias("reflection/function.h", "roc_sol_resume_native_function_authheader_2f6c7dcf10adead1.cpp")
#pragma include_alias("reflection/member.h", "roc_sol_resume_native_member_authheader_459d66d9acfae4ab.cpp")
#pragma include_alias("reflection/object.h", "roc_sol_resume_native_object_authheader_cadaaebe20af2047.cpp")
#pragma include_alias("reflection/property.h", "roc_sol_resume_native_property_authheader_f11d2ca9d2ef5b41.cpp")
#pragma include_alias("reflection/reflection.h", "roc_sol_resume_native_reflection_authheader_a6fefc64bf3a6f9e.cpp")
#pragma include_alias("reflection/signal.h", "roc_sol_resume_native_signal_authheader_16e657153fe9fb6e.cpp")
#pragma include_alias("reflection/type.h", "roc_sol_resume_native_type_authheader_4aaa2bdeb1c2b6c3.cpp")
#undef _RELEASEASSERT
#include "reflection/reflection.h"
#include "reflection/object.h"
#include "v8xml/XmlElement.h"
#include <vector>
struct State {char prefix[8];std::vector<RBX::Reflection::PropertyDescriptor*> items;};
struct Context {char prefix[8];};
struct Prefix {char prefix[20];};
// Existing receiver fields preserved; actual descriptor elementtype is native property descriptor.
struct Object:Prefix,Context {State* state;void collect(XmlElement*) const;};
typedef char native_iterator_size[sizeof(RBX::Reflection::ConstPropertyIterator)==12?1:-1];
typedef char native_property_size[sizeof(RBX::Reflection::ConstProperty)==8?1:-1];
typedef char existing_owner_size[sizeof(Object)==32?1:-1];
typedef char existing_state_offset[offsetof(Object,state)==28?1:-1];
void Object::collect(XmlElement* result) const {
 for(RBX::Reflection::ConstPropertyIterator it(state->items.begin(),static_cast<const RBX::Reflection::DescribedBase*>(static_cast<const void*>(static_cast<const Context*>(this))));
     it!=RBX::Reflection::ConstPropertyIterator(state->items.end(),static_cast<const RBX::Reflection::DescribedBase*>(static_cast<const void*>(static_cast<const Context*>(this))));++it) {
  const RBX::Reflection::PropertyDescriptor& descriptor=(*it).getDescriptor();
  XmlElement* node=descriptor.write(static_cast<const RBX::Reflection::DescribedBase*>(static_cast<const void*>(static_cast<const Context*>(this))),false);
  if(node) result->addChild(node);
 }
}
