// roc 2007-08 00542db0  unit: P8CRenderSettings::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542db0
//
// 00542db0  c701ac687a00         mov dword ptr [ecx], 0x7a68ac
// 00542db6  c74104a4687a00       mov dword ptr [ecx + 4], 0x7a68a4
// 00542dbd  c741109c687a00       mov dword ptr [ecx + 0x10], 0x7a689c
// 00542dc4  c741148c687a00       mov dword ptr [ecx + 0x14], 0x7a688c
// 00542dcb  c7412c7c687a00       mov dword ptr [ecx + 0x2c], 0x7a687c
// 00542dd2  c741446c687a00       mov dword ptr [ecx + 0x44], 0x7a686c
// 00542dd9  c7415c5c687a00       mov dword ptr [ecx + 0x5c], 0x7a685c
// 00542de0  c741744c687a00       mov dword ptr [ecx + 0x74], 0x7a684c
// 00542de7  c7818c0000003c687a00 mov dword ptr [ecx + 0x8c], 0x7a683c
// 00542df1  e9bad4ffff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
