// roc 2007-03 0048d470  unit: seg_00480000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048d470
//
// 0048d470  56                   push esi
// 0048d471  8bf1                 mov esi, ecx
// 0048d473  e8e8fcffff           call 0x48d160
// 0048d478  8b4604               mov eax, dword ptr [esi + 4]
// 0048d47b  50                   push eax
// 0048d47c  e86f0c1900           call 0x61e0f0
// 0048d481  83c404               add esp, 4
// 0048d484  c7460400000000       mov dword ptr [esi + 4], 0
// 0048d48b  5e                   pop esi
// 0048d48c  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
