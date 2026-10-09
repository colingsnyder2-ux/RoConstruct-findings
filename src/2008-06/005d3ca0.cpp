// roc 2008-06 005d3ca0  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3ca0
//
// 005d3ca0  c70154c38300         mov dword ptr [ecx], 0x83c354
// 005d3ca6  c7411044c38300       mov dword ptr [ecx + 0x10], 0x83c344
// 005d3cad  c741143cc38300       mov dword ptr [ecx + 0x14], 0x83c33c
// 005d3cb4  c7412034c38300       mov dword ptr [ecx + 0x20], 0x83c334
// 005d3cbb  c7412424c38300       mov dword ptr [ecx + 0x24], 0x83c324
// 005d3cc2  c7414414c38300       mov dword ptr [ecx + 0x44], 0x83c314
// 005d3cc9  c7416404c38300       mov dword ptr [ecx + 0x64], 0x83c304
// 005d3cd0  c78184000000f4c28300 mov dword ptr [ecx + 0x84], 0x83c2f4
// 005d3cda  c781a4000000e4c28300 mov dword ptr [ecx + 0xa4], 0x83c2e4
// 005d3ce4  c781c4000000d4c28300 mov dword ptr [ecx + 0xc4], 0x83c2d4
// 005d3cee  c78130010000ccc28300 mov dword ptr [ecx + 0x130], 0x83c2cc
// 005d3cf8  e94368f8ff           jmp 0x55a540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
