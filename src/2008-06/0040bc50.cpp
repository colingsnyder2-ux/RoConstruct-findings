// roc 2008-06 0040bc50  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bc50
//
// 0040bc50  56                   push esi
// 0040bc51  8bf1                 mov esi, ecx
// 0040bc53  e8f8feffff           call 0x40bb50
// 0040bc58  c70644c08000         mov dword ptr [esi], 0x80c044
// 0040bc5e  c7461034c08000       mov dword ptr [esi + 0x10], 0x80c034
// 0040bc65  c746142cc08000       mov dword ptr [esi + 0x14], 0x80c02c
// 0040bc6c  c7462024c08000       mov dword ptr [esi + 0x20], 0x80c024
// 0040bc73  c7462414c08000       mov dword ptr [esi + 0x24], 0x80c014
// 0040bc7a  c7464404c08000       mov dword ptr [esi + 0x44], 0x80c004
// 0040bc81  c74664f4bf8000       mov dword ptr [esi + 0x64], 0x80bff4
// 0040bc88  c78684000000e4bf8000 mov dword ptr [esi + 0x84], 0x80bfe4
// 0040bc92  c786a4000000d4bf8000 mov dword ptr [esi + 0xa4], 0x80bfd4
// 0040bc9c  c786c4000000c4bf8000 mov dword ptr [esi + 0xc4], 0x80bfc4
// 0040bca6  8bc6                 mov eax, esi
// 0040bca8  5e                   pop esi
// 0040bca9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
