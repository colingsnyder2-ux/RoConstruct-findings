// roc 2008-06 005bc960  unit: RBX::Stats::I::?$TypedStatsItem  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc960
//
// 005bc960  56                   push esi
// 005bc961  8bf1                 mov esi, ecx
// 005bc963  e818fbffff           call 0x5bc480
// 005bc968  c706cc778300         mov dword ptr [esi], 0x8377cc
// 005bc96e  c74610bc778300       mov dword ptr [esi + 0x10], 0x8377bc
// 005bc975  c74614b4778300       mov dword ptr [esi + 0x14], 0x8377b4
// 005bc97c  c74620ac778300       mov dword ptr [esi + 0x20], 0x8377ac
// 005bc983  c746249c778300       mov dword ptr [esi + 0x24], 0x83779c
// 005bc98a  c746448c778300       mov dword ptr [esi + 0x44], 0x83778c
// 005bc991  c746647c778300       mov dword ptr [esi + 0x64], 0x83777c
// 005bc998  c786840000006c778300 mov dword ptr [esi + 0x84], 0x83776c
// 005bc9a2  c786a40000005c778300 mov dword ptr [esi + 0xa4], 0x83775c
// 005bc9ac  c786c40000004c778300 mov dword ptr [esi + 0xc4], 0x83774c
// 005bc9b6  c7863001000040778300 mov dword ptr [esi + 0x130], 0x837740
// 005bc9c0  8bc6                 mov eax, esi
// 005bc9c2  5e                   pop esi
// 005bc9c3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
