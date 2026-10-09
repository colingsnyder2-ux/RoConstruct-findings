// roc 2008-06 0040ca70  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ca70
//
// 0040ca70  6aff                 push -1
// 0040ca72  6858d37b00           push 0x7bd358
// 0040ca77  64a100000000         mov eax, dword ptr fs:[0]
// 0040ca7d  50                   push eax
// 0040ca7e  64892500000000       mov dword ptr fs:[0], esp
// 0040ca85  51                   push ecx
// 0040ca86  56                   push esi
// 0040ca87  8bf1                 mov esi, ecx
// 0040ca89  89742404             mov dword ptr [esp + 4], esi
// 0040ca8d  e87ef4ffff           call 0x40bf10
// 0040ca92  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040ca9a  e831f6ffff           call 0x40c0d0
// 0040ca9f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040caa3  89461c               mov dword ptr [esi + 0x1c], eax
// 0040caa6  c70604c68000         mov dword ptr [esi], 0x80c604
// 0040caac  c74610f8c58000       mov dword ptr [esi + 0x10], 0x80c5f8
// 0040cab3  c74614f0c58000       mov dword ptr [esi + 0x14], 0x80c5f0
// 0040caba  c74620e8c58000       mov dword ptr [esi + 0x20], 0x80c5e8
// 0040cac1  c74624d8c58000       mov dword ptr [esi + 0x24], 0x80c5d8
// 0040cac8  c74644c8c58000       mov dword ptr [esi + 0x44], 0x80c5c8
// 0040cacf  c74664b8c58000       mov dword ptr [esi + 0x64], 0x80c5b8
// 0040cad6  c78684000000a8c58000 mov dword ptr [esi + 0x84], 0x80c5a8
// 0040cae0  c786a400000098c58000 mov dword ptr [esi + 0xa4], 0x80c598
// 0040caea  c786c400000088c58000 mov dword ptr [esi + 0xc4], 0x80c588
// 0040caf4  8bc6                 mov eax, esi
// 0040caf6  5e                   pop esi
// 0040caf7  64890d00000000       mov dword ptr fs:[0], ecx
// 0040cafe  83c410               add esp, 0x10
// 0040cb01  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
