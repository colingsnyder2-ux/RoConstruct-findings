// roc 2007-08 004869c0  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004869c0
//
// 004869c0  c70194ad7900         mov dword ptr [ecx], 0x79ad94
// 004869c6  c7410488ad7900       mov dword ptr [ecx + 4], 0x79ad88
// 004869cd  c7411080ad7900       mov dword ptr [ecx + 0x10], 0x79ad80
// 004869d4  c7411470ad7900       mov dword ptr [ecx + 0x14], 0x79ad70
// 004869db  c7412c60ad7900       mov dword ptr [ecx + 0x2c], 0x79ad60
// 004869e2  c7414450ad7900       mov dword ptr [ecx + 0x44], 0x79ad50
// 004869e9  c7415c40ad7900       mov dword ptr [ecx + 0x5c], 0x79ad40
// 004869f0  c7417430ad7900       mov dword ptr [ecx + 0x74], 0x79ad30
// 004869f7  c7818c00000020ad7900 mov dword ptr [ecx + 0x8c], 0x79ad20
// 00486a01  e9aa980b00           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
