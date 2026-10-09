// roc 2008-06 0040c200  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c200
//
// 0040c200  56                   push esi
// 0040c201  8bf1                 mov esi, ecx
// 0040c203  e848f9ffff           call 0x40bb50
// 0040c208  c70604c28000         mov dword ptr [esi], 0x80c204
// 0040c20e  c74610f4c18000       mov dword ptr [esi + 0x10], 0x80c1f4
// 0040c215  c74614ecc18000       mov dword ptr [esi + 0x14], 0x80c1ec
// 0040c21c  c74620e4c18000       mov dword ptr [esi + 0x20], 0x80c1e4
// 0040c223  c74624d4c18000       mov dword ptr [esi + 0x24], 0x80c1d4
// 0040c22a  c74644c4c18000       mov dword ptr [esi + 0x44], 0x80c1c4
// 0040c231  c74664b4c18000       mov dword ptr [esi + 0x64], 0x80c1b4
// 0040c238  c78684000000a4c18000 mov dword ptr [esi + 0x84], 0x80c1a4
// 0040c242  c786a400000094c18000 mov dword ptr [esi + 0xa4], 0x80c194
// 0040c24c  c786c400000084c18000 mov dword ptr [esi + 0xc4], 0x80c184
// 0040c256  8bc6                 mov eax, esi
// 0040c258  5e                   pop esi
// 0040c259  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
