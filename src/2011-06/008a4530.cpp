// roc 2011-06 008a4530  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4530
//
// 008a4530  6aff                 push -1
// 008a4532  6808f1a000           push 0xa0f108
// 008a4537  64a100000000         mov eax, dword ptr fs:[0]
// 008a453d  50                   push eax
// 008a453e  83ec08               sub esp, 8
// 008a4541  53                   push ebx
// 008a4542  55                   push ebp
// 008a4543  56                   push esi
// 008a4544  57                   push edi
// 008a4545  a12058c900           mov eax, dword ptr [0xc95820]
// 008a454a  33c4                 xor eax, esp
// 008a454c  50                   push eax
// 008a454d  8d44241c             lea eax, [esp + 0x1c]
// 008a4551  64a300000000         mov dword ptr fs:[0], eax
// 008a4557  8bf9                 mov edi, ecx
// 008a4559  33db                 xor ebx, ebx
// 008a455b  895c2418             mov dword ptr [esp + 0x18], ebx
// 008a455f  c74424149041a700     mov dword ptr [esp + 0x14], 0xa74190
// 008a4567  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008a456b  8b4608               mov eax, dword ptr [esi + 8]
// 008a456e  6a58                 push 0x58
// 008a4570  50                   push eax
// 008a4571  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008a4575  ff157401a400         call dword ptr [0xa40174]
// 008a457b  53                   push ebx
// 008a457c  686c1bac00           push 0xac1b6c
// 008a4581  50                   push eax
// 008a4582  6a60                 push 0x60
// 008a4584  6a50                 push 0x50
// 008a4586  ff15dc01a400         call dword ptr [0xa401dc]
// 008a458c  50                   push eax
// 008a458d  8d4c2420             lea ecx, [esp + 0x20]
// 008a4591  e852801200           call 0x9cc5e8
// 008a4596  8b16                 mov edx, dword ptr [esi]
// 008a4598  8b5230               mov edx, dword ptr [edx + 0x30]
// 008a459b  8d442414             lea eax, [esp + 0x14]
// 008a459f  50                   push eax
// 008a45a0  8bce                 mov ecx, esi
// 008a45a2  ffd2                 call edx
// 008a45a4  8bcf                 mov ecx, edi
// 008a45a6  8be8                 mov ebp, eax
// 008a45a8  e8b381f6ff           call 0x80c760
// 008a45ad  8b10                 mov edx, dword ptr [eax]
// 008a45af  57                   push edi
// 008a45b0  8bc8                 mov ecx, eax
// 008a45b2  8b4278               mov eax, dword ptr [edx + 0x78]
// 008a45b5  56                   push esi
// 008a45b6  ffd0                 call eax
// 008a45b8  8bcf                 mov ecx, edi
// 008a45ba  e8a181f6ff           call 0x80c760
// 008a45bf  8b10                 mov edx, dword ptr [eax]
// 008a45c1  8b1e                 mov ebx, dword ptr [esi]
// 008a45c3  8bc8                 mov ecx, eax
// 008a45c5  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008a45c8  57                   push edi
// 008a45c9  ffd0                 call eax
// 008a45cb  8b5338               mov edx, dword ptr [ebx + 0x38]
// 008a45ce  50                   push eax
// 008a45cf  8bce                 mov ecx, esi
// 008a45d1  ffd2                 call edx
// 008a45d3  8b06                 mov eax, dword ptr [esi]
// 008a45d5  8d9ff0000000         lea ebx, [edi + 0xf0]
// 008a45db  6a25                 push 0x25
// 008a45dd  81c7c0000000         add edi, 0xc0
// 008a45e3  57                   push edi
// 008a45e4  8bcb                 mov ecx, ebx
// 008a45e6  89442434             mov dword ptr [esp + 0x34], eax
// 008a45ea  ff15a826a400         call dword ptr [0xa426a8]
// 008a45f0  50                   push eax
// 008a45f1  8bcb                 mov ecx, ebx
// 008a45f3  ff15c82da400         call dword ptr [0xa42dc8]
// 008a45f9  8b542438             mov edx, dword ptr [esp + 0x38]
// 008a45fd  50                   push eax
// 008a45fe  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a4601  8bce                 mov ecx, esi
// 008a4603  ffd0                 call eax
// 008a4605  8b16                 mov edx, dword ptr [esi]
// 008a4607  8b4230               mov eax, dword ptr [edx + 0x30]
// 008a460a  55                   push ebp
// 008a460b  8bce                 mov ecx, esi
// 008a460d  ffd0                 call eax
// 008a460f  8d4c2414             lea ecx, [esp + 0x14]
// 008a4613  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008a461b  c74424149041a700     mov dword ptr [esp + 0x14], 0xa74190
// 008a4623  e808f3b6ff           call 0x413930
// 008a4628  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a462c  64890d00000000       mov dword ptr fs:[0], ecx
// 008a4633  59                   pop ecx
// 008a4634  5f                   pop edi
// 008a4635  5e                   pop esi
// 008a4636  5d                   pop ebp
// 008a4637  5b                   pop ebx
// 008a4638  83c414               add esp, 0x14
// 008a463b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp