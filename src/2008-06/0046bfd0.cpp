// from server: 67% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_unit_0d90ca5b611090be.cpp

// Candidate translation unit (score above; library headers required).
#include <afxwin.h>
#include <afxdisp.h>
#include <exception>
// from server: 65% by king_originala
// roc 2008-06 0046bfd0  unit: VCWorkspace::?$CComObject  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bfd0
//
// 0046bfd0  55                   push ebp
// 0046bfd1  8bec                 mov ebp, esp
// 0046bfd3  6aff                 push -1
// 0046bfd5  682b3b7c00           push 0x7c3b2b
// 0046bfda  64a100000000         mov eax, dword ptr fs:[0]
// 0046bfe0  50                   push eax
// 0046bfe1  64892500000000       mov dword ptr fs:[0], esp
// 0046bfe8  83ec28               sub esp, 0x28
// 0046bfeb  53                   push ebx
// 0046bfec  56                   push esi
// 0046bfed  57                   push edi
// 0046bfee  33ff                 xor edi, edi
// 0046bff0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bff3  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bff6  e86d492300           call 0x6a0968
// 0046bffb  50                   push eax
// 0046bffc  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bfff  e85e492300           call 0x6a0962
// 0046c004  8d45ec               lea eax, [ebp - 0x14]
// 0046c007  897dfc               mov dword ptr [ebp - 4], edi
// 0046c00a  50                   push eax
// 0046c00b  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c00f  e87cecffff           call 0x46ac90
// 0046c014  85c0                 test eax, eax
// 0046c016  7432                 je 0x46c04a
// 0046c018  684b010000           push 0x14b
// 0046c01d  6850c88100           push 0x81c850
// 0046c022  8d4dec               lea ecx, [ebp - 0x14]
// 0046c025  51                   push ecx
// 0046c026  e865ecffff           call 0x46ac90
// 0046c02b  50                   push eax
// 0046c02c  6a01                 push 1
// 0046c02e  e84dbdfbff           call 0x427d80
// 0046c033  83c410               add esp, 0x10
// 0046c036  68f8648100           push 0x8164f8
// 0046c03b  8d55ec               lea edx, [ebp - 0x14]
// 0046c03e  52                   push edx
// 0046c03f  e84cecffff           call 0x46ac90
// 0046c044  50                   push eax
// 0046c045  e826edffff           call 0x46ad70
// 0046c04a  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046c04d  8d430c               lea eax, [ebx + 0xc]
// 0046c050  3bc7                 cmp eax, edi
// 0046c052  7403                 je 0x46c057
// 0046c054  8d7b14               lea edi, [ebx + 0x14]
// 0046c057  8b7508               mov esi, dword ptr [ebp + 8]
// 0046c05a  8d4508               lea eax, [ebp + 8]
// 0046c05d  50                   push eax
// 0046c05e  8bce                 mov ecx, esi
// 0046c060  e8ebf6ffff           call 0x46b750
// 0046c065  8b00                 mov eax, dword ptr [eax]
// 0046c067  57                   push edi
// 0046c068  50                   push eax
// 0046c069  8bce                 mov ecx, esi
// 0046c06b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c06f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046c076  e8e5f7ffff           call 0x46b860
// 0046c07b  85c0                 test eax, eax
// 0046c07d  0f8481000000         je 0x46c104
// 0046c083  8d430c               lea eax, [ebx + 0xc]
// 0046c086  85c0                 test eax, eax
// 0046c088  7405                 je 0x46c08f
// 0046c08a  8d7b14               lea edi, [ebx + 0x14]
// 0046c08d  eb02                 jmp 0x46c091
// 0046c08f  33ff                 xor edi, edi
// 0046c091  8d4de8               lea ecx, [ebp - 0x18]
// 0046c094  51                   push ecx
// 0046c095  8bce                 mov ecx, esi
// 0046c097  e8b4f6ffff           call 0x46b750
// 0046c09c  8b00                 mov eax, dword ptr [eax]
// 0046c09e  b903000000           mov ecx, 3
// 0046c0a3  57                   push edi
// 0046c0a4  894dfc               mov dword ptr [ebp - 4], ecx
// 0046c0a7  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046c0aa  50                   push eax
// 0046c0ab  8bce                 mov ecx, esi
// 0046c0ad  e8aef7ffff           call 0x46b860
// 0046c0b2  684e010000           push 0x14e
// 0046c0b7  6850c88100           push 0x81c850
// 0046c0bc  50                   push eax
// 0046c0bd  6a01                 push 1
// 0046c0bf  e8bcbcfbff           call 0x427d80
// 0046c0c4  8d430c               lea eax, [ebx + 0xc]
// 0046c0c7  83c410               add esp, 0x10
// 0046c0ca  85c0                 test eax, eax
// 0046c0cc  7405                 je 0x46c0d3
// 0046c0ce  8d7b14               lea edi, [ebx + 0x14]
// 0046c0d1  eb02                 jmp 0x46c0d5
// 0046c0d3  33ff                 xor edi, edi
// 0046c0d5  8d55e4               lea edx, [ebp - 0x1c]
// 0046c0d8  52                   push edx
// 0046c0d9  8bce                 mov ecx, esi
// 0046c0db  e870f6ffff           call 0x46b750
// 0046c0e0  8b00                 mov eax, dword ptr [eax]
// 0046c0e2  57                   push edi
// 0046c0e3  50                   push eax
// 0046c0e4  8bce                 mov ecx, esi
// 0046c0e6  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046c0ed  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046c0f4  e867f7ffff           call 0x46b860
// 0046c0f9  68f8648100           push 0x8164f8
// 0046c0fe  50                   push eax
// 0046c0ff  e86cecffff           call 0x46ad70
// 0046c104  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046c107  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046c10e  85c9                 test ecx, ecx
// 0046c110  7410                 je 0x46c122
// 0046c112  8bf1                 mov esi, ecx
// 0046c114  e85779faff           call 0x413a70
// 0046c119  56                   push esi
// 0046c11a  e85b452300           call 0x6a067a
// 0046c11f  83c404               add esp, 4
// 0046c122  85db                 test ebx, ebx
// 0046c124  7405                 je 0x46c12b
// 0046c126  8d7304               lea esi, [ebx + 4]
// 0046c129  eb02                 jmp 0x46c12d
// 0046c12b  33f6                 xor esi, esi
// 0046c12d  897508               mov dword ptr [ebp + 8], esi
// 0046c130  85f6                 test esi, esi
// 0046c132  7408                 je 0x46c13c
// 0046c134  8b06                 mov eax, dword ptr [esi]
// 0046c136  8b4804               mov ecx, dword ptr [eax + 4]
// 0046c139  56                   push esi
// 0046c13a  ffd1                 call ecx
// 0046c13c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046c13f  c645fc05             mov byte ptr [ebp - 4], 5
// 0046c143  85c0                 test eax, eax
// 0046c145  7458                 je 0x46c19f
// 0046c147  8930                 mov dword ptr [eax], esi
// 0046c149  85f6                 test esi, esi
// 0046c14b  7408                 je 0x46c155
// 0046c14d  8b16                 mov edx, dword ptr [esi]
// 0046c14f  8b4204               mov eax, dword ptr [edx + 4]
// 0046c152  56                   push esi
// 0046c153  ffd0                 call eax
// 0046c155  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c159  85f6                 test esi, esi
// 0046c15b  7408                 je 0x46c165
// 0046c15d  8b0e                 mov ecx, dword ptr [esi]
// 0046c15f  8b5108               mov edx, dword ptr [ecx + 8]
// 0046c162  56                   push esi
// 0046c163  ffd2                 call edx
// 0046c165  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046c168  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046c16f  85c0                 test eax, eax
// 0046c171  7406                 je 0x46c179
// 0046c173  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046c176  894804               mov dword ptr [eax + 4], ecx
// 0046c179  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046c17d  740b                 je 0x46c18a
// 0046c17f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046c182  52                   push edx
// 0046c183  6a00                 push 0
// 0046c185  e8d2472300           call 0x6a095c
// 0046c18a  33c0                 xor eax, eax
// 0046c18c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046c18f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c196  5f                   pop edi
// 0046c197  5e                   pop esi
// 0046c198  5b                   pop ebx
// 0046c199  8be5                 mov esp, ebp
// 0046c19b  5d                   pop ebp
// 0046c19c  c20800               ret 8
// 0046c19f  6852010000           push 0x152
// 0046c1a4  6850c88100           push 0x81c850
// 0046c1a9  6803400080           push 0x80004003
// 0046c1ae  6a01                 push 1
// 0046c1b0  e8cbbbfbff           call 0x427d80
// 0046c1b5  83c410               add esp, 0x10
// 0046c1b8  68f8648100           push 0x8164f8
// 0046c1bd  6803400080           push 0x80004003
// 0046c1c2  e8a9ebffff           call 0x46ad70

// from server: 64% by colin
// from server: 70% by colin
// roc 2008-06 0046bfd0  unit: VCWorkspace::?$CComObject  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bfd0
//
// 0046bfd0  55                   push ebp
// 0046bfd1  8bec                 mov ebp, esp
// 0046bfd3  6aff                 push -1
// 0046bfd5  682b3b7c00           push 0x7c3b2b
// 0046bfda  64a100000000         mov eax, dword ptr fs:[0]
// 0046bfe0  50                   push eax
// 0046bfe1  64892500000000       mov dword ptr fs:[0], esp
// 0046bfe8  83ec28               sub esp, 0x28
// 0046bfeb  53                   push ebx
// 0046bfec  56                   push esi
// 0046bfed  57                   push edi
// 0046bfee  33ff                 xor edi, edi
// 0046bff0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bff3  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bff6  e86d492300           call 0x6a0968
// 0046bffb  50                   push eax
// 0046bffc  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bfff  e85e492300           call 0x6a0962
// 0046c004  8d45ec               lea eax, [ebp - 0x14]
// 0046c007  897dfc               mov dword ptr [ebp - 4], edi
// 0046c00a  50                   push eax
// 0046c00b  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c00f  e87cecffff           call 0x46ac90
// 0046c014  85c0                 test eax, eax
// 0046c016  7432                 je 0x46c04a
// 0046c018  684b010000           push 0x14b
// 0046c01d  6850c88100           push 0x81c850
// 0046c022  8d4dec               lea ecx, [ebp - 0x14]
// 0046c025  51                   push ecx
// 0046c026  e865ecffff           call 0x46ac90
// 0046c02b  50                   push eax
// 0046c02c  6a01                 push 1
// 0046c02e  e84dbdfbff           call 0x427d80
// 0046c033  83c410               add esp, 0x10
// 0046c036  68f8648100           push 0x8164f8
// 0046c03b  8d55ec               lea edx, [ebp - 0x14]
// 0046c03e  52                   push edx
// 0046c03f  e84cecffff           call 0x46ac90
// 0046c044  50                   push eax
// 0046c045  e826edffff           call 0x46ad70
// 0046c04a  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046c04d  8d430c               lea eax, [ebx + 0xc]
// 0046c050  3bc7                 cmp eax, edi
// 0046c052  7403                 je 0x46c057
// 0046c054  8d7b14               lea edi, [ebx + 0x14]
// 0046c057  8b7508               mov esi, dword ptr [ebp + 8]
// 0046c05a  8d4508               lea eax, [ebp + 8]
// 0046c05d  50                   push eax
// 0046c05e  8bce                 mov ecx, esi
// 0046c060  e8ebf6ffff           call 0x46b750
// 0046c065  8b00                 mov eax, dword ptr [eax]
// 0046c067  57                   push edi
// 0046c068  50                   push eax
// 0046c069  8bce                 mov ecx, esi
// 0046c06b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c06f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046c076  e8e5f7ffff           call 0x46b860
// 0046c07b  85c0                 test eax, eax
// 0046c07d  0f8481000000         je 0x46c104
// 0046c083  8d430c               lea eax, [ebx + 0xc]
// 0046c086  85c0                 test eax, eax
// 0046c088  7405                 je 0x46c08f
// 0046c08a  8d7b14               lea edi, [ebx + 0x14]
// 0046c08d  eb02                 jmp 0x46c091
// 0046c08f  33ff                 xor edi, edi
// 0046c091  8d4de8               lea ecx, [ebp - 0x18]
// 0046c094  51                   push ecx
// 0046c095  8bce                 mov ecx, esi
// 0046c097  e8b4f6ffff           call 0x46b750
// 0046c09c  8b00                 mov eax, dword ptr [eax]
// 0046c09e  b903000000           mov ecx, 3
// 0046c0a3  57                   push edi
// 0046c0a4  894dfc               mov dword ptr [ebp - 4], ecx
// 0046c0a7  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046c0aa  50                   push eax
// 0046c0ab  8bce                 mov ecx, esi
// 0046c0ad  e8aef7ffff           call 0x46b860
// 0046c0b2  684e010000           push 0x14e
// 0046c0b7  6850c88100           push 0x81c850
// 0046c0bc  50                   push eax
// 0046c0bd  6a01                 push 1
// 0046c0bf  e8bcbcfbff           call 0x427d80
// 0046c0c4  8d430c               lea eax, [ebx + 0xc]
// 0046c0c7  83c410               add esp, 0x10
// 0046c0ca  85c0                 test eax, eax
// 0046c0cc  7405                 je 0x46c0d3
// 0046c0ce  8d7b14               lea edi, [ebx + 0x14]
// 0046c0d1  eb02                 jmp 0x46c0d5
// 0046c0d3  33ff                 xor edi, edi
// 0046c0d5  8d55e4               lea edx, [ebp - 0x1c]
// 0046c0d8  52                   push edx
// 0046c0d9  8bce                 mov ecx, esi
// 0046c0db  e870f6ffff           call 0x46b750
// 0046c0e0  8b00                 mov eax, dword ptr [eax]
// 0046c0e2  57                   push edi
// 0046c0e3  50                   push eax
// 0046c0e4  8bce                 mov ecx, esi
// 0046c0e6  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046c0ed  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046c0f4  e867f7ffff           call 0x46b860
// 0046c0f9  68f8648100           push 0x8164f8
// 0046c0fe  50                   push eax
// 0046c0ff  e86cecffff           call 0x46ad70
// 0046c104  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046c107  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046c10e  85c9                 test ecx, ecx
// 0046c110  7410                 je 0x46c122
// 0046c112  8bf1                 mov esi, ecx
// 0046c114  e85779faff           call 0x413a70
// 0046c119  56                   push esi
// 0046c11a  e85b452300           call 0x6a067a
// 0046c11f  83c404               add esp, 4
// 0046c122  85db                 test ebx, ebx
// 0046c124  7405                 je 0x46c12b
// 0046c126  8d7304               lea esi, [ebx + 4]
// 0046c129  eb02                 jmp 0x46c12d
// 0046c12b  33f6                 xor esi, esi
// 0046c12d  897508               mov dword ptr [ebp + 8], esi
// 0046c130  85f6                 test esi, esi
// 0046c132  7408                 je 0x46c13c
// 0046c134  8b06                 mov eax, dword ptr [esi]
// 0046c136  8b4804               mov ecx, dword ptr [eax + 4]
// 0046c139  56                   push esi
// 0046c13a  ffd1                 call ecx
// 0046c13c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046c13f  c645fc05             mov byte ptr [ebp - 4], 5
// 0046c143  85c0                 test eax, eax
// 0046c145  7458                 je 0x46c19f
// 0046c147  8930                 mov dword ptr [eax], esi
// 0046c149  85f6                 test esi, esi
// 0046c14b  7408                 je 0x46c155
// 0046c14d  8b16                 mov edx, dword ptr [esi]
// 0046c14f  8b4204               mov eax, dword ptr [edx + 4]
// 0046c152  56                   push esi
// 0046c153  ffd0                 call eax
// 0046c155  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c159  85f6                 test esi, esi
// 0046c15b  7408                 je 0x46c165
// 0046c15d  8b0e                 mov ecx, dword ptr [esi]
// 0046c15f  8b5108               mov edx, dword ptr [ecx + 8]
// 0046c162  56                   push esi
// 0046c163  ffd2                 call edx
// 0046c165  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046c168  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046c16f  85c0                 test eax, eax
// 0046c171  7406                 je 0x46c179
// 0046c173  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046c176  894804               mov dword ptr [eax + 4], ecx
// 0046c179  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046c17d  740b                 je 0x46c18a
// 0046c17f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046c182  52                   push edx
// 0046c183  6a00                 push 0
// 0046c185  e8d2472300           call 0x6a095c
// 0046c18a  33c0                 xor eax, eax
// 0046c18c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046c18f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c196  5f                   pop edi
// 0046c197  5e                   pop esi
// 0046c198  5b                   pop ebx
// 0046c199  8be5                 mov esp, ebp
// 0046c19b  5d                   pop ebp
// 0046c19c  c20800               ret 8
// 0046c19f  6852010000           push 0x152
// 0046c1a4  6850c88100           push 0x81c850
// 0046c1a9  6803400080           push 0x80004003
// 0046c1ae  6a01                 push 1
// 0046c1b0  e8cbbbfbff           call 0x427d80
// 0046c1b5  83c410               add esp, 0x10
// 0046c1b8  68f8648100           push 0x8164f8
// 0046c1bd  6803400080           push 0x80004003
// 0046c1c2  e8a9ebffff           call 0x46ad70

// from server: 64% by king_originala
// roc 2008-06 0046bfd0  unit: VCWorkspace::?$CComObject  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046bfd0
//
// 0046bfd0  55                   push ebp
// 0046bfd1  8bec                 mov ebp, esp
// 0046bfd3  6aff                 push -1
// 0046bfd5  682b3b7c00           push 0x7c3b2b
// 0046bfda  64a100000000         mov eax, dword ptr fs:[0]
// 0046bfe0  50                   push eax
// 0046bfe1  64892500000000       mov dword ptr fs:[0], esp
// 0046bfe8  83ec28               sub esp, 0x28
// 0046bfeb  53                   push ebx
// 0046bfec  56                   push esi
// 0046bfed  57                   push edi
// 0046bfee  33ff                 xor edi, edi
// 0046bff0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046bff3  897dec               mov dword ptr [ebp - 0x14], edi
// 0046bff6  e86d492300           call 0x6a0968
// 0046bffb  50                   push eax
// 0046bffc  8d4dcc               lea ecx, [ebp - 0x34]
// 0046bfff  e85e492300           call 0x6a0962
// 0046c004  8d45ec               lea eax, [ebp - 0x14]
// 0046c007  897dfc               mov dword ptr [ebp - 4], edi
// 0046c00a  50                   push eax
// 0046c00b  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c00f  e87cecffff           call 0x46ac90
// 0046c014  85c0                 test eax, eax
// 0046c016  7432                 je 0x46c04a
// 0046c018  684b010000           push 0x14b
// 0046c01d  6850c88100           push 0x81c850
// 0046c022  8d4dec               lea ecx, [ebp - 0x14]
// 0046c025  51                   push ecx
// 0046c026  e865ecffff           call 0x46ac90
// 0046c02b  50                   push eax
// 0046c02c  6a01                 push 1
// 0046c02e  e84dbdfbff           call 0x427d80
// 0046c033  83c410               add esp, 0x10
// 0046c036  68f8648100           push 0x8164f8
// 0046c03b  8d55ec               lea edx, [ebp - 0x14]
// 0046c03e  52                   push edx
// 0046c03f  e84cecffff           call 0x46ac90
// 0046c044  50                   push eax
// 0046c045  e826edffff           call 0x46ad70
// 0046c04a  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046c04d  8d430c               lea eax, [ebx + 0xc]
// 0046c050  3bc7                 cmp eax, edi
// 0046c052  7403                 je 0x46c057
// 0046c054  8d7b14               lea edi, [ebx + 0x14]
// 0046c057  8b7508               mov esi, dword ptr [ebp + 8]
// 0046c05a  8d4508               lea eax, [ebp + 8]
// 0046c05d  50                   push eax
// 0046c05e  8bce                 mov ecx, esi
// 0046c060  e8ebf6ffff           call 0x46b750
// 0046c065  8b00                 mov eax, dword ptr [eax]
// 0046c067  57                   push edi
// 0046c068  50                   push eax
// 0046c069  8bce                 mov ecx, esi
// 0046c06b  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c06f  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 0046c076  e8e5f7ffff           call 0x46b860
// 0046c07b  85c0                 test eax, eax
// 0046c07d  0f8481000000         je 0x46c104
// 0046c083  8d430c               lea eax, [ebx + 0xc]
// 0046c086  85c0                 test eax, eax
// 0046c088  7405                 je 0x46c08f
// 0046c08a  8d7b14               lea edi, [ebx + 0x14]
// 0046c08d  eb02                 jmp 0x46c091
// 0046c08f  33ff                 xor edi, edi
// 0046c091  8d4de8               lea ecx, [ebp - 0x18]
// 0046c094  51                   push ecx
// 0046c095  8bce                 mov ecx, esi
// 0046c097  e8b4f6ffff           call 0x46b750
// 0046c09c  8b00                 mov eax, dword ptr [eax]
// 0046c09e  b903000000           mov ecx, 3
// 0046c0a3  57                   push edi
// 0046c0a4  894dfc               mov dword ptr [ebp - 4], ecx
// 0046c0a7  894dec               mov dword ptr [ebp - 0x14], ecx
// 0046c0aa  50                   push eax
// 0046c0ab  8bce                 mov ecx, esi
// 0046c0ad  e8aef7ffff           call 0x46b860
// 0046c0b2  684e010000           push 0x14e
// 0046c0b7  6850c88100           push 0x81c850
// 0046c0bc  50                   push eax
// 0046c0bd  6a01                 push 1
// 0046c0bf  e8bcbcfbff           call 0x427d80
// 0046c0c4  8d430c               lea eax, [ebx + 0xc]
// 0046c0c7  83c410               add esp, 0x10
// 0046c0ca  85c0                 test eax, eax
// 0046c0cc  7405                 je 0x46c0d3
// 0046c0ce  8d7b14               lea edi, [ebx + 0x14]
// 0046c0d1  eb02                 jmp 0x46c0d5
// 0046c0d3  33ff                 xor edi, edi
// 0046c0d5  8d55e4               lea edx, [ebp - 0x1c]
// 0046c0d8  52                   push edx
// 0046c0d9  8bce                 mov ecx, esi
// 0046c0db  e870f6ffff           call 0x46b750
// 0046c0e0  8b00                 mov eax, dword ptr [eax]
// 0046c0e2  57                   push edi
// 0046c0e3  50                   push eax
// 0046c0e4  8bce                 mov ecx, esi
// 0046c0e6  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0046c0ed  c745ec07000000       mov dword ptr [ebp - 0x14], 7
// 0046c0f4  e867f7ffff           call 0x46b860
// 0046c0f9  68f8648100           push 0x8164f8
// 0046c0fe  50                   push eax
// 0046c0ff  e86cecffff           call 0x46ad70
// 0046c104  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046c107  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0046c10e  85c9                 test ecx, ecx
// 0046c110  7410                 je 0x46c122
// 0046c112  8bf1                 mov esi, ecx
// 0046c114  e85779faff           call 0x413a70
// 0046c119  56                   push esi
// 0046c11a  e85b452300           call 0x6a067a
// 0046c11f  83c404               add esp, 4
// 0046c122  85db                 test ebx, ebx
// 0046c124  7405                 je 0x46c12b
// 0046c126  8d7304               lea esi, [ebx + 4]
// 0046c129  eb02                 jmp 0x46c12d
// 0046c12b  33f6                 xor esi, esi
// 0046c12d  897508               mov dword ptr [ebp + 8], esi
// 0046c130  85f6                 test esi, esi
// 0046c132  7408                 je 0x46c13c
// 0046c134  8b06                 mov eax, dword ptr [esi]
// 0046c136  8b4804               mov ecx, dword ptr [eax + 4]
// 0046c139  56                   push esi
// 0046c13a  ffd1                 call ecx
// 0046c13c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046c13f  c645fc05             mov byte ptr [ebp - 4], 5
// 0046c143  85c0                 test eax, eax
// 0046c145  7458                 je 0x46c19f
// 0046c147  8930                 mov dword ptr [eax], esi
// 0046c149  85f6                 test esi, esi
// 0046c14b  7408                 je 0x46c155
// 0046c14d  8b16                 mov edx, dword ptr [esi]
// 0046c14f  8b4204               mov eax, dword ptr [edx + 4]
// 0046c152  56                   push esi
// 0046c153  ffd0                 call eax
// 0046c155  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c159  85f6                 test esi, esi
// 0046c15b  7408                 je 0x46c165
// 0046c15d  8b0e                 mov ecx, dword ptr [esi]
// 0046c15f  8b5108               mov edx, dword ptr [ecx + 8]
// 0046c162  56                   push esi
// 0046c163  ffd2                 call edx
// 0046c165  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 0046c168  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046c16f  85c0                 test eax, eax
// 0046c171  7406                 je 0x46c179
// 0046c173  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0046c176  894804               mov dword ptr [eax + 4], ecx
// 0046c179  837dd800             cmp dword ptr [ebp - 0x28], 0
// 0046c17d  740b                 je 0x46c18a
// 0046c17f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046c182  52                   push edx
// 0046c183  6a00                 push 0
// 0046c185  e8d2472300           call 0x6a095c
// 0046c18a  33c0                 xor eax, eax
// 0046c18c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046c18f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c196  5f                   pop edi
// 0046c197  5e                   pop esi
// 0046c198  5b                   pop ebx
// 0046c199  8be5                 mov esp, ebp
// 0046c19b  5d                   pop ebp
// 0046c19c  c20800               ret 8
// 0046c19f  6852010000           push 0x152
// 0046c1a4  6850c88100           push 0x81c850
// 0046c1a9  6803400080           push 0x80004003
// 0046c1ae  6a01                 push 1
// 0046c1b0  e8cbbbfbff           call 0x427d80
// 0046c1b5  83c410               add esp, 0x10
// 0046c1b8  68f8648100           push 0x8164f8
// 0046c1bd  6803400080           push 0x80004003
// 0046c1c2  e8a9ebffff           call 0x46ad70

extern "C" void* __cdecl current_context();
extern "C" void __stdcall release_context(int, void*);
extern "C" void __cdecl free_storage(void*);
extern "C" void __cdecl report_error(int, long, const char*, int);
struct Guid { unsigned long data1; unsigned short data2, data3; unsigned char data4[8]; };
extern const Guid workspaceInterface;
extern long __cdecl report_exception(const Guid&, const char*, unsigned int);
extern "C" __declspec(noreturn) void __stdcall raise_error(long, const Guid&);

struct Text {
    void destroy();
};

struct TextOwner {
    Text* value;
    ~TextOwner();
};

inline TextOwner::~TextOwner()
{
    Text* saved = value;
    if (saved) {
        saved->destroy();
        free_storage(saved);
    }
}

struct Interface {
    virtual long __stdcall query(void*, void**);
    virtual unsigned long __stdcall add_ref();
    virtual unsigned long __stdcall release();
};

struct InterfaceOwner {
    Interface* value;
    InterfaceOwner(Interface*);
    ~InterfaceOwner();
};

inline InterfaceOwner::InterfaceOwner(Interface* p) : value(p)
{
    if (value)
        value->add_ref();
}

inline InterfaceOwner::~InterfaceOwner()
{
    if (value)
        value->release();
}

struct Payload {
    unsigned char prefix[8];
    unsigned char data[1];
};

struct Object {
    unsigned char prefix[4];
    Interface interface_part;
    unsigned char gap[4];
    Payload payload;
};

extern "C" long __stdcall acquire_object(Object**);

struct Source {
    TextOwner text();
    long assign(Text*, void*);
};

long __stdcall reconstruct(Source*, Interface**);

long __stdcall reconstruct(Source* source, Interface** result)
{
    Object* object = 0;
    AFX_MAINTAIN_STATE2 context(AfxGetAppModuleState());

    try {
        if (acquire_object(&object)) {
            report_error(1, acquire_object(&object), ".\\Workspace.cpp", 331);
            raise_error(acquire_object(&object),
                        workspaceInterface);
        }

        Object* const saved = object;

        (source->assign(source->text().value,
                        &saved->payload ? saved->payload.data : 0)
            ? (report_error(1,
                            source->assign(source->text().value,
                                           &saved->payload ? saved->payload.data : 0),
                            ".\\Workspace.cpp", 334),
               raise_error(source->assign(source->text().value,
                                          &saved->payload ? saved->payload.data : 0),
                           workspaceInterface))
            : (void)0);

        InterfaceOwner value(saved ? &saved->interface_part : 0);

        if (result) {
            *result = value.value;
            if (value.value)
                value.value->add_ref();
        } else {
            report_error(1, 0x80004003L, ".\\Workspace.cpp", 338);
            raise_error(0x80004003L,
                        workspaceInterface);
        }
    } catch (const std::exception& error) {
        return report_exception(workspaceInterface, error.what(), 0);
    } catch (CException* error) {
        long status = COleException::Process(error);
        error->Delete();
        return status;
    }

    return 0;
}
