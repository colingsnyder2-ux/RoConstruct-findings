// from server: 100% by auto
// roc 2009-06 006ba750  unit: RBX::UniversalTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba750
//
// 006ba750  53                   push ebx
// 006ba751  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ba755  85db                 test ebx, ebx
// 006ba757  7c4a                 jl 0x6ba7a3
// 006ba759  56                   push esi
// 006ba75a  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ba75e  8d860f270000         lea eax, [esi + 0x270f]
// 006ba764  57                   push edi
// 006ba765  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ba769  3d0f270000           cmp eax, 0x270f
// 006ba76e  770d                 ja 0x6ba77d
// 006ba770  57                   push edi
// 006ba771  e80ae6ffff           call 0x6b8d80
// 006ba776  83c404               add esp, 4
// 006ba779  8d740601             lea esi, [esi + eax + 1]
// 006ba77d  6a00                 push 0
// 006ba77f  56                   push esi
// 006ba780  57                   push edi
// 006ba781  e8eaeeffff           call 0x6b9670
// 006ba786  53                   push ebx
// 006ba787  56                   push esi
// 006ba788  57                   push edi
// 006ba789  e862f1ffff           call 0x6b98f0
// 006ba78e  53                   push ebx
// 006ba78f  57                   push edi
// 006ba790  e8cbebffff           call 0x6b9360
// 006ba795  6a00                 push 0
// 006ba797  56                   push esi
// 006ba798  57                   push edi
// 006ba799  e852f1ffff           call 0x6b98f0
// 006ba79e  83c42c               add esp, 0x2c
// 006ba7a1  5f                   pop edi
// 006ba7a2  5e                   pop esi
// 006ba7a3  5b                   pop ebx
// 006ba7a4  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
