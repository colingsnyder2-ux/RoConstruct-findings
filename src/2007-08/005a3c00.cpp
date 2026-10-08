// roc 2007-08 005a3c00  unit: RBX::VTeams::?$BoundFuncDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3c00
//
// 005a3c00  c701a44f7b00         mov dword ptr [ecx], 0x7b4fa4
// 005a3c06  c741049c4f7b00       mov dword ptr [ecx + 4], 0x7b4f9c
// 005a3c0d  c74110944f7b00       mov dword ptr [ecx + 0x10], 0x7b4f94
// 005a3c14  c74114844f7b00       mov dword ptr [ecx + 0x14], 0x7b4f84
// 005a3c1b  c7412c744f7b00       mov dword ptr [ecx + 0x2c], 0x7b4f74
// 005a3c22  c74144644f7b00       mov dword ptr [ecx + 0x44], 0x7b4f64
// 005a3c29  c7415c544f7b00       mov dword ptr [ecx + 0x5c], 0x7b4f54
// 005a3c30  c74174444f7b00       mov dword ptr [ecx + 0x74], 0x7b4f44
// 005a3c37  c7818c000000344f7b00 mov dword ptr [ecx + 0x8c], 0x7b4f34
// 005a3c41  e96ac6f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
