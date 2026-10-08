// roc 2007-08 0057d240  unit: RBX::Workspace  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d240
//
// 0057d240  6aff                 push -1
// 0057d242  687b6b7500           push 0x756b7b
// 0057d247  64a100000000         mov eax, dword ptr fs:[0]
// 0057d24d  50                   push eax
// 0057d24e  64892500000000       mov dword ptr fs:[0], esp
// 0057d255  51                   push ecx
// 0057d256  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057d25a  53                   push ebx
// 0057d25b  55                   push ebp
// 0057d25c  8be9                 mov ebp, ecx
// 0057d25e  56                   push esi
// 0057d25f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057d263  50                   push eax
// 0057d264  8d5d04               lea ebx, [ebp + 4]
// 0057d267  56                   push esi
// 0057d268  8bcb                 mov ecx, ebx
// 0057d26a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057d26e  897500               mov dword ptr [ebp], esi
// 0057d271  e83affffff           call 0x57d1b0
// 0057d276  85f6                 test esi, esi
// 0057d278  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057d280  7453                 je 0x57d2d5
// 0057d282  57                   push edi
// 0057d283  8dbea4000000         lea edi, [esi + 0xa4]
// 0057d289  85ff                 test edi, edi
// 0057d28b  7431                 je 0x57d2be
// 0057d28d  8937                 mov dword ptr [edi], esi
// 0057d28f  8b33                 mov esi, dword ptr [ebx]
// 0057d291  85f6                 test esi, esi
// 0057d293  740c                 je 0x57d2a1
// 0057d295  8d4e08               lea ecx, [esi + 8]
// 0057d298  ba01000000           mov edx, 1
// 0057d29d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057d2a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057d2a4  85c9                 test ecx, ecx
// 0057d2a6  7413                 je 0x57d2bb
// 0057d2a8  8d4108               lea eax, [ecx + 8]
// 0057d2ab  83caff               or edx, 0xffffffff
// 0057d2ae  f00fc110             lock xadd dword ptr [eax], edx
// 0057d2b2  7507                 jne 0x57d2bb
// 0057d2b4  8b01                 mov eax, dword ptr [ecx]
// 0057d2b6  8b5008               mov edx, dword ptr [eax + 8]
// 0057d2b9  ffd2                 call edx
// 0057d2bb  897704               mov dword ptr [edi + 4], esi
// 0057d2be  5f                   pop edi
// 0057d2bf  5e                   pop esi
// 0057d2c0  8bc5                 mov eax, ebp
// 0057d2c2  5d                   pop ebp
// 0057d2c3  5b                   pop ebx
// 0057d2c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057d2c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d2cf  83c410               add esp, 0x10
// 0057d2d2  c20800               ret 8
// 0057d2d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d2d9  5e                   pop esi
// 0057d2da  8bc5                 mov eax, ebp
// 0057d2dc  5d                   pop ebp
// 0057d2dd  5b                   pop ebx
// 0057d2de  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d2e5  83c410               add esp, 0x10
// 0057d2e8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
