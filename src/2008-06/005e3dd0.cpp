// roc 2008-06 005e3dd0  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3dd0
//
// 005e3dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005e3dd4  56                   push esi
// 005e3dd5  50                   push eax
// 005e3dd6  8bf1                 mov esi, ecx
// 005e3dd8  e893faffff           call 0x5e3870
// 005e3ddd  c7063ce98300         mov dword ptr [esi], 0x83e93c
// 005e3de3  c7461030e98300       mov dword ptr [esi + 0x10], 0x83e930
// 005e3dea  c7461428e98300       mov dword ptr [esi + 0x14], 0x83e928
// 005e3df1  c7462020e98300       mov dword ptr [esi + 0x20], 0x83e920
// 005e3df8  c7462410e98300       mov dword ptr [esi + 0x24], 0x83e910
// 005e3dff  c7464400e98300       mov dword ptr [esi + 0x44], 0x83e900
// 005e3e06  c74664f0e88300       mov dword ptr [esi + 0x64], 0x83e8f0
// 005e3e0d  c78684000000e0e88300 mov dword ptr [esi + 0x84], 0x83e8e0
// 005e3e17  c786a4000000d0e88300 mov dword ptr [esi + 0xa4], 0x83e8d0
// 005e3e21  c786c4000000c0e88300 mov dword ptr [esi + 0xc4], 0x83e8c0
// 005e3e2b  c78630010000a8e88300 mov dword ptr [esi + 0x130], 0x83e8a8
// 005e3e35  8bc6                 mov eax, esi
// 005e3e37  5e                   pop esi
// 005e3e38  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
