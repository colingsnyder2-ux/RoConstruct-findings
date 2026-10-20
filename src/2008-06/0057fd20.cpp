// from server: 69% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_servicefindnative077e71b523a6663c.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
extern int onceFlag;void callback();void registerOnce(void(*)(),int&);unsigned getIndex();
struct Instance;
struct ServiceProvider{char prefix[0x190];std::vector<boost::shared_ptr<Instance> > services;Instance*find();};
Instance*ServiceProvider::find(){registerOnce(callback,onceFlag);unsigned index=getIndex();if(index+1>services.size()){services.resize(index+1);}else{Instance*service=services[index].get();if(service)return service;}return 0;}
