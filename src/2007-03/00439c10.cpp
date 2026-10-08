// roc 2007-03 00439c10  unit: seg_00430000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439c10
//
// 00439c10  83ec08               sub esp, 8
// 00439c13  53                   push ebx
// 00439c14  55                   push ebp
// 00439c15  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00439c1b  56                   push esi
// 00439c1c  8bf1                 mov esi, ecx
// 00439c1e  57                   push edi
// 00439c1f  8b7e08               mov edi, dword ptr [esi + 8]
// 00439c22  397e04               cmp dword ptr [esi + 4], edi
// 00439c25  7602                 jbe 0x439c29
// 00439c27  ffd5                 call ebp
// 00439c29  8b5e04               mov ebx, dword ptr [esi + 4]
// 00439c2c  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00439c2f  7602                 jbe 0x439c33
// 00439c31  ffd5                 call ebp
// 00439c33  57                   push edi
// 00439c34  56                   push esi
// 00439c35  53                   push ebx
// 00439c36  56                   push esi
// 00439c37  8d442420             lea eax, [esp + 0x20]
// 00439c3b  50                   push eax
// 00439c3c  8bce                 mov ecx, esi
// 00439c3e  e87daf0000           call 0x444bc0
// 00439c43  5f                   pop edi
// 00439c44  5e                   pop esi
// 00439c45  5d                   pop ebp
// 00439c46  5b                   pop ebx
// 00439c47  83c408               add esp, 8
// 00439c4a  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ?clear@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
