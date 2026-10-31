// roc 2009-06 0042f530  unit: COutputView  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f530
//
// 0042f530  33c0                 xor eax, eax
// 0042f532  83ec08               sub esp, 8
// 0042f535  3944240c             cmp dword ptr [esp + 0xc], eax
// 0042f539  750a                 jne 0x42f545
// 0042f53b  6805400080           push 0x80004005
// 0042f540  e86b39fdff           call 0x402eb0
// 0042f545  53                   push ebx
// 0042f546  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0042f54a  56                   push esi
// 0042f54b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0042f54f  89442408             mov dword ptr [esp + 8], eax
// 0042f553  8944240c             mov dword ptr [esp + 0xc], eax
// 0042f557  39442418             cmp dword ptr [esp + 0x18], eax
// 0042f55b  0f844f020000         je 0x42f7b0
// 0042f561  55                   push ebp
// 0042f562  57                   push edi
// 0042f563  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042f567  0fb700               movzx eax, word ptr [eax]
// 0042f56a  ff4c2420             dec dword ptr [esp + 0x20]
// 0042f56e  0fb7d0               movzx edx, ax
// 0042f571  8d4ade               lea ecx, [edx - 0x22]
// 0042f574  33ed                 xor ebp, ebp
// 0042f576  33ff                 xor edi, edi
// 0042f578  83f91c               cmp ecx, 0x1c
// 0042f57b  0f87d4000000         ja 0x42f655
// 0042f581  0fb689dcf74200       movzx ecx, byte ptr [ecx + 0x42f7dc]
// 0042f588  ff248dccf74200       jmp dword ptr [ecx*4 + 0x42f7cc]
// 0042f58f  85f6                 test esi, esi
// 0042f591  7443                 je 0x42f5d6
// 0042f593  83fb03               cmp ebx, 3
// 0042f596  7e3e                 jle 0x42f5d6
// 0042f598  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042f59c  33c0                 xor eax, eax
// 0042f59e  83c602               add esi, 2
// 0042f5a1  ba26000000           mov edx, 0x26
// 0042f5a6  668956fe             mov word ptr [esi - 2], dx
// 0042f5aa  6683393c             cmp word ptr [ecx], 0x3c
// 0042f5ae  ba74000000           mov edx, 0x74
// 0042f5b3  0f95c0               setne al
// 0042f5b6  83c602               add esi, 2
// 0042f5b9  83c602               add esi, 2
// 0042f5bc  48                   dec eax
// 0042f5bd  83e005               and eax, 5
// 0042f5c0  83c067               add eax, 0x67
// 0042f5c3  668946fc             mov word ptr [esi - 4], ax
// 0042f5c7  668956fe             mov word ptr [esi - 2], dx
// 0042f5cb  b83b000000           mov eax, 0x3b
// 0042f5d0  668906               mov word ptr [esi], ax
// 0042f5d3  83c602               add esi, 2
// 0042f5d6  bf04000000           mov edi, 4
// 0042f5db  e979010000           jmp 0x42f759
// 0042f5e0  85f6                 test esi, esi
// 0042f5e2  7423                 je 0x42f607
// 0042f5e4  83fb04               cmp ebx, 4
// 0042f5e7  7e1e                 jle 0x42f607
// 0042f5e9  6a0a                 push 0xa
// 0042f5eb  6870358b00           push 0x8b3570
// 0042f5f0  8d0c1b               lea ecx, [ebx + ebx]
// 0042f5f3  51                   push ecx
// 0042f5f4  56                   push esi
// 0042f5f5  ff1590e98900         call dword ptr [0x89e990]
// 0042f5fb  50                   push eax
// 0042f5fc  e81f37fdff           call 0x402d20
// 0042f601  83c414               add esp, 0x14
// 0042f604  83c60a               add esi, 0xa
// 0042f607  bf05000000           mov edi, 5
// 0042f60c  e948010000           jmp 0x42f759
// 0042f611  f644242c01           test byte ptr [esp + 0x2c], 1
// 0042f616  743d                 je 0x42f655
// 0042f618  85f6                 test esi, esi
// 0042f61a  742f                 je 0x42f64b
// 0042f61c  83fb05               cmp ebx, 5
// 0042f61f  7e2a                 jle 0x42f64b
// 0042f621  6683f827             cmp ax, 0x27
// 0042f625  b860358b00           mov eax, 0x8b3560
// 0042f62a  7405                 je 0x42f631
// 0042f62c  b850358b00           mov eax, 0x8b3550
// 0042f631  6a0c                 push 0xc
// 0042f633  50                   push eax
// 0042f634  8d141b               lea edx, [ebx + ebx]
// 0042f637  52                   push edx
// 0042f638  56                   push esi
// 0042f639  ff1590e98900         call dword ptr [0x89e990]
// 0042f63f  50                   push eax
// 0042f640  e8db36fdff           call 0x402d20
// 0042f645  83c414               add esp, 0x14
// 0042f648  83c60c               add esi, 0xc
// 0042f64b  bf06000000           mov edi, 6
// 0042f650  e904010000           jmp 0x42f759
// 0042f655  b900d80000           mov ecx, 0xd800
// 0042f65a  663bc1               cmp ax, cx
// 0042f65d  723e                 jb 0x42f69d
// 0042f65f  b9ffdb0000           mov ecx, 0xdbff
// 0042f664  663bc1               cmp ax, cx
// 0042f667  7734                 ja 0x42f69d
// 0042f669  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042f66d  6685c0               test ax, ax
// 0042f670  741b                 je 0x42f68d
// 0042f672  85f6                 test esi, esi
// 0042f674  7412                 je 0x42f688
// 0042f676  83fb07               cmp ebx, 7
// 0042f679  7e0d                 jle 0x42f688
// 0042f67b  56                   push esi
// 0042f67c  50                   push eax
// 0042f67d  e80efeffff           call 0x42f490
// 0042f682  83c408               add esp, 8
// 0042f685  83c610               add esi, 0x10
// 0042f688  bf08000000           mov edi, 8
// 0042f68d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0042f691  0fb702               movzx eax, word ptr [edx]
// 0042f694  89442414             mov dword ptr [esp + 0x14], eax
// 0042f698  e9bc000000           jmp 0x42f759
// 0042f69d  66837c241400         cmp word ptr [esp + 0x14], 0
// 0042f6a3  7471                 je 0x42f716
// 0042f6a5  b900dc0000           mov ecx, 0xdc00
// 0042f6aa  663bc1               cmp ax, cx
// 0042f6ad  7239                 jb 0x42f6e8
// 0042f6af  b9ffdf0000           mov ecx, 0xdfff
// 0042f6b4  663bc1               cmp ax, cx
// 0042f6b7  772f                 ja 0x42f6e8
// 0042f6b9  85f6                 test esi, esi
// 0042f6bb  7421                 je 0x42f6de
// 0042f6bd  83fb09               cmp ebx, 9
// 0042f6c0  7e1c                 jle 0x42f6de
// 0042f6c2  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0042f6c7  2df7d70000           sub eax, 0xd7f7
// 0042f6cc  c1e00a               shl eax, 0xa
// 0042f6cf  03c2                 add eax, edx
// 0042f6d1  56                   push esi
// 0042f6d2  50                   push eax
// 0042f6d3  e808feffff           call 0x42f4e0
// 0042f6d8  83c408               add esp, 8
// 0042f6db  83c614               add esi, 0x14
// 0042f6de  bf0a000000           mov edi, 0xa
// 0042f6e3  8d6ff7               lea ebp, [edi - 9]
// 0042f6e6  eb22                 jmp 0x42f70a
// 0042f6e8  85f6                 test esi, esi
// 0042f6ea  7416                 je 0x42f702
// 0042f6ec  83fb07               cmp ebx, 7
// 0042f6ef  7e11                 jle 0x42f702
// 0042f6f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042f6f5  56                   push esi
// 0042f6f6  51                   push ecx
// 0042f6f7  e894fdffff           call 0x42f490
// 0042f6fc  83c408               add esp, 8
// 0042f6ff  83c610               add esi, 0x10
// 0042f702  83eb08               sub ebx, 8
// 0042f705  8344241008           add dword ptr [esp + 0x10], 8
// 0042f70a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042f712  85ed                 test ebp, ebp
// 0042f714  7543                 jne 0x42f759
// 0042f716  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0042f71a  0fb702               movzx eax, word ptr [edx]
// 0042f71d  6683f820             cmp ax, 0x20
// 0042f721  721b                 jb 0x42f73e
// 0042f723  6683f87e             cmp ax, 0x7e
// 0042f727  7715                 ja 0x42f73e
// 0042f729  85f6                 test esi, esi
// 0042f72b  740a                 je 0x42f737
// 0042f72d  85db                 test ebx, ebx
// 0042f72f  7e06                 jle 0x42f737
// 0042f731  668906               mov word ptr [esi], ax
// 0042f734  83c602               add esi, 2
// 0042f737  bf01000000           mov edi, 1
// 0042f73c  eb1b                 jmp 0x42f759
// 0042f73e  85f6                 test esi, esi
// 0042f740  7412                 je 0x42f754
// 0042f742  83fb07               cmp ebx, 7
// 0042f745  7e0d                 jle 0x42f754
// 0042f747  56                   push esi
// 0042f748  50                   push eax
// 0042f749  e842fdffff           call 0x42f490
// 0042f74e  83c408               add esp, 8
// 0042f751  83c610               add esi, 0x10
// 0042f754  bf08000000           mov edi, 8
// 0042f759  017c2410             add dword ptr [esp + 0x10], edi
// 0042f75d  8344241c02           add dword ptr [esp + 0x1c], 2
// 0042f762  2bdf                 sub ebx, edi
// 0042f764  837c242000           cmp dword ptr [esp + 0x20], 0
// 0042f769  0f85f4fdffff         jne 0x42f563
// 0042f76f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042f773  5f                   pop edi
// 0042f774  5d                   pop ebp
// 0042f775  6685c0               test ax, ax
// 0042f778  7436                 je 0x42f7b0
// 0042f77a  8d48e0               lea ecx, [eax - 0x20]
// 0042f77d  6683f95e             cmp cx, 0x5e
// 0042f781  7712                 ja 0x42f795
// 0042f783  85f6                 test esi, esi
// 0042f785  7407                 je 0x42f78e
// 0042f787  85db                 test ebx, ebx
// 0042f789  7e03                 jle 0x42f78e
// 0042f78b  668906               mov word ptr [esi], ax
// 0042f78e  4b                   dec ebx
// 0042f78f  ff442408             inc dword ptr [esp + 8]
// 0042f793  eb1b                 jmp 0x42f7b0
// 0042f795  85f6                 test esi, esi
// 0042f797  740f                 je 0x42f7a8
// 0042f799  83fb07               cmp ebx, 7
// 0042f79c  7e0a                 jle 0x42f7a8
// 0042f79e  56                   push esi
// 0042f79f  50                   push eax
// 0042f7a0  e8ebfcffff           call 0x42f490
// 0042f7a5  83c408               add esp, 8
// 0042f7a8  83eb08               sub ebx, 8
// 0042f7ab  8344240808           add dword ptr [esp + 8], 8
// 0042f7b0  85f6                 test esi, esi
// 0042f7b2  740c                 je 0x42f7c0
// 0042f7b4  85db                 test ebx, ebx
// 0042f7b6  7d08                 jge 0x42f7c0
// 0042f7b8  5e                   pop esi
// 0042f7b9  33c0                 xor eax, eax
// 0042f7bb  5b                   pop ebx
// 0042f7bc  83c408               add esp, 8
// 0042f7bf  c3                   ret 
// 0042f7c0  8b442408             mov eax, dword ptr [esp + 8]
// 0042f7c4  5e                   pop esi
// 0042f7c5  5b                   pop ebx
// 0042f7c6  83c408               add esp, 8
// 0042f7c9  c3                   ret 
// 0042f7ca  8bff                 mov edi, edi
// 0042f7cc  11f6                 adc esi, esi
// 0042f7ce  42                   inc edx
// 0042f7cf  00e0                 add al, ah
// 0042f7d1  f5                   cmc 
// 0042f7d2  42                   inc edx
// 0042f7d3  008ff5420055         add byte ptr [edi + 0x550042f5], cl
// 0042f7d9  f6420000             test byte ptr [edx], 0
// 0042f7dd  0303                 add eax, dword ptr [ebx]
// 0042f7df  0301                 add eax, dword ptr [ecx]
// 0042f7e1  0003                 add byte ptr [ebx], al
// 0042f7e3  0303                 add eax, dword ptr [ebx]
// 0042f7e5  0303                 add eax, dword ptr [ebx]
// 0042f7e7  0303                 add eax, dword ptr [ebx]
// 0042f7e9  0303                 add eax, dword ptr [ebx]
// 0042f7eb  0303                 add eax, dword ptr [ebx]
// 0042f7ed  0303                 add eax, dword ptr [ebx]
// 0042f7ef  0303                 add eax, dword ptr [ebx]
// 0042f7f1  0303                 add eax, dword ptr [ebx]
// 0042f7f3  0303                 add eax, dword ptr [ebx]
// 0042f7f5  0302                 add eax, dword ptr [edx]
// 0042f7f7  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function ?EscapeXML@ATL@@YAHPB_WHPA_WHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp