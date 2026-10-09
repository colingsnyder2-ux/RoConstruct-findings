// roc 2008-06 005e3f10  unit: RBX::VSnap::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3f10
//
// 005e3f10  6aff                 push -1
// 005e3f12  6818667d00           push 0x7d6618
// 005e3f17  64a100000000         mov eax, dword ptr fs:[0]
// 005e3f1d  50                   push eax
// 005e3f1e  64892500000000       mov dword ptr fs:[0], esp
// 005e3f25  51                   push ecx
// 005e3f26  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e3f2a  56                   push esi
// 005e3f2b  8bf1                 mov esi, ecx
// 005e3f2d  50                   push eax
// 005e3f2e  89742408             mov dword ptr [esp + 8], esi
// 005e3f32  e869fcffff           call 0x5e3ba0
// 005e3f37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e3f3f  e84cf5fdff           call 0x5c3490
// 005e3f44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e3f48  89461c               mov dword ptr [esi + 0x1c], eax
// 005e3f4b  c7065cec8300         mov dword ptr [esi], 0x83ec5c
// 005e3f51  c7461050ec8300       mov dword ptr [esi + 0x10], 0x83ec50
// 005e3f58  c7461448ec8300       mov dword ptr [esi + 0x14], 0x83ec48
// 005e3f5f  c7462040ec8300       mov dword ptr [esi + 0x20], 0x83ec40
// 005e3f66  c7462430ec8300       mov dword ptr [esi + 0x24], 0x83ec30
// 005e3f6d  c7464420ec8300       mov dword ptr [esi + 0x44], 0x83ec20
// 005e3f74  c7466410ec8300       mov dword ptr [esi + 0x64], 0x83ec10
// 005e3f7b  c7868400000000ec8300 mov dword ptr [esi + 0x84], 0x83ec00
// 005e3f85  c786a4000000f0eb8300 mov dword ptr [esi + 0xa4], 0x83ebf0
// 005e3f8f  c786c4000000e0eb8300 mov dword ptr [esi + 0xc4], 0x83ebe0
// 005e3f99  c78630010000c8eb8300 mov dword ptr [esi + 0x130], 0x83ebc8
// 005e3fa3  8bc6                 mov eax, esi
// 005e3fa5  5e                   pop esi
// 005e3fa6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3fad  83c410               add esp, 0x10
// 005e3fb0  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
