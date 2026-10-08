// roc 2007-03 0048d8c0  unit: seg_00480000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048d8c0
//
// 0048d8c0  56                   push esi
// 0048d8c1  8bf1                 mov esi, ecx
// 0048d8c3  e828fdffff           call 0x48d5f0
// 0048d8c8  8b4604               mov eax, dword ptr [esi + 4]
// 0048d8cb  50                   push eax
// 0048d8cc  e81f081900           call 0x61e0f0
// 0048d8d1  83c404               add esp, 4
// 0048d8d4  c7460400000000       mov dword ptr [esi + 4], 0
// 0048d8db  5e                   pop esi
// 0048d8dc  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
