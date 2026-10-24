// from server: 71% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_comprivatecaller2b37d09a09284c3c.cpp

// Candidate translation unit (score above; library headers required).
#include <dispex.h>
#include <comdef.h>
static __declspec(noinline) bool __cdecl equalObjects(IUnknown* first, IUnknown* second) {
 IUnknownPtr a;
 IUnknownPtr b;
 IObjectIdentityPtr identity;
 if(first==second) return true;
 if(!first || !second) return false;
 first->QueryInterface(__uuidof(IUnknown), (void**)&a);
 second->QueryInterface(__uuidof(IUnknown), (void**)&b);
 if(a.GetInterfacePtr()==b.GetInterfacePtr()) return true;
 if(a.GetInterfacePtr() && b.GetInterfacePtr()) {
  if(a->QueryInterface(__uuidof(IObjectIdentity), (void**)&identity)>=0) {
   if(identity.GetInterfacePtr() && identity->IsEqualObject(b)==0) return true;
  }
 }
 return false;
}

bool checkObjectIdentity(IUnknown* first,IUnknown* second){return equalObjects(first,second);}
