// roc 2008-06 005e3d60  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3d60
//
// 005e3d60  8b442404             mov eax, dword ptr [esp + 4]
// 005e3d64  56                   push esi
// 005e3d65  50                   push eax
// 005e3d66  8bf1                 mov esi, ecx
// 005e3d68  e803fbffff           call 0x5e3870
// 005e3d6d  c70664e88300         mov dword ptr [esi], 0x83e864
// 005e3d73  c7461058e88300       mov dword ptr [esi + 0x10], 0x83e858
// 005e3d7a  c7461450e88300       mov dword ptr [esi + 0x14], 0x83e850
// 005e3d81  c7462048e88300       mov dword ptr [esi + 0x20], 0x83e848
// 005e3d88  c7462438e88300       mov dword ptr [esi + 0x24], 0x83e838
// 005e3d8f  c7464428e88300       mov dword ptr [esi + 0x44], 0x83e828
// 005e3d96  c7466418e88300       mov dword ptr [esi + 0x64], 0x83e818
// 005e3d9d  c7868400000008e88300 mov dword ptr [esi + 0x84], 0x83e808
// 005e3da7  c786a4000000f8e78300 mov dword ptr [esi + 0xa4], 0x83e7f8
// 005e3db1  c786c4000000e8e78300 mov dword ptr [esi + 0xc4], 0x83e7e8
// 005e3dbb  c78630010000d0e78300 mov dword ptr [esi + 0x130], 0x83e7d0
// 005e3dc5  8bc6                 mov eax, esi
// 005e3dc7  5e                   pop esi
// 005e3dc8  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
