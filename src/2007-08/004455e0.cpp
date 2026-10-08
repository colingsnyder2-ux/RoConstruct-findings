// roc 2007-08 004455e0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004455e0
//
// 004455e0  c701bcfc7800         mov dword ptr [ecx], 0x78fcbc
// 004455e6  c74104b4fc7800       mov dword ptr [ecx + 4], 0x78fcb4
// 004455ed  c74110acfc7800       mov dword ptr [ecx + 0x10], 0x78fcac
// 004455f4  c741149cfc7800       mov dword ptr [ecx + 0x14], 0x78fc9c
// 004455fb  c7412c8cfc7800       mov dword ptr [ecx + 0x2c], 0x78fc8c
// 00445602  c741447cfc7800       mov dword ptr [ecx + 0x44], 0x78fc7c
// 00445609  c7415c6cfc7800       mov dword ptr [ecx + 0x5c], 0x78fc6c
// 00445610  c741745cfc7800       mov dword ptr [ecx + 0x74], 0x78fc5c
// 00445617  c7818c0000004cfc7800 mov dword ptr [ecx + 0x8c], 0x78fc4c
// 00445621  e98aac0f00           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
