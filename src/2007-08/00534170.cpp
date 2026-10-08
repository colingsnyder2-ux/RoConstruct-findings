// roc 2007-08 00534170  unit: RBX::ScriptContext  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534170
//
// 00534170  c701f4567a00         mov dword ptr [ecx], 0x7a56f4
// 00534176  c74104e8567a00       mov dword ptr [ecx + 4], 0x7a56e8
// 0053417d  c74110e0567a00       mov dword ptr [ecx + 0x10], 0x7a56e0
// 00534184  c74114d0567a00       mov dword ptr [ecx + 0x14], 0x7a56d0
// 0053418b  c7412cc0567a00       mov dword ptr [ecx + 0x2c], 0x7a56c0
// 00534192  c74144b0567a00       mov dword ptr [ecx + 0x44], 0x7a56b0
// 00534199  c7415ca0567a00       mov dword ptr [ecx + 0x5c], 0x7a56a0
// 005341a0  c7417490567a00       mov dword ptr [ecx + 0x74], 0x7a5690
// 005341a7  c7818c00000080567a00 mov dword ptr [ecx + 0x8c], 0x7a5680
// 005341b1  e9fac00000           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
