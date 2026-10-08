// roc 2007-08 00424b10  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424b10
//
// 00424b10  c701048a7800         mov dword ptr [ecx], 0x788a04
// 00424b16  c74104f8897800       mov dword ptr [ecx + 4], 0x7889f8
// 00424b1d  c74110f0897800       mov dword ptr [ecx + 0x10], 0x7889f0
// 00424b24  c74114e0897800       mov dword ptr [ecx + 0x14], 0x7889e0
// 00424b2b  c7412cd0897800       mov dword ptr [ecx + 0x2c], 0x7889d0
// 00424b32  c74144c0897800       mov dword ptr [ecx + 0x44], 0x7889c0
// 00424b39  c7415cb0897800       mov dword ptr [ecx + 0x5c], 0x7889b0
// 00424b40  c74174a0897800       mov dword ptr [ecx + 0x74], 0x7889a0
// 00424b47  c7818c00000090897800 mov dword ptr [ecx + 0x8c], 0x788990
// 00424b51  e95affffff           jmp 0x424ab0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
