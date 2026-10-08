// roc 2007-08 005d5d30  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5d30
//
// 005d5d30  6aff                 push -1
// 005d5d32  687b6b7500           push 0x756b7b
// 005d5d37  64a100000000         mov eax, dword ptr fs:[0]
// 005d5d3d  50                   push eax
// 005d5d3e  64892500000000       mov dword ptr fs:[0], esp
// 005d5d45  51                   push ecx
// 005d5d46  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5d4a  53                   push ebx
// 005d5d4b  55                   push ebp
// 005d5d4c  8be9                 mov ebp, ecx
// 005d5d4e  56                   push esi
// 005d5d4f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5d53  50                   push eax
// 005d5d54  8d5d04               lea ebx, [ebp + 4]
// 005d5d57  56                   push esi
// 005d5d58  8bcb                 mov ecx, ebx
// 005d5d5a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5d5e  897500               mov dword ptr [ebp], esi
// 005d5d61  e85af3ffff           call 0x5d50c0
// 005d5d66  85f6                 test esi, esi
// 005d5d68  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5d70  7453                 je 0x5d5dc5
// 005d5d72  57                   push edi
// 005d5d73  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5d79  85ff                 test edi, edi
// 005d5d7b  7431                 je 0x5d5dae
// 005d5d7d  8937                 mov dword ptr [edi], esi
// 005d5d7f  8b33                 mov esi, dword ptr [ebx]
// 005d5d81  85f6                 test esi, esi
// 005d5d83  740c                 je 0x5d5d91
// 005d5d85  8d4e08               lea ecx, [esi + 8]
// 005d5d88  ba01000000           mov edx, 1
// 005d5d8d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5d91  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5d94  85c9                 test ecx, ecx
// 005d5d96  7413                 je 0x5d5dab
// 005d5d98  8d4108               lea eax, [ecx + 8]
// 005d5d9b  83caff               or edx, 0xffffffff
// 005d5d9e  f00fc110             lock xadd dword ptr [eax], edx
// 005d5da2  7507                 jne 0x5d5dab
// 005d5da4  8b01                 mov eax, dword ptr [ecx]
// 005d5da6  8b5008               mov edx, dword ptr [eax + 8]
// 005d5da9  ffd2                 call edx
// 005d5dab  897704               mov dword ptr [edi + 4], esi
// 005d5dae  5f                   pop edi
// 005d5daf  5e                   pop esi
// 005d5db0  8bc5                 mov eax, ebp
// 005d5db2  5d                   pop ebp
// 005d5db3  5b                   pop ebx
// 005d5db4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5db8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5dbf  83c410               add esp, 0x10
// 005d5dc2  c20800               ret 8
// 005d5dc5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5dc9  5e                   pop esi
// 005d5dca  8bc5                 mov eax, ebp
// 005d5dcc  5d                   pop ebp
// 005d5dcd  5b                   pop ebx
// 005d5dce  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5dd5  83c410               add esp, 0x10
// 005d5dd8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
