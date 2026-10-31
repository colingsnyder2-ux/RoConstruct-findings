// roc 2010-06 00430b60  unit: COutputView  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430b60
//
// 00430b60  33c0                 xor eax, eax
// 00430b62  83ec08               sub esp, 8
// 00430b65  3944240c             cmp dword ptr [esp + 0xc], eax
// 00430b69  750a                 jne 0x430b75
// 00430b6b  6805400080           push 0x80004005
// 00430b70  e85b20fdff           call 0x402bd0
// 00430b75  53                   push ebx
// 00430b76  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00430b7a  56                   push esi
// 00430b7b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00430b7f  89442408             mov dword ptr [esp + 8], eax
// 00430b83  8944240c             mov dword ptr [esp + 0xc], eax
// 00430b87  39442418             cmp dword ptr [esp + 0x18], eax
// 00430b8b  0f844f020000         je 0x430de0
// 00430b91  55                   push ebp
// 00430b92  57                   push edi
// 00430b93  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00430b97  0fb700               movzx eax, word ptr [eax]
// 00430b9a  ff4c2420             dec dword ptr [esp + 0x20]
// 00430b9e  0fb7d0               movzx edx, ax
// 00430ba1  8d4ade               lea ecx, [edx - 0x22]
// 00430ba4  33ed                 xor ebp, ebp
// 00430ba6  33ff                 xor edi, edi
// 00430ba8  83f91c               cmp ecx, 0x1c
// 00430bab  0f87d4000000         ja 0x430c85
// 00430bb1  0fb6890c0e4300       movzx ecx, byte ptr [ecx + 0x430e0c]
// 00430bb8  ff248dfc0d4300       jmp dword ptr [ecx*4 + 0x430dfc]
// 00430bbf  85f6                 test esi, esi
// 00430bc1  7443                 je 0x430c06
// 00430bc3  83fb03               cmp ebx, 3
// 00430bc6  7e3e                 jle 0x430c06
// 00430bc8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00430bcc  33c0                 xor eax, eax
// 00430bce  83c602               add esi, 2
// 00430bd1  ba26000000           mov edx, 0x26
// 00430bd6  668956fe             mov word ptr [esi - 2], dx
// 00430bda  6683393c             cmp word ptr [ecx], 0x3c
// 00430bde  ba74000000           mov edx, 0x74
// 00430be3  0f95c0               setne al
// 00430be6  83c602               add esi, 2
// 00430be9  83c602               add esi, 2
// 00430bec  48                   dec eax
// 00430bed  83e005               and eax, 5
// 00430bf0  83c067               add eax, 0x67
// 00430bf3  668946fc             mov word ptr [esi - 4], ax
// 00430bf7  668956fe             mov word ptr [esi - 2], dx
// 00430bfb  b83b000000           mov eax, 0x3b
// 00430c00  668906               mov word ptr [esi], ax
// 00430c03  83c602               add esi, 2
// 00430c06  bf04000000           mov edi, 4
// 00430c0b  e979010000           jmp 0x430d89
// 00430c10  85f6                 test esi, esi
// 00430c12  7423                 je 0x430c37
// 00430c14  83fb04               cmp ebx, 4
// 00430c17  7e1e                 jle 0x430c37
// 00430c19  6a0a                 push 0xa
// 00430c1b  686070a000           push 0xa07060
// 00430c20  8d0c1b               lea ecx, [ebx + ebx]
// 00430c23  51                   push ecx
// 00430c24  56                   push esi
// 00430c25  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00430c2b  50                   push eax
// 00430c2c  e80f1efdff           call 0x402a40
// 00430c31  83c414               add esp, 0x14
// 00430c34  83c60a               add esi, 0xa
// 00430c37  bf05000000           mov edi, 5
// 00430c3c  e948010000           jmp 0x430d89
// 00430c41  f644242c01           test byte ptr [esp + 0x2c], 1
// 00430c46  743d                 je 0x430c85
// 00430c48  85f6                 test esi, esi
// 00430c4a  742f                 je 0x430c7b
// 00430c4c  83fb05               cmp ebx, 5
// 00430c4f  7e2a                 jle 0x430c7b
// 00430c51  6683f827             cmp ax, 0x27
// 00430c55  b85070a000           mov eax, 0xa07050
// 00430c5a  7405                 je 0x430c61
// 00430c5c  b84070a000           mov eax, 0xa07040
// 00430c61  6a0c                 push 0xc
// 00430c63  50                   push eax
// 00430c64  8d141b               lea edx, [ebx + ebx]
// 00430c67  52                   push edx
// 00430c68  56                   push esi
// 00430c69  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00430c6f  50                   push eax
// 00430c70  e8cb1dfdff           call 0x402a40
// 00430c75  83c414               add esp, 0x14
// 00430c78  83c60c               add esi, 0xc
// 00430c7b  bf06000000           mov edi, 6
// 00430c80  e904010000           jmp 0x430d89
// 00430c85  b900d80000           mov ecx, 0xd800
// 00430c8a  663bc1               cmp ax, cx
// 00430c8d  723e                 jb 0x430ccd
// 00430c8f  b9ffdb0000           mov ecx, 0xdbff
// 00430c94  663bc1               cmp ax, cx
// 00430c97  7734                 ja 0x430ccd
// 00430c99  8b442414             mov eax, dword ptr [esp + 0x14]
// 00430c9d  6685c0               test ax, ax
// 00430ca0  741b                 je 0x430cbd
// 00430ca2  85f6                 test esi, esi
// 00430ca4  7412                 je 0x430cb8
// 00430ca6  83fb07               cmp ebx, 7
// 00430ca9  7e0d                 jle 0x430cb8
// 00430cab  56                   push esi
// 00430cac  50                   push eax
// 00430cad  e80efeffff           call 0x430ac0
// 00430cb2  83c408               add esp, 8
// 00430cb5  83c610               add esi, 0x10
// 00430cb8  bf08000000           mov edi, 8
// 00430cbd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00430cc1  0fb702               movzx eax, word ptr [edx]
// 00430cc4  89442414             mov dword ptr [esp + 0x14], eax
// 00430cc8  e9bc000000           jmp 0x430d89
// 00430ccd  66837c241400         cmp word ptr [esp + 0x14], 0
// 00430cd3  7471                 je 0x430d46
// 00430cd5  b900dc0000           mov ecx, 0xdc00
// 00430cda  663bc1               cmp ax, cx
// 00430cdd  7239                 jb 0x430d18
// 00430cdf  b9ffdf0000           mov ecx, 0xdfff
// 00430ce4  663bc1               cmp ax, cx
// 00430ce7  772f                 ja 0x430d18
// 00430ce9  85f6                 test esi, esi
// 00430ceb  7421                 je 0x430d0e
// 00430ced  83fb09               cmp ebx, 9
// 00430cf0  7e1c                 jle 0x430d0e
// 00430cf2  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00430cf7  2df7d70000           sub eax, 0xd7f7
// 00430cfc  c1e00a               shl eax, 0xa
// 00430cff  03c2                 add eax, edx
// 00430d01  56                   push esi
// 00430d02  50                   push eax
// 00430d03  e808feffff           call 0x430b10
// 00430d08  83c408               add esp, 8
// 00430d0b  83c614               add esi, 0x14
// 00430d0e  bf0a000000           mov edi, 0xa
// 00430d13  8d6ff7               lea ebp, [edi - 9]
// 00430d16  eb22                 jmp 0x430d3a
// 00430d18  85f6                 test esi, esi
// 00430d1a  7416                 je 0x430d32
// 00430d1c  83fb07               cmp ebx, 7
// 00430d1f  7e11                 jle 0x430d32
// 00430d21  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430d25  56                   push esi
// 00430d26  51                   push ecx
// 00430d27  e894fdffff           call 0x430ac0
// 00430d2c  83c408               add esp, 8
// 00430d2f  83c610               add esi, 0x10
// 00430d32  83eb08               sub ebx, 8
// 00430d35  8344241008           add dword ptr [esp + 0x10], 8
// 00430d3a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00430d42  85ed                 test ebp, ebp
// 00430d44  7543                 jne 0x430d89
// 00430d46  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00430d4a  0fb702               movzx eax, word ptr [edx]
// 00430d4d  6683f820             cmp ax, 0x20
// 00430d51  721b                 jb 0x430d6e
// 00430d53  6683f87e             cmp ax, 0x7e
// 00430d57  7715                 ja 0x430d6e
// 00430d59  85f6                 test esi, esi
// 00430d5b  740a                 je 0x430d67
// 00430d5d  85db                 test ebx, ebx
// 00430d5f  7e06                 jle 0x430d67
// 00430d61  668906               mov word ptr [esi], ax
// 00430d64  83c602               add esi, 2
// 00430d67  bf01000000           mov edi, 1
// 00430d6c  eb1b                 jmp 0x430d89
// 00430d6e  85f6                 test esi, esi
// 00430d70  7412                 je 0x430d84
// 00430d72  83fb07               cmp ebx, 7
// 00430d75  7e0d                 jle 0x430d84
// 00430d77  56                   push esi
// 00430d78  50                   push eax
// 00430d79  e842fdffff           call 0x430ac0
// 00430d7e  83c408               add esp, 8
// 00430d81  83c610               add esi, 0x10
// 00430d84  bf08000000           mov edi, 8
// 00430d89  017c2410             add dword ptr [esp + 0x10], edi
// 00430d8d  8344241c02           add dword ptr [esp + 0x1c], 2
// 00430d92  2bdf                 sub ebx, edi
// 00430d94  837c242000           cmp dword ptr [esp + 0x20], 0
// 00430d99  0f85f4fdffff         jne 0x430b93
// 00430d9f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00430da3  5f                   pop edi
// 00430da4  5d                   pop ebp
// 00430da5  6685c0               test ax, ax
// 00430da8  7436                 je 0x430de0
// 00430daa  8d48e0               lea ecx, [eax - 0x20]
// 00430dad  6683f95e             cmp cx, 0x5e
// 00430db1  7712                 ja 0x430dc5
// 00430db3  85f6                 test esi, esi
// 00430db5  7407                 je 0x430dbe
// 00430db7  85db                 test ebx, ebx
// 00430db9  7e03                 jle 0x430dbe
// 00430dbb  668906               mov word ptr [esi], ax
// 00430dbe  4b                   dec ebx
// 00430dbf  ff442408             inc dword ptr [esp + 8]
// 00430dc3  eb1b                 jmp 0x430de0
// 00430dc5  85f6                 test esi, esi
// 00430dc7  740f                 je 0x430dd8
// 00430dc9  83fb07               cmp ebx, 7
// 00430dcc  7e0a                 jle 0x430dd8
// 00430dce  56                   push esi
// 00430dcf  50                   push eax
// 00430dd0  e8ebfcffff           call 0x430ac0
// 00430dd5  83c408               add esp, 8
// 00430dd8  83eb08               sub ebx, 8
// 00430ddb  8344240808           add dword ptr [esp + 8], 8
// 00430de0  85f6                 test esi, esi
// 00430de2  740c                 je 0x430df0
// 00430de4  85db                 test ebx, ebx
// 00430de6  7d08                 jge 0x430df0
// 00430de8  5e                   pop esi
// 00430de9  33c0                 xor eax, eax
// 00430deb  5b                   pop ebx
// 00430dec  83c408               add esp, 8
// 00430def  c3                   ret 
// 00430df0  8b442408             mov eax, dword ptr [esp + 8]
// 00430df4  5e                   pop esi
// 00430df5  5b                   pop ebx
// 00430df6  83c408               add esp, 8
// 00430df9  c3                   ret 
// 00430dfa  8bff                 mov edi, edi
// 00430dfc  41                   inc ecx
// 00430dfd  0c43                 or al, 0x43
// 00430dff  0010                 add byte ptr [eax], dl
// 00430e01  0c43                 or al, 0x43
// 00430e03  00bf0b430085         add byte ptr [edi - 0x7affbcf5], bh
// 00430e09  0c43                 or al, 0x43
// 00430e0b  0000                 add byte ptr [eax], al
// 00430e0d  0303                 add eax, dword ptr [ebx]
// 00430e0f  0301                 add eax, dword ptr [ecx]
// 00430e11  0003                 add byte ptr [ebx], al
// 00430e13  0303                 add eax, dword ptr [ebx]
// 00430e15  0303                 add eax, dword ptr [ebx]
// 00430e17  0303                 add eax, dword ptr [ebx]
// 00430e19  0303                 add eax, dword ptr [ebx]
// 00430e1b  0303                 add eax, dword ptr [ebx]
// 00430e1d  0303                 add eax, dword ptr [ebx]
// 00430e1f  0303                 add eax, dword ptr [ebx]
// 00430e21  0303                 add eax, dword ptr [ebx]
// 00430e23  0303                 add eax, dword ptr [ebx]
// 00430e25  0302                 add eax, dword ptr [edx]
// 00430e27  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function ?EscapeXML@ATL@@YAHPB_WHPA_WHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp