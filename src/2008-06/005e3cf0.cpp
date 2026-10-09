// roc 2008-06 005e3cf0  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3cf0
//
// 005e3cf0  8b442404             mov eax, dword ptr [esp + 4]
// 005e3cf4  56                   push esi
// 005e3cf5  50                   push eax
// 005e3cf6  8bf1                 mov esi, ecx
// 005e3cf8  e873fbffff           call 0x5e3870
// 005e3cfd  c7068ce78300         mov dword ptr [esi], 0x83e78c
// 005e3d03  c7461080e78300       mov dword ptr [esi + 0x10], 0x83e780
// 005e3d0a  c7461478e78300       mov dword ptr [esi + 0x14], 0x83e778
// 005e3d11  c7462070e78300       mov dword ptr [esi + 0x20], 0x83e770
// 005e3d18  c7462460e78300       mov dword ptr [esi + 0x24], 0x83e760
// 005e3d1f  c7464450e78300       mov dword ptr [esi + 0x44], 0x83e750
// 005e3d26  c7466440e78300       mov dword ptr [esi + 0x64], 0x83e740
// 005e3d2d  c7868400000030e78300 mov dword ptr [esi + 0x84], 0x83e730
// 005e3d37  c786a400000020e78300 mov dword ptr [esi + 0xa4], 0x83e720
// 005e3d41  c786c400000010e78300 mov dword ptr [esi + 0xc4], 0x83e710
// 005e3d4b  c78630010000f8e68300 mov dword ptr [esi + 0x130], 0x83e6f8
// 005e3d55  8bc6                 mov eax, esi
// 005e3d57  5e                   pop esi
// 005e3d58  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
