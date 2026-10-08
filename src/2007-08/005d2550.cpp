// roc 2007-08 005d2550  unit: RBX::Tool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2550
//
// 005d2550  6aff                 push -1
// 005d2552  687b6b7500           push 0x756b7b
// 005d2557  64a100000000         mov eax, dword ptr fs:[0]
// 005d255d  50                   push eax
// 005d255e  64892500000000       mov dword ptr fs:[0], esp
// 005d2565  51                   push ecx
// 005d2566  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d256a  53                   push ebx
// 005d256b  55                   push ebp
// 005d256c  8be9                 mov ebp, ecx
// 005d256e  56                   push esi
// 005d256f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d2573  50                   push eax
// 005d2574  8d5d04               lea ebx, [ebp + 4]
// 005d2577  56                   push esi
// 005d2578  8bcb                 mov ecx, ebx
// 005d257a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d257e  897500               mov dword ptr [ebp], esi
// 005d2581  e8aafaffff           call 0x5d2030
// 005d2586  85f6                 test esi, esi
// 005d2588  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d2590  7453                 je 0x5d25e5
// 005d2592  57                   push edi
// 005d2593  8dbea4000000         lea edi, [esi + 0xa4]
// 005d2599  85ff                 test edi, edi
// 005d259b  7431                 je 0x5d25ce
// 005d259d  8937                 mov dword ptr [edi], esi
// 005d259f  8b33                 mov esi, dword ptr [ebx]
// 005d25a1  85f6                 test esi, esi
// 005d25a3  740c                 je 0x5d25b1
// 005d25a5  8d4e08               lea ecx, [esi + 8]
// 005d25a8  ba01000000           mov edx, 1
// 005d25ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005d25b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d25b4  85c9                 test ecx, ecx
// 005d25b6  7413                 je 0x5d25cb
// 005d25b8  8d4108               lea eax, [ecx + 8]
// 005d25bb  83caff               or edx, 0xffffffff
// 005d25be  f00fc110             lock xadd dword ptr [eax], edx
// 005d25c2  7507                 jne 0x5d25cb
// 005d25c4  8b01                 mov eax, dword ptr [ecx]
// 005d25c6  8b5008               mov edx, dword ptr [eax + 8]
// 005d25c9  ffd2                 call edx
// 005d25cb  897704               mov dword ptr [edi + 4], esi
// 005d25ce  5f                   pop edi
// 005d25cf  5e                   pop esi
// 005d25d0  8bc5                 mov eax, ebp
// 005d25d2  5d                   pop ebp
// 005d25d3  5b                   pop ebx
// 005d25d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d25d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d25df  83c410               add esp, 0x10
// 005d25e2  c20800               ret 8
// 005d25e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d25e9  5e                   pop esi
// 005d25ea  8bc5                 mov eax, ebp
// 005d25ec  5d                   pop ebp
// 005d25ed  5b                   pop ebx
// 005d25ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005d25f5  83c410               add esp, 0x10
// 005d25f8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
