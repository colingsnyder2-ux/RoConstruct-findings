// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_flagsourceaddresse4e23efe05813941.cpp

// Candidate translation unit (score above; library headers required).
#include "v8datamodel/Flag.h"
#include "v8datamodel/PartInstance.h"
#include <boost/bind.hpp>
struct SourceLayout {char prefix[0x14];RBX::Reflection::SignalSource source;};
struct Descriptor {
 boost::signals::connection connect(RBX::Reflection::SignalSource*,const boost::slot<boost::function<void(boost::shared_ptr<RBX::Instance>)> >&,int);
};
extern Descriptor descriptor;
void RBX::Flag::onChildAdded(RBX::Instance* instance){
 if(dynamic_cast<RBX::PartInstance*>(instance)){
  if(RBX::PartInstance* handle=getHandle()){
   *reinterpret_cast<boost::signals::scoped_connection*>(reinterpret_cast<char*>(this)+0x274)=::descriptor.connect(&reinterpret_cast<SourceLayout*>(handle)->source,boost::bind(&RBX::Flag::onEvent_flagTouched,this,_1),10);
  }
 }
}
