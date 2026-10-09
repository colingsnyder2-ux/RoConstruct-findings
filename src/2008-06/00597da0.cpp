// roc 2008-06 00597da0  unit: RBX::VDecal::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597da0
//
// 00597da0  c7015c258300         mov dword ptr [ecx], 0x83255c
// 00597da6  c7411050258300       mov dword ptr [ecx + 0x10], 0x832550
// 00597dad  c7411448258300       mov dword ptr [ecx + 0x14], 0x832548
// 00597db4  c7412040258300       mov dword ptr [ecx + 0x20], 0x832540
// 00597dbb  c7412430258300       mov dword ptr [ecx + 0x24], 0x832530
// 00597dc2  c7414420258300       mov dword ptr [ecx + 0x44], 0x832520
// 00597dc9  c7416410258300       mov dword ptr [ecx + 0x64], 0x832510
// 00597dd0  c7818400000000258300 mov dword ptr [ecx + 0x84], 0x832500
// 00597dda  c781a4000000f0248300 mov dword ptr [ecx + 0xa4], 0x8324f0
// 00597de4  c781c4000000e0248300 mov dword ptr [ecx + 0xc4], 0x8324e0
// 00597dee  c78130010000c8248300 mov dword ptr [ecx + 0x130], 0x8324c8
// 00597df8  e933ffffff           jmp 0x597d30
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
