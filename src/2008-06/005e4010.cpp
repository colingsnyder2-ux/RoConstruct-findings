// roc 2008-06 005e4010  unit: RBX::VWeld::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4010
//
// 005e4010  6aff                 push -1
// 005e4012  6838667d00           push 0x7d6638
// 005e4017  64a100000000         mov eax, dword ptr fs:[0]
// 005e401d  50                   push eax
// 005e401e  64892500000000       mov dword ptr fs:[0], esp
// 005e4025  51                   push ecx
// 005e4026  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e402a  56                   push esi
// 005e402b  8bf1                 mov esi, ecx
// 005e402d  50                   push eax
// 005e402e  89742408             mov dword ptr [esp + 8], esi
// 005e4032  e8d9fbffff           call 0x5e3c10
// 005e4037  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e403f  e8bcf4fdff           call 0x5c3500
// 005e4044  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e4048  89461c               mov dword ptr [esi + 0x1c], eax
// 005e404b  c70634ed8300         mov dword ptr [esi], 0x83ed34
// 005e4051  c7461028ed8300       mov dword ptr [esi + 0x10], 0x83ed28
// 005e4058  c7461420ed8300       mov dword ptr [esi + 0x14], 0x83ed20
// 005e405f  c7462018ed8300       mov dword ptr [esi + 0x20], 0x83ed18
// 005e4066  c7462408ed8300       mov dword ptr [esi + 0x24], 0x83ed08
// 005e406d  c74644f8ec8300       mov dword ptr [esi + 0x44], 0x83ecf8
// 005e4074  c74664e8ec8300       mov dword ptr [esi + 0x64], 0x83ece8
// 005e407b  c78684000000d8ec8300 mov dword ptr [esi + 0x84], 0x83ecd8
// 005e4085  c786a4000000c8ec8300 mov dword ptr [esi + 0xa4], 0x83ecc8
// 005e408f  c786c4000000b8ec8300 mov dword ptr [esi + 0xc4], 0x83ecb8
// 005e4099  c78630010000a0ec8300 mov dword ptr [esi + 0x130], 0x83eca0
// 005e40a3  8bc6                 mov eax, esi
// 005e40a5  5e                   pop esi
// 005e40a6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e40ad  83c410               add esp, 0x10
// 005e40b0  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
