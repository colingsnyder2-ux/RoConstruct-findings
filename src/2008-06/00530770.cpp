// from server: 100% by tester
// roc 2008-06 00530770  unit: seg_00530000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530770
//
// 00530770  8b442408             mov eax, dword ptr [esp + 8]
// 00530774  50                   push eax
// 00530775  ff15c0288000         call dword ptr [0x8028c0]
// 0053077b  59                   pop ecx
// 0053077c  c3                   ret 

extern "C" __declspec(dllimport) void free(void* ptr);

void f(void* a, void* b) {
    free(b);
}
