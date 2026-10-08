// roc 2007-08 005e43c0  unit: RBX::BoxSelectCommand  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e43c0
//
// 005e43c0  6aff                 push -1
// 005e43c2  687b6b7500           push 0x756b7b
// 005e43c7  64a100000000         mov eax, dword ptr fs:[0]
// 005e43cd  50                   push eax
// 005e43ce  64892500000000       mov dword ptr fs:[0], esp
// 005e43d5  51                   push ecx
// 005e43d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e43da  53                   push ebx
// 005e43db  55                   push ebp
// 005e43dc  8be9                 mov ebp, ecx
// 005e43de  56                   push esi
// 005e43df  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e43e3  50                   push eax
// 005e43e4  8d5d04               lea ebx, [ebp + 4]
// 005e43e7  56                   push esi
// 005e43e8  8bcb                 mov ecx, ebx
// 005e43ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 005e43ee  897500               mov dword ptr [ebp], esi
// 005e43f1  e8dafdffff           call 0x5e41d0
// 005e43f6  85f6                 test esi, esi
// 005e43f8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e4400  7453                 je 0x5e4455
// 005e4402  57                   push edi
// 005e4403  8dbea4000000         lea edi, [esi + 0xa4]
// 005e4409  85ff                 test edi, edi
// 005e440b  7431                 je 0x5e443e
// 005e440d  8937                 mov dword ptr [edi], esi
// 005e440f  8b33                 mov esi, dword ptr [ebx]
// 005e4411  85f6                 test esi, esi
// 005e4413  740c                 je 0x5e4421
// 005e4415  8d4e08               lea ecx, [esi + 8]
// 005e4418  ba01000000           mov edx, 1
// 005e441d  f00fc111             lock xadd dword ptr [ecx], edx
// 005e4421  8b4f04               mov ecx, dword ptr [edi + 4]
// 005e4424  85c9                 test ecx, ecx
// 005e4426  7413                 je 0x5e443b
// 005e4428  8d4108               lea eax, [ecx + 8]
// 005e442b  83caff               or edx, 0xffffffff
// 005e442e  f00fc110             lock xadd dword ptr [eax], edx
// 005e4432  7507                 jne 0x5e443b
// 005e4434  8b01                 mov eax, dword ptr [ecx]
// 005e4436  8b5008               mov edx, dword ptr [eax + 8]
// 005e4439  ffd2                 call edx
// 005e443b  897704               mov dword ptr [edi + 4], esi
// 005e443e  5f                   pop edi
// 005e443f  5e                   pop esi
// 005e4440  8bc5                 mov eax, ebp
// 005e4442  5d                   pop ebp
// 005e4443  5b                   pop ebx
// 005e4444  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e4448  64890d00000000       mov dword ptr fs:[0], ecx
// 005e444f  83c410               add esp, 0x10
// 005e4452  c20800               ret 8
// 005e4455  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e4459  5e                   pop esi
// 005e445a  8bc5                 mov eax, ebp
// 005e445c  5d                   pop ebp
// 005e445d  5b                   pop ebx
// 005e445e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4465  83c410               add esp, 0x10
// 005e4468  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
