// roc 2007-08 005a1ec0  unit: RBX::BodyColors  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1ec0
//
// 005a1ec0  c701ac417b00         mov dword ptr [ecx], 0x7b41ac
// 005a1ec6  c74104a0417b00       mov dword ptr [ecx + 4], 0x7b41a0
// 005a1ecd  c7411098417b00       mov dword ptr [ecx + 0x10], 0x7b4198
// 005a1ed4  c7411488417b00       mov dword ptr [ecx + 0x14], 0x7b4188
// 005a1edb  c7412c78417b00       mov dword ptr [ecx + 0x2c], 0x7b4178
// 005a1ee2  c7414468417b00       mov dword ptr [ecx + 0x44], 0x7b4168
// 005a1ee9  c7415c58417b00       mov dword ptr [ecx + 0x5c], 0x7b4158
// 005a1ef0  c7417448417b00       mov dword ptr [ecx + 0x74], 0x7b4148
// 005a1ef7  c7818c00000038417b00 mov dword ptr [ecx + 0x8c], 0x7b4138
// 005a1f01  e92afcffff           jmp 0x5a1b30
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
