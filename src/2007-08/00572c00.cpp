// roc 2007-08 00572c00  unit: RBX::VDecal::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572c00
//
// 00572c00  c7012ca37a00         mov dword ptr [ecx], 0x7aa32c
// 00572c06  c7410424a37a00       mov dword ptr [ecx + 4], 0x7aa324
// 00572c0d  c741101ca37a00       mov dword ptr [ecx + 0x10], 0x7aa31c
// 00572c14  c741140ca37a00       mov dword ptr [ecx + 0x14], 0x7aa30c
// 00572c1b  c7412cfca27a00       mov dword ptr [ecx + 0x2c], 0x7aa2fc
// 00572c22  c74144eca27a00       mov dword ptr [ecx + 0x44], 0x7aa2ec
// 00572c29  c7415cdca27a00       mov dword ptr [ecx + 0x5c], 0x7aa2dc
// 00572c30  c74174cca27a00       mov dword ptr [ecx + 0x74], 0x7aa2cc
// 00572c37  c7818c000000bca27a00 mov dword ptr [ecx + 0x8c], 0x7aa2bc
// 00572c41  e9fafeffff           jmp 0x572b40
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
