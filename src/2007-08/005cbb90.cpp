// from server: 100% by auto
// roc 2007-08 005cbb90  unit: seg_005c0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbb90
//
// 005cbb90  56                   push esi
// 005cbb91  8b742408             mov esi, dword ptr [esp + 8]
// 005cbb95  6a01                 push 1
// 005cbb97  56                   push esi
// 005cbb98  e88337ffff           call 0x5bf320
// 005cbb9d  6a02                 push 2
// 005cbb9f  56                   push esi
// 005cbba0  e87b37ffff           call 0x5bf320
// 005cbba5  6a02                 push 2
// 005cbba7  6a01                 push 1
// 005cbba9  56                   push esi
// 005cbbaa  e8a11cffff           call 0x5bd850
// 005cbbaf  50                   push eax
// 005cbbb0  56                   push esi
// 005cbbb1  e8aa21ffff           call 0x5bdd60
// 005cbbb6  83c424               add esp, 0x24
// 005cbbb9  b801000000           mov eax, 1
// 005cbbbe  5e                   pop esi
// 005cbbbf  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
