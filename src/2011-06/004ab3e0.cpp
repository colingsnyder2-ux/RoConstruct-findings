// roc 2011-06 004ab3e0  unit: RBX::Network::Player  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ab3e0
//
// 004ab3e0  56                   push esi
// 004ab3e1  8d7104               lea esi, [ecx + 4]
// 004ab3e4  8bce                 mov ecx, esi
// 004ab3e6  e8a5d7ffff           call 0x4a8b90
// 004ab3eb  8b4604               mov eax, dword ptr [esi + 4]
// 004ab3ee  50                   push eax
// 004ab3ef  e864ec3500           call 0x80a058
// 004ab3f4  83c404               add esp, 4
// 004ab3f7  c7460400000000       mov dword ptr [esi + 4], 0
// 004ab3fe  5e                   pop esi
// 004ab3ff  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
