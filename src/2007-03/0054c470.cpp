// roc 2007-03 0054c470  unit: seg_00540000  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c470
//
// 0054c470  64a100000000         mov eax, dword ptr fs:[0]
// 0054c476  6aff                 push -1
// 0054c478  682c357500           push 0x75352c
// 0054c47d  50                   push eax
// 0054c47e  64892500000000       mov dword ptr fs:[0], esp
// 0054c485  83ec48               sub esp, 0x48
// 0054c488  53                   push ebx
// 0054c489  8bd9                 mov ebx, ecx
// 0054c48b  56                   push esi
// 0054c48c  8b33                 mov esi, dword ptr [ebx]
// 0054c48e  f6461c01             test byte ptr [esi + 0x1c], 1
// 0054c492  7434                 je 0x54c4c8
// 0054c494  68687b7a00           push 0x7a7b68
// 0054c499  8d4c2410             lea ecx, [esp + 0x10]
// 0054c49d  ff1578e77700         call dword ptr [0x77e778]
// 0054c4a3  8d44240c             lea eax, [esp + 0xc]
// 0054c4a7  50                   push eax
// 0054c4a8  8d4c242c             lea ecx, [esp + 0x2c]
// 0054c4ac  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0054c4b4  e8e75febff           call 0x4024a0
// 0054c4b9  6878878500           push 0x858778
// 0054c4be  8d4c242c             lea ecx, [esp + 0x2c]
// 0054c4c2  51                   push ecx
// 0054c4c3  e8662b0d00           call 0x61f02e
// 0054c4c8  837e0800             cmp dword ptr [esi + 8], 0
// 0054c4cc  55                   push ebp
// 0054c4cd  57                   push edi
// 0054c4ce  7424                 je 0x54c4f4
// 0054c4d0  8b4604               mov eax, dword ptr [esi + 4]
// 0054c4d3  8b7804               mov edi, dword ptr [eax + 4]
// 0054c4d6  3bf8                 cmp edi, eax
// 0054c4d8  7506                 jne 0x54c4e0
// 0054c4da  ff1544e97700         call dword ptr [0x77e944]
// 0054c4e0  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054c4e3  7506                 jne 0x54c4eb
// 0054c4e5  ff1544e97700         call dword ptr [0x77e944]
// 0054c4eb  8b5708               mov edx, dword ptr [edi + 8]
// 0054c4ee  89542410             mov dword ptr [esp + 0x10], edx
// 0054c4f2  eb08                 jmp 0x54c4fc
// 0054c4f4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054c4fc  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0054c500  83ffff               cmp edi, -1
// 0054c503  7505                 jne 0x54c50a
// 0054c505  bf00100000           mov edi, 0x1000
// 0054c50a  8b742470             mov esi, dword ptr [esp + 0x70]
// 0054c50e  83feff               cmp esi, -1
// 0054c511  7505                 jne 0x54c518
// 0054c513  8b03                 mov eax, dword ptr [ebx]
// 0054c515  8b7018               mov esi, dword ptr [eax + 0x18]
// 0054c518  6a5c                 push 0x5c
// 0054c51a  e8e91b0d00           call 0x61e108
// 0054c51f  83c404               add esp, 4
// 0054c522  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054c526  85c0                 test eax, eax
// 0054c528  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0054c530  7410                 je 0x54c542
// 0054c532  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0054c536  56                   push esi
// 0054c537  57                   push edi
// 0054c538  51                   push ecx
// 0054c539  8bc8                 mov ecx, eax
// 0054c53b  e8f0f7ffff           call 0x54bd30
// 0054c540  eb02                 jmp 0x54c544
// 0054c542  33c0                 xor eax, eax
// 0054c544  89442470             mov dword ptr [esp + 0x70], eax
// 0054c548  8b33                 mov esi, dword ptr [ebx]
// 0054c54a  8b7e04               mov edi, dword ptr [esi + 4]
// 0054c54d  8d54246c             lea edx, [esp + 0x6c]
// 0054c551  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054c555  8b4704               mov eax, dword ptr [edi + 4]
// 0054c558  52                   push edx
// 0054c559  50                   push eax
// 0054c55a  57                   push edi
// 0054c55b  8bce                 mov ecx, esi
// 0054c55d  c744246c02000000     mov dword ptr [esp + 0x6c], 2
// 0054c565  e886400500           call 0x5a05f0
// 0054c56a  6a01                 push 1
// 0054c56c  8bce                 mov ecx, esi
// 0054c56e  8be8                 mov ebp, eax
// 0054c570  e8bb400500           call 0x5a0630
// 0054c575  896f04               mov dword ptr [edi + 4], ebp
// 0054c578  8b4504               mov eax, dword ptr [ebp + 4]
// 0054c57b  8928                 mov dword ptr [eax], ebp
// 0054c57d  8b03                 mov eax, dword ptr [ebx]
// 0054c57f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054c583  83481c03             or dword ptr [eax + 0x1c], 3
// 0054c587  85ed                 test ebp, ebp
// 0054c589  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0054c591  742b                 je 0x54c5be
// 0054c593  8b33                 mov esi, dword ptr [ebx]
// 0054c595  8b4604               mov eax, dword ptr [esi + 4]
// 0054c598  8b7804               mov edi, dword ptr [eax + 4]
// 0054c59b  3bf8                 cmp edi, eax
// 0054c59d  7506                 jne 0x54c5a5
// 0054c59f  ff1544e97700         call dword ptr [0x77e944]
// 0054c5a5  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054c5a8  7506                 jne 0x54c5b0
// 0054c5aa  ff1544e97700         call dword ptr [0x77e944]
// 0054c5b0  8b5500               mov edx, dword ptr [ebp]
// 0054c5b3  8b4708               mov eax, dword ptr [edi + 8]
// 0054c5b6  8b5238               mov edx, dword ptr [edx + 0x38]
// 0054c5b9  50                   push eax
// 0054c5ba  8bcd                 mov ecx, ebp
// 0054c5bc  ffd2                 call edx
// 0054c5be  8b1b                 mov ebx, dword ptr [ebx]
// 0054c5c0  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0054c5c4  5f                   pop edi
// 0054c5c5  5d                   pop ebp
// 0054c5c6  740a                 je 0x54c5d2
// 0054c5c8  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0054c5cb  8b01                 mov eax, dword ptr [ecx]
// 0054c5cd  8b5004               mov edx, dword ptr [eax + 4]
// 0054c5d0  ffd2                 call edx
// 0054c5d2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054c5d6  5e                   pop esi
// 0054c5d7  5b                   pop ebx
// 0054c5d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c5df  83c454               add esp, 0x54
// 0054c5e2  c20c00               ret 0xc
// copied from an identical function in another client (function ??$push_impl@V?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@AAEXABV?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@123@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp