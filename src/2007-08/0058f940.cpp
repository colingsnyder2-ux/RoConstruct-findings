// roc 2007-08 0058f940  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f940
//
// 0058f940  6aff                 push -1
// 0058f942  687b6b7500           push 0x756b7b
// 0058f947  64a100000000         mov eax, dword ptr fs:[0]
// 0058f94d  50                   push eax
// 0058f94e  64892500000000       mov dword ptr fs:[0], esp
// 0058f955  51                   push ecx
// 0058f956  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058f95a  53                   push ebx
// 0058f95b  55                   push ebp
// 0058f95c  8be9                 mov ebp, ecx
// 0058f95e  56                   push esi
// 0058f95f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058f963  50                   push eax
// 0058f964  8d5d04               lea ebx, [ebp + 4]
// 0058f967  56                   push esi
// 0058f968  8bcb                 mov ecx, ebx
// 0058f96a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058f96e  897500               mov dword ptr [ebp], esi
// 0058f971  e83affffff           call 0x58f8b0
// 0058f976  85f6                 test esi, esi
// 0058f978  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058f980  7453                 je 0x58f9d5
// 0058f982  57                   push edi
// 0058f983  8dbea4000000         lea edi, [esi + 0xa4]
// 0058f989  85ff                 test edi, edi
// 0058f98b  7431                 je 0x58f9be
// 0058f98d  8937                 mov dword ptr [edi], esi
// 0058f98f  8b33                 mov esi, dword ptr [ebx]
// 0058f991  85f6                 test esi, esi
// 0058f993  740c                 je 0x58f9a1
// 0058f995  8d4e08               lea ecx, [esi + 8]
// 0058f998  ba01000000           mov edx, 1
// 0058f99d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058f9a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058f9a4  85c9                 test ecx, ecx
// 0058f9a6  7413                 je 0x58f9bb
// 0058f9a8  8d4108               lea eax, [ecx + 8]
// 0058f9ab  83caff               or edx, 0xffffffff
// 0058f9ae  f00fc110             lock xadd dword ptr [eax], edx
// 0058f9b2  7507                 jne 0x58f9bb
// 0058f9b4  8b01                 mov eax, dword ptr [ecx]
// 0058f9b6  8b5008               mov edx, dword ptr [eax + 8]
// 0058f9b9  ffd2                 call edx
// 0058f9bb  897704               mov dword ptr [edi + 4], esi
// 0058f9be  5f                   pop edi
// 0058f9bf  5e                   pop esi
// 0058f9c0  8bc5                 mov eax, ebp
// 0058f9c2  5d                   pop ebp
// 0058f9c3  5b                   pop ebx
// 0058f9c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058f9c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f9cf  83c410               add esp, 0x10
// 0058f9d2  c20800               ret 8
// 0058f9d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058f9d9  5e                   pop esi
// 0058f9da  8bc5                 mov eax, ebp
// 0058f9dc  5d                   pop ebp
// 0058f9dd  5b                   pop ebx
// 0058f9de  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f9e5  83c410               add esp, 0x10
// 0058f9e8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
