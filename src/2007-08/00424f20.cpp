// roc 2007-08 00424f20  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424f20
//
// 00424f20  c7016c8c7800         mov dword ptr [ecx], 0x788c6c
// 00424f26  c74104608c7800       mov dword ptr [ecx + 4], 0x788c60
// 00424f2d  c74110588c7800       mov dword ptr [ecx + 0x10], 0x788c58
// 00424f34  c74114488c7800       mov dword ptr [ecx + 0x14], 0x788c48
// 00424f3b  c7412c388c7800       mov dword ptr [ecx + 0x2c], 0x788c38
// 00424f42  c74144288c7800       mov dword ptr [ecx + 0x44], 0x788c28
// 00424f49  c7415c188c7800       mov dword ptr [ecx + 0x5c], 0x788c18
// 00424f50  c74174088c7800       mov dword ptr [ecx + 0x74], 0x788c08
// 00424f57  c7818c000000f88b7800 mov dword ptr [ecx + 0x8c], 0x788bf8
// 00424f61  e94ab31100           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
