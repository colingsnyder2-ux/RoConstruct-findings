// from server: 100% by auto
// roc 2008-06 004053a0  unit: VCWorkspace::?$CComObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004053a0
//
// 004053a0  55                   push ebp
// 004053a1  8bec                 mov ebp, esp
// 004053a3  6aff                 push -1
// 004053a5  6883cd7b00           push 0x7bcd83
// 004053aa  64a100000000         mov eax, dword ptr fs:[0]
// 004053b0  50                   push eax
// 004053b1  64892500000000       mov dword ptr fs:[0], esp
// 004053b8  81ec1c040000         sub esp, 0x41c
// 004053be  53                   push ebx
// 004053bf  56                   push esi
// 004053c0  57                   push edi
// 004053c1  33f6                 xor esi, esi
// 004053c3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004053c6  33ff                 xor edi, edi
// 004053c8  8975ec               mov dword ptr [ebp - 0x14], esi
// 004053cb  897dfc               mov dword ptr [ebp - 4], edi
// 004053ce  894de8               mov dword ptr [ebp - 0x18], ecx
// 004053d1  897de4               mov dword ptr [ebp - 0x1c], edi
// 004053d4  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 004053da  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004053dd  c645fc01             mov byte ptr [ebp - 4], 1
// 004053e1  3bdf                 cmp ebx, edi
// 004053e3  7466                 je 0x40544b
// 004053e5  53                   push ebx
// 004053e6  ff15e8228000         call dword ptr [0x8022e8]
// 004053ec  57                   push edi
// 004053ed  40                   inc eax
// 004053ee  99                   cdq 
// 004053ef  6a02                 push 2
// 004053f1  52                   push edx
// 004053f2  50                   push eax
// 004053f3  e8d8c22900           call 0x6a16d0
// 004053f8  8bf8                 mov edi, eax
// 004053fa  0500000080           add eax, 0x80000000
// 004053ff  13d6                 adc edx, esi
// 00405401  85d2                 test edx, edx
// 00405403  7744                 ja 0x405449
// 00405405  7205                 jb 0x40540c
// 00405407  83f8ff               cmp eax, -1
// 0040540a  773d                 ja 0x405449
// 0040540c  81ff00040000         cmp edi, 0x400
// 00405412  7f1b                 jg 0x40542f
// 00405414  57                   push edi
// 00405415  e8f6d1ffff           call 0x402610
// 0040541a  83c404               add esp, 4
// 0040541d  84c0                 test al, al
// 0040541f  740e                 je 0x40542f
// 00405421  8bc7                 mov eax, edi
// 00405423  e838c12900           call 0x6a1560
// 00405428  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040542b  8bc4                 mov eax, esp
// 0040542d  eb0c                 jmp 0x40543b
// 0040542f  57                   push edi
// 00405430  8d4dec               lea ecx, [ebp - 0x14]
// 00405433  e818dbffff           call 0x402f50
// 00405438  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040543b  6a03                 push 3
// 0040543d  57                   push edi
// 0040543e  53                   push ebx
// 0040543f  50                   push eax
// 00405440  e85bc3ffff           call 0x4017a0
// 00405445  85c0                 test eax, eax
// 00405447  753f                 jne 0x405488
// 00405449  33ff                 xor edi, edi
// 0040544b  8d85dcfbffff         lea eax, [ebp - 0x424]
// 00405451  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00405457  740b                 je 0x405464
// 00405459  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 0040545f  e89c842f00           call 0x6fd900
// 00405464  3bf7                 cmp esi, edi
// 00405466  7416                 je 0x40547e
// 00405468  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 0040546e  8bff                 mov edi, edi
// 00405470  8bc6                 mov eax, esi
// 00405472  8b36                 mov esi, dword ptr [esi]
// 00405474  50                   push eax
// 00405475  ffd7                 call edi
// 00405477  83c404               add esp, 4
// 0040547a  85f6                 test esi, esi
// 0040547c  75f2                 jne 0x405470
// 0040547e  b80e000780           mov eax, 0x8007000e
// 00405483  e948010000           jmp 0x4055d0
// 00405488  6a02                 push 2
// 0040548a  6a00                 push 0
// 0040548c  50                   push eax
// 0040548d  ff1594218000         call dword ptr [0x802194]
// 00405493  8bd8                 mov ebx, eax
// 00405495  895d08               mov dword ptr [ebp + 8], ebx
// 00405498  85db                 test ebx, ebx
// 0040549a  750c                 jne 0x4054a8
// 0040549c  e82fc4ffff           call 0x4018d0
// 004054a1  8bf8                 mov edi, eax
// 004054a3  e9f4000000           jmp 0x40559c
// 004054a8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004054ab  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004054ae  51                   push ecx
// 004054af  52                   push edx
// 004054b0  53                   push ebx
// 004054b1  ff1590218000         call dword ptr [0x802190]
// 004054b7  8bf8                 mov edi, eax
// 004054b9  85ff                 test edi, edi
// 004054bb  750a                 jne 0x4054c7
// 004054bd  e80ec4ffff           call 0x4018d0
// 004054c2  e9cc000000           jmp 0x405593
// 004054c7  57                   push edi
// 004054c8  53                   push ebx
// 004054c9  ff15a8218000         call dword ptr [0x8021a8]
// 004054cf  89450c               mov dword ptr [ebp + 0xc], eax
// 004054d2  85c0                 test eax, eax
// 004054d4  750a                 jne 0x4054e0
// 004054d6  e8f5c3ffff           call 0x4018d0
// 004054db  e9b3000000           jmp 0x405593
// 004054e0  57                   push edi
// 004054e1  53                   push ebx
// 004054e2  ff15c8218000         call dword ptr [0x8021c8]
// 004054e8  8bf8                 mov edi, eax
// 004054ea  8d4701               lea eax, [edi + 1]
// 004054ed  897d10               mov dword ptr [ebp + 0x10], edi
// 004054f0  3bc7                 cmp eax, edi
// 004054f2  732b                 jae 0x40551f
// 004054f4  8d85dcfbffff         lea eax, [ebp - 0x424]
// 004054fa  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00405500  740b                 je 0x40550d
// 00405502  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00405508  e8f3832f00           call 0x6fd900
// 0040550d  8d4dec               lea ecx, [ebp - 0x14]
// 00405510  e83bbcffff           call 0x401150
// 00405515  b80e000780           mov eax, 0x8007000e
// 0040551a  e9b1000000           jmp 0x4055d0
// 0040551f  50                   push eax
// 00405520  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00405526  c645fc02             mov byte ptr [ebp - 4], 2
// 0040552a  e841e5ffff           call 0x403a70
// 0040552f  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00405536  eb1e                 jmp 0x405556
// 00405538  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040553b  e810b42900           call 0x6a0950
// 00405540  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00405547  b84d554000           mov eax, 0x40554d
// 0040554c  c3                   ret 
// 0040554d  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00405550  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00405553  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00405556  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 0040555c  85c0                 test eax, eax
// 0040555e  7507                 jne 0x405567
// 00405560  bf0e000780           mov edi, 0x8007000e
// 00405565  eb2e                 jmp 0x405595
// 00405567  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040556a  57                   push edi
// 0040556b  51                   push ecx
// 0040556c  57                   push edi
// 0040556d  50                   push eax
// 0040556e  e89dc2ffff           call 0x401810
// 00405573  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 00405579  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0040557c  83c410               add esp, 0x10
// 0040557f  c6043a00             mov byte ptr [edx + edi], 0
// 00405583  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 00405589  50                   push eax
// 0040558a  51                   push ecx
// 0040558b  8d4de4               lea ecx, [ebp - 0x1c]
// 0040558e  e8cdfaffff           call 0x405060
// 00405593  8bf8                 mov edi, eax
// 00405595  53                   push ebx
// 00405596  ff15a0218000         call dword ptr [0x8021a0]
// 0040559c  8d95dcfbffff         lea edx, [ebp - 0x424]
// 004055a2  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 004055a8  740b                 je 0x4055b5
// 004055aa  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004055b0  e84b832f00           call 0x6fd900
// 004055b5  85f6                 test esi, esi
// 004055b7  7415                 je 0x4055ce
// 004055b9  8b1dc0288000         mov ebx, dword ptr [0x8028c0]
// 004055bf  90                   nop 
// 004055c0  8bc6                 mov eax, esi
// 004055c2  8b36                 mov esi, dword ptr [esi]
// 004055c4  50                   push eax
// 004055c5  ffd3                 call ebx
// 004055c7  83c404               add esp, 4
// 004055ca  85f6                 test esi, esi
// 004055cc  75f2                 jne 0x4055c0
// 004055ce  8bc7                 mov eax, edi
// 004055d0  8da5ccfbffff         lea esp, [ebp - 0x434]
// 004055d6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004055d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004055e0  5f                   pop edi
// 004055e1  5e                   pop esi
// 004055e2  5b                   pop ebx
// 004055e3  8be5                 mov esp, ebp
// 004055e5  5d                   pop ebp
// 004055e6  c21000               ret 0x10

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp
