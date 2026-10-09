// roc 2008-06 005c9ac0  unit: VProfilingItem::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9ac0
//
// 005c9ac0  56                   push esi
// 005c9ac1  8bf1                 mov esi, ecx
// 005c9ac3  e81851e9ff           call 0x45ebe0
// 005c9ac8  c706b49c8300         mov dword ptr [esi], 0x839cb4
// 005c9ace  c74610a89c8300       mov dword ptr [esi + 0x10], 0x839ca8
// 005c9ad5  c74614a09c8300       mov dword ptr [esi + 0x14], 0x839ca0
// 005c9adc  c74620989c8300       mov dword ptr [esi + 0x20], 0x839c98
// 005c9ae3  c74624889c8300       mov dword ptr [esi + 0x24], 0x839c88
// 005c9aea  c74644789c8300       mov dword ptr [esi + 0x44], 0x839c78
// 005c9af1  c74664689c8300       mov dword ptr [esi + 0x64], 0x839c68
// 005c9af8  c78684000000589c8300 mov dword ptr [esi + 0x84], 0x839c58
// 005c9b02  c786a4000000489c8300 mov dword ptr [esi + 0xa4], 0x839c48
// 005c9b0c  c786c4000000389c8300 mov dword ptr [esi + 0xc4], 0x839c38
// 005c9b16  8bc6                 mov eax, esi
// 005c9b18  5e                   pop esi
// 005c9b19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
