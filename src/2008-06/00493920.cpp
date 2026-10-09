// roc 2008-06 00493920  unit: RBX::Network::Player  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493920
//
// 00493920  56                   push esi
// 00493921  8bf1                 mov esi, ecx
// 00493923  e898f9ffff           call 0x4932c0
// 00493928  c70644208200         mov dword ptr [esi], 0x822044
// 0049392e  c7461038208200       mov dword ptr [esi + 0x10], 0x822038
// 00493935  c7461430208200       mov dword ptr [esi + 0x14], 0x822030
// 0049393c  c7462028208200       mov dword ptr [esi + 0x20], 0x822028
// 00493943  c7462418208200       mov dword ptr [esi + 0x24], 0x822018
// 0049394a  c7464408208200       mov dword ptr [esi + 0x44], 0x822008
// 00493951  c74664f81f8200       mov dword ptr [esi + 0x64], 0x821ff8
// 00493958  c78684000000e81f8200 mov dword ptr [esi + 0x84], 0x821fe8
// 00493962  c786a4000000d81f8200 mov dword ptr [esi + 0xa4], 0x821fd8
// 0049396c  c786c4000000c81f8200 mov dword ptr [esi + 0xc4], 0x821fc8
// 00493976  c78630010000c01f8200 mov dword ptr [esi + 0x130], 0x821fc0
// 00493980  8bc6                 mov eax, esi
// 00493982  5e                   pop esi
// 00493983  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
