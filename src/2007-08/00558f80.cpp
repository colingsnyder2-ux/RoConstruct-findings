// roc 2007-08 00558f80  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558f80
//
// 00558f80  6aff                 push -1
// 00558f82  687b6b7500           push 0x756b7b
// 00558f87  64a100000000         mov eax, dword ptr fs:[0]
// 00558f8d  50                   push eax
// 00558f8e  64892500000000       mov dword ptr fs:[0], esp
// 00558f95  51                   push ecx
// 00558f96  8b442418             mov eax, dword ptr [esp + 0x18]
// 00558f9a  53                   push ebx
// 00558f9b  55                   push ebp
// 00558f9c  8be9                 mov ebp, ecx
// 00558f9e  56                   push esi
// 00558f9f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00558fa3  50                   push eax
// 00558fa4  8d5d04               lea ebx, [ebp + 4]
// 00558fa7  56                   push esi
// 00558fa8  8bcb                 mov ecx, ebx
// 00558faa  896c2414             mov dword ptr [esp + 0x14], ebp
// 00558fae  897500               mov dword ptr [ebp], esi
// 00558fb1  e87af8ffff           call 0x558830
// 00558fb6  85f6                 test esi, esi
// 00558fb8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00558fc0  7453                 je 0x559015
// 00558fc2  57                   push edi
// 00558fc3  8dbea4000000         lea edi, [esi + 0xa4]
// 00558fc9  85ff                 test edi, edi
// 00558fcb  7431                 je 0x558ffe
// 00558fcd  8937                 mov dword ptr [edi], esi
// 00558fcf  8b33                 mov esi, dword ptr [ebx]
// 00558fd1  85f6                 test esi, esi
// 00558fd3  740c                 je 0x558fe1
// 00558fd5  8d4e08               lea ecx, [esi + 8]
// 00558fd8  ba01000000           mov edx, 1
// 00558fdd  f00fc111             lock xadd dword ptr [ecx], edx
// 00558fe1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00558fe4  85c9                 test ecx, ecx
// 00558fe6  7413                 je 0x558ffb
// 00558fe8  8d4108               lea eax, [ecx + 8]
// 00558feb  83caff               or edx, 0xffffffff
// 00558fee  f00fc110             lock xadd dword ptr [eax], edx
// 00558ff2  7507                 jne 0x558ffb
// 00558ff4  8b01                 mov eax, dword ptr [ecx]
// 00558ff6  8b5008               mov edx, dword ptr [eax + 8]
// 00558ff9  ffd2                 call edx
// 00558ffb  897704               mov dword ptr [edi + 4], esi
// 00558ffe  5f                   pop edi
// 00558fff  5e                   pop esi
// 00559000  8bc5                 mov eax, ebp
// 00559002  5d                   pop ebp
// 00559003  5b                   pop ebx
// 00559004  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559008  64890d00000000       mov dword ptr fs:[0], ecx
// 0055900f  83c410               add esp, 0x10
// 00559012  c20800               ret 8
// 00559015  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00559019  5e                   pop esi
// 0055901a  8bc5                 mov eax, ebp
// 0055901c  5d                   pop ebp
// 0055901d  5b                   pop ebx
// 0055901e  64890d00000000       mov dword ptr fs:[0], ecx
// 00559025  83c410               add esp, 0x10
// 00559028  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
