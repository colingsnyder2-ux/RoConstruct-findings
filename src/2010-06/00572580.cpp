// roc 2010-06 00572580  unit: seg_00570000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572580
//
// 00572580  8b442404             mov eax, dword ptr [esp + 4]
// 00572584  85c0                 test eax, eax
// 00572586  740a                 je 0x572592
// 00572588  89442404             mov dword ptr [esp + 4], eax
// 0057258c  ff2508aa9e00         jmp dword ptr [0x9eaa08]
// 00572592  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
extern "C" __declspec(dllimport) void __cdecl free(void*);
void f(void* p) { if (p) free(p); }