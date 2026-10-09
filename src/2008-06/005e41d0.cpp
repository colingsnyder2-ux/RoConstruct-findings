// roc 2008-06 005e41d0  unit: RBX::VRotateP::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e41d0
//
// 005e41d0  6aff                 push -1
// 005e41d2  6878667d00           push 0x7d6678
// 005e41d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e41dd  50                   push eax
// 005e41de  64892500000000       mov dword ptr fs:[0], esp
// 005e41e5  51                   push ecx
// 005e41e6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e41ea  56                   push esi
// 005e41eb  8bf1                 mov esi, ecx
// 005e41ed  50                   push eax
// 005e41ee  89742408             mov dword ptr [esp + 8], esi
// 005e41f2  e8f9faffff           call 0x5e3cf0
// 005e41f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e41ff  e8dcf3fdff           call 0x5c35e0
// 005e4204  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e4208  89461c               mov dword ptr [esi + 0x1c], eax
// 005e420b  c706e4ee8300         mov dword ptr [esi], 0x83eee4
// 005e4211  c74610d8ee8300       mov dword ptr [esi + 0x10], 0x83eed8
// 005e4218  c74614d0ee8300       mov dword ptr [esi + 0x14], 0x83eed0
// 005e421f  c74620c8ee8300       mov dword ptr [esi + 0x20], 0x83eec8
// 005e4226  c74624b8ee8300       mov dword ptr [esi + 0x24], 0x83eeb8
// 005e422d  c74644a8ee8300       mov dword ptr [esi + 0x44], 0x83eea8
// 005e4234  c7466498ee8300       mov dword ptr [esi + 0x64], 0x83ee98
// 005e423b  c7868400000088ee8300 mov dword ptr [esi + 0x84], 0x83ee88
// 005e4245  c786a400000078ee8300 mov dword ptr [esi + 0xa4], 0x83ee78
// 005e424f  c786c400000068ee8300 mov dword ptr [esi + 0xc4], 0x83ee68
// 005e4259  c7863001000050ee8300 mov dword ptr [esi + 0x130], 0x83ee50
// 005e4263  8bc6                 mov eax, esi
// 005e4265  5e                   pop esi
// 005e4266  64890d00000000       mov dword ptr fs:[0], ecx
// 005e426d  83c410               add esp, 0x10
// 005e4270  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
