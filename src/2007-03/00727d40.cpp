// roc 2007-03 00727d40  unit: seg_00720000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00727d40
//
// 00727d40  56                   push esi
// 00727d41  8bf1                 mov esi, ecx
// 00727d43  e858ffffff           call 0x727ca0
// 00727d48  8b4604               mov eax, dword ptr [esi + 4]
// 00727d4b  50                   push eax
// 00727d4c  e89f63efff           call 0x61e0f0
// 00727d51  83c404               add esp, 4
// 00727d54  c7460400000000       mov dword ptr [esi + 4], 0
// 00727d5b  5e                   pop esi
// 00727d5c  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
