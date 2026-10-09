// roc 2008-06 0040bf10  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bf10
//
// 0040bf10  56                   push esi
// 0040bf11  8bf1                 mov esi, ecx
// 0040bf13  e838fcffff           call 0x40bb50
// 0040bf18  c70624c18000         mov dword ptr [esi], 0x80c124
// 0040bf1e  c7461014c18000       mov dword ptr [esi + 0x10], 0x80c114
// 0040bf25  c746140cc18000       mov dword ptr [esi + 0x14], 0x80c10c
// 0040bf2c  c7462004c18000       mov dword ptr [esi + 0x20], 0x80c104
// 0040bf33  c74624f4c08000       mov dword ptr [esi + 0x24], 0x80c0f4
// 0040bf3a  c74644e4c08000       mov dword ptr [esi + 0x44], 0x80c0e4
// 0040bf41  c74664d4c08000       mov dword ptr [esi + 0x64], 0x80c0d4
// 0040bf48  c78684000000c4c08000 mov dword ptr [esi + 0x84], 0x80c0c4
// 0040bf52  c786a4000000b4c08000 mov dword ptr [esi + 0xa4], 0x80c0b4
// 0040bf5c  c786c4000000a4c08000 mov dword ptr [esi + 0xc4], 0x80c0a4
// 0040bf66  8bc6                 mov eax, esi
// 0040bf68  5e                   pop esi
// 0040bf69  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
