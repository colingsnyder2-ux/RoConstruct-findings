// from server: 100% by auto
// roc 2007-08 005be9a0  unit: boost::detail::H::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be9a0
//
// 005be9a0  8b442408             mov eax, dword ptr [esp + 8]
// 005be9a4  56                   push esi
// 005be9a5  8b742408             mov esi, dword ptr [esp + 8]
// 005be9a9  50                   push eax
// 005be9aa  56                   push esi
// 005be9ab  e870f5ffff           call 0x5bdf20
// 005be9b0  83c408               add esp, 8
// 005be9b3  85c0                 test eax, eax
// 005be9b5  742d                 je 0x5be9e4
// 005be9b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005be9bb  51                   push ecx
// 005be9bc  56                   push esi
// 005be9bd  e82ef2ffff           call 0x5bdbf0
// 005be9c2  6afe                 push -2
// 005be9c4  56                   push esi
// 005be9c5  e896f4ffff           call 0x5bde60
// 005be9ca  6aff                 push -1
// 005be9cc  56                   push esi
// 005be9cd  e89eedffff           call 0x5bd770
// 005be9d2  83c418               add esp, 0x18
// 005be9d5  85c0                 test eax, eax
// 005be9d7  750f                 jne 0x5be9e8
// 005be9d9  6afd                 push -3
// 005be9db  56                   push esi
// 005be9dc  e8afebffff           call 0x5bd590
// 005be9e1  83c408               add esp, 8
// 005be9e4  33c0                 xor eax, eax
// 005be9e6  5e                   pop esi
// 005be9e7  c3                   ret 
// 005be9e8  6afe                 push -2
// 005be9ea  56                   push esi
// 005be9eb  e8f0ebffff           call 0x5bd5e0
// 005be9f0  83c408               add esp, 8
// 005be9f3  b801000000           mov eax, 1
// 005be9f8  5e                   pop esi
// 005be9f9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
