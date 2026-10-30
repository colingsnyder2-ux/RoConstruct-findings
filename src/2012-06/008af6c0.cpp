// roc 2012-06 008af6c0  unit: RBX::Flag  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af6c0
//
// 008af6c0  56                   push esi
// 008af6c1  8b742408             mov esi, dword ptr [esp + 8]
// 008af6c5  57                   push edi
// 008af6c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008af6ca  3bf7                 cmp esi, edi
// 008af6cc  7415                 je 0x8af6e3
// 008af6ce  53                   push ebx
// 008af6cf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008af6d3  53                   push ebx
// 008af6d4  8bce                 mov ecx, esi
// 008af6d6  e8b5fdffff           call 0x8af490
// 008af6db  83c610               add esi, 0x10
// 008af6de  3bf7                 cmp esi, edi
// 008af6e0  75f1                 jne 0x8af6d3
// 008af6e2  5b                   pop ebx
// 008af6e3  5f                   pop edi
// 008af6e4  5e                   pop esi
// 008af6e5  c3                   ret 
// library ogre-1.7.0/OgreScriptLexer.cpp (function ??$_Fill@PAV?$SharedPtr@UScriptToken@Ogre@@@Ogre@@V12@@std@@YAXPAV?$SharedPtr@UScriptToken@Ogre@@@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptLexer.cpp
