// roc 2008-06 0040be80  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040be80
//
// 0040be80  c70124c18000         mov dword ptr [ecx], 0x80c124
// 0040be86  c7411014c18000       mov dword ptr [ecx + 0x10], 0x80c114
// 0040be8d  c741140cc18000       mov dword ptr [ecx + 0x14], 0x80c10c
// 0040be94  c7412004c18000       mov dword ptr [ecx + 0x20], 0x80c104
// 0040be9b  c74124f4c08000       mov dword ptr [ecx + 0x24], 0x80c0f4
// 0040bea2  c74144e4c08000       mov dword ptr [ecx + 0x44], 0x80c0e4
// 0040bea9  c74164d4c08000       mov dword ptr [ecx + 0x64], 0x80c0d4
// 0040beb0  c78184000000c4c08000 mov dword ptr [ecx + 0x84], 0x80c0c4
// 0040beba  c781a4000000b4c08000 mov dword ptr [ecx + 0xa4], 0x80c0b4
// 0040bec4  c781c4000000a4c08000 mov dword ptr [ecx + 0xc4], 0x80c0a4
// 0040bece  e96de61400           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
