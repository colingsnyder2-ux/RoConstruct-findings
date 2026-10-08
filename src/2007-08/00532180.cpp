// roc 2007-08 00532180  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532180
//
// 00532180  c701e4527a00         mov dword ptr [ecx], 0x7a52e4
// 00532186  c74104d8527a00       mov dword ptr [ecx + 4], 0x7a52d8
// 0053218d  c74110d0527a00       mov dword ptr [ecx + 0x10], 0x7a52d0
// 00532194  c74114c0527a00       mov dword ptr [ecx + 0x14], 0x7a52c0
// 0053219b  c7412cb0527a00       mov dword ptr [ecx + 0x2c], 0x7a52b0
// 005321a2  c74144a0527a00       mov dword ptr [ecx + 0x44], 0x7a52a0
// 005321a9  c7415c90527a00       mov dword ptr [ecx + 0x5c], 0x7a5290
// 005321b0  c7417480527a00       mov dword ptr [ecx + 0x74], 0x7a5280
// 005321b7  c7818c00000070527a00 mov dword ptr [ecx + 0x8c], 0x7a5270
// 005321c1  e9eae00000           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
