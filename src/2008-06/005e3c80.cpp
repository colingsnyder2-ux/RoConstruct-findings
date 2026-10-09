// roc 2008-06 005e3c80  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3c80
//
// 005e3c80  8b442404             mov eax, dword ptr [esp + 4]
// 005e3c84  56                   push esi
// 005e3c85  50                   push eax
// 005e3c86  8bf1                 mov esi, ecx
// 005e3c88  e8e3fbffff           call 0x5e3870
// 005e3c8d  c706b4e68300         mov dword ptr [esi], 0x83e6b4
// 005e3c93  c74610a8e68300       mov dword ptr [esi + 0x10], 0x83e6a8
// 005e3c9a  c74614a0e68300       mov dword ptr [esi + 0x14], 0x83e6a0
// 005e3ca1  c7462098e68300       mov dword ptr [esi + 0x20], 0x83e698
// 005e3ca8  c7462488e68300       mov dword ptr [esi + 0x24], 0x83e688
// 005e3caf  c7464478e68300       mov dword ptr [esi + 0x44], 0x83e678
// 005e3cb6  c7466468e68300       mov dword ptr [esi + 0x64], 0x83e668
// 005e3cbd  c7868400000058e68300 mov dword ptr [esi + 0x84], 0x83e658
// 005e3cc7  c786a400000048e68300 mov dword ptr [esi + 0xa4], 0x83e648
// 005e3cd1  c786c400000038e68300 mov dword ptr [esi + 0xc4], 0x83e638
// 005e3cdb  c7863001000020e68300 mov dword ptr [esi + 0x130], 0x83e620
// 005e3ce5  8bc6                 mov eax, esi
// 005e3ce7  5e                   pop esi
// 005e3ce8  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
