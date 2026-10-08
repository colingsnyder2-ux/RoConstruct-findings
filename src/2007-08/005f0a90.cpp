// roc 2007-08 005f0a90  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0a90
//
// 005f0a90  c701cc027c00         mov dword ptr [ecx], 0x7c02cc
// 005f0a96  c74104c4027c00       mov dword ptr [ecx + 4], 0x7c02c4
// 005f0a9d  c74110bc027c00       mov dword ptr [ecx + 0x10], 0x7c02bc
// 005f0aa4  c74114ac027c00       mov dword ptr [ecx + 0x14], 0x7c02ac
// 005f0aab  c7412c9c027c00       mov dword ptr [ecx + 0x2c], 0x7c029c
// 005f0ab2  c741448c027c00       mov dword ptr [ecx + 0x44], 0x7c028c
// 005f0ab9  c7415c7c027c00       mov dword ptr [ecx + 0x5c], 0x7c027c
// 005f0ac0  c741746c027c00       mov dword ptr [ecx + 0x74], 0x7c026c
// 005f0ac7  c7818c0000005c027c00 mov dword ptr [ecx + 0x8c], 0x7c025c
// 005f0ad1  e9daf7f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
