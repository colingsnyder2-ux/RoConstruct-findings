// roc 2007-08 005d6150  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6150
//
// 005d6150  6aff                 push -1
// 005d6152  687b6b7500           push 0x756b7b
// 005d6157  64a100000000         mov eax, dword ptr fs:[0]
// 005d615d  50                   push eax
// 005d615e  64892500000000       mov dword ptr fs:[0], esp
// 005d6165  51                   push ecx
// 005d6166  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d616a  53                   push ebx
// 005d616b  55                   push ebp
// 005d616c  8be9                 mov ebp, ecx
// 005d616e  56                   push esi
// 005d616f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d6173  50                   push eax
// 005d6174  8d5d04               lea ebx, [ebp + 4]
// 005d6177  56                   push esi
// 005d6178  8bcb                 mov ecx, ebx
// 005d617a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d617e  897500               mov dword ptr [ebp], esi
// 005d6181  e89af2ffff           call 0x5d5420
// 005d6186  85f6                 test esi, esi
// 005d6188  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d6190  7453                 je 0x5d61e5
// 005d6192  57                   push edi
// 005d6193  8dbea4000000         lea edi, [esi + 0xa4]
// 005d6199  85ff                 test edi, edi
// 005d619b  7431                 je 0x5d61ce
// 005d619d  8937                 mov dword ptr [edi], esi
// 005d619f  8b33                 mov esi, dword ptr [ebx]
// 005d61a1  85f6                 test esi, esi
// 005d61a3  740c                 je 0x5d61b1
// 005d61a5  8d4e08               lea ecx, [esi + 8]
// 005d61a8  ba01000000           mov edx, 1
// 005d61ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005d61b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d61b4  85c9                 test ecx, ecx
// 005d61b6  7413                 je 0x5d61cb
// 005d61b8  8d4108               lea eax, [ecx + 8]
// 005d61bb  83caff               or edx, 0xffffffff
// 005d61be  f00fc110             lock xadd dword ptr [eax], edx
// 005d61c2  7507                 jne 0x5d61cb
// 005d61c4  8b01                 mov eax, dword ptr [ecx]
// 005d61c6  8b5008               mov edx, dword ptr [eax + 8]
// 005d61c9  ffd2                 call edx
// 005d61cb  897704               mov dword ptr [edi + 4], esi
// 005d61ce  5f                   pop edi
// 005d61cf  5e                   pop esi
// 005d61d0  8bc5                 mov eax, ebp
// 005d61d2  5d                   pop ebp
// 005d61d3  5b                   pop ebx
// 005d61d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d61d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d61df  83c410               add esp, 0x10
// 005d61e2  c20800               ret 8
// 005d61e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d61e9  5e                   pop esi
// 005d61ea  8bc5                 mov eax, ebp
// 005d61ec  5d                   pop ebp
// 005d61ed  5b                   pop ebx
// 005d61ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005d61f5  83c410               add esp, 0x10
// 005d61f8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
