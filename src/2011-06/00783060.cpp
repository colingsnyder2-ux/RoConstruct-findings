// from server: 100% by auto
// roc 2011-06 00783060  unit: seg_00780000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00783060
//
// 00783060  56                   push esi
// 00783061  8b742408             mov esi, dword ptr [esp + 8]
// 00783065  56                   push esi
// 00783066  e895ffffff           call 0x783000
// 0078306b  6a01                 push 1
// 0078306d  68902f7800           push 0x782f90
// 00783072  56                   push esi
// 00783073  e8f8f9fdff           call 0x762a70
// 00783078  83c410               add esp, 0x10
// 0078307b  b801000000           mov eax, 1
// 00783080  5e                   pop esi
// 00783081  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
