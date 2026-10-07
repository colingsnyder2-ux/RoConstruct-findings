// roc 2011-06 00764340  unit: seg_00760000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764340
//
// 00764340  56                   push esi
// 00764341  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00764345  57                   push edi
// 00764346  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076434a  56                   push esi
// 0076434b  57                   push edi
// 0076434c  e8ffe1ffff           call 0x762550
// 00764351  83c408               add esp, 8
// 00764354  85c0                 test eax, eax
// 00764356  7f07                 jg 0x76435f
// 00764358  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076435c  5f                   pop edi
// 0076435d  5e                   pop esi
// 0076435e  c3                   ret 
// 0076435f  56                   push esi
// 00764360  57                   push edi
// 00764361  e86affffff           call 0x7642d0
// 00764366  83c408               add esp, 8
// 00764369  5f                   pop edi
// 0076436a  5e                   pop esi
// 0076436b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
