// roc 2007-08 00579720  unit: RBX::PartInstance  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579720
//
// 00579720  c7014cb17a00         mov dword ptr [ecx], 0x7ab14c
// 00579726  c7410444b17a00       mov dword ptr [ecx + 4], 0x7ab144
// 0057972d  c741103cb17a00       mov dword ptr [ecx + 0x10], 0x7ab13c
// 00579734  c741142cb17a00       mov dword ptr [ecx + 0x14], 0x7ab12c
// 0057973b  c7412c1cb17a00       mov dword ptr [ecx + 0x2c], 0x7ab11c
// 00579742  c741440cb17a00       mov dword ptr [ecx + 0x44], 0x7ab10c
// 00579749  c7415cfcb07a00       mov dword ptr [ecx + 0x5c], 0x7ab0fc
// 00579750  c74174ecb07a00       mov dword ptr [ecx + 0x74], 0x7ab0ec
// 00579757  c7818c000000dcb07a00 mov dword ptr [ecx + 0x8c], 0x7ab0dc
// 00579761  e94a6bfcff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
