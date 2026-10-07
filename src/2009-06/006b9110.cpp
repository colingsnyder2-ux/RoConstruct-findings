// roc 2009-06 006b9110  unit: RBX::UniversalTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b9110
//
// 006b9110  8b442408             mov eax, dword ptr [esp + 8]
// 006b9114  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b9118  83ec1c               sub esp, 0x1c
// 006b911b  e8b0faffff           call 0x6b8bd0
// 006b9120  83780803             cmp dword ptr [eax + 8], 3
// 006b9124  7416                 je 0x6b913c
// 006b9126  8d4c240c             lea ecx, [esp + 0xc]
// 006b912a  51                   push ecx
// 006b912b  50                   push eax
// 006b912c  e85f0d0300           call 0x6e9e90
// 006b9131  83c408               add esp, 8
// 006b9134  85c0                 test eax, eax
// 006b9136  7504                 jne 0x6b913c
// 006b9138  83c41c               add esp, 0x1c
// 006b913b  c3                   ret 
// 006b913c  dd00                 fld qword ptr [eax]
// 006b913e  dd5c2404             fstp qword ptr [esp + 4]
// 006b9142  dd442404             fld qword ptr [esp + 4]
// 006b9146  db1c24               fistp dword ptr [esp]
// 006b9149  8b0424               mov eax, dword ptr [esp]
// 006b914c  83c41c               add esp, 0x1c
// 006b914f  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
