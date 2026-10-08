// roc 2007-08 0055f1c0  unit: RBX::ClearBackpack  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055f1c0
//
// 0055f1c0  6aff                 push -1
// 0055f1c2  687b6b7500           push 0x756b7b
// 0055f1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0055f1cd  50                   push eax
// 0055f1ce  64892500000000       mov dword ptr fs:[0], esp
// 0055f1d5  51                   push ecx
// 0055f1d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055f1da  53                   push ebx
// 0055f1db  55                   push ebp
// 0055f1dc  8be9                 mov ebp, ecx
// 0055f1de  56                   push esi
// 0055f1df  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055f1e3  50                   push eax
// 0055f1e4  8d5d04               lea ebx, [ebp + 4]
// 0055f1e7  56                   push esi
// 0055f1e8  8bcb                 mov ecx, ebx
// 0055f1ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055f1ee  897500               mov dword ptr [ebp], esi
// 0055f1f1  e82afcffff           call 0x55ee20
// 0055f1f6  85f6                 test esi, esi
// 0055f1f8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055f200  7453                 je 0x55f255
// 0055f202  57                   push edi
// 0055f203  8dbea4000000         lea edi, [esi + 0xa4]
// 0055f209  85ff                 test edi, edi
// 0055f20b  7431                 je 0x55f23e
// 0055f20d  8937                 mov dword ptr [edi], esi
// 0055f20f  8b33                 mov esi, dword ptr [ebx]
// 0055f211  85f6                 test esi, esi
// 0055f213  740c                 je 0x55f221
// 0055f215  8d4e08               lea ecx, [esi + 8]
// 0055f218  ba01000000           mov edx, 1
// 0055f21d  f00fc111             lock xadd dword ptr [ecx], edx
// 0055f221  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055f224  85c9                 test ecx, ecx
// 0055f226  7413                 je 0x55f23b
// 0055f228  8d4108               lea eax, [ecx + 8]
// 0055f22b  83caff               or edx, 0xffffffff
// 0055f22e  f00fc110             lock xadd dword ptr [eax], edx
// 0055f232  7507                 jne 0x55f23b
// 0055f234  8b01                 mov eax, dword ptr [ecx]
// 0055f236  8b5008               mov edx, dword ptr [eax + 8]
// 0055f239  ffd2                 call edx
// 0055f23b  897704               mov dword ptr [edi + 4], esi
// 0055f23e  5f                   pop edi
// 0055f23f  5e                   pop esi
// 0055f240  8bc5                 mov eax, ebp
// 0055f242  5d                   pop ebp
// 0055f243  5b                   pop ebx
// 0055f244  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055f248  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f24f  83c410               add esp, 0x10
// 0055f252  c20800               ret 8
// 0055f255  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055f259  5e                   pop esi
// 0055f25a  8bc5                 mov eax, ebp
// 0055f25c  5d                   pop ebp
// 0055f25d  5b                   pop ebx
// 0055f25e  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f265  83c410               add esp, 0x10
// 0055f268  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
