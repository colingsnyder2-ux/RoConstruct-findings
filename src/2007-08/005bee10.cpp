// from server: 100% by auto
// roc 2007-08 005bee10  unit: boost::detail::H::?$sp_counted_impl_p  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bee10
//
// 005bee10  53                   push ebx
// 005bee11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bee15  85db                 test ebx, ebx
// 005bee17  7c4a                 jl 0x5bee63
// 005bee19  56                   push esi
// 005bee1a  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bee1e  8d860f270000         lea eax, [esi + 0x270f]
// 005bee24  3d0f270000           cmp eax, 0x270f
// 005bee29  57                   push edi
// 005bee2a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bee2e  770d                 ja 0x5bee3d
// 005bee30  57                   push edi
// 005bee31  e84ae7ffff           call 0x5bd580
// 005bee36  83c404               add esp, 4
// 005bee39  8d740601             lea esi, [esi + eax + 1]
// 005bee3d  6a00                 push 0
// 005bee3f  56                   push esi
// 005bee40  57                   push edi
// 005bee41  e85af0ffff           call 0x5bdea0
// 005bee46  53                   push ebx
// 005bee47  56                   push esi
// 005bee48  57                   push edi
// 005bee49  e8a2f2ffff           call 0x5be0f0
// 005bee4e  53                   push ebx
// 005bee4f  57                   push edi
// 005bee50  e83bedffff           call 0x5bdb90
// 005bee55  6a00                 push 0
// 005bee57  56                   push esi
// 005bee58  57                   push edi
// 005bee59  e892f2ffff           call 0x5be0f0
// 005bee5e  83c42c               add esp, 0x2c
// 005bee61  5f                   pop edi
// 005bee62  5e                   pop esi
// 005bee63  5b                   pop ebx
// 005bee64  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
