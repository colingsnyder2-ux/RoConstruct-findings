// roc 2009-12 0087c090  unit: CXTPControlGallery  size: 433 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c090
//
// 0087c090  8b442408             mov eax, dword ptr [esp + 8]
// 0087c094  83ec10               sub esp, 0x10
// 0087c097  53                   push ebx
// 0087c098  56                   push esi
// 0087c099  57                   push edi
// 0087c09a  33ff                 xor edi, edi
// 0087c09c  57                   push edi
// 0087c09d  8bf1                 mov esi, ecx
// 0087c09f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087c0a3  50                   push eax
// 0087c0a4  51                   push ecx
// 0087c0a5  8bce                 mov ecx, esi
// 0087c0a7  e8b4e8ffff           call 0x87a960
// 0087c0ac  83cbff               or ebx, 0xffffffff
// 0087c0af  3bc3                 cmp eax, ebx
// 0087c0b1  7530                 jne 0x87c0e3
// 0087c0b3  39be20020000         cmp dword ptr [esi + 0x220], edi
// 0087c0b9  0f8579010000         jne 0x87c238
// 0087c0bf  395c2420             cmp dword ptr [esp + 0x20], ebx
// 0087c0c3  751e                 jne 0x87c0e3
// 0087c0c5  395c2424             cmp dword ptr [esp + 0x24], ebx
// 0087c0c9  7518                 jne 0x87c0e3
// 0087c0cb  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 0087c0d1  7410                 je 0x87c0e3
// 0087c0d3  8bce                 mov ecx, esi
// 0087c0d5  e8b6f4ffff           call 0x87b590
// 0087c0da  5f                   pop edi
// 0087c0db  5e                   pop esi
// 0087c0dc  5b                   pop ebx
// 0087c0dd  83c410               add esp, 0x10
// 0087c0e0  c20800               ret 8
// 0087c0e3  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087c0e9  3bc2                 cmp eax, edx
// 0087c0eb  7514                 jne 0x87c101
// 0087c0ed  39befc010000         cmp dword ptr [esi + 0x1fc], edi
// 0087c0f3  750c                 jne 0x87c101
// 0087c0f5  39be20020000         cmp dword ptr [esi + 0x220], edi
// 0087c0fb  0f84d3000000         je 0x87c1d4
// 0087c101  8bce                 mov ecx, esi
// 0087c103  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 0087c109  89befc010000         mov dword ptr [esi + 0x1fc], edi
// 0087c10f  89be20020000         mov dword ptr [esi + 0x220], edi
// 0087c115  89be00020000         mov dword ptr [esi + 0x200], edi
// 0087c11b  e830b2ffff           call 0x877350
// 0087c120  3bc7                 cmp eax, edi
// 0087c122  743b                 je 0x87c15f
// 0087c124  39782c               cmp dword ptr [eax + 0x2c], edi
// 0087c127  7436                 je 0x87c15f
// 0087c129  3bd3                 cmp edx, ebx
// 0087c12b  7415                 je 0x87c142
// 0087c12d  52                   push edx
// 0087c12e  8d542410             lea edx, [esp + 0x10]
// 0087c132  52                   push edx
// 0087c133  e838e9ffff           call 0x87aa70
// 0087c138  6a01                 push 1
// 0087c13a  50                   push eax
// 0087c13b  8bce                 mov ecx, esi
// 0087c13d  e8dec0ffff           call 0x878220
// 0087c142  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087c148  3bc3                 cmp eax, ebx
// 0087c14a  741b                 je 0x87c167
// 0087c14c  50                   push eax
// 0087c14d  8d442410             lea eax, [esp + 0x10]
// 0087c151  50                   push eax
// 0087c152  8bce                 mov ecx, esi
// 0087c154  e817e9ffff           call 0x87aa70
// 0087c159  57                   push edi
// 0087c15a  50                   push eax
// 0087c15b  8bce                 mov ecx, esi
// 0087c15d  eb03                 jmp 0x87c162
// 0087c15f  6a01                 push 1
// 0087c161  57                   push edi
// 0087c162  e8b9c0ffff           call 0x878220
// 0087c167  39be44020000         cmp dword ptr [esi + 0x244], edi
// 0087c16d  752b                 jne 0x87c19a
// 0087c16f  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 0087c175  741b                 je 0x87c192
// 0087c177  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0087c17d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0087c180  57                   push edi
// 0087c181  68c8000000           push 0xc8
// 0087c186  685fb60100           push 0x1b65f
// 0087c18b  52                   push edx
// 0087c18c  ff1558cc9800         call dword ptr [0x98cc58]
// 0087c192  39be44020000         cmp dword ptr [esi + 0x244], edi
// 0087c198  740c                 je 0x87c1a6
// 0087c19a  6813100000           push 0x1013
// 0087c19f  8bce                 mov ecx, esi
// 0087c1a1  e8eac3f7ff           call 0x7f8590
// 0087c1a6  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 0087c1ac  751a                 jne 0x87c1c8
// 0087c1ae  39be44020000         cmp dword ptr [esi + 0x244], edi
// 0087c1b4  7412                 je 0x87c1c8
// 0087c1b6  6811100000           push 0x1011
// 0087c1bb  8bce                 mov ecx, esi
// 0087c1bd  89be44020000         mov dword ptr [esi + 0x244], edi
// 0087c1c3  e8c8c3f7ff           call 0x7f8590
// 0087c1c8  8b06                 mov eax, dword ptr [esi]
// 0087c1ca  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0087c1d0  8bce                 mov ecx, esi
// 0087c1d2  ffd2                 call edx
// 0087c1d4  39be00020000         cmp dword ptr [esi + 0x200], edi
// 0087c1da  745c                 je 0x87c238
// 0087c1dc  39be04020000         cmp dword ptr [esi + 0x204], edi
// 0087c1e2  7508                 jne 0x87c1ec
// 0087c1e4  39be08020000         cmp dword ptr [esi + 0x208], edi
// 0087c1ea  744c                 je 0x87c238
// 0087c1ec  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 0087c1f2  7444                 je 0x87c238
// 0087c1f4  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0087c1fa  2b442420             sub eax, dword ptr [esp + 0x20]
// 0087c1fe  99                   cdq 
// 0087c1ff  33c2                 xor eax, edx
// 0087c201  2bc2                 sub eax, edx
// 0087c203  83f804               cmp eax, 4
// 0087c206  7f14                 jg 0x87c21c
// 0087c208  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 0087c20e  2b442424             sub eax, dword ptr [esp + 0x24]
// 0087c212  99                   cdq 
// 0087c213  33c2                 xor eax, edx
// 0087c215  2bc2                 sub eax, edx
// 0087c217  83f804               cmp eax, 4
// 0087c21a  7e1c                 jle 0x87c238
// 0087c21c  33c9                 xor ecx, ecx
// 0087c21e  33c0                 xor eax, eax
// 0087c220  898e08020000         mov dword ptr [esi + 0x208], ecx
// 0087c226  6814100000           push 0x1014
// 0087c22b  8bce                 mov ecx, esi
// 0087c22d  898604020000         mov dword ptr [esi + 0x204], eax
// 0087c233  e858c3f7ff           call 0x7f8590
// 0087c238  5f                   pop edi
// 0087c239  5e                   pop esi
// 0087c23a  5b                   pop ebx
// 0087c23b  83c410               add esp, 0x10
// 0087c23e  c20800               ret 8
// copied from an identical function in another client (function ?PerformMouseMove@CXTPControlGallery@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp