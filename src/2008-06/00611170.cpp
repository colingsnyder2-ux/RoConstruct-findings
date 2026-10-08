// from server: 100% by auto
// roc 2008-06 00611170  unit: RBX::BlockBlockContact  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611170
//
// 00611170  53                   push ebx
// 00611171  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00611175  85db                 test ebx, ebx
// 00611177  7c4a                 jl 0x6111c3
// 00611179  56                   push esi
// 0061117a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061117e  8d860f270000         lea eax, [esi + 0x270f]
// 00611184  57                   push edi
// 00611185  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00611189  3d0f270000           cmp eax, 0x270f
// 0061118e  770d                 ja 0x61119d
// 00611190  57                   push edi
// 00611191  e87a0a0000           call 0x611c10
// 00611196  83c404               add esp, 4
// 00611199  8d740601             lea esi, [esi + eax + 1]
// 0061119d  6a00                 push 0
// 0061119f  56                   push esi
// 006111a0  57                   push edi
// 006111a1  e88a130000           call 0x612530
// 006111a6  53                   push ebx
// 006111a7  56                   push esi
// 006111a8  57                   push edi
// 006111a9  e8d2150000           call 0x612780
// 006111ae  53                   push ebx
// 006111af  57                   push edi
// 006111b0  e86b100000           call 0x612220
// 006111b5  6a00                 push 0
// 006111b7  56                   push esi
// 006111b8  57                   push edi
// 006111b9  e8c2150000           call 0x612780
// 006111be  83c42c               add esp, 0x2c
// 006111c1  5f                   pop edi
// 006111c2  5e                   pop esi
// 006111c3  5b                   pop ebx
// 006111c4  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
