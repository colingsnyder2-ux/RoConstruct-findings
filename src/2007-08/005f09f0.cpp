// roc 2007-08 005f09f0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f09f0
//
// 005f09f0  c7015c017c00         mov dword ptr [ecx], 0x7c015c
// 005f09f6  c7410454017c00       mov dword ptr [ecx + 4], 0x7c0154
// 005f09fd  c741104c017c00       mov dword ptr [ecx + 0x10], 0x7c014c
// 005f0a04  c741143c017c00       mov dword ptr [ecx + 0x14], 0x7c013c
// 005f0a0b  c7412c2c017c00       mov dword ptr [ecx + 0x2c], 0x7c012c
// 005f0a12  c741441c017c00       mov dword ptr [ecx + 0x44], 0x7c011c
// 005f0a19  c7415c0c017c00       mov dword ptr [ecx + 0x5c], 0x7c010c
// 005f0a20  c74174fc007c00       mov dword ptr [ecx + 0x74], 0x7c00fc
// 005f0a27  c7818c000000ec007c00 mov dword ptr [ecx + 0x8c], 0x7c00ec
// 005f0a31  e97af8f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
