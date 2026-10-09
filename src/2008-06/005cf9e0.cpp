// roc 2008-06 005cf9e0  unit: ChatEnter  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf9e0
//
// 005cf9e0  56                   push esi
// 005cf9e1  8bf1                 mov esi, ecx
// 005cf9e3  e818ffffff           call 0x5cf900
// 005cf9e8  c706dca88300         mov dword ptr [esi], 0x83a8dc
// 005cf9ee  c74610cca88300       mov dword ptr [esi + 0x10], 0x83a8cc
// 005cf9f5  c74614c4a88300       mov dword ptr [esi + 0x14], 0x83a8c4
// 005cf9fc  c74620bca88300       mov dword ptr [esi + 0x20], 0x83a8bc
// 005cfa03  c74624aca88300       mov dword ptr [esi + 0x24], 0x83a8ac
// 005cfa0a  c746449ca88300       mov dword ptr [esi + 0x44], 0x83a89c
// 005cfa11  c746648ca88300       mov dword ptr [esi + 0x64], 0x83a88c
// 005cfa18  c786840000007ca88300 mov dword ptr [esi + 0x84], 0x83a87c
// 005cfa22  c786a40000006ca88300 mov dword ptr [esi + 0xa4], 0x83a86c
// 005cfa2c  c786c40000005ca88300 mov dword ptr [esi + 0xc4], 0x83a85c
// 005cfa36  c7863001000054a88300 mov dword ptr [esi + 0x130], 0x83a854
// 005cfa40  8bc6                 mov eax, esi
// 005cfa42  5e                   pop esi
// 005cfa43  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
