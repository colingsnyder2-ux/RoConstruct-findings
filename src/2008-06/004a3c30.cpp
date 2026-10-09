// roc 2008-06 004a3c30  unit: RBX::VHint::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3c30
//
// 004a3c30  c70154388200         mov dword ptr [ecx], 0x823854
// 004a3c36  c7411044388200       mov dword ptr [ecx + 0x10], 0x823844
// 004a3c3d  c741143c388200       mov dword ptr [ecx + 0x14], 0x82383c
// 004a3c44  c7412034388200       mov dword ptr [ecx + 0x20], 0x823834
// 004a3c4b  c7412424388200       mov dword ptr [ecx + 0x24], 0x823824
// 004a3c52  c7414414388200       mov dword ptr [ecx + 0x44], 0x823814
// 004a3c59  c7416404388200       mov dword ptr [ecx + 0x64], 0x823804
// 004a3c60  c78184000000f4378200 mov dword ptr [ecx + 0x84], 0x8237f4
// 004a3c6a  c781a4000000e4378200 mov dword ptr [ecx + 0xa4], 0x8237e4
// 004a3c74  c781c4000000d4378200 mov dword ptr [ecx + 0xc4], 0x8237d4
// 004a3c7e  c78130010000bc378200 mov dword ptr [ecx + 0x130], 0x8237bc
// 004a3c88  e903feffff           jmp 0x4a3a90
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
