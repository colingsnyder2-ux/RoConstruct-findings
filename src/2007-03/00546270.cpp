// roc 2007-03 00546270  unit: seg_00540000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00546270
//
// 00546270  56                   push esi
// 00546271  8bf1                 mov esi, ecx
// 00546273  e8d8fcffff           call 0x545f50
// 00546278  8b4604               mov eax, dword ptr [esi + 4]
// 0054627b  50                   push eax
// 0054627c  e86f7e0d00           call 0x61e0f0
// 00546281  83c404               add esp, 4
// 00546284  c7460400000000       mov dword ptr [esi + 4], 0
// 0054628b  5e                   pop esi
// 0054628c  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
