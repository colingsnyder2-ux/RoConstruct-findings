// roc 2008-06 00611fa0  unit: seg_00610000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611fa0
//
// 00611fa0  8b442408             mov eax, dword ptr [esp + 8]
// 00611fa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00611fa8  83ec1c               sub esp, 0x1c
// 00611fab  e8e0faffff           call 0x611a90
// 00611fb0  83780803             cmp dword ptr [eax + 8], 3
// 00611fb4  7416                 je 0x611fcc
// 00611fb6  8d4c240c             lea ecx, [esp + 0xc]
// 00611fba  51                   push ecx
// 00611fbb  50                   push eax
// 00611fbc  e89fa60400           call 0x65c660
// 00611fc1  83c408               add esp, 8
// 00611fc4  85c0                 test eax, eax
// 00611fc6  7504                 jne 0x611fcc
// 00611fc8  83c41c               add esp, 0x1c
// 00611fcb  c3                   ret 
// 00611fcc  dd00                 fld qword ptr [eax]
// 00611fce  dd5c2404             fstp qword ptr [esp + 4]
// 00611fd2  dd442404             fld qword ptr [esp + 4]
// 00611fd6  db1c24               fistp dword ptr [esp]
// 00611fd9  8b0424               mov eax, dword ptr [esp]
// 00611fdc  83c41c               add esp, 0x1c
// 00611fdf  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
