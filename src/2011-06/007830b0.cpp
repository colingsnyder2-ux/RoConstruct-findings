// roc 2011-06 007830b0  unit: seg_00780000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007830b0
//
// 007830b0  56                   push esi
// 007830b1  8b742408             mov esi, dword ptr [esp + 8]
// 007830b5  56                   push esi
// 007830b6  e895fafdff           call 0x762b50
// 007830bb  83c404               add esp, 4
// 007830be  85c0                 test eax, eax
// 007830c0  7409                 je 0x7830cb
// 007830c2  56                   push esi
// 007830c3  e838f8fdff           call 0x762900
// 007830c8  83c404               add esp, 4
// 007830cb  b801000000           mov eax, 1
// 007830d0  5e                   pop esi
// 007830d1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_corunning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
