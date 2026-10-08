// roc 2007-08 005d5de0  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5de0
//
// 005d5de0  6aff                 push -1
// 005d5de2  687b6b7500           push 0x756b7b
// 005d5de7  64a100000000         mov eax, dword ptr fs:[0]
// 005d5ded  50                   push eax
// 005d5dee  64892500000000       mov dword ptr fs:[0], esp
// 005d5df5  51                   push ecx
// 005d5df6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5dfa  53                   push ebx
// 005d5dfb  55                   push ebp
// 005d5dfc  8be9                 mov ebp, ecx
// 005d5dfe  56                   push esi
// 005d5dff  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5e03  50                   push eax
// 005d5e04  8d5d04               lea ebx, [ebp + 4]
// 005d5e07  56                   push esi
// 005d5e08  8bcb                 mov ecx, ebx
// 005d5e0a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5e0e  897500               mov dword ptr [ebp], esi
// 005d5e11  e83af3ffff           call 0x5d5150
// 005d5e16  85f6                 test esi, esi
// 005d5e18  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5e20  7453                 je 0x5d5e75
// 005d5e22  57                   push edi
// 005d5e23  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5e29  85ff                 test edi, edi
// 005d5e2b  7431                 je 0x5d5e5e
// 005d5e2d  8937                 mov dword ptr [edi], esi
// 005d5e2f  8b33                 mov esi, dword ptr [ebx]
// 005d5e31  85f6                 test esi, esi
// 005d5e33  740c                 je 0x5d5e41
// 005d5e35  8d4e08               lea ecx, [esi + 8]
// 005d5e38  ba01000000           mov edx, 1
// 005d5e3d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5e41  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5e44  85c9                 test ecx, ecx
// 005d5e46  7413                 je 0x5d5e5b
// 005d5e48  8d4108               lea eax, [ecx + 8]
// 005d5e4b  83caff               or edx, 0xffffffff
// 005d5e4e  f00fc110             lock xadd dword ptr [eax], edx
// 005d5e52  7507                 jne 0x5d5e5b
// 005d5e54  8b01                 mov eax, dword ptr [ecx]
// 005d5e56  8b5008               mov edx, dword ptr [eax + 8]
// 005d5e59  ffd2                 call edx
// 005d5e5b  897704               mov dword ptr [edi + 4], esi
// 005d5e5e  5f                   pop edi
// 005d5e5f  5e                   pop esi
// 005d5e60  8bc5                 mov eax, ebp
// 005d5e62  5d                   pop ebp
// 005d5e63  5b                   pop ebx
// 005d5e64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5e68  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5e6f  83c410               add esp, 0x10
// 005d5e72  c20800               ret 8
// 005d5e75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5e79  5e                   pop esi
// 005d5e7a  8bc5                 mov eax, ebp
// 005d5e7c  5d                   pop ebp
// 005d5e7d  5b                   pop ebx
// 005d5e7e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5e85  83c410               add esp, 0x10
// 005d5e88  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
