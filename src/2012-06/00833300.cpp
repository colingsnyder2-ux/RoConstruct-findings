// from server: 100% by auto
// roc 2012-06 00833300  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833300
//
// 00833300  53                   push ebx
// 00833301  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00833305  8d830f270000         lea eax, [ebx + 0x270f]
// 0083330b  56                   push esi
// 0083330c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00833310  3d0f270000           cmp eax, 0x270f
// 00833315  770d                 ja 0x833324
// 00833317  56                   push esi
// 00833318  e8d3e7ffff           call 0x831af0
// 0083331d  83c404               add esp, 4
// 00833320  8d5c0301             lea ebx, [ebx + eax + 1]
// 00833324  6aff                 push -1
// 00833326  56                   push esi
// 00833327  e8b4e9ffff           call 0x831ce0
// 0083332c  83c408               add esp, 8
// 0083332f  85c0                 test eax, eax
// 00833331  7511                 jne 0x833344
// 00833333  6afe                 push -2
// 00833335  56                   push esi
// 00833336  e8c5e7ffff           call 0x831b00
// 0083333b  83c408               add esp, 8
// 0083333e  5e                   pop esi
// 0083333f  83c8ff               or eax, 0xffffffff
// 00833342  5b                   pop ebx
// 00833343  c3                   ret 
// 00833344  57                   push edi
// 00833345  6a00                 push 0
// 00833347  53                   push ebx
// 00833348  56                   push esi
// 00833349  e892f0ffff           call 0x8323e0
// 0083334e  6aff                 push -1
// 00833350  56                   push esi
// 00833351  e82aebffff           call 0x831e80
// 00833356  6afe                 push -2
// 00833358  56                   push esi
// 00833359  8bf8                 mov edi, eax
// 0083335b  e8a0e7ffff           call 0x831b00
// 00833360  83c41c               add esp, 0x1c
// 00833363  85ff                 test edi, edi
// 00833365  7425                 je 0x83338c
// 00833367  57                   push edi
// 00833368  53                   push ebx
// 00833369  56                   push esi
// 0083336a  e871f0ffff           call 0x8323e0
// 0083336f  6a00                 push 0
// 00833371  53                   push ebx
// 00833372  56                   push esi
// 00833373  e8e8f2ffff           call 0x832660
// 00833378  83c418               add esp, 0x18
// 0083337b  57                   push edi
// 0083337c  53                   push ebx
// 0083337d  56                   push esi
// 0083337e  e8ddf2ffff           call 0x832660
// 00833383  83c40c               add esp, 0xc
// 00833386  8bc7                 mov eax, edi
// 00833388  5f                   pop edi
// 00833389  5e                   pop esi
// 0083338a  5b                   pop ebx
// 0083338b  c3                   ret 
// 0083338c  53                   push ebx
// 0083338d  56                   push esi
// 0083338e  e8cdebffff           call 0x831f60
// 00833393  8bf8                 mov edi, eax
// 00833395  83c408               add esp, 8
// 00833398  47                   inc edi
// 00833399  57                   push edi
// 0083339a  53                   push ebx
// 0083339b  56                   push esi
// 0083339c  e8bff2ffff           call 0x832660
// 008333a1  83c40c               add esp, 0xc
// 008333a4  8bc7                 mov eax, edi
// 008333a6  5f                   pop edi
// 008333a7  5e                   pop esi
// 008333a8  5b                   pop ebx
// 008333a9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
