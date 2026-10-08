// roc 2007-08 005879f0  unit: RBX::Reflection::EnumDescriptor  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005879f0
//
// 005879f0  c70174e97a00         mov dword ptr [ecx], 0x7ae974
// 005879f6  c741046ce97a00       mov dword ptr [ecx + 4], 0x7ae96c
// 005879fd  c7411064e97a00       mov dword ptr [ecx + 0x10], 0x7ae964
// 00587a04  c7411454e97a00       mov dword ptr [ecx + 0x14], 0x7ae954
// 00587a0b  c7412c44e97a00       mov dword ptr [ecx + 0x2c], 0x7ae944
// 00587a12  c7414434e97a00       mov dword ptr [ecx + 0x44], 0x7ae934
// 00587a19  c7415c24e97a00       mov dword ptr [ecx + 0x5c], 0x7ae924
// 00587a20  c7417414e97a00       mov dword ptr [ecx + 0x74], 0x7ae914
// 00587a27  c7818c00000004e97a00 mov dword ptr [ecx + 0x8c], 0x7ae904
// 00587a31  e97a88fbff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
