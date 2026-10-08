// roc 2007-08 00590230  unit: RBX::VHint::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590230
//
// 00590230  6aff                 push -1
// 00590232  687b6b7500           push 0x756b7b
// 00590237  64a100000000         mov eax, dword ptr fs:[0]
// 0059023d  50                   push eax
// 0059023e  64892500000000       mov dword ptr fs:[0], esp
// 00590245  51                   push ecx
// 00590246  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059024a  53                   push ebx
// 0059024b  55                   push ebp
// 0059024c  8be9                 mov ebp, ecx
// 0059024e  56                   push esi
// 0059024f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00590253  50                   push eax
// 00590254  8d5d04               lea ebx, [ebp + 4]
// 00590257  56                   push esi
// 00590258  8bcb                 mov ecx, ebx
// 0059025a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059025e  897500               mov dword ptr [ebp], esi
// 00590261  e80afeffff           call 0x590070
// 00590266  85f6                 test esi, esi
// 00590268  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00590270  7453                 je 0x5902c5
// 00590272  57                   push edi
// 00590273  8dbea4000000         lea edi, [esi + 0xa4]
// 00590279  85ff                 test edi, edi
// 0059027b  7431                 je 0x5902ae
// 0059027d  8937                 mov dword ptr [edi], esi
// 0059027f  8b33                 mov esi, dword ptr [ebx]
// 00590281  85f6                 test esi, esi
// 00590283  740c                 je 0x590291
// 00590285  8d4e08               lea ecx, [esi + 8]
// 00590288  ba01000000           mov edx, 1
// 0059028d  f00fc111             lock xadd dword ptr [ecx], edx
// 00590291  8b4f04               mov ecx, dword ptr [edi + 4]
// 00590294  85c9                 test ecx, ecx
// 00590296  7413                 je 0x5902ab
// 00590298  8d4108               lea eax, [ecx + 8]
// 0059029b  83caff               or edx, 0xffffffff
// 0059029e  f00fc110             lock xadd dword ptr [eax], edx
// 005902a2  7507                 jne 0x5902ab
// 005902a4  8b01                 mov eax, dword ptr [ecx]
// 005902a6  8b5008               mov edx, dword ptr [eax + 8]
// 005902a9  ffd2                 call edx
// 005902ab  897704               mov dword ptr [edi + 4], esi
// 005902ae  5f                   pop edi
// 005902af  5e                   pop esi
// 005902b0  8bc5                 mov eax, ebp
// 005902b2  5d                   pop ebp
// 005902b3  5b                   pop ebx
// 005902b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005902b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005902bf  83c410               add esp, 0x10
// 005902c2  c20800               ret 8
// 005902c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005902c9  5e                   pop esi
// 005902ca  8bc5                 mov eax, ebp
// 005902cc  5d                   pop ebp
// 005902cd  5b                   pop ebx
// 005902ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005902d5  83c410               add esp, 0x10
// 005902d8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
