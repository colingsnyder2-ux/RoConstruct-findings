// roc 2008-06 005e3100  unit: RBX::VWeld::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3100
//
// 005e3100  c701dce58300         mov dword ptr [ecx], 0x83e5dc
// 005e3106  c74110d0e58300       mov dword ptr [ecx + 0x10], 0x83e5d0
// 005e310d  c74114c8e58300       mov dword ptr [ecx + 0x14], 0x83e5c8
// 005e3114  c74120c0e58300       mov dword ptr [ecx + 0x20], 0x83e5c0
// 005e311b  c74124b0e58300       mov dword ptr [ecx + 0x24], 0x83e5b0
// 005e3122  c74144a0e58300       mov dword ptr [ecx + 0x44], 0x83e5a0
// 005e3129  c7416490e58300       mov dword ptr [ecx + 0x64], 0x83e590
// 005e3130  c7818400000080e58300 mov dword ptr [ecx + 0x84], 0x83e580
// 005e313a  c781a400000070e58300 mov dword ptr [ecx + 0xa4], 0x83e570
// 005e3144  c781c400000060e58300 mov dword ptr [ecx + 0xc4], 0x83e560
// 005e314e  c7813001000048e58300 mov dword ptr [ecx + 0x130], 0x83e548
// 005e3158  e9b3fcffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
