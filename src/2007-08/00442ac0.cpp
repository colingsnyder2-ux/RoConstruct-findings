// roc 2007-08 00442ac0  unit: RBX::Reflection::Metadata::Members  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442ac0
//
// 00442ac0  c7010cf67800         mov dword ptr [ecx], 0x78f60c
// 00442ac6  c7410404f67800       mov dword ptr [ecx + 4], 0x78f604
// 00442acd  c74110fcf57800       mov dword ptr [ecx + 0x10], 0x78f5fc
// 00442ad4  c74114ecf57800       mov dword ptr [ecx + 0x14], 0x78f5ec
// 00442adb  c7412cdcf57800       mov dword ptr [ecx + 0x2c], 0x78f5dc
// 00442ae2  c74144ccf57800       mov dword ptr [ecx + 0x44], 0x78f5cc
// 00442ae9  c7415cbcf57800       mov dword ptr [ecx + 0x5c], 0x78f5bc
// 00442af0  c74174acf57800       mov dword ptr [ecx + 0x74], 0x78f5ac
// 00442af7  c7818c0000009cf57800 mov dword ptr [ecx + 0x8c], 0x78f59c
// 00442b01  e9aad70f00           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
