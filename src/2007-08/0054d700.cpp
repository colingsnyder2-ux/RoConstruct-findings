// roc 2007-08 0054d700  unit: boost::iostreams::Uinput::?$filtering_stream  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d700
//
// 0054d700  64a100000000         mov eax, dword ptr fs:[0]
// 0054d706  6aff                 push -1
// 0054d708  689c2b7500           push 0x752b9c
// 0054d70d  50                   push eax
// 0054d70e  64892500000000       mov dword ptr fs:[0], esp
// 0054d715  83ec48               sub esp, 0x48
// 0054d718  53                   push ebx
// 0054d719  8bd9                 mov ebx, ecx
// 0054d71b  56                   push esi
// 0054d71c  8b33                 mov esi, dword ptr [ebx]
// 0054d71e  f6461c01             test byte ptr [esi + 0x1c], 1
// 0054d722  7434                 je 0x54d758
// 0054d724  68e07a7a00           push 0x7a7ae0
// 0054d729  8d4c2410             lea ecx, [esp + 0x10]
// 0054d72d  ff1598e67700         call dword ptr [0x77e698]
// 0054d733  8d44240c             lea eax, [esp + 0xc]
// 0054d737  50                   push eax
// 0054d738  8d4c242c             lea ecx, [esp + 0x2c]
// 0054d73c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0054d744  e8774debff           call 0x4024c0
// 0054d749  6804a28500           push 0x85a204
// 0054d74e  8d4c242c             lea ecx, [esp + 0x2c]
// 0054d752  51                   push ecx
// 0054d753  e846340e00           call 0x630b9e
// 0054d758  837e0800             cmp dword ptr [esi + 8], 0
// 0054d75c  55                   push ebp
// 0054d75d  57                   push edi
// 0054d75e  7424                 je 0x54d784
// 0054d760  8b4604               mov eax, dword ptr [esi + 4]
// 0054d763  8b7804               mov edi, dword ptr [eax + 4]
// 0054d766  3bf8                 cmp edi, eax
// 0054d768  7506                 jne 0x54d770
// 0054d76a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d770  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054d773  7506                 jne 0x54d77b
// 0054d775  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d77b  8b5708               mov edx, dword ptr [edi + 8]
// 0054d77e  89542410             mov dword ptr [esp + 0x10], edx
// 0054d782  eb08                 jmp 0x54d78c
// 0054d784  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054d78c  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0054d790  83ffff               cmp edi, -1
// 0054d793  7505                 jne 0x54d79a
// 0054d795  bf00100000           mov edi, 0x1000
// 0054d79a  8b742470             mov esi, dword ptr [esp + 0x70]
// 0054d79e  83feff               cmp esi, -1
// 0054d7a1  7505                 jne 0x54d7a8
// 0054d7a3  8b03                 mov eax, dword ptr [ebx]
// 0054d7a5  8b7018               mov esi, dword ptr [eax + 0x18]
// 0054d7a8  6a5c                 push 0x5c
// 0054d7aa  e847270e00           call 0x62fef6
// 0054d7af  83c404               add esp, 4
// 0054d7b2  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054d7b6  85c0                 test eax, eax
// 0054d7b8  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0054d7c0  7410                 je 0x54d7d2
// 0054d7c2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0054d7c6  56                   push esi
// 0054d7c7  57                   push edi
// 0054d7c8  51                   push ecx
// 0054d7c9  8bc8                 mov ecx, eax
// 0054d7cb  e800f3ffff           call 0x54cad0
// 0054d7d0  eb02                 jmp 0x54d7d4
// 0054d7d2  33c0                 xor eax, eax
// 0054d7d4  89442470             mov dword ptr [esp + 0x70], eax
// 0054d7d8  8b33                 mov esi, dword ptr [ebx]
// 0054d7da  8b7e04               mov edi, dword ptr [esi + 4]
// 0054d7dd  8d54246c             lea edx, [esp + 0x6c]
// 0054d7e1  8944246c             mov dword ptr [esp + 0x6c], eax
// 0054d7e5  8b4704               mov eax, dword ptr [edi + 4]
// 0054d7e8  52                   push edx
// 0054d7e9  50                   push eax
// 0054d7ea  57                   push edi
// 0054d7eb  8bce                 mov ecx, esi
// 0054d7ed  c744246c02000000     mov dword ptr [esp + 0x6c], 2
// 0054d7f5  e826c50900           call 0x5e9d20
// 0054d7fa  6a01                 push 1
// 0054d7fc  8bce                 mov ecx, esi
// 0054d7fe  8be8                 mov ebp, eax
// 0054d800  e85bc50900           call 0x5e9d60
// 0054d805  896f04               mov dword ptr [edi + 4], ebp
// 0054d808  8b4504               mov eax, dword ptr [ebp + 4]
// 0054d80b  8928                 mov dword ptr [eax], ebp
// 0054d80d  8b03                 mov eax, dword ptr [ebx]
// 0054d80f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054d813  83481c03             or dword ptr [eax + 0x1c], 3
// 0054d817  85ed                 test ebp, ebp
// 0054d819  c744247000000000     mov dword ptr [esp + 0x70], 0
// 0054d821  742b                 je 0x54d84e
// 0054d823  8b33                 mov esi, dword ptr [ebx]
// 0054d825  8b4604               mov eax, dword ptr [esi + 4]
// 0054d828  8b7804               mov edi, dword ptr [eax + 4]
// 0054d82b  3bf8                 cmp edi, eax
// 0054d82d  7506                 jne 0x54d835
// 0054d82f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d835  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054d838  7506                 jne 0x54d840
// 0054d83a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054d840  8b5500               mov edx, dword ptr [ebp]
// 0054d843  8b4708               mov eax, dword ptr [edi + 8]
// 0054d846  8b5238               mov edx, dword ptr [edx + 0x38]
// 0054d849  50                   push eax
// 0054d84a  8bcd                 mov ecx, ebp
// 0054d84c  ffd2                 call edx
// 0054d84e  8b1b                 mov ebx, dword ptr [ebx]
// 0054d850  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0054d854  5f                   pop edi
// 0054d855  5d                   pop ebp
// 0054d856  740a                 je 0x54d862
// 0054d858  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0054d85b  8b01                 mov eax, dword ptr [ecx]
// 0054d85d  8b5004               mov edx, dword ptr [eax + 4]
// 0054d860  ffd2                 call edx
// 0054d862  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0054d866  5e                   pop esi
// 0054d867  5b                   pop ebx
// 0054d868  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d86f  83c454               add esp, 0x54
// 0054d872  c20c00               ret 0xc
// copied from an identical function in another client (function ??$push_impl@V?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@AAEXABV?$mode_adapter@Uinput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@123@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_ca18cb6bd8223514.cpp