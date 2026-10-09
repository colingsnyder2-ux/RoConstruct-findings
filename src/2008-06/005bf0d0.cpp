// roc 2008-06 005bf0d0  unit: RBX::Soundscape::SoundService  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf0d0
//
// 005bf0d0  c70134858300         mov dword ptr [ecx], 0x838534
// 005bf0d6  c7411024858300       mov dword ptr [ecx + 0x10], 0x838524
// 005bf0dd  c741141c858300       mov dword ptr [ecx + 0x14], 0x83851c
// 005bf0e4  c7412014858300       mov dword ptr [ecx + 0x20], 0x838514
// 005bf0eb  c7412404858300       mov dword ptr [ecx + 0x24], 0x838504
// 005bf0f2  c74144f4848300       mov dword ptr [ecx + 0x44], 0x8384f4
// 005bf0f9  c74164e4848300       mov dword ptr [ecx + 0x64], 0x8384e4
// 005bf100  c78184000000d4848300 mov dword ptr [ecx + 0x84], 0x8384d4
// 005bf10a  c781a4000000c4848300 mov dword ptr [ecx + 0xa4], 0x8384c4
// 005bf114  c781c4000000b4848300 mov dword ptr [ecx + 0xc4], 0x8384b4
// 005bf11e  e91db4f9ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
