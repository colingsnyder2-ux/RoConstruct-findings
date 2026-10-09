// roc 2008-06 004a3980  unit: RBX::VMessage::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3980
//
// 004a3980  c70164378200         mov dword ptr [ecx], 0x823764
// 004a3986  c7411054378200       mov dword ptr [ecx + 0x10], 0x823754
// 004a398d  c741144c378200       mov dword ptr [ecx + 0x14], 0x82374c
// 004a3994  c7412044378200       mov dword ptr [ecx + 0x20], 0x823744
// 004a399b  c7412434378200       mov dword ptr [ecx + 0x24], 0x823734
// 004a39a2  c7414424378200       mov dword ptr [ecx + 0x44], 0x823724
// 004a39a9  c7416414378200       mov dword ptr [ecx + 0x64], 0x823714
// 004a39b0  c7818400000004378200 mov dword ptr [ecx + 0x84], 0x823704
// 004a39ba  c781a4000000f4368200 mov dword ptr [ecx + 0xa4], 0x8236f4
// 004a39c4  c781c4000000e4368200 mov dword ptr [ecx + 0xc4], 0x8236e4
// 004a39ce  e96d6b0b00           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
