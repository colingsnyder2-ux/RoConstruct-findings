// roc 2007-08 005a2f70  unit: RBX::VTeams::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2f70
//
// 005a2f70  c701844c7b00         mov dword ptr [ecx], 0x7b4c84
// 005a2f76  c741047c4c7b00       mov dword ptr [ecx + 4], 0x7b4c7c
// 005a2f7d  c74110744c7b00       mov dword ptr [ecx + 0x10], 0x7b4c74
// 005a2f84  c74114644c7b00       mov dword ptr [ecx + 0x14], 0x7b4c64
// 005a2f8b  c7412c544c7b00       mov dword ptr [ecx + 0x2c], 0x7b4c54
// 005a2f92  c74144444c7b00       mov dword ptr [ecx + 0x44], 0x7b4c44
// 005a2f99  c7415c344c7b00       mov dword ptr [ecx + 0x5c], 0x7b4c34
// 005a2fa0  c74174244c7b00       mov dword ptr [ecx + 0x74], 0x7b4c24
// 005a2fa7  c7818c000000144c7b00 mov dword ptr [ecx + 0x8c], 0x7b4c14
// 005a2fb1  e9fad2f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
