// roc 2007-08 005a1d90  unit: RBX::Skin  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1d90
//
// 005a1d90  c701ec3f7b00         mov dword ptr [ecx], 0x7b3fec
// 005a1d96  c74104e03f7b00       mov dword ptr [ecx + 4], 0x7b3fe0
// 005a1d9d  c74110d83f7b00       mov dword ptr [ecx + 0x10], 0x7b3fd8
// 005a1da4  c74114c83f7b00       mov dword ptr [ecx + 0x14], 0x7b3fc8
// 005a1dab  c7412cb83f7b00       mov dword ptr [ecx + 0x2c], 0x7b3fb8
// 005a1db2  c74144a83f7b00       mov dword ptr [ecx + 0x44], 0x7b3fa8
// 005a1db9  c7415c983f7b00       mov dword ptr [ecx + 0x5c], 0x7b3f98
// 005a1dc0  c74174883f7b00       mov dword ptr [ecx + 0x74], 0x7b3f88
// 005a1dc7  c7818c000000783f7b00 mov dword ptr [ecx + 0x8c], 0x7b3f78
// 005a1dd1  e9dae4f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
