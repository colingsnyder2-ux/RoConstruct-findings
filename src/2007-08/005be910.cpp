// roc 2007-08 005be910  unit: boost::detail::H::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be910
//
// 005be910  56                   push esi
// 005be911  8b742408             mov esi, dword ptr [esp + 8]
// 005be915  57                   push edi
// 005be916  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005be91a  57                   push edi
// 005be91b  68f0d8ffff           push 0xffffd8f0
// 005be920  56                   push esi
// 005be921  e8daf4ffff           call 0x5bde00
// 005be926  6aff                 push -1
// 005be928  56                   push esi
// 005be929  e842eeffff           call 0x5bd770
// 005be92e  83c414               add esp, 0x14
// 005be931  85c0                 test eax, eax
// 005be933  7405                 je 0x5be93a
// 005be935  5f                   pop edi
// 005be936  33c0                 xor eax, eax
// 005be938  5e                   pop esi
// 005be939  c3                   ret 
// 005be93a  6afe                 push -2
// 005be93c  56                   push esi
// 005be93d  e84eecffff           call 0x5bd590
// 005be942  6a00                 push 0
// 005be944  6a00                 push 0
// 005be946  56                   push esi
// 005be947  e894f5ffff           call 0x5bdee0
// 005be94c  6aff                 push -1
// 005be94e  56                   push esi
// 005be94f  e8ecedffff           call 0x5bd740
// 005be954  57                   push edi
// 005be955  68f0d8ffff           push 0xffffd8f0
// 005be95a  56                   push esi
// 005be95b  e8c0f6ffff           call 0x5be020
// 005be960  83c428               add esp, 0x28
// 005be963  5f                   pop edi
// 005be964  b801000000           mov eax, 1
// 005be969  5e                   pop esi
// 005be96a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
