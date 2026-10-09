// roc 2008-06 00635800  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635800
//
// 00635800  56                   push esi
// 00635801  8bf1                 mov esi, ecx
// 00635803  e8d85ff2ff           call 0x55b7e0
// 00635808  c7064c878400         mov dword ptr [esi], 0x84874c
// 0063580e  c746103c878400       mov dword ptr [esi + 0x10], 0x84873c
// 00635815  c7461434878400       mov dword ptr [esi + 0x14], 0x848734
// 0063581c  c746202c878400       mov dword ptr [esi + 0x20], 0x84872c
// 00635823  c746241c878400       mov dword ptr [esi + 0x24], 0x84871c
// 0063582a  c746440c878400       mov dword ptr [esi + 0x44], 0x84870c
// 00635831  c74664fc868400       mov dword ptr [esi + 0x64], 0x8486fc
// 00635838  c78684000000ec868400 mov dword ptr [esi + 0x84], 0x8486ec
// 00635842  c786a4000000dc868400 mov dword ptr [esi + 0xa4], 0x8486dc
// 0063584c  c786c4000000cc868400 mov dword ptr [esi + 0xc4], 0x8486cc
// 00635856  8bc6                 mov eax, esi
// 00635858  5e                   pop esi
// 00635859  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
