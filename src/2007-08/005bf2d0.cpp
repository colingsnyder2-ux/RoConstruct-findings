// from server: 100% by auto
// roc 2007-08 005bf2d0  unit: boost::detail::H::?$sp_counted_impl_p  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf2d0
//
// 005bf2d0  56                   push esi
// 005bf2d1  8b742408             mov esi, dword ptr [esp + 8]
// 005bf2d5  57                   push edi
// 005bf2d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bf2da  57                   push edi
// 005bf2db  56                   push esi
// 005bf2dc  e88fe4ffff           call 0x5bd770
// 005bf2e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bf2e5  83c408               add esp, 8
// 005bf2e8  3bc1                 cmp eax, ecx
// 005bf2ea  7431                 je 0x5bf31d
// 005bf2ec  53                   push ebx
// 005bf2ed  51                   push ecx
// 005bf2ee  56                   push esi
// 005bf2ef  e89ce4ffff           call 0x5bd790
// 005bf2f4  57                   push edi
// 005bf2f5  56                   push esi
// 005bf2f6  8bd8                 mov ebx, eax
// 005bf2f8  e873e4ffff           call 0x5bd770
// 005bf2fd  50                   push eax
// 005bf2fe  56                   push esi
// 005bf2ff  e88ce4ffff           call 0x5bd790
// 005bf304  50                   push eax
// 005bf305  53                   push ebx
// 005bf306  6834917b00           push 0x7b9134
// 005bf30b  56                   push esi
// 005bf30c  e87fe9ffff           call 0x5bdc90
// 005bf311  50                   push eax
// 005bf312  57                   push edi
// 005bf313  56                   push esi
// 005bf314  e867feffff           call 0x5bf180
// 005bf319  83c434               add esp, 0x34
// 005bf31c  5b                   pop ebx
// 005bf31d  5f                   pop edi
// 005bf31e  5e                   pop esi
// 005bf31f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
