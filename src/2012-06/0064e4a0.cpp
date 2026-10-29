// roc 2012-06 0064e4a0  unit: seg_00640000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064e4a0
//
// 0064e4a0  8b442404             mov eax, dword ptr [esp + 4]
// 0064e4a4  85c0                 test eax, eax
// 0064e4a6  740a                 je 0x64e4b2
// 0064e4a8  89442404             mov dword ptr [esp + 4], eax
// 0064e4ac  ff25c829b200         jmp dword ptr [0xb229c8]
// 0064e4b2  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
extern "C" __declspec(dllimport) void __cdecl free(void*);
void f(void* p) { if (p) free(p); }