// roc 2008-06 0040bbb0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bbb0
//
// 0040bbb0  c70144c08000         mov dword ptr [ecx], 0x80c044
// 0040bbb6  c7411034c08000       mov dword ptr [ecx + 0x10], 0x80c034
// 0040bbbd  c741142cc08000       mov dword ptr [ecx + 0x14], 0x80c02c
// 0040bbc4  c7412024c08000       mov dword ptr [ecx + 0x20], 0x80c024
// 0040bbcb  c7412414c08000       mov dword ptr [ecx + 0x24], 0x80c014
// 0040bbd2  c7414404c08000       mov dword ptr [ecx + 0x44], 0x80c004
// 0040bbd9  c74164f4bf8000       mov dword ptr [ecx + 0x64], 0x80bff4
// 0040bbe0  c78184000000e4bf8000 mov dword ptr [ecx + 0x84], 0x80bfe4
// 0040bbea  c781a4000000d4bf8000 mov dword ptr [ecx + 0xa4], 0x80bfd4
// 0040bbf4  c781c4000000c4bf8000 mov dword ptr [ecx + 0xc4], 0x80bfc4
// 0040bbfe  e93de91400           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
