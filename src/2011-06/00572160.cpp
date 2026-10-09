// roc 2011-06 00572160  unit: seg_00570000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572160
//
// 00572160  8b442408             mov eax, dword ptr [esp + 8]
// 00572164  50                   push eax
// 00572165  ff15740aa400         call dword ptr [0xa40a74]
// 0057216b  59                   pop ecx
// 0057216c  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000002@@YAXPAX0@Z)

namespace ns_ROCX000002 {
extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
}
