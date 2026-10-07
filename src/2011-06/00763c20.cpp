// roc 2011-06 00763c20  unit: seg_00760000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763c20
//
// 00763c20  53                   push ebx
// 00763c21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00763c25  85db                 test ebx, ebx
// 00763c27  7c4a                 jl 0x763c73
// 00763c29  56                   push esi
// 00763c2a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00763c2e  8d860f270000         lea eax, [esi + 0x270f]
// 00763c34  57                   push edi
// 00763c35  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00763c39  3d0f270000           cmp eax, 0x270f
// 00763c3e  770d                 ja 0x763c4d
// 00763c40  57                   push edi
// 00763c41  e81ae7ffff           call 0x762360
// 00763c46  83c404               add esp, 4
// 00763c49  8d740601             lea esi, [esi + eax + 1]
// 00763c4d  6a00                 push 0
// 00763c4f  56                   push esi
// 00763c50  57                   push edi
// 00763c51  e8faefffff           call 0x762c50
// 00763c56  53                   push ebx
// 00763c57  56                   push esi
// 00763c58  57                   push edi
// 00763c59  e872f2ffff           call 0x762ed0
// 00763c5e  53                   push ebx
// 00763c5f  57                   push edi
// 00763c60  e8dbecffff           call 0x762940
// 00763c65  6a00                 push 0
// 00763c67  56                   push esi
// 00763c68  57                   push edi
// 00763c69  e862f2ffff           call 0x762ed0
// 00763c6e  83c42c               add esp, 0x2c
// 00763c71  5f                   pop edi
// 00763c72  5e                   pop esi
// 00763c73  5b                   pop ebx
// 00763c74  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
