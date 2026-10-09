// roc 2009-06 0059aa50  unit: seg_00590000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059aa50
//
// 0059aa50  8b442408             mov eax, dword ptr [esp + 8]
// 0059aa54  50                   push eax
// 0059aa55  ff15cce98900         call dword ptr [0x89e9cc]
// 0059aa5b  59                   pop ecx
// 0059aa5c  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000011@@YAXPAX0@Z)

namespace ns_ROCX000011 {
extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
}
