// roc 2008-06 005e3e60  unit: RBX::VSnap::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3e60
//
// 005e3e60  6aff                 push -1
// 005e3e62  68f8657d00           push 0x7d65f8
// 005e3e67  64a100000000         mov eax, dword ptr fs:[0]
// 005e3e6d  50                   push eax
// 005e3e6e  64892500000000       mov dword ptr fs:[0], esp
// 005e3e75  51                   push ecx
// 005e3e76  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e3e7a  56                   push esi
// 005e3e7b  8bf1                 mov esi, ecx
// 005e3e7d  50                   push eax
// 005e3e7e  89742408             mov dword ptr [esp + 8], esi
// 005e3e82  e8a9fcffff           call 0x5e3b30
// 005e3e87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e3e8f  e88cf5fdff           call 0x5c3420
// 005e3e94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e3e98  89461c               mov dword ptr [esi + 0x1c], eax
// 005e3e9b  c70684eb8300         mov dword ptr [esi], 0x83eb84
// 005e3ea1  c7461078eb8300       mov dword ptr [esi + 0x10], 0x83eb78
// 005e3ea8  c7461470eb8300       mov dword ptr [esi + 0x14], 0x83eb70
// 005e3eaf  c7462068eb8300       mov dword ptr [esi + 0x20], 0x83eb68
// 005e3eb6  c7462458eb8300       mov dword ptr [esi + 0x24], 0x83eb58
// 005e3ebd  c7464448eb8300       mov dword ptr [esi + 0x44], 0x83eb48
// 005e3ec4  c7466438eb8300       mov dword ptr [esi + 0x64], 0x83eb38
// 005e3ecb  c7868400000028eb8300 mov dword ptr [esi + 0x84], 0x83eb28
// 005e3ed5  c786a400000018eb8300 mov dword ptr [esi + 0xa4], 0x83eb18
// 005e3edf  c786c400000008eb8300 mov dword ptr [esi + 0xc4], 0x83eb08
// 005e3ee9  c78630010000f0ea8300 mov dword ptr [esi + 0x130], 0x83eaf0
// 005e3ef3  8bc6                 mov eax, esi
// 005e3ef5  5e                   pop esi
// 005e3ef6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3efd  83c410               add esp, 0x10
// 005e3f00  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
