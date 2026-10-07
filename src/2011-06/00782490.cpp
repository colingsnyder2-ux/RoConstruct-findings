// roc 2011-06 00782490  unit: seg_00780000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782490
//
// 00782490  56                   push esi
// 00782491  8b742408             mov esi, dword ptr [esp + 8]
// 00782495  6a01                 push 1
// 00782497  e844ffffff           call 0x7823e0
// 0078249c  6aff                 push -1
// 0078249e  56                   push esi
// 0078249f  e8ec00feff           call 0x762590
// 007824a4  83c40c               add esp, 0xc
// 007824a7  85c0                 test eax, eax
// 007824a9  7415                 je 0x7824c0
// 007824ab  68eed8ffff           push 0xffffd8ee
// 007824b0  56                   push esi
// 007824b1  e86a00feff           call 0x762520
// 007824b6  83c408               add esp, 8
// 007824b9  b801000000           mov eax, 1
// 007824be  5e                   pop esi
// 007824bf  c3                   ret 
// 007824c0  6aff                 push -1
// 007824c2  56                   push esi
// 007824c3  e88808feff           call 0x762d50
// 007824c8  83c408               add esp, 8
// 007824cb  b801000000           mov eax, 1
// 007824d0  5e                   pop esi
// 007824d1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
