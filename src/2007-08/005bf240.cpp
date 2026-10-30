// from server: 100% by auto
// roc 2007-08 005bf240  unit: boost::detail::H::?$sp_counted_impl_p  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf240
//
// 005bf240  53                   push ebx
// 005bf241  55                   push ebp
// 005bf242  56                   push esi
// 005bf243  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bf247  57                   push edi
// 005bf248  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bf24c  57                   push edi
// 005bf24d  56                   push esi
// 005bf24e  e83de8ffff           call 0x5bda90
// 005bf253  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005bf257  8bd8                 mov ebx, eax
// 005bf259  83c408               add esp, 8
// 005bf25c  85db                 test ebx, ebx
// 005bf25e  743d                 je 0x5bf29d
// 005bf260  57                   push edi
// 005bf261  56                   push esi
// 005bf262  e8b9ecffff           call 0x5bdf20
// 005bf267  83c408               add esp, 8
// 005bf26a  85c0                 test eax, eax
// 005bf26c  742f                 je 0x5bf29d
// 005bf26e  55                   push ebp
// 005bf26f  68f0d8ffff           push 0xffffd8f0
// 005bf274  56                   push esi
// 005bf275  e886ebffff           call 0x5bde00
// 005bf27a  6afe                 push -2
// 005bf27c  6aff                 push -1
// 005bf27e  56                   push esi
// 005bf27f  e8cce5ffff           call 0x5bd850
// 005bf284  83c418               add esp, 0x18
// 005bf287  85c0                 test eax, eax
// 005bf289  7412                 je 0x5bf29d
// 005bf28b  6afd                 push -3
// 005bf28d  56                   push esi
// 005bf28e  e8fde2ffff           call 0x5bd590
// 005bf293  83c408               add esp, 8
// 005bf296  5f                   pop edi
// 005bf297  5e                   pop esi
// 005bf298  5d                   pop ebp
// 005bf299  8bc3                 mov eax, ebx
// 005bf29b  5b                   pop ebx
// 005bf29c  c3                   ret 
// 005bf29d  57                   push edi
// 005bf29e  56                   push esi
// 005bf29f  e8cce4ffff           call 0x5bd770
// 005bf2a4  50                   push eax
// 005bf2a5  56                   push esi
// 005bf2a6  e8e5e4ffff           call 0x5bd790
// 005bf2ab  50                   push eax
// 005bf2ac  55                   push ebp
// 005bf2ad  6834917b00           push 0x7b9134
// 005bf2b2  56                   push esi
// 005bf2b3  e8d8e9ffff           call 0x5bdc90
// 005bf2b8  50                   push eax
// 005bf2b9  57                   push edi
// 005bf2ba  56                   push esi
// 005bf2bb  e8c0feffff           call 0x5bf180
// 005bf2c0  83c42c               add esp, 0x2c
// 005bf2c3  5f                   pop edi
// 005bf2c4  5e                   pop esi
// 005bf2c5  5d                   pop ebp
// 005bf2c6  33c0                 xor eax, eax
// 005bf2c8  5b                   pop ebx
// 005bf2c9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
