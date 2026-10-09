// roc 2008-06 004b9570  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9570
//
// 004b9570  56                   push esi
// 004b9571  8bf1                 mov esi, ecx
// 004b9573  e828ffffff           call 0x4b94a0
// 004b9578  c7060c548200         mov dword ptr [esi], 0x82540c
// 004b957e  c7461000548200       mov dword ptr [esi + 0x10], 0x825400
// 004b9585  c74614f8538200       mov dword ptr [esi + 0x14], 0x8253f8
// 004b958c  c74620f0538200       mov dword ptr [esi + 0x20], 0x8253f0
// 004b9593  c74624e0538200       mov dword ptr [esi + 0x24], 0x8253e0
// 004b959a  c74644d0538200       mov dword ptr [esi + 0x44], 0x8253d0
// 004b95a1  c74664c0538200       mov dword ptr [esi + 0x64], 0x8253c0
// 004b95a8  c78684000000b0538200 mov dword ptr [esi + 0x84], 0x8253b0
// 004b95b2  c786a4000000a0538200 mov dword ptr [esi + 0xa4], 0x8253a0
// 004b95bc  c786c400000090538200 mov dword ptr [esi + 0xc4], 0x825390
// 004b95c6  8bc6                 mov eax, esi
// 004b95c8  5e                   pop esi
// 004b95c9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
