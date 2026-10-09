// roc 2008-06 005d3bc0  unit: RBX::Skin  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3bc0
//
// 005d3bc0  c70184c28300         mov dword ptr [ecx], 0x83c284
// 005d3bc6  c7411074c28300       mov dword ptr [ecx + 0x10], 0x83c274
// 005d3bcd  c741146cc28300       mov dword ptr [ecx + 0x14], 0x83c26c
// 005d3bd4  c7412064c28300       mov dword ptr [ecx + 0x20], 0x83c264
// 005d3bdb  c7412454c28300       mov dword ptr [ecx + 0x24], 0x83c254
// 005d3be2  c7414444c28300       mov dword ptr [ecx + 0x44], 0x83c244
// 005d3be9  c7416434c28300       mov dword ptr [ecx + 0x64], 0x83c234
// 005d3bf0  c7818400000024c28300 mov dword ptr [ecx + 0x84], 0x83c224
// 005d3bfa  c781a400000014c28300 mov dword ptr [ecx + 0xa4], 0x83c214
// 005d3c04  c781c400000004c28300 mov dword ptr [ecx + 0xc4], 0x83c204
// 005d3c0e  c78130010000fcc18300 mov dword ptr [ecx + 0x130], 0x83c1fc
// 005d3c18  e92369f8ff           jmp 0x55a540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
