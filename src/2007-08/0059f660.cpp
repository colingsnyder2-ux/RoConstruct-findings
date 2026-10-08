// roc 2007-08 0059f660  unit: RBX::VBackpack::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f660
//
// 0059f660  c70184317b00         mov dword ptr [ecx], 0x7b3184
// 0059f666  c741047c317b00       mov dword ptr [ecx + 4], 0x7b317c
// 0059f66d  c7411074317b00       mov dword ptr [ecx + 0x10], 0x7b3174
// 0059f674  c7411464317b00       mov dword ptr [ecx + 0x14], 0x7b3164
// 0059f67b  c7412c54317b00       mov dword ptr [ecx + 0x2c], 0x7b3154
// 0059f682  c7414444317b00       mov dword ptr [ecx + 0x44], 0x7b3144
// 0059f689  c7415c34317b00       mov dword ptr [ecx + 0x5c], 0x7b3134
// 0059f690  c7417424317b00       mov dword ptr [ecx + 0x74], 0x7b3124
// 0059f697  c7818c00000014317b00 mov dword ptr [ecx + 0x8c], 0x7b3114
// 0059f6a1  e90a0cfaff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
