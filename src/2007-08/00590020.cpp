// roc 2007-08 00590020  unit: RBX::VMessage::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590020
//
// 00590020  c7015cf87a00         mov dword ptr [ecx], 0x7af85c
// 00590026  c7410454f87a00       mov dword ptr [ecx + 4], 0x7af854
// 0059002d  c741104cf87a00       mov dword ptr [ecx + 0x10], 0x7af84c
// 00590034  c741143cf87a00       mov dword ptr [ecx + 0x14], 0x7af83c
// 0059003b  c7412c2cf87a00       mov dword ptr [ecx + 0x2c], 0x7af82c
// 00590042  c741441cf87a00       mov dword ptr [ecx + 0x44], 0x7af81c
// 00590049  c7415c0cf87a00       mov dword ptr [ecx + 0x5c], 0x7af80c
// 00590050  c74174fcf77a00       mov dword ptr [ecx + 0x74], 0x7af7fc
// 00590057  c7818c000000ecf77a00 mov dword ptr [ecx + 0x8c], 0x7af7ec
// 00590061  e94a02fbff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
