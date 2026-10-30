// from server: 100% by auto
// roc 2007-08 005c92f0  unit: lua_exception  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c92f0
//
// 005c92f0  56                   push esi
// 005c92f1  8b742408             mov esi, dword ptr [esp + 8]
// 005c92f5  57                   push edi
// 005c92f6  6a05                 push 5
// 005c92f8  6a01                 push 1
// 005c92fa  56                   push esi
// 005c92fb  e8d05fffff           call 0x5bf2d0
// 005c9300  6a01                 push 1
// 005c9302  56                   push esi
// 005c9303  e8e846ffff           call 0x5bd9f0
// 005c9308  6854597800           push 0x785954
// 005c930d  6a28                 push 0x28
// 005c930f  56                   push esi
// 005c9310  8bf8                 mov edi, eax
// 005c9312  e85956ffff           call 0x5be970
// 005c9317  6a02                 push 2
// 005c9319  56                   push esi
// 005c931a  e85144ffff           call 0x5bd770
// 005c931f  83c428               add esp, 0x28
// 005c9322  85c0                 test eax, eax
// 005c9324  7e0d                 jle 0x5c9333
// 005c9326  6a06                 push 6
// 005c9328  6a02                 push 2
// 005c932a  56                   push esi
// 005c932b  e8a05fffff           call 0x5bf2d0
// 005c9330  83c40c               add esp, 0xc
// 005c9333  6a02                 push 2
// 005c9335  56                   push esi
// 005c9336  e85542ffff           call 0x5bd590
// 005c933b  57                   push edi
// 005c933c  6a01                 push 1
// 005c933e  56                   push esi
// 005c933f  e8acfbffff           call 0x5c8ef0
// 005c9344  83c414               add esp, 0x14
// 005c9347  5f                   pop edi
// 005c9348  33c0                 xor eax, eax
// 005c934a  5e                   pop esi
// 005c934b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
