// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_listenerremovepostincrement9de4e1f1fe9a2cee.cpp

// Candidate translation unit (score above; library headers required).
#include <windows.h>
#include <vector>
#include <algorithm>
struct S {unsigned reserved;std::vector<void*> values;unsigned padding;char* owner;void remove(void*);};
void S::remove(void* value){CRITICAL_SECTION* lock=reinterpret_cast<CRITICAL_SECTION*>(owner+0x2c);EnterCriticalSection(lock);for(std::vector<void*>::iterator it=values.begin();it!=values.end();it++){if(*it==value){values.erase(it);break;}}LeaveCriticalSection(lock);}
