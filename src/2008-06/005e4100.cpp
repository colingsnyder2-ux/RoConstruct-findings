// roc 2008-06 005e4100  unit: RBX::VRotate::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4100
//
// 005e4100  6aff                 push -1
// 005e4102  6858667d00           push 0x7d6658
// 005e4107  64a100000000         mov eax, dword ptr fs:[0]
// 005e410d  50                   push eax
// 005e410e  64892500000000       mov dword ptr fs:[0], esp
// 005e4115  51                   push ecx
// 005e4116  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e411a  56                   push esi
// 005e411b  8bf1                 mov esi, ecx
// 005e411d  50                   push eax
// 005e411e  89742408             mov dword ptr [esp + 8], esi
// 005e4122  e859fbffff           call 0x5e3c80
// 005e4127  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e412f  e83cf4fdff           call 0x5c3570
// 005e4134  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e4138  89461c               mov dword ptr [esi + 0x1c], eax
// 005e413b  c7060cee8300         mov dword ptr [esi], 0x83ee0c
// 005e4141  c7461000ee8300       mov dword ptr [esi + 0x10], 0x83ee00
// 005e4148  c74614f8ed8300       mov dword ptr [esi + 0x14], 0x83edf8
// 005e414f  c74620f0ed8300       mov dword ptr [esi + 0x20], 0x83edf0
// 005e4156  c74624e0ed8300       mov dword ptr [esi + 0x24], 0x83ede0
// 005e415d  c74644d0ed8300       mov dword ptr [esi + 0x44], 0x83edd0
// 005e4164  c74664c0ed8300       mov dword ptr [esi + 0x64], 0x83edc0
// 005e416b  c78684000000b0ed8300 mov dword ptr [esi + 0x84], 0x83edb0
// 005e4175  c786a4000000a0ed8300 mov dword ptr [esi + 0xa4], 0x83eda0
// 005e417f  c786c400000090ed8300 mov dword ptr [esi + 0xc4], 0x83ed90
// 005e4189  c7863001000078ed8300 mov dword ptr [esi + 0x130], 0x83ed78
// 005e4193  8bc6                 mov eax, esi
// 005e4195  5e                   pop esi
// 005e4196  64890d00000000       mov dword ptr fs:[0], ecx
// 005e419d  83c410               add esp, 0x10
// 005e41a0  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
