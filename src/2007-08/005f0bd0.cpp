// roc 2007-08 005f0bd0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0bd0
//
// 005f0bd0  c70164067c00         mov dword ptr [ecx], 0x7c0664
// 005f0bd6  c741045c067c00       mov dword ptr [ecx + 4], 0x7c065c
// 005f0bdd  c7411054067c00       mov dword ptr [ecx + 0x10], 0x7c0654
// 005f0be4  c7411444067c00       mov dword ptr [ecx + 0x14], 0x7c0644
// 005f0beb  c7412c34067c00       mov dword ptr [ecx + 0x2c], 0x7c0634
// 005f0bf2  c7414424067c00       mov dword ptr [ecx + 0x44], 0x7c0624
// 005f0bf9  c7415c14067c00       mov dword ptr [ecx + 0x5c], 0x7c0614
// 005f0c00  c7417404067c00       mov dword ptr [ecx + 0x74], 0x7c0604
// 005f0c07  c7818c000000f4057c00 mov dword ptr [ecx + 0x8c], 0x7c05f4
// 005f0c11  e99af6f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
