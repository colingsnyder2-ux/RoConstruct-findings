// roc 2007-08 005d60a0  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d60a0
//
// 005d60a0  6aff                 push -1
// 005d60a2  687b6b7500           push 0x756b7b
// 005d60a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d60ad  50                   push eax
// 005d60ae  64892500000000       mov dword ptr fs:[0], esp
// 005d60b5  51                   push ecx
// 005d60b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d60ba  53                   push ebx
// 005d60bb  55                   push ebp
// 005d60bc  8be9                 mov ebp, ecx
// 005d60be  56                   push esi
// 005d60bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d60c3  50                   push eax
// 005d60c4  8d5d04               lea ebx, [ebp + 4]
// 005d60c7  56                   push esi
// 005d60c8  8bcb                 mov ecx, ebx
// 005d60ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d60ce  897500               mov dword ptr [ebp], esi
// 005d60d1  e8baf2ffff           call 0x5d5390
// 005d60d6  85f6                 test esi, esi
// 005d60d8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d60e0  7453                 je 0x5d6135
// 005d60e2  57                   push edi
// 005d60e3  8dbea4000000         lea edi, [esi + 0xa4]
// 005d60e9  85ff                 test edi, edi
// 005d60eb  7431                 je 0x5d611e
// 005d60ed  8937                 mov dword ptr [edi], esi
// 005d60ef  8b33                 mov esi, dword ptr [ebx]
// 005d60f1  85f6                 test esi, esi
// 005d60f3  740c                 je 0x5d6101
// 005d60f5  8d4e08               lea ecx, [esi + 8]
// 005d60f8  ba01000000           mov edx, 1
// 005d60fd  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6101  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d6104  85c9                 test ecx, ecx
// 005d6106  7413                 je 0x5d611b
// 005d6108  8d4108               lea eax, [ecx + 8]
// 005d610b  83caff               or edx, 0xffffffff
// 005d610e  f00fc110             lock xadd dword ptr [eax], edx
// 005d6112  7507                 jne 0x5d611b
// 005d6114  8b01                 mov eax, dword ptr [ecx]
// 005d6116  8b5008               mov edx, dword ptr [eax + 8]
// 005d6119  ffd2                 call edx
// 005d611b  897704               mov dword ptr [edi + 4], esi
// 005d611e  5f                   pop edi
// 005d611f  5e                   pop esi
// 005d6120  8bc5                 mov eax, ebp
// 005d6122  5d                   pop ebp
// 005d6123  5b                   pop ebx
// 005d6124  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6128  64890d00000000       mov dword ptr fs:[0], ecx
// 005d612f  83c410               add esp, 0x10
// 005d6132  c20800               ret 8
// 005d6135  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d6139  5e                   pop esi
// 005d613a  8bc5                 mov eax, ebp
// 005d613c  5d                   pop ebp
// 005d613d  5b                   pop ebx
// 005d613e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6145  83c410               add esp, 0x10
// 005d6148  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
