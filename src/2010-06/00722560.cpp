// from server: 100% by auto
// roc 2010-06 00722560  unit: RBX::UniversalTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722560
//
// 00722560  8b442408             mov eax, dword ptr [esp + 8]
// 00722564  56                   push esi
// 00722565  8b742408             mov esi, dword ptr [esp + 8]
// 00722569  50                   push eax
// 0072256a  56                   push esi
// 0072256b  e870f3ffff           call 0x7218e0
// 00722570  83c408               add esp, 8
// 00722573  85c0                 test eax, eax
// 00722575  742d                 je 0x7225a4
// 00722577  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072257b  51                   push ecx
// 0072257c  56                   push esi
// 0072257d  e80ef0ffff           call 0x721590
// 00722582  6afe                 push -2
// 00722584  56                   push esi
// 00722585  e876f2ffff           call 0x721800
// 0072258a  6aff                 push -1
// 0072258c  56                   push esi
// 0072258d  e8aeebffff           call 0x721140
// 00722592  83c418               add esp, 0x18
// 00722595  85c0                 test eax, eax
// 00722597  750f                 jne 0x7225a8
// 00722599  6afd                 push -3
// 0072259b  56                   push esi
// 0072259c  e8bfe9ffff           call 0x720f60
// 007225a1  83c408               add esp, 8
// 007225a4  33c0                 xor eax, eax
// 007225a6  5e                   pop esi
// 007225a7  c3                   ret 
// 007225a8  6afe                 push -2
// 007225aa  56                   push esi
// 007225ab  e800eaffff           call 0x720fb0
// 007225b0  83c408               add esp, 8
// 007225b3  b801000000           mov eax, 1
// 007225b8  5e                   pop esi
// 007225b9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
