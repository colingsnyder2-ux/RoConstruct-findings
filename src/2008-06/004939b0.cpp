// roc 2008-06 004939b0  unit: RBX::VPants::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004939b0
//
// 004939b0  56                   push esi
// 004939b1  8bf1                 mov esi, ecx
// 004939b3  e808faffff           call 0x4933c0
// 004939b8  c70614218200         mov dword ptr [esi], 0x822114
// 004939be  c7461004218200       mov dword ptr [esi + 0x10], 0x822104
// 004939c5  c74614fc208200       mov dword ptr [esi + 0x14], 0x8220fc
// 004939cc  c74620f4208200       mov dword ptr [esi + 0x20], 0x8220f4
// 004939d3  c74624e4208200       mov dword ptr [esi + 0x24], 0x8220e4
// 004939da  c74644d4208200       mov dword ptr [esi + 0x44], 0x8220d4
// 004939e1  c74664c4208200       mov dword ptr [esi + 0x64], 0x8220c4
// 004939e8  c78684000000b4208200 mov dword ptr [esi + 0x84], 0x8220b4
// 004939f2  c786a4000000a4208200 mov dword ptr [esi + 0xa4], 0x8220a4
// 004939fc  c786c400000094208200 mov dword ptr [esi + 0xc4], 0x822094
// 00493a06  c786300100008c208200 mov dword ptr [esi + 0x130], 0x82208c
// 00493a10  8bc6                 mov eax, esi
// 00493a12  5e                   pop esi
// 00493a13  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
