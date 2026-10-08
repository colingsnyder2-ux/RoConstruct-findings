// roc 2007-08 005812c0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005812c0
//
// 005812c0  c701ccc07a00         mov dword ptr [ecx], 0x7ac0cc
// 005812c6  c74104c4c07a00       mov dword ptr [ecx + 4], 0x7ac0c4
// 005812cd  c74110bcc07a00       mov dword ptr [ecx + 0x10], 0x7ac0bc
// 005812d4  c74114acc07a00       mov dword ptr [ecx + 0x14], 0x7ac0ac
// 005812db  c7412c9cc07a00       mov dword ptr [ecx + 0x2c], 0x7ac09c
// 005812e2  c741448cc07a00       mov dword ptr [ecx + 0x44], 0x7ac08c
// 005812e9  c7415c7cc07a00       mov dword ptr [ecx + 0x5c], 0x7ac07c
// 005812f0  c741746cc07a00       mov dword ptr [ecx + 0x74], 0x7ac06c
// 005812f7  c7818c0000005cc07a00 mov dword ptr [ecx + 0x8c], 0x7ac05c
// 00581301  e9aaeffbff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
