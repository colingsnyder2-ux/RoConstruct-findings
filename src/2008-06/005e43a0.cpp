// roc 2008-06 005e43a0  unit: RBX::VMotor::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e43a0
//
// 005e43a0  6aff                 push -1
// 005e43a2  68b8667d00           push 0x7d66b8
// 005e43a7  64a100000000         mov eax, dword ptr fs:[0]
// 005e43ad  50                   push eax
// 005e43ae  64892500000000       mov dword ptr fs:[0], esp
// 005e43b5  51                   push ecx
// 005e43b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e43ba  56                   push esi
// 005e43bb  8bf1                 mov esi, ecx
// 005e43bd  50                   push eax
// 005e43be  89742408             mov dword ptr [esp + 8], esi
// 005e43c2  e809faffff           call 0x5e3dd0
// 005e43c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e43cf  e8ecf2fdff           call 0x5c36c0
// 005e43d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e43d8  89461c               mov dword ptr [esi + 0x1c], eax
// 005e43db  c70694f08300         mov dword ptr [esi], 0x83f094
// 005e43e1  c7461088f08300       mov dword ptr [esi + 0x10], 0x83f088
// 005e43e8  c7461480f08300       mov dword ptr [esi + 0x14], 0x83f080
// 005e43ef  c7462078f08300       mov dword ptr [esi + 0x20], 0x83f078
// 005e43f6  c7462468f08300       mov dword ptr [esi + 0x24], 0x83f068
// 005e43fd  c7464458f08300       mov dword ptr [esi + 0x44], 0x83f058
// 005e4404  c7466448f08300       mov dword ptr [esi + 0x64], 0x83f048
// 005e440b  c7868400000038f08300 mov dword ptr [esi + 0x84], 0x83f038
// 005e4415  c786a400000028f08300 mov dword ptr [esi + 0xa4], 0x83f028
// 005e441f  c786c400000018f08300 mov dword ptr [esi + 0xc4], 0x83f018
// 005e4429  c7863001000000f08300 mov dword ptr [esi + 0x130], 0x83f000
// 005e4433  8bc6                 mov eax, esi
// 005e4435  5e                   pop esi
// 005e4436  64890d00000000       mov dword ptr fs:[0], ecx
// 005e443d  83c410               add esp, 0x10
// 005e4440  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
