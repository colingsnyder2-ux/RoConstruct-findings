// roc 2008-06 00495fc0  unit: RBX::Network::Players  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495fc0
//
// 00495fc0  56                   push esi
// 00495fc1  8bf1                 mov esi, ecx
// 00495fc3  e818580c00           call 0x55b7e0
// 00495fc8  c7061c268200         mov dword ptr [esi], 0x82261c
// 00495fce  c746100c268200       mov dword ptr [esi + 0x10], 0x82260c
// 00495fd5  c7461404268200       mov dword ptr [esi + 0x14], 0x822604
// 00495fdc  c74620fc258200       mov dword ptr [esi + 0x20], 0x8225fc
// 00495fe3  c74624ec258200       mov dword ptr [esi + 0x24], 0x8225ec
// 00495fea  c74644dc258200       mov dword ptr [esi + 0x44], 0x8225dc
// 00495ff1  c74664cc258200       mov dword ptr [esi + 0x64], 0x8225cc
// 00495ff8  c78684000000bc258200 mov dword ptr [esi + 0x84], 0x8225bc
// 00496002  c786a4000000ac258200 mov dword ptr [esi + 0xa4], 0x8225ac
// 0049600c  c786c40000009c258200 mov dword ptr [esi + 0xc4], 0x82259c
// 00496016  8bc6                 mov eax, esi
// 00496018  5e                   pop esi
// 00496019  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
