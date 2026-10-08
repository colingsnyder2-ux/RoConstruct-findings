// roc 2007-08 005f0ae0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0ae0
//
// 005f0ae0  c70184037c00         mov dword ptr [ecx], 0x7c0384
// 005f0ae6  c741047c037c00       mov dword ptr [ecx + 4], 0x7c037c
// 005f0aed  c7411074037c00       mov dword ptr [ecx + 0x10], 0x7c0374
// 005f0af4  c7411464037c00       mov dword ptr [ecx + 0x14], 0x7c0364
// 005f0afb  c7412c54037c00       mov dword ptr [ecx + 0x2c], 0x7c0354
// 005f0b02  c7414444037c00       mov dword ptr [ecx + 0x44], 0x7c0344
// 005f0b09  c7415c34037c00       mov dword ptr [ecx + 0x5c], 0x7c0334
// 005f0b10  c7417424037c00       mov dword ptr [ecx + 0x74], 0x7c0324
// 005f0b17  c7818c00000014037c00 mov dword ptr [ecx + 0x8c], 0x7c0314
// 005f0b21  e98af7f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
