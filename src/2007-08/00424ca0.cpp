// roc 2007-08 00424ca0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424ca0
//
// 00424ca0  c701948b7800         mov dword ptr [ecx], 0x788b94
// 00424ca6  c74104888b7800       mov dword ptr [ecx + 4], 0x788b88
// 00424cad  c74110808b7800       mov dword ptr [ecx + 0x10], 0x788b80
// 00424cb4  c74114708b7800       mov dword ptr [ecx + 0x14], 0x788b70
// 00424cbb  c7412c608b7800       mov dword ptr [ecx + 0x2c], 0x788b60
// 00424cc2  c74144508b7800       mov dword ptr [ecx + 0x44], 0x788b50
// 00424cc9  c7415c408b7800       mov dword ptr [ecx + 0x5c], 0x788b40
// 00424cd0  c74174308b7800       mov dword ptr [ecx + 0x74], 0x788b30
// 00424cd7  c7818c000000208b7800 mov dword ptr [ecx + 0x8c], 0x788b20
// 00424ce1  e9cab51100           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
