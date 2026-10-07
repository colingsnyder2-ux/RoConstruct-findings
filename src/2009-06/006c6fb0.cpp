// roc 2009-06 006c6fb0  unit: seg_006c0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6fb0
//
// 006c6fb0  56                   push esi
// 006c6fb1  8b742408             mov esi, dword ptr [esp + 8]
// 006c6fb5  6a00                 push 0
// 006c6fb7  6a03                 push 3
// 006c6fb9  56                   push esi
// 006c6fba  e8412cffff           call 0x6b9c00
// 006c6fbf  50                   push eax
// 006c6fc0  56                   push esi
// 006c6fc1  e89a23ffff           call 0x6b9360
// 006c6fc6  83c414               add esp, 0x14
// 006c6fc9  b801000000           mov eax, 1
// 006c6fce  5e                   pop esi
// 006c6fcf  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
