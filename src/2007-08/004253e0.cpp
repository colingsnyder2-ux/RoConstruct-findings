// roc 2007-08 004253e0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004253e0
//
// 004253e0  c7011c8e7800         mov dword ptr [ecx], 0x788e1c
// 004253e6  c74104108e7800       mov dword ptr [ecx + 4], 0x788e10
// 004253ed  c74110088e7800       mov dword ptr [ecx + 0x10], 0x788e08
// 004253f4  c74114f88d7800       mov dword ptr [ecx + 0x14], 0x788df8
// 004253fb  c7412ce88d7800       mov dword ptr [ecx + 0x2c], 0x788de8
// 00425402  c74144d88d7800       mov dword ptr [ecx + 0x44], 0x788dd8
// 00425409  c7415cc88d7800       mov dword ptr [ecx + 0x5c], 0x788dc8
// 00425410  c74174b88d7800       mov dword ptr [ecx + 0x74], 0x788db8
// 00425417  c7818c000000a88d7800 mov dword ptr [ecx + 0x8c], 0x788da8
// 00425421  e98af6ffff           jmp 0x424ab0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
