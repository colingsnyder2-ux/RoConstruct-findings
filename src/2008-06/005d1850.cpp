// roc 2008-06 005d1850  unit: RBX::VHopperBin::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1850
//
// 005d1850  c701ccb78300         mov dword ptr [ecx], 0x83b7cc
// 005d1856  c74110c0b78300       mov dword ptr [ecx + 0x10], 0x83b7c0
// 005d185d  c74114b8b78300       mov dword ptr [ecx + 0x14], 0x83b7b8
// 005d1864  c74120b0b78300       mov dword ptr [ecx + 0x20], 0x83b7b0
// 005d186b  c74124a0b78300       mov dword ptr [ecx + 0x24], 0x83b7a0
// 005d1872  c7414490b78300       mov dword ptr [ecx + 0x44], 0x83b790
// 005d1879  c7416480b78300       mov dword ptr [ecx + 0x64], 0x83b780
// 005d1880  c7818400000070b78300 mov dword ptr [ecx + 0x84], 0x83b770
// 005d188a  c781a400000060b78300 mov dword ptr [ecx + 0xa4], 0x83b760
// 005d1894  c781c400000050b78300 mov dword ptr [ecx + 0xc4], 0x83b750
// 005d189e  c7813001000048b78300 mov dword ptr [ecx + 0x130], 0x83b748
// 005d18a8  e993fce3ff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
