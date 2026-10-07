// roc 2009-06 006ba270  unit: RBX::UniversalTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba270
//
// 006ba270  56                   push esi
// 006ba271  8b742408             mov esi, dword ptr [esp + 8]
// 006ba275  57                   push edi
// 006ba276  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ba27a  57                   push edi
// 006ba27b  68f0d8ffff           push 0xffffd8f0
// 006ba280  56                   push esi
// 006ba281  e84af3ffff           call 0x6b95d0
// 006ba286  6aff                 push -1
// 006ba288  56                   push esi
// 006ba289  e8e2ecffff           call 0x6b8f70
// 006ba28e  83c414               add esp, 0x14
// 006ba291  85c0                 test eax, eax
// 006ba293  7405                 je 0x6ba29a
// 006ba295  5f                   pop edi
// 006ba296  33c0                 xor eax, eax
// 006ba298  5e                   pop esi
// 006ba299  c3                   ret 
// 006ba29a  6afe                 push -2
// 006ba29c  56                   push esi
// 006ba29d  e8eeeaffff           call 0x6b8d90
// 006ba2a2  6a00                 push 0
// 006ba2a4  6a00                 push 0
// 006ba2a6  56                   push esi
// 006ba2a7  e804f4ffff           call 0x6b96b0
// 006ba2ac  6aff                 push -1
// 006ba2ae  56                   push esi
// 006ba2af  e88cecffff           call 0x6b8f40
// 006ba2b4  57                   push edi
// 006ba2b5  68f0d8ffff           push 0xffffd8f0
// 006ba2ba  56                   push esi
// 006ba2bb  e850f5ffff           call 0x6b9810
// 006ba2c0  83c428               add esp, 0x28
// 006ba2c3  5f                   pop edi
// 006ba2c4  b801000000           mov eax, 1
// 006ba2c9  5e                   pop esi
// 006ba2ca  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
