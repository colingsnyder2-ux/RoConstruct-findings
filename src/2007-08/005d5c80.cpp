// roc 2007-08 005d5c80  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5c80
//
// 005d5c80  6aff                 push -1
// 005d5c82  687b6b7500           push 0x756b7b
// 005d5c87  64a100000000         mov eax, dword ptr fs:[0]
// 005d5c8d  50                   push eax
// 005d5c8e  64892500000000       mov dword ptr fs:[0], esp
// 005d5c95  51                   push ecx
// 005d5c96  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5c9a  53                   push ebx
// 005d5c9b  55                   push ebp
// 005d5c9c  8be9                 mov ebp, ecx
// 005d5c9e  56                   push esi
// 005d5c9f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5ca3  50                   push eax
// 005d5ca4  8d5d04               lea ebx, [ebp + 4]
// 005d5ca7  56                   push esi
// 005d5ca8  8bcb                 mov ecx, ebx
// 005d5caa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5cae  897500               mov dword ptr [ebp], esi
// 005d5cb1  e87af3ffff           call 0x5d5030
// 005d5cb6  85f6                 test esi, esi
// 005d5cb8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5cc0  7453                 je 0x5d5d15
// 005d5cc2  57                   push edi
// 005d5cc3  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5cc9  85ff                 test edi, edi
// 005d5ccb  7431                 je 0x5d5cfe
// 005d5ccd  8937                 mov dword ptr [edi], esi
// 005d5ccf  8b33                 mov esi, dword ptr [ebx]
// 005d5cd1  85f6                 test esi, esi
// 005d5cd3  740c                 je 0x5d5ce1
// 005d5cd5  8d4e08               lea ecx, [esi + 8]
// 005d5cd8  ba01000000           mov edx, 1
// 005d5cdd  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5ce1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5ce4  85c9                 test ecx, ecx
// 005d5ce6  7413                 je 0x5d5cfb
// 005d5ce8  8d4108               lea eax, [ecx + 8]
// 005d5ceb  83caff               or edx, 0xffffffff
// 005d5cee  f00fc110             lock xadd dword ptr [eax], edx
// 005d5cf2  7507                 jne 0x5d5cfb
// 005d5cf4  8b01                 mov eax, dword ptr [ecx]
// 005d5cf6  8b5008               mov edx, dword ptr [eax + 8]
// 005d5cf9  ffd2                 call edx
// 005d5cfb  897704               mov dword ptr [edi + 4], esi
// 005d5cfe  5f                   pop edi
// 005d5cff  5e                   pop esi
// 005d5d00  8bc5                 mov eax, ebp
// 005d5d02  5d                   pop ebp
// 005d5d03  5b                   pop ebx
// 005d5d04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5d08  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5d0f  83c410               add esp, 0x10
// 005d5d12  c20800               ret 8
// 005d5d15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5d19  5e                   pop esi
// 005d5d1a  8bc5                 mov eax, ebp
// 005d5d1c  5d                   pop ebp
// 005d5d1d  5b                   pop ebx
// 005d5d1e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5d25  83c410               add esp, 0x10
// 005d5d28  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
