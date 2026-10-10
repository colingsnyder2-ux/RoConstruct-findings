// roc 2008-06 00797920  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797920
//
// 00797920  83ec1c               sub esp, 0x1c
// 00797923  55                   push ebp
// 00797924  56                   push esi
// 00797925  bd01000000           mov ebp, 1
// 0079792a  55                   push ebp
// 0079792b  8bf1                 mov esi, ecx
// 0079792d  ff15a42d8000         call dword ptr [0x802da4]
// 00797933  6685c0               test ax, ax
// 00797936  0f8d87010000         jge 0x797ac3
// 0079793c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00797942  57                   push edi
// 00797943  50                   push eax
// 00797944  89aea8000000         mov dword ptr [esi + 0xa8], ebp
// 0079794a  e871faffff           call 0x7973c0
// 0079794f  8bf8                 mov edi, eax
// 00797951  8b17                 mov edx, dword ptr [edi]
// 00797953  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00797959  8b12                 mov edx, dword ptr [edx]
// 0079795b  83c404               add esp, 4
// 0079795e  50                   push eax
// 0079795f  8bcf                 mov ecx, edi
// 00797961  ffd2                 call edx
// 00797963  ff15842c8000         call dword ptr [0x802c84]
// 00797969  8bc8                 mov ecx, eax
// 0079796b  03c9                 add ecx, ecx
// 0079796d  03c9                 add ecx, ecx
// 0079796f  b8cdcccccc           mov eax, 0xcccccccd
// 00797974  f7e1                 mul ecx
// 00797976  6a00                 push 0
// 00797978  c1ea02               shr edx, 2
// 0079797b  52                   push edx
// 0079797c  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00797982  8b4220               mov eax, dword ptr [edx + 0x20]
// 00797985  689d450000           push 0x459d
// 0079798a  50                   push eax
// 0079798b  ff157c2d8000         call dword ptr [0x802d7c]
// 00797991  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00797997  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0079799a  51                   push ecx
// 0079799b  ff15a82d8000         call dword ptr [0x802da8]
// 007979a1  50                   push eax
// 007979a2  e83792f0ff           call 0x6a0bde
// 007979a7  53                   push ebx
// 007979a8  eb06                 jmp 0x7979b0
// 007979aa  8d9b00000000         lea ebx, [ebx]
// 007979b0  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007979b6  85c0                 test eax, eax
// 007979b8  7504                 jne 0x7979be
// 007979ba  33db                 xor ebx, ebx
// 007979bc  eb03                 jmp 0x7979c1
// 007979be  8b5820               mov ebx, dword ptr [eax + 0x20]
// 007979c1  ff15ac2d8000         call dword ptr [0x802dac]
// 007979c7  3bc3                 cmp eax, ebx
// 007979c9  0f85b0000000         jne 0x797a7f
// 007979cf  8b16                 mov edx, dword ptr [esi]
// 007979d1  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007979d7  6a00                 push 0
// 007979d9  8bce                 mov ecx, esi
// 007979db  ffd0                 call eax
// 007979dd  85c0                 test eax, eax
// 007979df  0f849a000000         je 0x797a7f
// 007979e5  6a00                 push 0
// 007979e7  6a00                 push 0
// 007979e9  6a00                 push 0
// 007979eb  8d4c241c             lea ecx, [esp + 0x1c]
// 007979ef  51                   push ecx
// 007979f0  ff15782c8000         call dword ptr [0x802c78]
// 007979f6  85c0                 test eax, eax
// 007979f8  747b                 je 0x797a75
// 007979fa  8b442414             mov eax, dword ptr [esp + 0x14]
// 007979fe  3d13010000           cmp eax, 0x113
// 00797a03  754e                 jne 0x797a53
// 00797a05  817c24189d450000     cmp dword ptr [esp + 0x18], 0x459d
// 00797a0d  754b                 jne 0x797a5a
// 00797a0f  8b17                 mov edx, dword ptr [edi]
// 00797a11  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00797a17  8b12                 mov edx, dword ptr [edx]
// 00797a19  50                   push eax
// 00797a1a  8bcf                 mov ecx, edi
// 00797a1c  ffd2                 call edx
// 00797a1e  85ed                 test ebp, ebp
// 00797a20  742a                 je 0x797a4c
// 00797a22  ff15842c8000         call dword ptr [0x802c84]
// 00797a28  8bc8                 mov ecx, eax
// 00797a2a  b8cdcccccc           mov eax, 0xcccccccd
// 00797a2f  f7e1                 mul ecx
// 00797a31  6a00                 push 0
// 00797a33  c1ea03               shr edx, 3
// 00797a36  52                   push edx
// 00797a37  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00797a3d  8b4220               mov eax, dword ptr [edx + 0x20]
// 00797a40  689d450000           push 0x459d
// 00797a45  50                   push eax
// 00797a46  ff157c2d8000         call dword ptr [0x802d7c]
// 00797a4c  33ed                 xor ebp, ebp
// 00797a4e  e95dffffff           jmp 0x7979b0
// 00797a53  3d02020000           cmp eax, 0x202
// 00797a58  7425                 je 0x797a7f
// 00797a5a  8d4c2410             lea ecx, [esp + 0x10]
// 00797a5e  51                   push ecx
// 00797a5f  ff15c42c8000         call dword ptr [0x802cc4]
// 00797a65  8d542410             lea edx, [esp + 0x10]
// 00797a69  52                   push edx
// 00797a6a  ff15c82c8000         call dword ptr [0x802cc8]
// 00797a70  e93bffffff           jmp 0x7979b0
// 00797a75  8b442418             mov eax, dword ptr [esp + 0x18]
// 00797a79  50                   push eax
// 00797a7a  e8db96f0ff           call 0x6a115a
// 00797a7f  ff15b42d8000         call dword ptr [0x802db4]
// 00797a85  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00797a8b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00797a8e  689d450000           push 0x459d
// 00797a93  52                   push edx
// 00797a94  ff151c2e8000         call dword ptr [0x802e1c]
// 00797a9a  8b06                 mov eax, dword ptr [esi]
// 00797a9c  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00797aa2  33ff                 xor edi, edi
// 00797aa4  57                   push edi
// 00797aa5  8bce                 mov ecx, esi
// 00797aa7  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00797aad  ffd2                 call edx
// 00797aaf  5b                   pop ebx
// 00797ab0  85c0                 test eax, eax
// 00797ab2  7506                 jne 0x797aba
// 00797ab4  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00797aba  57                   push edi
// 00797abb  8bce                 mov ecx, esi
// 00797abd  e80e3ef1ff           call 0x6ab8d0
// 00797ac2  5f                   pop edi
// 00797ac3  5e                   pop esi
// 00797ac4  5d                   pop ebp
// 00797ac5  83c41c               add esp, 0x1c
// 00797ac8  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnClick@CControlGroupsScroll@CXTPRibbonScrollableBar@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
