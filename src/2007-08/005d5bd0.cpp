// roc 2007-08 005d5bd0  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5bd0
//
// 005d5bd0  6aff                 push -1
// 005d5bd2  687b6b7500           push 0x756b7b
// 005d5bd7  64a100000000         mov eax, dword ptr fs:[0]
// 005d5bdd  50                   push eax
// 005d5bde  64892500000000       mov dword ptr fs:[0], esp
// 005d5be5  51                   push ecx
// 005d5be6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5bea  53                   push ebx
// 005d5beb  55                   push ebp
// 005d5bec  8be9                 mov ebp, ecx
// 005d5bee  56                   push esi
// 005d5bef  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5bf3  50                   push eax
// 005d5bf4  8d5d04               lea ebx, [ebp + 4]
// 005d5bf7  56                   push esi
// 005d5bf8  8bcb                 mov ecx, ebx
// 005d5bfa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5bfe  897500               mov dword ptr [ebp], esi
// 005d5c01  e89af3ffff           call 0x5d4fa0
// 005d5c06  85f6                 test esi, esi
// 005d5c08  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5c10  7453                 je 0x5d5c65
// 005d5c12  57                   push edi
// 005d5c13  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5c19  85ff                 test edi, edi
// 005d5c1b  7431                 je 0x5d5c4e
// 005d5c1d  8937                 mov dword ptr [edi], esi
// 005d5c1f  8b33                 mov esi, dword ptr [ebx]
// 005d5c21  85f6                 test esi, esi
// 005d5c23  740c                 je 0x5d5c31
// 005d5c25  8d4e08               lea ecx, [esi + 8]
// 005d5c28  ba01000000           mov edx, 1
// 005d5c2d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5c31  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5c34  85c9                 test ecx, ecx
// 005d5c36  7413                 je 0x5d5c4b
// 005d5c38  8d4108               lea eax, [ecx + 8]
// 005d5c3b  83caff               or edx, 0xffffffff
// 005d5c3e  f00fc110             lock xadd dword ptr [eax], edx
// 005d5c42  7507                 jne 0x5d5c4b
// 005d5c44  8b01                 mov eax, dword ptr [ecx]
// 005d5c46  8b5008               mov edx, dword ptr [eax + 8]
// 005d5c49  ffd2                 call edx
// 005d5c4b  897704               mov dword ptr [edi + 4], esi
// 005d5c4e  5f                   pop edi
// 005d5c4f  5e                   pop esi
// 005d5c50  8bc5                 mov eax, ebp
// 005d5c52  5d                   pop ebp
// 005d5c53  5b                   pop ebx
// 005d5c54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5c58  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5c5f  83c410               add esp, 0x10
// 005d5c62  c20800               ret 8
// 005d5c65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5c69  5e                   pop esi
// 005d5c6a  8bc5                 mov eax, ebp
// 005d5c6c  5d                   pop ebp
// 005d5c6d  5b                   pop ebx
// 005d5c6e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5c75  83c410               add esp, 0x10
// 005d5c78  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
