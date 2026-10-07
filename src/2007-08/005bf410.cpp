// roc 2007-08 005bf410  unit: boost::detail::H::?$sp_counted_impl_p  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf410
//
// 005bf410  83ec08               sub esp, 8
// 005bf413  56                   push esi
// 005bf414  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bf418  57                   push edi
// 005bf419  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bf41d  57                   push edi
// 005bf41e  56                   push esi
// 005bf41f  e8ace4ffff           call 0x5bd8d0
// 005bf424  dd542410             fst qword ptr [esp + 0x10]
// 005bf428  d9ee                 fldz 
// 005bf42a  83c408               add esp, 8
// 005bf42d  dde9                 fucomp st(1)
// 005bf42f  dfe0                 fnstsw ax
// 005bf431  f6c444               test ah, 0x44
// 005bf434  7a46                 jp 0x5bf47c
// 005bf436  57                   push edi
// 005bf437  ddd8                 fstp st(0)
// 005bf439  56                   push esi
// 005bf43a  e8a1e3ffff           call 0x5bd7e0
// 005bf43f  83c408               add esp, 8
// 005bf442  85c0                 test eax, eax
// 005bf444  7532                 jne 0x5bf478
// 005bf446  53                   push ebx
// 005bf447  6a03                 push 3
// 005bf449  56                   push esi
// 005bf44a  e841e3ffff           call 0x5bd790
// 005bf44f  57                   push edi
// 005bf450  56                   push esi
// 005bf451  8bd8                 mov ebx, eax
// 005bf453  e818e3ffff           call 0x5bd770
// 005bf458  50                   push eax
// 005bf459  56                   push esi
// 005bf45a  e831e3ffff           call 0x5bd790
// 005bf45f  50                   push eax
// 005bf460  53                   push ebx
// 005bf461  6834917b00           push 0x7b9134
// 005bf466  56                   push esi
// 005bf467  e824e8ffff           call 0x5bdc90
// 005bf46c  50                   push eax
// 005bf46d  57                   push edi
// 005bf46e  56                   push esi
// 005bf46f  e80cfdffff           call 0x5bf180
// 005bf474  83c434               add esp, 0x34
// 005bf477  5b                   pop ebx
// 005bf478  dd442408             fld qword ptr [esp + 8]
// 005bf47c  5f                   pop edi
// 005bf47d  5e                   pop esi
// 005bf47e  83c408               add esp, 8
// 005bf481  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checknumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
