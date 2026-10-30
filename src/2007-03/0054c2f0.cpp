// roc 2007-03 0054c2f0  unit: seg_00540000  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c2f0
//
// 0054c2f0  64a100000000         mov eax, dword ptr fs:[0]
// 0054c2f6  6aff                 push -1
// 0054c2f8  682c357500           push 0x75352c
// 0054c2fd  50                   push eax
// 0054c2fe  64892500000000       mov dword ptr fs:[0], esp
// 0054c305  83ec48               sub esp, 0x48
// 0054c308  53                   push ebx
// 0054c309  8bd9                 mov ebx, ecx
// 0054c30b  56                   push esi
// 0054c30c  8b33                 mov esi, dword ptr [ebx]
// 0054c30e  f6461c01             test byte ptr [esi + 0x1c], 1
// 0054c312  7434                 je 0x54c348
// 0054c314  68687b7a00           push 0x7a7b68
// 0054c319  8d4c2410             lea ecx, [esp + 0x10]
// 0054c31d  ff1578e77700         call dword ptr [0x77e778]
// 0054c323  8d44240c             lea eax, [esp + 0xc]
// 0054c327  50                   push eax
// 0054c328  8d4c242c             lea ecx, [esp + 0x2c]
// 0054c32c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0054c334  e86761ebff           call 0x4024a0
// 0054c339  6878878500           push 0x858778
// 0054c33e  8d4c242c             lea ecx, [esp + 0x2c]
// 0054c342  51                   push ecx
// 0054c343  e8e62c0d00           call 0x61f02e
// 0054c348  837e0800             cmp dword ptr [esi + 8], 0
// 0054c34c  55                   push ebp
// 0054c34d  57                   push edi
// 0054c34e  7424                 je 0x54c374
// 0054c350  8b4604               mov eax, dword ptr [esi + 4]
// 0054c353  8b7804               mov edi, dword ptr [eax + 4]
// 0054c356  3bf8                 cmp edi, eax
// 0054c358  7506                 jne 0x54c360
// 0054c35a  ff1544e97700         call dword ptr [0x77e944]
// 0054c360  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054c363  7506                 jne 0x54c36b
// 0054c365  ff1544e97700         call dword ptr [0x77e944]
// 0054c36b  8b5708               mov edx, dword ptr [edi + 8]
// 0054c36e  89542410             mov dword ptr [esp + 0x10], edx
// 0054c372  eb08                 jmp 0x54c37c
// 0054c374  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054c37c  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0054c380  83ffff               cmp edi, -1
// 0054c383  7505                 jne 0x54c38a
// 0054c385  bf00100000           mov edi, 0x1000
// 0054c38a  8b742470             mov esi, dword ptr [esp + 0x70]
// 0054c38e  83feff               cmp esi, -1
// 0054c391  7505                 jne 0x54c398
// 0054c393  8b03                 mov eax, dword ptr [ebx]
// 0054c395  8b7018               mov esi, dword ptr [eax + 0x18]
// 0054c398  6a5c                 push 0x5c
// 0054c39a  e8691d0d00           call 0x61e108
// 0054c39f  83c404               add esp, 4
// 0054c3a2  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054c3a6  85c0                 test eax, eax
// 0054c3a8  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0054c3b0  7410                 je 0x54c3c2
// 0054c3b2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0054c3b6  56                   push esi
// 0054c3b7  57                   push edi
// 0054c3b8  51                   push ecx
// 0054c3b9  8bc8                 mov ecx, eax
// 0054c3bb  e8f0f7ffff           call 0x54bbb0
// 0054c3c0  eb02                 jmp 0x54c3c4
// 0054c3c2  33c0                 xor eax, eax
// 0054c3c4  89442470             mov dword ptr [esp + 0x70], eax
// 0054c3c8  8b33                 mov esi, dword ptr [ebx]
// 0054c3ca  8b7e04               mov edi, dword ptr [esi + 4]
// 0054c3cd  8d54246c             lea edx, [esp + 0x6c]
// 0054c3d1  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054c3d5  8b4704               mov eax, dword ptr [edi + 4]
// 0054c3d8  52                   push edx
// 0054c3d9  50                   push eax
// 0054c3da  57                   push edi
// 0054c3db  8bce                 mov ecx, esi
// 0054c3dd  c744246c02000000     mov dword ptr [esp + 0x6c], 2
// 0054c3e5  e806420500           call 0x5a05f0
// 0054c3ea  6a01                 push 1
// 0054c3ec  8bce                 mov ecx, esi
// 0054c3ee  8be8                 mov ebp, eax
// 0054c3f0  e83b420500           call 0x5a0630
// 0054c3f5  896f04               mov dword ptr [edi + 4], ebp
// 0054c3f8  8b4504               mov eax, dword ptr [ebp + 4]
// 0054c3fb  8928                 mov dword ptr [eax], ebp
// 0054c3fd  8b03                 mov eax, dword ptr [ebx]
// 0054c3ff  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054c403  83481c03             or dword ptr [eax + 0x1c], 3
// 0054c407  85ed                 test ebp, ebp
// 0054c409  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0054c411  742b                 je 0x54c43e
// 0054c413  8b33                 mov esi, dword ptr [ebx]
// 0054c415  8b4604               mov eax, dword ptr [esi + 4]
// 0054c418  8b7804               mov edi, dword ptr [eax + 4]
// 0054c41b  3bf8                 cmp edi, eax
// 0054c41d  7506                 jne 0x54c425
// 0054c41f  ff1544e97700         call dword ptr [0x77e944]
// 0054c425  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054c428  7506                 jne 0x54c430
// 0054c42a  ff1544e97700         call dword ptr [0x77e944]
// 0054c430  8b5500               mov edx, dword ptr [ebp]
// 0054c433  8b4708               mov eax, dword ptr [edi + 8]
// 0054c436  8b5238               mov edx, dword ptr [edx + 0x38]
// 0054c439  50                   push eax
// 0054c43a  8bcd                 mov ecx, ebp
// 0054c43c  ffd2                 call edx
// 0054c43e  8b1b                 mov ebx, dword ptr [ebx]
// 0054c440  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0054c444  5f                   pop edi
// 0054c445  5d                   pop ebp
// 0054c446  740a                 je 0x54c452
// 0054c448  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0054c44b  8b01                 mov eax, dword ptr [ecx]
// 0054c44d  8b5004               mov edx, dword ptr [eax + 4]
// 0054c450  ffd2                 call edx
// 0054c452  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054c456  5e                   pop esi
// 0054c457  5b                   pop ebx
// 0054c458  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c45f  83c454               add esp, 0x54
// 0054c462  c20c00               ret 0xc
// copied from an identical function in another client (function ??$push_impl@V?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@AAEXABV?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@123@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp