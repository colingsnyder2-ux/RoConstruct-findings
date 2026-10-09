// roc 2008-06 005e3b30  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3b30
//
// 005e3b30  8b442404             mov eax, dword ptr [esp + 4]
// 005e3b34  56                   push esi
// 005e3b35  50                   push eax
// 005e3b36  8bf1                 mov esi, ecx
// 005e3b38  e833fdffff           call 0x5e3870
// 005e3b3d  c7062ce48300         mov dword ptr [esi], 0x83e42c
// 005e3b43  c7461020e48300       mov dword ptr [esi + 0x10], 0x83e420
// 005e3b4a  c7461418e48300       mov dword ptr [esi + 0x14], 0x83e418
// 005e3b51  c7462010e48300       mov dword ptr [esi + 0x20], 0x83e410
// 005e3b58  c7462400e48300       mov dword ptr [esi + 0x24], 0x83e400
// 005e3b5f  c74644f0e38300       mov dword ptr [esi + 0x44], 0x83e3f0
// 005e3b66  c74664e0e38300       mov dword ptr [esi + 0x64], 0x83e3e0
// 005e3b6d  c78684000000d0e38300 mov dword ptr [esi + 0x84], 0x83e3d0
// 005e3b77  c786a4000000c0e38300 mov dword ptr [esi + 0xa4], 0x83e3c0
// 005e3b81  c786c4000000b0e38300 mov dword ptr [esi + 0xc4], 0x83e3b0
// 005e3b8b  c7863001000098e38300 mov dword ptr [esi + 0x130], 0x83e398
// 005e3b95  8bc6                 mov eax, esi
// 005e3b97  5e                   pop esi
// 005e3b98  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
