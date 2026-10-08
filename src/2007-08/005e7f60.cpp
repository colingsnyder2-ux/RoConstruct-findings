// roc 2007-08 005e7f60  unit: RBX::Explosion  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7f60
//
// 005e7f60  c701ecd87b00         mov dword ptr [ecx], 0x7bd8ec
// 005e7f66  c74104e4d87b00       mov dword ptr [ecx + 4], 0x7bd8e4
// 005e7f6d  c74110dcd87b00       mov dword ptr [ecx + 0x10], 0x7bd8dc
// 005e7f74  c74114ccd87b00       mov dword ptr [ecx + 0x14], 0x7bd8cc
// 005e7f7b  c7412cbcd87b00       mov dword ptr [ecx + 0x2c], 0x7bd8bc
// 005e7f82  c74144acd87b00       mov dword ptr [ecx + 0x44], 0x7bd8ac
// 005e7f89  c7415c9cd87b00       mov dword ptr [ecx + 0x5c], 0x7bd89c
// 005e7f90  c741748cd87b00       mov dword ptr [ecx + 0x74], 0x7bd88c
// 005e7f97  c7818c0000007cd87b00 mov dword ptr [ecx + 0x8c], 0x7bd87c
// 005e7fa1  e90a83f5ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
