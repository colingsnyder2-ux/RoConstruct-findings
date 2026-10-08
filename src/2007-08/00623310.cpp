// roc 2007-08 00623310  unit: RBX::ArrowPanel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00623310
//
// 00623310  6aff                 push -1
// 00623312  687b6b7500           push 0x756b7b
// 00623317  64a100000000         mov eax, dword ptr fs:[0]
// 0062331d  50                   push eax
// 0062331e  64892500000000       mov dword ptr fs:[0], esp
// 00623325  51                   push ecx
// 00623326  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062332a  53                   push ebx
// 0062332b  55                   push ebp
// 0062332c  8be9                 mov ebp, ecx
// 0062332e  56                   push esi
// 0062332f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00623333  50                   push eax
// 00623334  8d5d04               lea ebx, [ebp + 4]
// 00623337  56                   push esi
// 00623338  8bcb                 mov ecx, ebx
// 0062333a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0062333e  897500               mov dword ptr [ebp], esi
// 00623341  e85afeffff           call 0x6231a0
// 00623346  85f6                 test esi, esi
// 00623348  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00623350  7453                 je 0x6233a5
// 00623352  57                   push edi
// 00623353  8dbea4000000         lea edi, [esi + 0xa4]
// 00623359  85ff                 test edi, edi
// 0062335b  7431                 je 0x62338e
// 0062335d  8937                 mov dword ptr [edi], esi
// 0062335f  8b33                 mov esi, dword ptr [ebx]
// 00623361  85f6                 test esi, esi
// 00623363  740c                 je 0x623371
// 00623365  8d4e08               lea ecx, [esi + 8]
// 00623368  ba01000000           mov edx, 1
// 0062336d  f00fc111             lock xadd dword ptr [ecx], edx
// 00623371  8b4f04               mov ecx, dword ptr [edi + 4]
// 00623374  85c9                 test ecx, ecx
// 00623376  7413                 je 0x62338b
// 00623378  8d4108               lea eax, [ecx + 8]
// 0062337b  83caff               or edx, 0xffffffff
// 0062337e  f00fc110             lock xadd dword ptr [eax], edx
// 00623382  7507                 jne 0x62338b
// 00623384  8b01                 mov eax, dword ptr [ecx]
// 00623386  8b5008               mov edx, dword ptr [eax + 8]
// 00623389  ffd2                 call edx
// 0062338b  897704               mov dword ptr [edi + 4], esi
// 0062338e  5f                   pop edi
// 0062338f  5e                   pop esi
// 00623390  8bc5                 mov eax, ebp
// 00623392  5d                   pop ebp
// 00623393  5b                   pop ebx
// 00623394  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00623398  64890d00000000       mov dword ptr fs:[0], ecx
// 0062339f  83c410               add esp, 0x10
// 006233a2  c20800               ret 8
// 006233a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006233a9  5e                   pop esi
// 006233aa  8bc5                 mov eax, ebp
// 006233ac  5d                   pop ebp
// 006233ad  5b                   pop ebx
// 006233ae  64890d00000000       mov dword ptr fs:[0], ecx
// 006233b5  83c410               add esp, 0x10
// 006233b8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
