// roc 2008-06 0040c140  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c140
//
// 0040c140  c70104c28000         mov dword ptr [ecx], 0x80c204
// 0040c146  c74110f4c18000       mov dword ptr [ecx + 0x10], 0x80c1f4
// 0040c14d  c74114ecc18000       mov dword ptr [ecx + 0x14], 0x80c1ec
// 0040c154  c74120e4c18000       mov dword ptr [ecx + 0x20], 0x80c1e4
// 0040c15b  c74124d4c18000       mov dword ptr [ecx + 0x24], 0x80c1d4
// 0040c162  c74144c4c18000       mov dword ptr [ecx + 0x44], 0x80c1c4
// 0040c169  c74164b4c18000       mov dword ptr [ecx + 0x64], 0x80c1b4
// 0040c170  c78184000000a4c18000 mov dword ptr [ecx + 0x84], 0x80c1a4
// 0040c17a  c781a400000094c18000 mov dword ptr [ecx + 0xa4], 0x80c194
// 0040c184  c781c400000084c18000 mov dword ptr [ecx + 0xc4], 0x80c184
// 0040c18e  e9ade31400           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
