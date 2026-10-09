// roc 2008-06 005e3410  unit: RBX::VRotateV::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3410
//
// 005e3410  c7013ce98300         mov dword ptr [ecx], 0x83e93c
// 005e3416  c7411030e98300       mov dword ptr [ecx + 0x10], 0x83e930
// 005e341d  c7411428e98300       mov dword ptr [ecx + 0x14], 0x83e928
// 005e3424  c7412020e98300       mov dword ptr [ecx + 0x20], 0x83e920
// 005e342b  c7412410e98300       mov dword ptr [ecx + 0x24], 0x83e910
// 005e3432  c7414400e98300       mov dword ptr [ecx + 0x44], 0x83e900
// 005e3439  c74164f0e88300       mov dword ptr [ecx + 0x64], 0x83e8f0
// 005e3440  c78184000000e0e88300 mov dword ptr [ecx + 0x84], 0x83e8e0
// 005e344a  c781a4000000d0e88300 mov dword ptr [ecx + 0xa4], 0x83e8d0
// 005e3454  c781c4000000c0e88300 mov dword ptr [ecx + 0xc4], 0x83e8c0
// 005e345e  c78130010000a8e88300 mov dword ptr [ecx + 0x130], 0x83e8a8
// 005e3468  e9a3f9ffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
