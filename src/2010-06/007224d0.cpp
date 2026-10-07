// roc 2010-06 007224d0  unit: RBX::UniversalTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007224d0
//
// 007224d0  56                   push esi
// 007224d1  8b742408             mov esi, dword ptr [esp + 8]
// 007224d5  57                   push edi
// 007224d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007224da  57                   push edi
// 007224db  68f0d8ffff           push 0xffffd8f0
// 007224e0  56                   push esi
// 007224e1  e8baf2ffff           call 0x7217a0
// 007224e6  6aff                 push -1
// 007224e8  56                   push esi
// 007224e9  e852ecffff           call 0x721140
// 007224ee  83c414               add esp, 0x14
// 007224f1  85c0                 test eax, eax
// 007224f3  7405                 je 0x7224fa
// 007224f5  5f                   pop edi
// 007224f6  33c0                 xor eax, eax
// 007224f8  5e                   pop esi
// 007224f9  c3                   ret 
// 007224fa  6afe                 push -2
// 007224fc  56                   push esi
// 007224fd  e85eeaffff           call 0x720f60
// 00722502  6a00                 push 0
// 00722504  6a00                 push 0
// 00722506  56                   push esi
// 00722507  e874f3ffff           call 0x721880
// 0072250c  6aff                 push -1
// 0072250e  56                   push esi
// 0072250f  e8fcebffff           call 0x721110
// 00722514  57                   push edi
// 00722515  68f0d8ffff           push 0xffffd8f0
// 0072251a  56                   push esi
// 0072251b  e8c0f4ffff           call 0x7219e0
// 00722520  83c428               add esp, 0x28
// 00722523  5f                   pop edi
// 00722524  b801000000           mov eax, 1
// 00722529  5e                   pop esi
// 0072252a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
