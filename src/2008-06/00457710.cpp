// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_eventdetachvector_1d9fa5a40c7796a1.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);
struct Item {char padding[12];void* listener;};
struct Owner {char padding[44];char criticalSection[24];};
struct EventData {unsigned base;std::vector<Item*> items;unsigned reserved;Owner* owner;void detach();};
void EventData::detach(){void* lock=owner->criticalSection;EnterCriticalSection(lock);for(std::vector<Item*>::iterator i=items.begin();i!=items.end();++i)(*i)->listener=0;items.erase(items.begin(),items.end());LeaveCriticalSection(lock);}
