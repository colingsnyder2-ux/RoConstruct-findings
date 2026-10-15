// from server: 100% by colin
// roc 2008-06 00447800  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447800
//
// 00447800  6aff                 push -1
// 00447802  68c98e7d00           push 0x7d8ec9
// 00447807  64a100000000         mov eax, dword ptr fs:[0]
// 0044780d  50                   push eax
// 0044780e  64892500000000       mov dword ptr fs:[0], esp
// 00447815  83ec1c               sub esp, 0x1c
// 00447818  53                   push ebx
// 00447819  56                   push esi
// 0044781a  57                   push edi
// 0044781b  68f0149300           push 0x9314f0
// 00447820  8bf1                 mov esi, ecx
// 00447822  68c05f8100           push 0x815fc0
// 00447827  8974242c             mov dword ptr [esp + 0x2c], esi
// 0044782b  e8604d1200           call 0x56c590
// 00447830  8d442423             lea eax, [esp + 0x23]
// 00447834  50                   push eax
// 00447835  8d542427             lea edx, [esp + 0x27]
// 00447839  33ff                 xor edi, edi
// 0044783b  8d4e30               lea ecx, [esi + 0x30]
// 0044783e  52                   push edx
// 0044783f  897c2438             mov dword ptr [esp + 0x38], edi
// 00447843  c706045f8100         mov dword ptr [esi], 0x815f04
// 00447849  e8c2e8ffff           call 0x446110
// 0044784e  8d442423             lea eax, [esp + 0x23]
// 00447852  50                   push eax
// 00447853  8d542427             lea edx, [esp + 0x27]
// 00447857  8d4e50               lea ecx, [esi + 0x50]
// 0044785a  52                   push edx
// 0044785b  c644243801           mov byte ptr [esp + 0x38], 1
// 00447860  e8abe8ffff           call 0x446110
// 00447865  6a04                 push 4
// 00447867  c644243402           mov byte ptr [esp + 0x34], 2
// 0044786c  8d5e70               lea ebx, [esi + 0x70]
// 0044786f  e8ac902500           call 0x6a0920
// 00447874  83c404               add esp, 4
// 00447877  3bc7                 cmp eax, edi
// 00447879  7404                 je 0x44787f
// 0044787b  8918                 mov dword ptr [eax], ebx
// 0044787d  eb02                 jmp 0x447881
// 0044787f  33c0                 xor eax, eax
// 00447881  8903                 mov dword ptr [ebx], eax
// 00447883  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447886  897b10               mov dword ptr [ebx + 0x10], edi
// 00447889  897b14               mov dword ptr [ebx + 0x14], edi
// 0044788c  6a04                 push 4
// 0044788e  c644243404           mov byte ptr [esp + 0x34], 4
// 00447893  8d9e88000000         lea ebx, [esi + 0x88]
// 00447899  e882902500           call 0x6a0920
// 0044789e  83c404               add esp, 4
// 004478a1  3bc7                 cmp eax, edi
// 004478a3  7404                 je 0x4478a9
// 004478a5  8918                 mov dword ptr [eax], ebx
// 004478a7  eb02                 jmp 0x4478ab
// 004478a9  33c0                 xor eax, eax
// 004478ab  8903                 mov dword ptr [ebx], eax
// 004478ad  897b0c               mov dword ptr [ebx + 0xc], edi
// 004478b0  897b10               mov dword ptr [ebx + 0x10], edi
// 004478b3  897b14               mov dword ptr [ebx + 0x14], edi
// 004478b6  6a04                 push 4
// 004478b8  c644243406           mov byte ptr [esp + 0x34], 6
// 004478bd  8d9ea0000000         lea ebx, [esi + 0xa0]
// 004478c3  e858902500           call 0x6a0920
// 004478c8  83c404               add esp, 4
// 004478cb  3bc7                 cmp eax, edi
// 004478cd  7404                 je 0x4478d3
// 004478cf  8918                 mov dword ptr [eax], ebx
// 004478d1  eb02                 jmp 0x4478d5
// 004478d3  33c0                 xor eax, eax
// 004478d5  8903                 mov dword ptr [ebx], eax
// 004478d7  897b0c               mov dword ptr [ebx + 0xc], edi
// 004478da  897b10               mov dword ptr [ebx + 0x10], edi
// 004478dd  897b14               mov dword ptr [ebx + 0x14], edi
// 004478e0  6a04                 push 4
// 004478e2  c644243408           mov byte ptr [esp + 0x34], 8
// 004478e7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 004478ed  e82e902500           call 0x6a0920
// 004478f2  83c404               add esp, 4
// 004478f5  3bc7                 cmp eax, edi
// 004478f7  7404                 je 0x4478fd
// 004478f9  8918                 mov dword ptr [eax], ebx
// 004478fb  eb02                 jmp 0x4478ff
// 004478fd  33c0                 xor eax, eax
// 004478ff  8903                 mov dword ptr [ebx], eax
// 00447901  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447904  897b10               mov dword ptr [ebx + 0x10], edi
// 00447907  897b14               mov dword ptr [ebx + 0x14], edi
// 0044790a  6a04                 push 4
// 0044790c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00447911  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00447917  e804902500           call 0x6a0920
// 0044791c  83c404               add esp, 4
// 0044791f  3bc7                 cmp eax, edi
// 00447921  7404                 je 0x447927
// 00447923  8918                 mov dword ptr [eax], ebx
// 00447925  eb02                 jmp 0x447929
// 00447927  33c0                 xor eax, eax
// 00447929  8903                 mov dword ptr [ebx], eax
// 0044792b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044792e  897b10               mov dword ptr [ebx + 0x10], edi
// 00447931  897b14               mov dword ptr [ebx + 0x14], edi
// 00447934  68705f8100           push 0x815f70
// 00447939  57                   push edi
// 0044793a  8bce                 mov ecx, esi
// 0044793c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 00447941  e8ea5b2000           call 0x64d530
// 00447946  68905f8100           push 0x815f90
// 0044794b  6a01                 push 1
// 0044794d  8bce                 mov ecx, esi
// 0044794f  e8dc5b2000           call 0x64d530
// 00447954  688c5f8100           push 0x815f8c
// 00447959  6a02                 push 2
// 0044795b  8bce                 mov ecx, esi
// 0044795d  e8ce5b2000           call 0x64d530
// 00447962  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00447966  5f                   pop edi
// 00447967  8bc6                 mov eax, esi
// 00447969  5e                   pop esi
// 0044796a  5b                   pop ebx
// 0044796b  64890d00000000       mov dword ptr fs:[0], ecx
// 00447972  83c428               add esp, 0x28
// 00447975  c3                   ret 

// from server: 99% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_fe1ffe951039446c.cpp
