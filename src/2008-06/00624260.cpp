// roc 2008-06 00624260  unit: lua_exception  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624260
//
// 00624260  6a01                 push 1
// 00624262  56                   push esi
// 00624263  e8a8e3feff           call 0x612610
// 00624268  68044c8400           push 0x844c04
// 0062426d  6aff                 push -1
// 0062426f  56                   push esi
// 00624270  e81be2feff           call 0x612490
// 00624275  83c414               add esp, 0x14
// 00624278  56                   push esi
// 00624279  6aff                 push -1
// 0062427b  56                   push esi
// 0062427c  e86fdefeff           call 0x6120f0
// 00624281  83c408               add esp, 8
// 00624284  ffd0                 call eax
// 00624286  83c404               add esp, 4
// 00624289  c3                   ret 
// library lua-5.1.4/liolib.c (function _aux_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
