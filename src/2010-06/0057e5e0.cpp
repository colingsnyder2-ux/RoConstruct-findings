// roc 2010-06 0057e5e0  unit: seg_00570000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057e5e0
//
// 0057e5e0  8b442408             mov eax, dword ptr [esp + 8]
// 0057e5e4  50                   push eax
// 0057e5e5  ff1508aa9e00         call dword ptr [0x9eaa08]
// 0057e5eb  59                   pop ecx
// 0057e5ec  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YAXPAX0@Z)

namespace ns_ROCX000000 {
extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
}
