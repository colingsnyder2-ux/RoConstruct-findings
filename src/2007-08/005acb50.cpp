// roc 2007-08 005acb50  unit: RBX::Lighting  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acb50
//
// 005acb50  c70194597b00         mov dword ptr [ecx], 0x7b5994
// 005acb56  c741048c597b00       mov dword ptr [ecx + 4], 0x7b598c
// 005acb5d  c7411084597b00       mov dword ptr [ecx + 0x10], 0x7b5984
// 005acb64  c7411474597b00       mov dword ptr [ecx + 0x14], 0x7b5974
// 005acb6b  c7412c64597b00       mov dword ptr [ecx + 0x2c], 0x7b5964
// 005acb72  c7414454597b00       mov dword ptr [ecx + 0x44], 0x7b5954
// 005acb79  c7415c44597b00       mov dword ptr [ecx + 0x5c], 0x7b5944
// 005acb80  c7417434597b00       mov dword ptr [ecx + 0x74], 0x7b5934
// 005acb87  c7818c00000024597b00 mov dword ptr [ecx + 0x8c], 0x7b5924
// 005acb91  e91a37f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
