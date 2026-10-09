// roc 2008-06 005e2fa0  unit: RBX::JointInstance  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2fa0
//
// 005e2fa0  c7012ce48300         mov dword ptr [ecx], 0x83e42c
// 005e2fa6  c7411020e48300       mov dword ptr [ecx + 0x10], 0x83e420
// 005e2fad  c7411418e48300       mov dword ptr [ecx + 0x14], 0x83e418
// 005e2fb4  c7412010e48300       mov dword ptr [ecx + 0x20], 0x83e410
// 005e2fbb  c7412400e48300       mov dword ptr [ecx + 0x24], 0x83e400
// 005e2fc2  c74144f0e38300       mov dword ptr [ecx + 0x44], 0x83e3f0
// 005e2fc9  c74164e0e38300       mov dword ptr [ecx + 0x64], 0x83e3e0
// 005e2fd0  c78184000000d0e38300 mov dword ptr [ecx + 0x84], 0x83e3d0
// 005e2fda  c781a4000000c0e38300 mov dword ptr [ecx + 0xa4], 0x83e3c0
// 005e2fe4  c781c4000000b0e38300 mov dword ptr [ecx + 0xc4], 0x83e3b0
// 005e2fee  c7813001000098e38300 mov dword ptr [ecx + 0x130], 0x83e398
// 005e2ff8  e913feffff           jmp 0x5e2e10
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
