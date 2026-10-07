// roc 2008-06 00626780  unit: seg_00620000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626780
//
// 00626780  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00626784  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00626788  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062678c  50                   push eax
// 0062678d  51                   push ecx
// 0062678e  52                   push edx
// 0062678f  e8eca7feff           call 0x610f80
// 00626794  83c40c               add esp, 0xc
// 00626797  33c0                 xor eax, eax
// 00626799  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
