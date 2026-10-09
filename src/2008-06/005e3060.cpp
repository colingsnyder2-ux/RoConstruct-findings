// roc 2008-06 005e3060  unit: RBX::VSnap::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3060
//
// 005e3060  c70104e58300         mov dword ptr [ecx], 0x83e504
// 005e3066  c74110f8e48300       mov dword ptr [ecx + 0x10], 0x83e4f8
// 005e306d  c74114f0e48300       mov dword ptr [ecx + 0x14], 0x83e4f0
// 005e3074  c74120e8e48300       mov dword ptr [ecx + 0x20], 0x83e4e8
// 005e307b  c74124d8e48300       mov dword ptr [ecx + 0x24], 0x83e4d8
// 005e3082  c74144c8e48300       mov dword ptr [ecx + 0x44], 0x83e4c8
// 005e3089  c74164b8e48300       mov dword ptr [ecx + 0x64], 0x83e4b8
// 005e3090  c78184000000a8e48300 mov dword ptr [ecx + 0x84], 0x83e4a8
// 005e309a  c781a400000098e48300 mov dword ptr [ecx + 0xa4], 0x83e498
// 005e30a4  c781c400000088e48300 mov dword ptr [ecx + 0xc4], 0x83e488
// 005e30ae  c7813001000070e48300 mov dword ptr [ecx + 0x130], 0x83e470
// 005e30b8  e953fdffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
