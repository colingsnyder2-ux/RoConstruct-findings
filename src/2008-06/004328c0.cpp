// from server: 82% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <excpt.h>
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);
__declspec(noreturn) void raiseError(long);
struct S {S();};
S::S(){__try {InitializeCriticalSection(this);} __except(_exception_code()==0xc0000017){raiseError(0x8007000e);}}
