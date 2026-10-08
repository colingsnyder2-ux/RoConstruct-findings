// roc 2007-08 004a4430  unit: RBX::IdManager::UItem::?$TItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4430
//
// 004a4430  c70174cd7900         mov dword ptr [ecx], 0x79cd74
// 004a4436  c741046ccd7900       mov dword ptr [ecx + 4], 0x79cd6c
// 004a443d  c7411064cd7900       mov dword ptr [ecx + 0x10], 0x79cd64
// 004a4444  c7411454cd7900       mov dword ptr [ecx + 0x14], 0x79cd54
// 004a444b  c7412c44cd7900       mov dword ptr [ecx + 0x2c], 0x79cd44
// 004a4452  c7414434cd7900       mov dword ptr [ecx + 0x44], 0x79cd34
// 004a4459  c7415c24cd7900       mov dword ptr [ecx + 0x5c], 0x79cd24
// 004a4460  c7417414cd7900       mov dword ptr [ecx + 0x74], 0x79cd14
// 004a4467  c7818c00000004cd7900 mov dword ptr [ecx + 0x8c], 0x79cd04
// 004a4471  e93abe0900           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
