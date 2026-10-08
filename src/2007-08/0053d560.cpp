// roc 2007-08 0053d560  unit: RBX::Script  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d560
//
// 0053d560  c701ac5f7a00         mov dword ptr [ecx], 0x7a5fac
// 0053d566  c74104a45f7a00       mov dword ptr [ecx + 4], 0x7a5fa4
// 0053d56d  c741109c5f7a00       mov dword ptr [ecx + 0x10], 0x7a5f9c
// 0053d574  c741148c5f7a00       mov dword ptr [ecx + 0x14], 0x7a5f8c
// 0053d57b  c7412c7c5f7a00       mov dword ptr [ecx + 0x2c], 0x7a5f7c
// 0053d582  c741446c5f7a00       mov dword ptr [ecx + 0x44], 0x7a5f6c
// 0053d589  c7415c5c5f7a00       mov dword ptr [ecx + 0x5c], 0x7a5f5c
// 0053d590  c741744c5f7a00       mov dword ptr [ecx + 0x74], 0x7a5f4c
// 0053d597  c7818c0000003c5f7a00 mov dword ptr [ecx + 0x8c], 0x7a5f3c
// 0053d5a1  e93afeffff           jmp 0x53d3e0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
