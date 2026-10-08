// roc 2007-08 00558e20  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558e20
//
// 00558e20  6aff                 push -1
// 00558e22  687b6b7500           push 0x756b7b
// 00558e27  64a100000000         mov eax, dword ptr fs:[0]
// 00558e2d  50                   push eax
// 00558e2e  64892500000000       mov dword ptr fs:[0], esp
// 00558e35  51                   push ecx
// 00558e36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00558e3a  53                   push ebx
// 00558e3b  55                   push ebp
// 00558e3c  8be9                 mov ebp, ecx
// 00558e3e  56                   push esi
// 00558e3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00558e43  50                   push eax
// 00558e44  8d5d04               lea ebx, [ebp + 4]
// 00558e47  56                   push esi
// 00558e48  8bcb                 mov ecx, ebx
// 00558e4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00558e4e  897500               mov dword ptr [ebp], esi
// 00558e51  e8baf8ffff           call 0x558710
// 00558e56  85f6                 test esi, esi
// 00558e58  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00558e60  7453                 je 0x558eb5
// 00558e62  57                   push edi
// 00558e63  8dbea4000000         lea edi, [esi + 0xa4]
// 00558e69  85ff                 test edi, edi
// 00558e6b  7431                 je 0x558e9e
// 00558e6d  8937                 mov dword ptr [edi], esi
// 00558e6f  8b33                 mov esi, dword ptr [ebx]
// 00558e71  85f6                 test esi, esi
// 00558e73  740c                 je 0x558e81
// 00558e75  8d4e08               lea ecx, [esi + 8]
// 00558e78  ba01000000           mov edx, 1
// 00558e7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00558e81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00558e84  85c9                 test ecx, ecx
// 00558e86  7413                 je 0x558e9b
// 00558e88  8d4108               lea eax, [ecx + 8]
// 00558e8b  83caff               or edx, 0xffffffff
// 00558e8e  f00fc110             lock xadd dword ptr [eax], edx
// 00558e92  7507                 jne 0x558e9b
// 00558e94  8b01                 mov eax, dword ptr [ecx]
// 00558e96  8b5008               mov edx, dword ptr [eax + 8]
// 00558e99  ffd2                 call edx
// 00558e9b  897704               mov dword ptr [edi + 4], esi
// 00558e9e  5f                   pop edi
// 00558e9f  5e                   pop esi
// 00558ea0  8bc5                 mov eax, ebp
// 00558ea2  5d                   pop ebp
// 00558ea3  5b                   pop ebx
// 00558ea4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00558ea8  64890d00000000       mov dword ptr fs:[0], ecx
// 00558eaf  83c410               add esp, 0x10
// 00558eb2  c20800               ret 8
// 00558eb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558eb9  5e                   pop esi
// 00558eba  8bc5                 mov eax, ebp
// 00558ebc  5d                   pop ebp
// 00558ebd  5b                   pop ebx
// 00558ebe  64890d00000000       mov dword ptr fs:[0], ecx
// 00558ec5  83c410               add esp, 0x10
// 00558ec8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
