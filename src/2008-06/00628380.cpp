// roc 2008-06 00628380  unit: seg_00620000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628380
//
// 00628380  56                   push esi
// 00628381  8b742408             mov esi, dword ptr [esp + 8]
// 00628385  6a00                 push 0
// 00628387  6a03                 push 3
// 00628389  56                   push esi
// 0062838a  e8f1a6feff           call 0x612a80
// 0062838f  50                   push eax
// 00628390  56                   push esi
// 00628391  e88a9efeff           call 0x612220
// 00628396  83c414               add esp, 0x14
// 00628399  b801000000           mov eax, 1
// 0062839e  5e                   pop esi
// 0062839f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
