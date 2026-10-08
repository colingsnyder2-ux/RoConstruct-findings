// from server: 100% by auto
// roc 2007-08 005bf350  unit: boost::detail::H::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf350
//
// 005bf350  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bf354  53                   push ebx
// 005bf355  56                   push esi
// 005bf356  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf35a  57                   push edi
// 005bf35b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bf35f  50                   push eax
// 005bf360  57                   push edi
// 005bf361  56                   push esi
// 005bf362  e819e6ffff           call 0x5bd980
// 005bf367  8bd8                 mov ebx, eax
// 005bf369  83c40c               add esp, 0xc
// 005bf36c  85db                 test ebx, ebx
// 005bf36e  7534                 jne 0x5bf3a4
// 005bf370  55                   push ebp
// 005bf371  6a04                 push 4
// 005bf373  56                   push esi
// 005bf374  e817e4ffff           call 0x5bd790
// 005bf379  57                   push edi
// 005bf37a  56                   push esi
// 005bf37b  8be8                 mov ebp, eax
// 005bf37d  e8eee3ffff           call 0x5bd770
// 005bf382  50                   push eax
// 005bf383  56                   push esi
// 005bf384  e807e4ffff           call 0x5bd790
// 005bf389  50                   push eax
// 005bf38a  55                   push ebp
// 005bf38b  6834917b00           push 0x7b9134
// 005bf390  56                   push esi
// 005bf391  e8fae8ffff           call 0x5bdc90
// 005bf396  50                   push eax
// 005bf397  57                   push edi
// 005bf398  56                   push esi
// 005bf399  e8e2fdffff           call 0x5bf180
// 005bf39e  83c434               add esp, 0x34
// 005bf3a1  8bc3                 mov eax, ebx
// 005bf3a3  5d                   pop ebp
// 005bf3a4  5f                   pop edi
// 005bf3a5  5e                   pop esi
// 005bf3a6  5b                   pop ebx
// 005bf3a7  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
