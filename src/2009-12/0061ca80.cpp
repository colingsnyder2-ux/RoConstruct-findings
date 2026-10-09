// roc 2009-12 0061ca80  unit: seg_00610000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ca80
//
// 0061ca80  8b442408             mov eax, dword ptr [esp + 8]
// 0061ca84  50                   push eax
// 0061ca85  ff1540b79800         call dword ptr [0x98b740]
// 0061ca8b  59                   pop ecx
// 0061ca8c  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YAXPAX0@Z)

namespace ns_ROCX000000 {
extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
}
