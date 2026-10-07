// roc 2007-08 005c9b20  unit: seg_005c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9b20
//
// 005c9b20  51                   push ecx
// 005c9b21  56                   push esi
// 005c9b22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9b26  8d442404             lea eax, [esp + 4]
// 005c9b2a  50                   push eax
// 005c9b2b  6a01                 push 1
// 005c9b2d  56                   push esi
// 005c9b2e  e81d58ffff           call 0x5bf350
// 005c9b33  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c9b37  51                   push ecx
// 005c9b38  56                   push esi
// 005c9b39  e85240ffff           call 0x5bdb90
// 005c9b3e  83c414               add esp, 0x14
// 005c9b41  b801000000           mov eax, 1
// 005c9b46  5e                   pop esi
// 005c9b47  59                   pop ecx
// 005c9b48  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
