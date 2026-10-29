// roc 2011-06 00561620  unit: seg_00560000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00561620
//
// 00561620  8b442404             mov eax, dword ptr [esp + 4]
// 00561624  85c0                 test eax, eax
// 00561626  740a                 je 0x561632
// 00561628  89442404             mov dword ptr [esp + 4], eax
// 0056162c  ff25740aa400         jmp dword ptr [0xa40a74]
// 00561632  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
extern "C" __declspec(dllimport) void __cdecl free(void*);
void f(void* p) { if (p) free(p); }