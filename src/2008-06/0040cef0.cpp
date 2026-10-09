// roc 2008-06 0040cef0  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cef0
//
// 0040cef0  56                   push esi
// 0040cef1  8bf1                 mov esi, ecx
// 0040cef3  e878fbffff           call 0x40ca70
// 0040cef8  c706e4c98000         mov dword ptr [esi], 0x80c9e4
// 0040cefe  c74610d8c98000       mov dword ptr [esi + 0x10], 0x80c9d8
// 0040cf05  c74614d0c98000       mov dword ptr [esi + 0x14], 0x80c9d0
// 0040cf0c  c74620c8c98000       mov dword ptr [esi + 0x20], 0x80c9c8
// 0040cf13  c74624b8c98000       mov dword ptr [esi + 0x24], 0x80c9b8
// 0040cf1a  c74644a8c98000       mov dword ptr [esi + 0x44], 0x80c9a8
// 0040cf21  c7466498c98000       mov dword ptr [esi + 0x64], 0x80c998
// 0040cf28  c7868400000088c98000 mov dword ptr [esi + 0x84], 0x80c988
// 0040cf32  c786a400000078c98000 mov dword ptr [esi + 0xa4], 0x80c978
// 0040cf3c  c786c400000068c98000 mov dword ptr [esi + 0xc4], 0x80c968
// 0040cf46  8bc6                 mov eax, esi
// 0040cf48  5e                   pop esi
// 0040cf49  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
