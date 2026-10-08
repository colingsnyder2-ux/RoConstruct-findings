// roc 2008-06 004cdfe0  unit: RBX::Network::PhysicsSender  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cdfe0
//
// 004cdfe0  6aff                 push -1
// 004cdfe2  68889a7c00           push 0x7c9a88
// 004cdfe7  64a100000000         mov eax, dword ptr fs:[0]
// 004cdfed  50                   push eax
// 004cdfee  64892500000000       mov dword ptr fs:[0], esp
// 004cdff5  83ec14               sub esp, 0x14
// 004cdff8  56                   push esi
// 004cdff9  57                   push edi
// 004cdffa  8bf9                 mov edi, ecx
// 004cdffc  33f6                 xor esi, esi
// 004cdffe  897c2408             mov dword ptr [esp + 8], edi
// 004ce002  3937                 cmp dword ptr [edi], esi
// 004ce004  0f841a010000         je 0x4ce124
// 004ce00a  33c9                 xor ecx, ecx
// 004ce00c  b810000000           mov eax, 0x10
// 004ce011  89442418             mov dword ptr [esp + 0x18], eax
// 004ce015  ba04000000           mov edx, 4
// 004ce01a  f7e2                 mul edx
// 004ce01c  0f90c1               seto cl
// 004ce01f  53                   push ebx
// 004ce020  55                   push ebp
// 004ce021  f7d9                 neg ecx
// 004ce023  0bc8                 or ecx, eax
// 004ce025  51                   push ecx
// 004ce026  e8f5281d00           call 0x6a0920
// 004ce02b  83c404               add esp, 4
// 004ce02e  89442414             mov dword ptr [esp + 0x14], eax
// 004ce032  89742418             mov dword ptr [esp + 0x18], esi
// 004ce036  8974241c             mov dword ptr [esp + 0x1c], esi
// 004ce03a  57                   push edi
// 004ce03b  8d4c2418             lea ecx, [esp + 0x18]
// 004ce03f  89742430             mov dword ptr [esp + 0x30], esi
// 004ce043  e8980d0000           call 0x4cede0
// 004ce048  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004ce04c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004ce050  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ce054  8bc3                 mov eax, ebx
// 004ce056  2bc6                 sub eax, esi
// 004ce058  3bf3                 cmp esi, ebx
// 004ce05a  7602                 jbe 0x4ce05e
// 004ce05c  03c5                 add eax, ebp
// 004ce05e  85c0                 test eax, eax
// 004ce060  767f                 jbe 0x4ce0e1
// 004ce062  46                   inc esi
// 004ce063  89742418             mov dword ptr [esp + 0x18], esi
// 004ce067  3bf5                 cmp esi, ebp
// 004ce069  7510                 jne 0x4ce07b
// 004ce06b  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ce06f  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004ce073  33f6                 xor esi, esi
// 004ce075  89742418             mov dword ptr [esp + 0x18], esi
// 004ce079  eb16                 jmp 0x4ce091
// 004ce07b  85f6                 test esi, esi
// 004ce07d  750a                 jne 0x4ce089
// 004ce07f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ce083  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004ce087  eb08                 jmp 0x4ce091
// 004ce089  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ce08d  8b7cb1fc             mov edi, dword ptr [ecx + esi*4 - 4]
// 004ce091  837f0800             cmp dword ptr [edi + 8], 0
// 004ce095  8d4708               lea eax, [edi + 8]
// 004ce098  7416                 je 0x4ce0b0
// 004ce09a  50                   push eax
// 004ce09b  8d4c2418             lea ecx, [esp + 0x18]
// 004ce09f  e83c0d0000           call 0x4cede0
// 004ce0a4  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004ce0a8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004ce0ac  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ce0b0  837f0c00             cmp dword ptr [edi + 0xc], 0
// 004ce0b4  8d470c               lea eax, [edi + 0xc]
// 004ce0b7  7416                 je 0x4ce0cf
// 004ce0b9  50                   push eax
// 004ce0ba  8d4c2418             lea ecx, [esp + 0x18]
// 004ce0be  e81d0d0000           call 0x4cede0
// 004ce0c3  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004ce0c7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004ce0cb  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ce0cf  57                   push edi
// 004ce0d0  e8a5251d00           call 0x6a067a
// 004ce0d5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ce0d9  83c404               add esp, 4
// 004ce0dc  e973ffffff           jmp 0x4ce054
// 004ce0e1  8d7704               lea esi, [edi + 4]
// 004ce0e4  bf00010000           mov edi, 0x100
// 004ce0e9  8da42400000000       lea esp, [esp]
// 004ce0f0  8b06                 mov eax, dword ptr [esi]
// 004ce0f2  50                   push eax
// 004ce0f3  e882251d00           call 0x6a067a
// 004ce0f8  83c404               add esp, 4
// 004ce0fb  83c608               add esi, 8
// 004ce0fe  83ef01               sub edi, 1
// 004ce101  75ed                 jne 0x4ce0f0
// 004ce103  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ce107  85ed                 test ebp, ebp
// 004ce109  5d                   pop ebp
// 004ce10a  893a                 mov dword ptr [edx], edi
// 004ce10c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004ce114  5b                   pop ebx
// 004ce115  760d                 jbe 0x4ce124
// 004ce117  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ce11b  50                   push eax
// 004ce11c  e859251d00           call 0x6a067a
// 004ce121  83c404               add esp, 4
// 004ce124  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ce128  5f                   pop edi
// 004ce129  5e                   pop esi
// 004ce12a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce131  83c420               add esp, 0x20
// 004ce134  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?FreeMemory@HuffmanEncodingTree@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
