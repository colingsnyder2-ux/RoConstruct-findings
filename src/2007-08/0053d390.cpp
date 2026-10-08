// roc 2007-08 0053d390  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d390
//
// 0053d390  c701f45d7a00         mov dword ptr [ecx], 0x7a5df4
// 0053d396  c74104ec5d7a00       mov dword ptr [ecx + 4], 0x7a5dec
// 0053d39d  c74110e45d7a00       mov dword ptr [ecx + 0x10], 0x7a5de4
// 0053d3a4  c74114d45d7a00       mov dword ptr [ecx + 0x14], 0x7a5dd4
// 0053d3ab  c7412cc45d7a00       mov dword ptr [ecx + 0x2c], 0x7a5dc4
// 0053d3b2  c74144b45d7a00       mov dword ptr [ecx + 0x44], 0x7a5db4
// 0053d3b9  c7415ca45d7a00       mov dword ptr [ecx + 0x5c], 0x7a5da4
// 0053d3c0  c74174945d7a00       mov dword ptr [ecx + 0x74], 0x7a5d94
// 0053d3c7  c7818c000000845d7a00 mov dword ptr [ecx + 0x8c], 0x7a5d84
// 0053d3d1  e9da2e0000           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
