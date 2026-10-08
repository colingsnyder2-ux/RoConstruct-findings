// roc 2007-08 005d5b20  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5b20
//
// 005d5b20  6aff                 push -1
// 005d5b22  687b6b7500           push 0x756b7b
// 005d5b27  64a100000000         mov eax, dword ptr fs:[0]
// 005d5b2d  50                   push eax
// 005d5b2e  64892500000000       mov dword ptr fs:[0], esp
// 005d5b35  51                   push ecx
// 005d5b36  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5b3a  53                   push ebx
// 005d5b3b  55                   push ebp
// 005d5b3c  8be9                 mov ebp, ecx
// 005d5b3e  56                   push esi
// 005d5b3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5b43  50                   push eax
// 005d5b44  8d5d04               lea ebx, [ebp + 4]
// 005d5b47  56                   push esi
// 005d5b48  8bcb                 mov ecx, ebx
// 005d5b4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5b4e  897500               mov dword ptr [ebp], esi
// 005d5b51  e8baf3ffff           call 0x5d4f10
// 005d5b56  85f6                 test esi, esi
// 005d5b58  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5b60  7453                 je 0x5d5bb5
// 005d5b62  57                   push edi
// 005d5b63  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5b69  85ff                 test edi, edi
// 005d5b6b  7431                 je 0x5d5b9e
// 005d5b6d  8937                 mov dword ptr [edi], esi
// 005d5b6f  8b33                 mov esi, dword ptr [ebx]
// 005d5b71  85f6                 test esi, esi
// 005d5b73  740c                 je 0x5d5b81
// 005d5b75  8d4e08               lea ecx, [esi + 8]
// 005d5b78  ba01000000           mov edx, 1
// 005d5b7d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5b81  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5b84  85c9                 test ecx, ecx
// 005d5b86  7413                 je 0x5d5b9b
// 005d5b88  8d4108               lea eax, [ecx + 8]
// 005d5b8b  83caff               or edx, 0xffffffff
// 005d5b8e  f00fc110             lock xadd dword ptr [eax], edx
// 005d5b92  7507                 jne 0x5d5b9b
// 005d5b94  8b01                 mov eax, dword ptr [ecx]
// 005d5b96  8b5008               mov edx, dword ptr [eax + 8]
// 005d5b99  ffd2                 call edx
// 005d5b9b  897704               mov dword ptr [edi + 4], esi
// 005d5b9e  5f                   pop edi
// 005d5b9f  5e                   pop esi
// 005d5ba0  8bc5                 mov eax, ebp
// 005d5ba2  5d                   pop ebp
// 005d5ba3  5b                   pop ebx
// 005d5ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5baf  83c410               add esp, 0x10
// 005d5bb2  c20800               ret 8
// 005d5bb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5bb9  5e                   pop esi
// 005d5bba  8bc5                 mov eax, ebp
// 005d5bbc  5d                   pop ebp
// 005d5bbd  5b                   pop ebx
// 005d5bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5bc5  83c410               add esp, 0x10
// 005d5bc8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
