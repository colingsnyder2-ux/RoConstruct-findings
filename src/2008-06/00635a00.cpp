// roc 2008-06 00635a00  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635a00
//
// 00635a00  c7012c888400         mov dword ptr [ecx], 0x84882c
// 00635a06  c741101c888400       mov dword ptr [ecx + 0x10], 0x84881c
// 00635a0d  c7411414888400       mov dword ptr [ecx + 0x14], 0x848814
// 00635a14  c741200c888400       mov dword ptr [ecx + 0x20], 0x84880c
// 00635a1b  c74124fc878400       mov dword ptr [ecx + 0x24], 0x8487fc
// 00635a22  c74144ec878400       mov dword ptr [ecx + 0x44], 0x8487ec
// 00635a29  c74164dc878400       mov dword ptr [ecx + 0x64], 0x8487dc
// 00635a30  c78184000000cc878400 mov dword ptr [ecx + 0x84], 0x8487cc
// 00635a3a  c781a4000000bc878400 mov dword ptr [ecx + 0xa4], 0x8487bc
// 00635a44  c781c4000000ac878400 mov dword ptr [ecx + 0xc4], 0x8487ac
// 00635a4e  e9ed4af2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
