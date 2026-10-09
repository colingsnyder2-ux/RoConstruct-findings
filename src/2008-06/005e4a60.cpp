// roc 2008-06 005e4a60  unit: RBX::VGlue::?$FactoryProduct  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4a60
//
// 005e4a60  8b442404             mov eax, dword ptr [esp + 4]
// 005e4a64  56                   push esi
// 005e4a65  50                   push eax
// 005e4a66  8bf1                 mov esi, ecx
// 005e4a68  e893f6ffff           call 0x5e4100
// 005e4a6d  c70604f48300         mov dword ptr [esi], 0x83f404
// 005e4a73  c74610f8f38300       mov dword ptr [esi + 0x10], 0x83f3f8
// 005e4a7a  c74614f0f38300       mov dword ptr [esi + 0x14], 0x83f3f0
// 005e4a81  c74620e8f38300       mov dword ptr [esi + 0x20], 0x83f3e8
// 005e4a88  c74624d8f38300       mov dword ptr [esi + 0x24], 0x83f3d8
// 005e4a8f  c74644c8f38300       mov dword ptr [esi + 0x44], 0x83f3c8
// 005e4a96  c74664b8f38300       mov dword ptr [esi + 0x64], 0x83f3b8
// 005e4a9d  c78684000000a8f38300 mov dword ptr [esi + 0x84], 0x83f3a8
// 005e4aa7  c786a400000098f38300 mov dword ptr [esi + 0xa4], 0x83f398
// 005e4ab1  c786c400000088f38300 mov dword ptr [esi + 0xc4], 0x83f388
// 005e4abb  c7863001000070f38300 mov dword ptr [esi + 0x130], 0x83f370
// 005e4ac5  8bc6                 mov eax, esi
// 005e4ac7  5e                   pop esi
// 005e4ac8  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
