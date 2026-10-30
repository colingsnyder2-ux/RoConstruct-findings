// from server: 100% by auto
// roc 2007-08 005bf490  unit: boost::detail::H::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf490
//
// 005bf490  53                   push ebx
// 005bf491  56                   push esi
// 005bf492  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf496  57                   push edi
// 005bf497  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bf49b  57                   push edi
// 005bf49c  56                   push esi
// 005bf49d  e86ee4ffff           call 0x5bd910
// 005bf4a2  8bd8                 mov ebx, eax
// 005bf4a4  83c408               add esp, 8
// 005bf4a7  85db                 test ebx, ebx
// 005bf4a9  7542                 jne 0x5bf4ed
// 005bf4ab  57                   push edi
// 005bf4ac  56                   push esi
// 005bf4ad  e82ee3ffff           call 0x5bd7e0
// 005bf4b2  83c408               add esp, 8
// 005bf4b5  85c0                 test eax, eax
// 005bf4b7  7532                 jne 0x5bf4eb
// 005bf4b9  55                   push ebp
// 005bf4ba  6a03                 push 3
// 005bf4bc  56                   push esi
// 005bf4bd  e8cee2ffff           call 0x5bd790
// 005bf4c2  57                   push edi
// 005bf4c3  56                   push esi
// 005bf4c4  8be8                 mov ebp, eax
// 005bf4c6  e8a5e2ffff           call 0x5bd770
// 005bf4cb  50                   push eax
// 005bf4cc  56                   push esi
// 005bf4cd  e8bee2ffff           call 0x5bd790
// 005bf4d2  50                   push eax
// 005bf4d3  55                   push ebp
// 005bf4d4  6834917b00           push 0x7b9134
// 005bf4d9  56                   push esi
// 005bf4da  e8b1e7ffff           call 0x5bdc90
// 005bf4df  50                   push eax
// 005bf4e0  57                   push edi
// 005bf4e1  56                   push esi
// 005bf4e2  e899fcffff           call 0x5bf180
// 005bf4e7  83c434               add esp, 0x34
// 005bf4ea  5d                   pop ebp
// 005bf4eb  8bc3                 mov eax, ebx
// 005bf4ed  5f                   pop edi
// 005bf4ee  5e                   pop esi
// 005bf4ef  5b                   pop ebx
// 005bf4f0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
