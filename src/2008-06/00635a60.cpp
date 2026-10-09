// roc 2008-06 00635a60  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635a60
//
// 00635a60  56                   push esi
// 00635a61  8bf1                 mov esi, ecx
// 00635a63  e8785df2ff           call 0x55b7e0
// 00635a68  c7062c888400         mov dword ptr [esi], 0x84882c
// 00635a6e  c746101c888400       mov dword ptr [esi + 0x10], 0x84881c
// 00635a75  c7461414888400       mov dword ptr [esi + 0x14], 0x848814
// 00635a7c  c746200c888400       mov dword ptr [esi + 0x20], 0x84880c
// 00635a83  c74624fc878400       mov dword ptr [esi + 0x24], 0x8487fc
// 00635a8a  c74644ec878400       mov dword ptr [esi + 0x44], 0x8487ec
// 00635a91  c74664dc878400       mov dword ptr [esi + 0x64], 0x8487dc
// 00635a98  c78684000000cc878400 mov dword ptr [esi + 0x84], 0x8487cc
// 00635aa2  c786a4000000bc878400 mov dword ptr [esi + 0xa4], 0x8487bc
// 00635aac  c786c4000000ac878400 mov dword ptr [esi + 0xc4], 0x8487ac
// 00635ab6  8bc6                 mov eax, esi
// 00635ab8  5e                   pop esi
// 00635ab9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
