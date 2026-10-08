// roc 2007-03 0042d1f0  unit: seg_00420000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042d1f0
//
// 0042d1f0  56                   push esi
// 0042d1f1  8bf1                 mov esi, ecx
// 0042d1f3  e8c8300700           call 0x4a02c0
// 0042d1f8  8b4604               mov eax, dword ptr [esi + 4]
// 0042d1fb  50                   push eax
// 0042d1fc  e8ef0e1f00           call 0x61e0f0
// 0042d201  83c404               add esp, 4
// 0042d204  c7460400000000       mov dword ptr [esi + 4], 0
// 0042d20b  5e                   pop esi
// 0042d20c  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
