// roc 2009-12 00430570  unit: COutputView  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00430570
//
// 00430570  33c0                 xor eax, eax
// 00430572  83ec08               sub esp, 8
// 00430575  3944240c             cmp dword ptr [esp + 0xc], eax
// 00430579  750a                 jne 0x430585
// 0043057b  6805400080           push 0x80004005
// 00430580  e8fb25fdff           call 0x402b80
// 00430585  53                   push ebx
// 00430586  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0043058a  56                   push esi
// 0043058b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043058f  89442408             mov dword ptr [esp + 8], eax
// 00430593  8944240c             mov dword ptr [esp + 0xc], eax
// 00430597  39442418             cmp dword ptr [esp + 0x18], eax
// 0043059b  0f844f020000         je 0x4307f0
// 004305a1  55                   push ebp
// 004305a2  57                   push edi
// 004305a3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004305a7  0fb700               movzx eax, word ptr [eax]
// 004305aa  ff4c2420             dec dword ptr [esp + 0x20]
// 004305ae  0fb7d0               movzx edx, ax
// 004305b1  8d4ade               lea ecx, [edx - 0x22]
// 004305b4  33ed                 xor ebp, ebp
// 004305b6  33ff                 xor edi, edi
// 004305b8  83f91c               cmp ecx, 0x1c
// 004305bb  0f87d4000000         ja 0x430695
// 004305c1  0fb6891c084300       movzx ecx, byte ptr [ecx + 0x43081c]
// 004305c8  ff248d0c084300       jmp dword ptr [ecx*4 + 0x43080c]
// 004305cf  85f6                 test esi, esi
// 004305d1  7443                 je 0x430616
// 004305d3  83fb03               cmp ebx, 3
// 004305d6  7e3e                 jle 0x430616
// 004305d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004305dc  33c0                 xor eax, eax
// 004305de  83c602               add esi, 2
// 004305e1  ba26000000           mov edx, 0x26
// 004305e6  668956fe             mov word ptr [esi - 2], dx
// 004305ea  6683393c             cmp word ptr [ecx], 0x3c
// 004305ee  ba74000000           mov edx, 0x74
// 004305f3  0f95c0               setne al
// 004305f6  83c602               add esi, 2
// 004305f9  83c602               add esi, 2
// 004305fc  48                   dec eax
// 004305fd  83e005               and eax, 5
// 00430600  83c067               add eax, 0x67
// 00430603  668946fc             mov word ptr [esi - 4], ax
// 00430607  668956fe             mov word ptr [esi - 2], dx
// 0043060b  b83b000000           mov eax, 0x3b
// 00430610  668906               mov word ptr [esi], ax
// 00430613  83c602               add esi, 2
// 00430616  bf04000000           mov edi, 4
// 0043061b  e979010000           jmp 0x430799
// 00430620  85f6                 test esi, esi
// 00430622  7423                 je 0x430647
// 00430624  83fb04               cmp ebx, 4
// 00430627  7e1e                 jle 0x430647
// 00430629  6a0a                 push 0xa
// 0043062b  68e0629a00           push 0x9a62e0
// 00430630  8d0c1b               lea ecx, [ebx + ebx]
// 00430633  51                   push ecx
// 00430634  56                   push esi
// 00430635  ff157cb79800         call dword ptr [0x98b77c]
// 0043063b  50                   push eax
// 0043063c  e8af23fdff           call 0x4029f0
// 00430641  83c414               add esp, 0x14
// 00430644  83c60a               add esi, 0xa
// 00430647  bf05000000           mov edi, 5
// 0043064c  e948010000           jmp 0x430799
// 00430651  f644242c01           test byte ptr [esp + 0x2c], 1
// 00430656  743d                 je 0x430695
// 00430658  85f6                 test esi, esi
// 0043065a  742f                 je 0x43068b
// 0043065c  83fb05               cmp ebx, 5
// 0043065f  7e2a                 jle 0x43068b
// 00430661  6683f827             cmp ax, 0x27
// 00430665  b8d0629a00           mov eax, 0x9a62d0
// 0043066a  7405                 je 0x430671
// 0043066c  b8c0629a00           mov eax, 0x9a62c0
// 00430671  6a0c                 push 0xc
// 00430673  50                   push eax
// 00430674  8d141b               lea edx, [ebx + ebx]
// 00430677  52                   push edx
// 00430678  56                   push esi
// 00430679  ff157cb79800         call dword ptr [0x98b77c]
// 0043067f  50                   push eax
// 00430680  e86b23fdff           call 0x4029f0
// 00430685  83c414               add esp, 0x14
// 00430688  83c60c               add esi, 0xc
// 0043068b  bf06000000           mov edi, 6
// 00430690  e904010000           jmp 0x430799
// 00430695  b900d80000           mov ecx, 0xd800
// 0043069a  663bc1               cmp ax, cx
// 0043069d  723e                 jb 0x4306dd
// 0043069f  b9ffdb0000           mov ecx, 0xdbff
// 004306a4  663bc1               cmp ax, cx
// 004306a7  7734                 ja 0x4306dd
// 004306a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004306ad  6685c0               test ax, ax
// 004306b0  741b                 je 0x4306cd
// 004306b2  85f6                 test esi, esi
// 004306b4  7412                 je 0x4306c8
// 004306b6  83fb07               cmp ebx, 7
// 004306b9  7e0d                 jle 0x4306c8
// 004306bb  56                   push esi
// 004306bc  50                   push eax
// 004306bd  e80efeffff           call 0x4304d0
// 004306c2  83c408               add esp, 8
// 004306c5  83c610               add esi, 0x10
// 004306c8  bf08000000           mov edi, 8
// 004306cd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004306d1  0fb702               movzx eax, word ptr [edx]
// 004306d4  89442414             mov dword ptr [esp + 0x14], eax
// 004306d8  e9bc000000           jmp 0x430799
// 004306dd  66837c241400         cmp word ptr [esp + 0x14], 0
// 004306e3  7471                 je 0x430756
// 004306e5  b900dc0000           mov ecx, 0xdc00
// 004306ea  663bc1               cmp ax, cx
// 004306ed  7239                 jb 0x430728
// 004306ef  b9ffdf0000           mov ecx, 0xdfff
// 004306f4  663bc1               cmp ax, cx
// 004306f7  772f                 ja 0x430728
// 004306f9  85f6                 test esi, esi
// 004306fb  7421                 je 0x43071e
// 004306fd  83fb09               cmp ebx, 9
// 00430700  7e1c                 jle 0x43071e
// 00430702  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00430707  2df7d70000           sub eax, 0xd7f7
// 0043070c  c1e00a               shl eax, 0xa
// 0043070f  03c2                 add eax, edx
// 00430711  56                   push esi
// 00430712  50                   push eax
// 00430713  e808feffff           call 0x430520
// 00430718  83c408               add esp, 8
// 0043071b  83c614               add esi, 0x14
// 0043071e  bf0a000000           mov edi, 0xa
// 00430723  8d6ff7               lea ebp, [edi - 9]
// 00430726  eb22                 jmp 0x43074a
// 00430728  85f6                 test esi, esi
// 0043072a  7416                 je 0x430742
// 0043072c  83fb07               cmp ebx, 7
// 0043072f  7e11                 jle 0x430742
// 00430731  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430735  56                   push esi
// 00430736  51                   push ecx
// 00430737  e894fdffff           call 0x4304d0
// 0043073c  83c408               add esp, 8
// 0043073f  83c610               add esi, 0x10
// 00430742  83eb08               sub ebx, 8
// 00430745  8344241008           add dword ptr [esp + 0x10], 8
// 0043074a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00430752  85ed                 test ebp, ebp
// 00430754  7543                 jne 0x430799
// 00430756  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0043075a  0fb702               movzx eax, word ptr [edx]
// 0043075d  6683f820             cmp ax, 0x20
// 00430761  721b                 jb 0x43077e
// 00430763  6683f87e             cmp ax, 0x7e
// 00430767  7715                 ja 0x43077e
// 00430769  85f6                 test esi, esi
// 0043076b  740a                 je 0x430777
// 0043076d  85db                 test ebx, ebx
// 0043076f  7e06                 jle 0x430777
// 00430771  668906               mov word ptr [esi], ax
// 00430774  83c602               add esi, 2
// 00430777  bf01000000           mov edi, 1
// 0043077c  eb1b                 jmp 0x430799
// 0043077e  85f6                 test esi, esi
// 00430780  7412                 je 0x430794
// 00430782  83fb07               cmp ebx, 7
// 00430785  7e0d                 jle 0x430794
// 00430787  56                   push esi
// 00430788  50                   push eax
// 00430789  e842fdffff           call 0x4304d0
// 0043078e  83c408               add esp, 8
// 00430791  83c610               add esi, 0x10
// 00430794  bf08000000           mov edi, 8
// 00430799  017c2410             add dword ptr [esp + 0x10], edi
// 0043079d  8344241c02           add dword ptr [esp + 0x1c], 2
// 004307a2  2bdf                 sub ebx, edi
// 004307a4  837c242000           cmp dword ptr [esp + 0x20], 0
// 004307a9  0f85f4fdffff         jne 0x4305a3
// 004307af  8b442414             mov eax, dword ptr [esp + 0x14]
// 004307b3  5f                   pop edi
// 004307b4  5d                   pop ebp
// 004307b5  6685c0               test ax, ax
// 004307b8  7436                 je 0x4307f0
// 004307ba  8d48e0               lea ecx, [eax - 0x20]
// 004307bd  6683f95e             cmp cx, 0x5e
// 004307c1  7712                 ja 0x4307d5
// 004307c3  85f6                 test esi, esi
// 004307c5  7407                 je 0x4307ce
// 004307c7  85db                 test ebx, ebx
// 004307c9  7e03                 jle 0x4307ce
// 004307cb  668906               mov word ptr [esi], ax
// 004307ce  4b                   dec ebx
// 004307cf  ff442408             inc dword ptr [esp + 8]
// 004307d3  eb1b                 jmp 0x4307f0
// 004307d5  85f6                 test esi, esi
// 004307d7  740f                 je 0x4307e8
// 004307d9  83fb07               cmp ebx, 7
// 004307dc  7e0a                 jle 0x4307e8
// 004307de  56                   push esi
// 004307df  50                   push eax
// 004307e0  e8ebfcffff           call 0x4304d0
// 004307e5  83c408               add esp, 8
// 004307e8  83eb08               sub ebx, 8
// 004307eb  8344240808           add dword ptr [esp + 8], 8
// 004307f0  85f6                 test esi, esi
// 004307f2  740c                 je 0x430800
// 004307f4  85db                 test ebx, ebx
// 004307f6  7d08                 jge 0x430800
// 004307f8  5e                   pop esi
// 004307f9  33c0                 xor eax, eax
// 004307fb  5b                   pop ebx
// 004307fc  83c408               add esp, 8
// 004307ff  c3                   ret 
// 00430800  8b442408             mov eax, dword ptr [esp + 8]
// 00430804  5e                   pop esi
// 00430805  5b                   pop ebx
// 00430806  83c408               add esp, 8
// 00430809  c3                   ret 
// 0043080a  8bff                 mov edi, edi
// 0043080c  51                   push ecx
// 0043080d  06                   push es
// 0043080e  43                   inc ebx
// 0043080f  0020                 add byte ptr [eax], ah
// 00430811  06                   push es
// 00430812  43                   inc ebx
// 00430813  00cf                 add bh, cl
// 00430815  0543009506           add eax, 0x6950043
// 0043081a  43                   inc ebx
// 0043081b  0000                 add byte ptr [eax], al
// 0043081d  0303                 add eax, dword ptr [ebx]
// 0043081f  0301                 add eax, dword ptr [ecx]
// 00430821  0003                 add byte ptr [ebx], al
// 00430823  0303                 add eax, dword ptr [ebx]
// 00430825  0303                 add eax, dword ptr [ebx]
// 00430827  0303                 add eax, dword ptr [ebx]
// 00430829  0303                 add eax, dword ptr [ebx]
// 0043082b  0303                 add eax, dword ptr [ebx]
// 0043082d  0303                 add eax, dword ptr [ebx]
// 0043082f  0303                 add eax, dword ptr [ebx]
// 00430831  0303                 add eax, dword ptr [ebx]
// 00430833  0303                 add eax, dword ptr [ebx]
// 00430835  0302                 add eax, dword ptr [edx]
// 00430837  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function ?EscapeXML@ATL@@YAHPB_WHPA_WHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp