// roc 2010-06 00795620  unit: PasteVerb  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795620
//
// 00795620  8b01                 mov eax, dword ptr [ecx]
// 00795622  83c004               add eax, 4
// 00795625  50                   push eax
// 00795626  ff157ca39e00         call dword ptr [0x9ea37c]
// 0079562c  c3                   ret 
// copied from an identical function in another client (function ?f@PasteVerb@ns_ROCX000000@@QAEJXZ)

namespace ns_ROCX000000 {
extern "C" long __declspec(dllimport) __stdcall InterlockedDecrement(long *);

struct PasteVerb
{
    long *value;
    long f();
};

long PasteVerb::f()
{
    return InterlockedDecrement(value + 1);
}
}
