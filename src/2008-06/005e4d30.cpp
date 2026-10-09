// roc 2008-06 005e4d30  unit: RBX::VRotateP::?$FactoryProduct  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4d30
//
// 005e4d30  8b442404             mov eax, dword ptr [esp + 4]
// 005e4d34  56                   push esi
// 005e4d35  50                   push eax
// 005e4d36  8bf1                 mov esi, ecx
// 005e4d38  e873f5ffff           call 0x5e42b0
// 005e4d3d  c706b4f58300         mov dword ptr [esi], 0x83f5b4
// 005e4d43  c74610a8f58300       mov dword ptr [esi + 0x10], 0x83f5a8
// 005e4d4a  c74614a0f58300       mov dword ptr [esi + 0x14], 0x83f5a0
// 005e4d51  c7462098f58300       mov dword ptr [esi + 0x20], 0x83f598
// 005e4d58  c7462488f58300       mov dword ptr [esi + 0x24], 0x83f588
// 005e4d5f  c7464478f58300       mov dword ptr [esi + 0x44], 0x83f578
// 005e4d66  c7466468f58300       mov dword ptr [esi + 0x64], 0x83f568
// 005e4d6d  c7868400000058f58300 mov dword ptr [esi + 0x84], 0x83f558
// 005e4d77  c786a400000048f58300 mov dword ptr [esi + 0xa4], 0x83f548
// 005e4d81  c786c400000038f58300 mov dword ptr [esi + 0xc4], 0x83f538
// 005e4d8b  c7863001000020f58300 mov dword ptr [esi + 0x130], 0x83f520
// 005e4d95  8bc6                 mov eax, esi
// 005e4d97  5e                   pop esi
// 005e4d98  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
