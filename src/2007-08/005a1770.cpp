// roc 2007-08 005a1770  unit: RBX::VBodyColors::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1770
//
// 005a1770  c701ac407b00         mov dword ptr [ecx], 0x7b40ac
// 005a1776  c74104a0407b00       mov dword ptr [ecx + 4], 0x7b40a0
// 005a177d  c7411098407b00       mov dword ptr [ecx + 0x10], 0x7b4098
// 005a1784  c7411488407b00       mov dword ptr [ecx + 0x14], 0x7b4088
// 005a178b  c7412c78407b00       mov dword ptr [ecx + 0x2c], 0x7b4078
// 005a1792  c7414468407b00       mov dword ptr [ecx + 0x44], 0x7b4068
// 005a1799  c7415c58407b00       mov dword ptr [ecx + 0x5c], 0x7b4058
// 005a17a0  c7417448407b00       mov dword ptr [ecx + 0x74], 0x7b4048
// 005a17a7  c7818c00000038407b00 mov dword ptr [ecx + 0x8c], 0x7b4038
// 005a17b1  e9faeaf9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
