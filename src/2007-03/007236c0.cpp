// roc 2007-03 007236c0  unit: seg_00720000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007236c0
//
// 007236c0  8b442408             mov eax, dword ptr [esp + 8]
// 007236c4  50                   push eax
// 007236c5  ff1530e97700         call dword ptr [0x77e930]
// 007236cb  59                   pop ecx
// 007236cc  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000002@@YAXPAX0@Z)

namespace ns_ROCX000002 {
extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
}
