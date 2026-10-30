// roc 2007-08 0054d880  unit: boost::iostreams::Uinput::?$filtering_stream  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d880
//
// 0054d880  64a100000000         mov eax, dword ptr fs:[0]
// 0054d886  6aff                 push -1
// 0054d888  689c2b7500           push 0x752b9c
// 0054d88d  50                   push eax
// 0054d88e  64892500000000       mov dword ptr fs:[0], esp
// 0054d895  83ec48               sub esp, 0x48
// 0054d898  53                   push ebx
// 0054d899  8bd9                 mov ebx, ecx
// 0054d89b  56                   push esi
// 0054d89c  8b33                 mov esi, dword ptr [ebx]
// 0054d89e  f6461c01             test byte ptr [esi + 0x1c], 1
// 0054d8a2  7434                 je 0x54d8d8
// 0054d8a4  68e07a7a00           push 0x7a7ae0
// 0054d8a9  8d4c2410             lea ecx, [esp + 0x10]
// 0054d8ad  ff1598e67700         call dword ptr [0x77e698]
// 0054d8b3  8d44240c             lea eax, [esp + 0xc]
// 0054d8b7  50                   push eax
// 0054d8b8  8d4c242c             lea ecx, [esp + 0x2c]
// 0054d8bc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0054d8c4  e8f74bebff           call 0x4024c0
// 0054d8c9  6804a28500           push 0x85a204
// 0054d8ce  8d4c242c             lea ecx, [esp + 0x2c]
// 0054d8d2  51                   push ecx
// 0054d8d3  e8c6320e00           call 0x630b9e
// 0054d8d8  837e0800             cmp dword ptr [esi + 8], 0
// 0054d8dc  55                   push ebp
// 0054d8dd  57                   push edi
// 0054d8de  7424                 je 0x54d904
// 0054d8e0  8b4604               mov eax, dword ptr [esi + 4]
// 0054d8e3  8b7804               mov edi, dword ptr [eax + 4]
// 0054d8e6  3bf8                 cmp edi, eax
// 0054d8e8  7506                 jne 0x54d8f0
// 0054d8ea  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d8f0  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054d8f3  7506                 jne 0x54d8fb
// 0054d8f5  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d8fb  8b5708               mov edx, dword ptr [edi + 8]
// 0054d8fe  89542410             mov dword ptr [esp + 0x10], edx
// 0054d902  eb08                 jmp 0x54d90c
// 0054d904  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054d90c  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0054d910  83ffff               cmp edi, -1
// 0054d913  7505                 jne 0x54d91a
// 0054d915  bf00100000           mov edi, 0x1000
// 0054d91a  8b742470             mov esi, dword ptr [esp + 0x70]
// 0054d91e  83feff               cmp esi, -1
// 0054d921  7505                 jne 0x54d928
// 0054d923  8b03                 mov eax, dword ptr [ebx]
// 0054d925  8b7018               mov esi, dword ptr [eax + 0x18]
// 0054d928  6a5c                 push 0x5c
// 0054d92a  e8c7250e00           call 0x62fef6
// 0054d92f  83c404               add esp, 4
// 0054d932  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054d936  85c0                 test eax, eax
// 0054d938  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0054d940  7410                 je 0x54d952
// 0054d942  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0054d946  56                   push esi
// 0054d947  57                   push edi
// 0054d948  51                   push ecx
// 0054d949  8bc8                 mov ecx, eax
// 0054d94b  e800f3ffff           call 0x54cc50
// 0054d950  eb02                 jmp 0x54d954
// 0054d952  33c0                 xor eax, eax
// 0054d954  89442470             mov dword ptr [esp + 0x70], eax
// 0054d958  8b33                 mov esi, dword ptr [ebx]
// 0054d95a  8b7e04               mov edi, dword ptr [esi + 4]
// 0054d95d  8d54246c             lea edx, [esp + 0x6c]
// 0054d961  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054d965  8b4704               mov eax, dword ptr [edi + 4]
// 0054d968  52                   push edx
// 0054d969  50                   push eax
// 0054d96a  57                   push edi
// 0054d96b  8bce                 mov ecx, esi
// 0054d96d  c744246c02000000     mov dword ptr [esp + 0x6c], 2
// 0054d975  e8a6c30900           call 0x5e9d20
// 0054d97a  6a01                 push 1
// 0054d97c  8bce                 mov ecx, esi
// 0054d97e  8be8                 mov ebp, eax
// 0054d980  e8dbc30900           call 0x5e9d60
// 0054d985  896f04               mov dword ptr [edi + 4], ebp
// 0054d988  8b4504               mov eax, dword ptr [ebp + 4]
// 0054d98b  8928                 mov dword ptr [eax], ebp
// 0054d98d  8b03                 mov eax, dword ptr [ebx]
// 0054d98f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054d993  83481c03             or dword ptr [eax + 0x1c], 3
// 0054d997  85ed                 test ebp, ebp
// 0054d999  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0054d9a1  742b                 je 0x54d9ce
// 0054d9a3  8b33                 mov esi, dword ptr [ebx]
// 0054d9a5  8b4604               mov eax, dword ptr [esi + 4]
// 0054d9a8  8b7804               mov edi, dword ptr [eax + 4]
// 0054d9ab  3bf8                 cmp edi, eax
// 0054d9ad  7506                 jne 0x54d9b5
// 0054d9af  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d9b5  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054d9b8  7506                 jne 0x54d9c0
// 0054d9ba  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d9c0  8b5500               mov edx, dword ptr [ebp]
// 0054d9c3  8b4708               mov eax, dword ptr [edi + 8]
// 0054d9c6  8b5238               mov edx, dword ptr [edx + 0x38]
// 0054d9c9  50                   push eax
// 0054d9ca  8bcd                 mov ecx, ebp
// 0054d9cc  ffd2                 call edx
// 0054d9ce  8b1b                 mov ebx, dword ptr [ebx]
// 0054d9d0  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0054d9d4  5f                   pop edi
// 0054d9d5  5d                   pop ebp
// 0054d9d6  740a                 je 0x54d9e2
// 0054d9d8  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0054d9db  8b01                 mov eax, dword ptr [ecx]
// 0054d9dd  8b5004               mov edx, dword ptr [eax + 4]
// 0054d9e0  ffd2                 call edx
// 0054d9e2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054d9e6  5e                   pop esi
// 0054d9e7  5b                   pop ebx
// 0054d9e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d9ef  83c454               add esp, 0x54
// 0054d9f2  c20c00               ret 0xc
// copied from an identical function in another client (function ??$push_impl@V?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@AAEXABV?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@123@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp