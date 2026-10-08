// roc 2007-08 005d5a70  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5a70
//
// 005d5a70  6aff                 push -1
// 005d5a72  687b6b7500           push 0x756b7b
// 005d5a77  64a100000000         mov eax, dword ptr fs:[0]
// 005d5a7d  50                   push eax
// 005d5a7e  64892500000000       mov dword ptr fs:[0], esp
// 005d5a85  51                   push ecx
// 005d5a86  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5a8a  53                   push ebx
// 005d5a8b  55                   push ebp
// 005d5a8c  8be9                 mov ebp, ecx
// 005d5a8e  56                   push esi
// 005d5a8f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5a93  50                   push eax
// 005d5a94  8d5d04               lea ebx, [ebp + 4]
// 005d5a97  56                   push esi
// 005d5a98  8bcb                 mov ecx, ebx
// 005d5a9a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5a9e  897500               mov dword ptr [ebp], esi
// 005d5aa1  e8daf3ffff           call 0x5d4e80
// 005d5aa6  85f6                 test esi, esi
// 005d5aa8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5ab0  7453                 je 0x5d5b05
// 005d5ab2  57                   push edi
// 005d5ab3  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5ab9  85ff                 test edi, edi
// 005d5abb  7431                 je 0x5d5aee
// 005d5abd  8937                 mov dword ptr [edi], esi
// 005d5abf  8b33                 mov esi, dword ptr [ebx]
// 005d5ac1  85f6                 test esi, esi
// 005d5ac3  740c                 je 0x5d5ad1
// 005d5ac5  8d4e08               lea ecx, [esi + 8]
// 005d5ac8  ba01000000           mov edx, 1
// 005d5acd  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5ad1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5ad4  85c9                 test ecx, ecx
// 005d5ad6  7413                 je 0x5d5aeb
// 005d5ad8  8d4108               lea eax, [ecx + 8]
// 005d5adb  83caff               or edx, 0xffffffff
// 005d5ade  f00fc110             lock xadd dword ptr [eax], edx
// 005d5ae2  7507                 jne 0x5d5aeb
// 005d5ae4  8b01                 mov eax, dword ptr [ecx]
// 005d5ae6  8b5008               mov edx, dword ptr [eax + 8]
// 005d5ae9  ffd2                 call edx
// 005d5aeb  897704               mov dword ptr [edi + 4], esi
// 005d5aee  5f                   pop edi
// 005d5aef  5e                   pop esi
// 005d5af0  8bc5                 mov eax, ebp
// 005d5af2  5d                   pop ebp
// 005d5af3  5b                   pop ebx
// 005d5af4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5af8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5aff  83c410               add esp, 0x10
// 005d5b02  c20800               ret 8
// 005d5b05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5b09  5e                   pop esi
// 005d5b0a  8bc5                 mov eax, ebp
// 005d5b0c  5d                   pop ebp
// 005d5b0d  5b                   pop ebx
// 005d5b0e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5b15  83c410               add esp, 0x10
// 005d5b18  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
