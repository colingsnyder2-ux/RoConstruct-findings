// roc 2012-06 005b2600  unit: std::Vbad_alloc::U?$error_info_injector::?$clone_impl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b2600
//
// 005b2600  56                   push esi
// 005b2601  8d7104               lea esi, [ecx + 4]
// 005b2604  8bce                 mov ecx, esi
// 005b2606  e8e5402c00           call 0x8766f0
// 005b260b  8b4604               mov eax, dword ptr [esi + 4]
// 005b260e  50                   push eax
// 005b260f  e800fb3c00           call 0x982114
// 005b2614  83c404               add esp, 4
// 005b2617  c7460400000000       mov dword ptr [esi + 4], 0
// 005b261e  5e                   pop esi
// 005b261f  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
