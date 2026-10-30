// from server: 100% by auto
// roc 2010-06 007229b0  unit: RBX::UniversalTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007229b0
//
// 007229b0  53                   push ebx
// 007229b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007229b5  85db                 test ebx, ebx
// 007229b7  7c4a                 jl 0x722a03
// 007229b9  56                   push esi
// 007229ba  8b742410             mov esi, dword ptr [esp + 0x10]
// 007229be  8d860f270000         lea eax, [esi + 0x270f]
// 007229c4  57                   push edi
// 007229c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007229c9  3d0f270000           cmp eax, 0x270f
// 007229ce  770d                 ja 0x7229dd
// 007229d0  57                   push edi
// 007229d1  e87ae5ffff           call 0x720f50
// 007229d6  83c404               add esp, 4
// 007229d9  8d740601             lea esi, [esi + eax + 1]
// 007229dd  6a00                 push 0
// 007229df  56                   push esi
// 007229e0  57                   push edi
// 007229e1  e85aeeffff           call 0x721840
// 007229e6  53                   push ebx
// 007229e7  56                   push esi
// 007229e8  57                   push edi
// 007229e9  e8d2f0ffff           call 0x721ac0
// 007229ee  53                   push ebx
// 007229ef  57                   push edi
// 007229f0  e83bebffff           call 0x721530
// 007229f5  6a00                 push 0
// 007229f7  56                   push esi
// 007229f8  57                   push edi
// 007229f9  e8c2f0ffff           call 0x721ac0
// 007229fe  83c42c               add esp, 0x2c
// 00722a01  5f                   pop edi
// 00722a02  5e                   pop esi
// 00722a03  5b                   pop ebx
// 00722a04  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
