// roc 2007-08 00549b20  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549b20
//
// 00549b20  6aff                 push -1
// 00549b22  687b6b7500           push 0x756b7b
// 00549b27  64a100000000         mov eax, dword ptr fs:[0]
// 00549b2d  50                   push eax
// 00549b2e  64892500000000       mov dword ptr fs:[0], esp
// 00549b35  51                   push ecx
// 00549b36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00549b3a  53                   push ebx
// 00549b3b  55                   push ebp
// 00549b3c  8be9                 mov ebp, ecx
// 00549b3e  56                   push esi
// 00549b3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00549b43  50                   push eax
// 00549b44  8d5d04               lea ebx, [ebp + 4]
// 00549b47  56                   push esi
// 00549b48  8bcb                 mov ecx, ebx
// 00549b4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00549b4e  897500               mov dword ptr [ebp], esi
// 00549b51  e83affffff           call 0x549a90
// 00549b56  85f6                 test esi, esi
// 00549b58  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00549b60  7453                 je 0x549bb5
// 00549b62  57                   push edi
// 00549b63  8dbea4000000         lea edi, [esi + 0xa4]
// 00549b69  85ff                 test edi, edi
// 00549b6b  7431                 je 0x549b9e
// 00549b6d  8937                 mov dword ptr [edi], esi
// 00549b6f  8b33                 mov esi, dword ptr [ebx]
// 00549b71  85f6                 test esi, esi
// 00549b73  740c                 je 0x549b81
// 00549b75  8d4e08               lea ecx, [esi + 8]
// 00549b78  ba01000000           mov edx, 1
// 00549b7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00549b81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00549b84  85c9                 test ecx, ecx
// 00549b86  7413                 je 0x549b9b
// 00549b88  8d4108               lea eax, [ecx + 8]
// 00549b8b  83caff               or edx, 0xffffffff
// 00549b8e  f00fc110             lock xadd dword ptr [eax], edx
// 00549b92  7507                 jne 0x549b9b
// 00549b94  8b01                 mov eax, dword ptr [ecx]
// 00549b96  8b5008               mov edx, dword ptr [eax + 8]
// 00549b99  ffd2                 call edx
// 00549b9b  897704               mov dword ptr [edi + 4], esi
// 00549b9e  5f                   pop edi
// 00549b9f  5e                   pop esi
// 00549ba0  8bc5                 mov eax, ebp
// 00549ba2  5d                   pop ebp
// 00549ba3  5b                   pop ebx
// 00549ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00549ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 00549baf  83c410               add esp, 0x10
// 00549bb2  c20800               ret 8
// 00549bb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00549bb9  5e                   pop esi
// 00549bba  8bc5                 mov eax, ebp
// 00549bbc  5d                   pop ebp
// 00549bbd  5b                   pop ebx
// 00549bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00549bc5  83c410               add esp, 0x10
// 00549bc8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
