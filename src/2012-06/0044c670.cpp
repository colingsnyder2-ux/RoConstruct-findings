// roc 2012-06 0044c670  unit: COutputView  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c670
//
// 0044c670  33c0                 xor eax, eax
// 0044c672  83ec08               sub esp, 8
// 0044c675  3944240c             cmp dword ptr [esp + 0xc], eax
// 0044c679  750a                 jne 0x44c685
// 0044c67b  6805400080           push 0x80004005
// 0044c680  e82b7bfbff           call 0x4041b0
// 0044c685  53                   push ebx
// 0044c686  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0044c68a  56                   push esi
// 0044c68b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044c68f  89442408             mov dword ptr [esp + 8], eax
// 0044c693  8944240c             mov dword ptr [esp + 0xc], eax
// 0044c697  39442418             cmp dword ptr [esp + 0x18], eax
// 0044c69b  0f844f020000         je 0x44c8f0
// 0044c6a1  55                   push ebp
// 0044c6a2  57                   push edi
// 0044c6a3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044c6a7  0fb700               movzx eax, word ptr [eax]
// 0044c6aa  ff4c2420             dec dword ptr [esp + 0x20]
// 0044c6ae  0fb7d0               movzx edx, ax
// 0044c6b1  8d4ade               lea ecx, [edx - 0x22]
// 0044c6b4  33ed                 xor ebp, ebp
// 0044c6b6  33ff                 xor edi, edi
// 0044c6b8  83f91c               cmp ecx, 0x1c
// 0044c6bb  0f87d4000000         ja 0x44c795
// 0044c6c1  0fb6891cc94400       movzx ecx, byte ptr [ecx + 0x44c91c]
// 0044c6c8  ff248d0cc94400       jmp dword ptr [ecx*4 + 0x44c90c]
// 0044c6cf  85f6                 test esi, esi
// 0044c6d1  7443                 je 0x44c716
// 0044c6d3  83fb03               cmp ebx, 3
// 0044c6d6  7e3e                 jle 0x44c716
// 0044c6d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0044c6dc  33c0                 xor eax, eax
// 0044c6de  83c602               add esi, 2
// 0044c6e1  ba26000000           mov edx, 0x26
// 0044c6e6  668956fe             mov word ptr [esi - 2], dx
// 0044c6ea  6683393c             cmp word ptr [ecx], 0x3c
// 0044c6ee  ba74000000           mov edx, 0x74
// 0044c6f3  0f95c0               setne al
// 0044c6f6  83c602               add esi, 2
// 0044c6f9  83c602               add esi, 2
// 0044c6fc  48                   dec eax
// 0044c6fd  83e005               and eax, 5
// 0044c700  83c067               add eax, 0x67
// 0044c703  668946fc             mov word ptr [esi - 4], ax
// 0044c707  668956fe             mov word ptr [esi - 2], dx
// 0044c70b  b83b000000           mov eax, 0x3b
// 0044c710  668906               mov word ptr [esi], ax
// 0044c713  83c602               add esi, 2
// 0044c716  bf04000000           mov edi, 4
// 0044c71b  e979010000           jmp 0x44c899
// 0044c720  85f6                 test esi, esi
// 0044c722  7423                 je 0x44c747
// 0044c724  83fb04               cmp ebx, 4
// 0044c727  7e1e                 jle 0x44c747
// 0044c729  6a0a                 push 0xa
// 0044c72b  68b030b500           push 0xb530b0
// 0044c730  8d0c1b               lea ecx, [ebx + ebx]
// 0044c733  51                   push ecx
// 0044c734  56                   push esi
// 0044c735  ff15fc29b200         call dword ptr [0xb229fc]
// 0044c73b  50                   push eax
// 0044c73c  e8df78fbff           call 0x404020
// 0044c741  83c414               add esp, 0x14
// 0044c744  83c60a               add esi, 0xa
// 0044c747  bf05000000           mov edi, 5
// 0044c74c  e948010000           jmp 0x44c899
// 0044c751  f644242c01           test byte ptr [esp + 0x2c], 1
// 0044c756  743d                 je 0x44c795
// 0044c758  85f6                 test esi, esi
// 0044c75a  742f                 je 0x44c78b
// 0044c75c  83fb05               cmp ebx, 5
// 0044c75f  7e2a                 jle 0x44c78b
// 0044c761  6683f827             cmp ax, 0x27
// 0044c765  b8a030b500           mov eax, 0xb530a0
// 0044c76a  7405                 je 0x44c771
// 0044c76c  b89030b500           mov eax, 0xb53090
// 0044c771  6a0c                 push 0xc
// 0044c773  50                   push eax
// 0044c774  8d141b               lea edx, [ebx + ebx]
// 0044c777  52                   push edx
// 0044c778  56                   push esi
// 0044c779  ff15fc29b200         call dword ptr [0xb229fc]
// 0044c77f  50                   push eax
// 0044c780  e89b78fbff           call 0x404020
// 0044c785  83c414               add esp, 0x14
// 0044c788  83c60c               add esi, 0xc
// 0044c78b  bf06000000           mov edi, 6
// 0044c790  e904010000           jmp 0x44c899
// 0044c795  b900d80000           mov ecx, 0xd800
// 0044c79a  663bc1               cmp ax, cx
// 0044c79d  723e                 jb 0x44c7dd
// 0044c79f  b9ffdb0000           mov ecx, 0xdbff
// 0044c7a4  663bc1               cmp ax, cx
// 0044c7a7  7734                 ja 0x44c7dd
// 0044c7a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044c7ad  6685c0               test ax, ax
// 0044c7b0  741b                 je 0x44c7cd
// 0044c7b2  85f6                 test esi, esi
// 0044c7b4  7412                 je 0x44c7c8
// 0044c7b6  83fb07               cmp ebx, 7
// 0044c7b9  7e0d                 jle 0x44c7c8
// 0044c7bb  56                   push esi
// 0044c7bc  50                   push eax
// 0044c7bd  e80efeffff           call 0x44c5d0
// 0044c7c2  83c408               add esp, 8
// 0044c7c5  83c610               add esi, 0x10
// 0044c7c8  bf08000000           mov edi, 8
// 0044c7cd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0044c7d1  0fb702               movzx eax, word ptr [edx]
// 0044c7d4  89442414             mov dword ptr [esp + 0x14], eax
// 0044c7d8  e9bc000000           jmp 0x44c899
// 0044c7dd  66837c241400         cmp word ptr [esp + 0x14], 0
// 0044c7e3  7471                 je 0x44c856
// 0044c7e5  b900dc0000           mov ecx, 0xdc00
// 0044c7ea  663bc1               cmp ax, cx
// 0044c7ed  7239                 jb 0x44c828
// 0044c7ef  b9ffdf0000           mov ecx, 0xdfff
// 0044c7f4  663bc1               cmp ax, cx
// 0044c7f7  772f                 ja 0x44c828
// 0044c7f9  85f6                 test esi, esi
// 0044c7fb  7421                 je 0x44c81e
// 0044c7fd  83fb09               cmp ebx, 9
// 0044c800  7e1c                 jle 0x44c81e
// 0044c802  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0044c807  2df7d70000           sub eax, 0xd7f7
// 0044c80c  c1e00a               shl eax, 0xa
// 0044c80f  03c2                 add eax, edx
// 0044c811  56                   push esi
// 0044c812  50                   push eax
// 0044c813  e808feffff           call 0x44c620
// 0044c818  83c408               add esp, 8
// 0044c81b  83c614               add esi, 0x14
// 0044c81e  bf0a000000           mov edi, 0xa
// 0044c823  8d6ff7               lea ebp, [edi - 9]
// 0044c826  eb22                 jmp 0x44c84a
// 0044c828  85f6                 test esi, esi
// 0044c82a  7416                 je 0x44c842
// 0044c82c  83fb07               cmp ebx, 7
// 0044c82f  7e11                 jle 0x44c842
// 0044c831  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044c835  56                   push esi
// 0044c836  51                   push ecx
// 0044c837  e894fdffff           call 0x44c5d0
// 0044c83c  83c408               add esp, 8
// 0044c83f  83c610               add esi, 0x10
// 0044c842  83eb08               sub ebx, 8
// 0044c845  8344241008           add dword ptr [esp + 0x10], 8
// 0044c84a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044c852  85ed                 test ebp, ebp
// 0044c854  7543                 jne 0x44c899
// 0044c856  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0044c85a  0fb702               movzx eax, word ptr [edx]
// 0044c85d  6683f820             cmp ax, 0x20
// 0044c861  721b                 jb 0x44c87e
// 0044c863  6683f87e             cmp ax, 0x7e
// 0044c867  7715                 ja 0x44c87e
// 0044c869  85f6                 test esi, esi
// 0044c86b  740a                 je 0x44c877
// 0044c86d  85db                 test ebx, ebx
// 0044c86f  7e06                 jle 0x44c877
// 0044c871  668906               mov word ptr [esi], ax
// 0044c874  83c602               add esi, 2
// 0044c877  bf01000000           mov edi, 1
// 0044c87c  eb1b                 jmp 0x44c899
// 0044c87e  85f6                 test esi, esi
// 0044c880  7412                 je 0x44c894
// 0044c882  83fb07               cmp ebx, 7
// 0044c885  7e0d                 jle 0x44c894
// 0044c887  56                   push esi
// 0044c888  50                   push eax
// 0044c889  e842fdffff           call 0x44c5d0
// 0044c88e  83c408               add esp, 8
// 0044c891  83c610               add esi, 0x10
// 0044c894  bf08000000           mov edi, 8
// 0044c899  017c2410             add dword ptr [esp + 0x10], edi
// 0044c89d  8344241c02           add dword ptr [esp + 0x1c], 2
// 0044c8a2  2bdf                 sub ebx, edi
// 0044c8a4  837c242000           cmp dword ptr [esp + 0x20], 0
// 0044c8a9  0f85f4fdffff         jne 0x44c6a3
// 0044c8af  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044c8b3  5f                   pop edi
// 0044c8b4  5d                   pop ebp
// 0044c8b5  6685c0               test ax, ax
// 0044c8b8  7436                 je 0x44c8f0
// 0044c8ba  8d48e0               lea ecx, [eax - 0x20]
// 0044c8bd  6683f95e             cmp cx, 0x5e
// 0044c8c1  7712                 ja 0x44c8d5
// 0044c8c3  85f6                 test esi, esi
// 0044c8c5  7407                 je 0x44c8ce
// 0044c8c7  85db                 test ebx, ebx
// 0044c8c9  7e03                 jle 0x44c8ce
// 0044c8cb  668906               mov word ptr [esi], ax
// 0044c8ce  4b                   dec ebx
// 0044c8cf  ff442408             inc dword ptr [esp + 8]
// 0044c8d3  eb1b                 jmp 0x44c8f0
// 0044c8d5  85f6                 test esi, esi
// 0044c8d7  740f                 je 0x44c8e8
// 0044c8d9  83fb07               cmp ebx, 7
// 0044c8dc  7e0a                 jle 0x44c8e8
// 0044c8de  56                   push esi
// 0044c8df  50                   push eax
// 0044c8e0  e8ebfcffff           call 0x44c5d0
// 0044c8e5  83c408               add esp, 8
// 0044c8e8  83eb08               sub ebx, 8
// 0044c8eb  8344240808           add dword ptr [esp + 8], 8
// 0044c8f0  85f6                 test esi, esi
// 0044c8f2  740c                 je 0x44c900
// 0044c8f4  85db                 test ebx, ebx
// 0044c8f6  7d08                 jge 0x44c900
// 0044c8f8  5e                   pop esi
// 0044c8f9  33c0                 xor eax, eax
// 0044c8fb  5b                   pop ebx
// 0044c8fc  83c408               add esp, 8
// 0044c8ff  c3                   ret 
// 0044c900  8b442408             mov eax, dword ptr [esp + 8]
// 0044c904  5e                   pop esi
// 0044c905  5b                   pop ebx
// 0044c906  83c408               add esp, 8
// 0044c909  c3                   ret 
// 0044c90a  8bff                 mov edi, edi
// 0044c90c  51                   push ecx
// 0044c90d  c7440020c74400cf     mov dword ptr [eax + eax + 0x20], 0xcf0044c7
// 0044c915  c6440095c7           mov byte ptr [eax + eax - 0x6b], 0xc7
// 0044c91a  44                   inc esp
// 0044c91b  0000                 add byte ptr [eax], al
// 0044c91d  0303                 add eax, dword ptr [ebx]
// 0044c91f  0301                 add eax, dword ptr [ecx]
// 0044c921  0003                 add byte ptr [ebx], al
// 0044c923  0303                 add eax, dword ptr [ebx]
// 0044c925  0303                 add eax, dword ptr [ebx]
// 0044c927  0303                 add eax, dword ptr [ebx]
// 0044c929  0303                 add eax, dword ptr [ebx]
// 0044c92b  0303                 add eax, dword ptr [ebx]
// 0044c92d  0303                 add eax, dword ptr [ebx]
// 0044c92f  0303                 add eax, dword ptr [ebx]
// 0044c931  0303                 add eax, dword ptr [ebx]
// 0044c933  0303                 add eax, dword ptr [ebx]
// 0044c935  0302                 add eax, dword ptr [edx]
// 0044c937  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function ?EscapeXML@ATL@@YAHPB_WHPA_WHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp