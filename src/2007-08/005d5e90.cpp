// roc 2007-08 005d5e90  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5e90
//
// 005d5e90  6aff                 push -1
// 005d5e92  687b6b7500           push 0x756b7b
// 005d5e97  64a100000000         mov eax, dword ptr fs:[0]
// 005d5e9d  50                   push eax
// 005d5e9e  64892500000000       mov dword ptr fs:[0], esp
// 005d5ea5  51                   push ecx
// 005d5ea6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5eaa  53                   push ebx
// 005d5eab  55                   push ebp
// 005d5eac  8be9                 mov ebp, ecx
// 005d5eae  56                   push esi
// 005d5eaf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5eb3  50                   push eax
// 005d5eb4  8d5d04               lea ebx, [ebp + 4]
// 005d5eb7  56                   push esi
// 005d5eb8  8bcb                 mov ecx, ebx
// 005d5eba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5ebe  897500               mov dword ptr [ebp], esi
// 005d5ec1  e81af3ffff           call 0x5d51e0
// 005d5ec6  85f6                 test esi, esi
// 005d5ec8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5ed0  7453                 je 0x5d5f25
// 005d5ed2  57                   push edi
// 005d5ed3  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5ed9  85ff                 test edi, edi
// 005d5edb  7431                 je 0x5d5f0e
// 005d5edd  8937                 mov dword ptr [edi], esi
// 005d5edf  8b33                 mov esi, dword ptr [ebx]
// 005d5ee1  85f6                 test esi, esi
// 005d5ee3  740c                 je 0x5d5ef1
// 005d5ee5  8d4e08               lea ecx, [esi + 8]
// 005d5ee8  ba01000000           mov edx, 1
// 005d5eed  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5ef1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5ef4  85c9                 test ecx, ecx
// 005d5ef6  7413                 je 0x5d5f0b
// 005d5ef8  8d4108               lea eax, [ecx + 8]
// 005d5efb  83caff               or edx, 0xffffffff
// 005d5efe  f00fc110             lock xadd dword ptr [eax], edx
// 005d5f02  7507                 jne 0x5d5f0b
// 005d5f04  8b01                 mov eax, dword ptr [ecx]
// 005d5f06  8b5008               mov edx, dword ptr [eax + 8]
// 005d5f09  ffd2                 call edx
// 005d5f0b  897704               mov dword ptr [edi + 4], esi
// 005d5f0e  5f                   pop edi
// 005d5f0f  5e                   pop esi
// 005d5f10  8bc5                 mov eax, ebp
// 005d5f12  5d                   pop ebp
// 005d5f13  5b                   pop ebx
// 005d5f14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5f18  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5f1f  83c410               add esp, 0x10
// 005d5f22  c20800               ret 8
// 005d5f25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5f29  5e                   pop esi
// 005d5f2a  8bc5                 mov eax, ebp
// 005d5f2c  5d                   pop ebp
// 005d5f2d  5b                   pop ebx
// 005d5f2e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5f35  83c410               add esp, 0x10
// 005d5f38  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
