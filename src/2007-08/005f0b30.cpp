// roc 2007-08 005f0b30  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0b30
//
// 005f0b30  c7013c047c00         mov dword ptr [ecx], 0x7c043c
// 005f0b36  c7410434047c00       mov dword ptr [ecx + 4], 0x7c0434
// 005f0b3d  c741102c047c00       mov dword ptr [ecx + 0x10], 0x7c042c
// 005f0b44  c741141c047c00       mov dword ptr [ecx + 0x14], 0x7c041c
// 005f0b4b  c7412c0c047c00       mov dword ptr [ecx + 0x2c], 0x7c040c
// 005f0b52  c74144fc037c00       mov dword ptr [ecx + 0x44], 0x7c03fc
// 005f0b59  c7415cec037c00       mov dword ptr [ecx + 0x5c], 0x7c03ec
// 005f0b60  c74174dc037c00       mov dword ptr [ecx + 0x74], 0x7c03dc
// 005f0b67  c7818c000000cc037c00 mov dword ptr [ecx + 0x8c], 0x7c03cc
// 005f0b71  e93af7f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
