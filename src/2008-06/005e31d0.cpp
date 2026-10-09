// roc 2008-06 005e31d0  unit: RBX::VGlue::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e31d0
//
// 005e31d0  c701b4e68300         mov dword ptr [ecx], 0x83e6b4
// 005e31d6  c74110a8e68300       mov dword ptr [ecx + 0x10], 0x83e6a8
// 005e31dd  c74114a0e68300       mov dword ptr [ecx + 0x14], 0x83e6a0
// 005e31e4  c7412098e68300       mov dword ptr [ecx + 0x20], 0x83e698
// 005e31eb  c7412488e68300       mov dword ptr [ecx + 0x24], 0x83e688
// 005e31f2  c7414478e68300       mov dword ptr [ecx + 0x44], 0x83e678
// 005e31f9  c7416468e68300       mov dword ptr [ecx + 0x64], 0x83e668
// 005e3200  c7818400000058e68300 mov dword ptr [ecx + 0x84], 0x83e658
// 005e320a  c781a400000048e68300 mov dword ptr [ecx + 0xa4], 0x83e648
// 005e3214  c781c400000038e68300 mov dword ptr [ecx + 0xc4], 0x83e638
// 005e321e  c7813001000020e68300 mov dword ptr [ecx + 0x130], 0x83e620
// 005e3228  e9e3fbffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
