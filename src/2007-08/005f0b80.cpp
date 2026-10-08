// roc 2007-08 005f0b80  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0b80
//
// 005f0b80  c701ac057c00         mov dword ptr [ecx], 0x7c05ac
// 005f0b86  c74104a4057c00       mov dword ptr [ecx + 4], 0x7c05a4
// 005f0b8d  c741109c057c00       mov dword ptr [ecx + 0x10], 0x7c059c
// 005f0b94  c741148c057c00       mov dword ptr [ecx + 0x14], 0x7c058c
// 005f0b9b  c7412c7c057c00       mov dword ptr [ecx + 0x2c], 0x7c057c
// 005f0ba2  c741446c057c00       mov dword ptr [ecx + 0x44], 0x7c056c
// 005f0ba9  c7415c5c057c00       mov dword ptr [ecx + 0x5c], 0x7c055c
// 005f0bb0  c741744c057c00       mov dword ptr [ecx + 0x74], 0x7c054c
// 005f0bb7  c7818c0000003c057c00 mov dword ptr [ecx + 0x8c], 0x7c053c
// 005f0bc1  e9eaf6f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
