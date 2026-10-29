// roc 2009-12 00610c60  unit: seg_00610000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610c60
//
// 00610c60  8b442404             mov eax, dword ptr [esp + 4]
// 00610c64  85c0                 test eax, eax
// 00610c66  740a                 je 0x610c72
// 00610c68  89442404             mov dword ptr [esp + 4], eax
// 00610c6c  ff2540b79800         jmp dword ptr [0x98b740]
// 00610c72  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
extern "C" __declspec(dllimport) void __cdecl free(void*);
void f(void* p) { if (p) free(p); }