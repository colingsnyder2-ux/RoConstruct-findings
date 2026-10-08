// roc 2007-08 005726d0  unit: RBX::VDecal::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005726d0
//
// 005726d0  c7011ca27a00         mov dword ptr [ecx], 0x7aa21c
// 005726d6  c7410414a27a00       mov dword ptr [ecx + 4], 0x7aa214
// 005726dd  c741100ca27a00       mov dword ptr [ecx + 0x10], 0x7aa20c
// 005726e4  c74114fca17a00       mov dword ptr [ecx + 0x14], 0x7aa1fc
// 005726eb  c7412ceca17a00       mov dword ptr [ecx + 0x2c], 0x7aa1ec
// 005726f2  c74144dca17a00       mov dword ptr [ecx + 0x44], 0x7aa1dc
// 005726f9  c7415ccca17a00       mov dword ptr [ecx + 0x5c], 0x7aa1cc
// 00572700  c74174bca17a00       mov dword ptr [ecx + 0x74], 0x7aa1bc
// 00572707  c7818c000000aca17a00 mov dword ptr [ecx + 0x8c], 0x7aa1ac
// 00572711  e99adbfcff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
