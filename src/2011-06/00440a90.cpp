// roc 2011-06 00440a90  unit: COutputView  size: 713 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00440a90
//
// 00440a90  33c0                 xor eax, eax
// 00440a92  83ec08               sub esp, 8
// 00440a95  3944240c             cmp dword ptr [esp + 0xc], eax
// 00440a99  750a                 jne 0x440aa5
// 00440a9b  6805400080           push 0x80004005
// 00440aa0  e8fb2afcff           call 0x4035a0
// 00440aa5  53                   push ebx
// 00440aa6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00440aaa  56                   push esi
// 00440aab  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00440aaf  89442408             mov dword ptr [esp + 8], eax
// 00440ab3  8944240c             mov dword ptr [esp + 0xc], eax
// 00440ab7  39442418             cmp dword ptr [esp + 0x18], eax
// 00440abb  0f844f020000         je 0x440d10
// 00440ac1  55                   push ebp
// 00440ac2  57                   push edi
// 00440ac3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00440ac7  0fb700               movzx eax, word ptr [eax]
// 00440aca  ff4c2420             dec dword ptr [esp + 0x20]
// 00440ace  0fb7d0               movzx edx, ax
// 00440ad1  8d4ade               lea ecx, [edx - 0x22]
// 00440ad4  33ed                 xor ebp, ebp
// 00440ad6  33ff                 xor edi, edi
// 00440ad8  83f91c               cmp ecx, 0x1c
// 00440adb  0f87d4000000         ja 0x440bb5
// 00440ae1  0fb6893c0d4400       movzx ecx, byte ptr [ecx + 0x440d3c]
// 00440ae8  ff248d2c0d4400       jmp dword ptr [ecx*4 + 0x440d2c]
// 00440aef  85f6                 test esi, esi
// 00440af1  7443                 je 0x440b36
// 00440af3  83fb03               cmp ebx, 3
// 00440af6  7e3e                 jle 0x440b36
// 00440af8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00440afc  33c0                 xor eax, eax
// 00440afe  83c602               add esi, 2
// 00440b01  ba26000000           mov edx, 0x26
// 00440b06  668956fe             mov word ptr [esi - 2], dx
// 00440b0a  6683393c             cmp word ptr [ecx], 0x3c
// 00440b0e  ba74000000           mov edx, 0x74
// 00440b13  0f95c0               setne al
// 00440b16  83c602               add esi, 2
// 00440b19  83c602               add esi, 2
// 00440b1c  48                   dec eax
// 00440b1d  83e005               and eax, 5
// 00440b20  83c067               add eax, 0x67
// 00440b23  668946fc             mov word ptr [esi - 4], ax
// 00440b27  668956fe             mov word ptr [esi - 2], dx
// 00440b2b  b83b000000           mov eax, 0x3b
// 00440b30  668906               mov word ptr [esi], ax
// 00440b33  83c602               add esi, 2
// 00440b36  bf04000000           mov edi, 4
// 00440b3b  e979010000           jmp 0x440cb9
// 00440b40  85f6                 test esi, esi
// 00440b42  7423                 je 0x440b67
// 00440b44  83fb04               cmp ebx, 4
// 00440b47  7e1e                 jle 0x440b67
// 00440b49  6a0a                 push 0xa
// 00440b4b  68588aa600           push 0xa68a58
// 00440b50  8d0c1b               lea ecx, [ebx + ebx]
// 00440b53  51                   push ecx
// 00440b54  56                   push esi
// 00440b55  ff153c0aa400         call dword ptr [0xa40a3c]
// 00440b5b  50                   push eax
// 00440b5c  e8af28fcff           call 0x403410
// 00440b61  83c414               add esp, 0x14
// 00440b64  83c60a               add esi, 0xa
// 00440b67  bf05000000           mov edi, 5
// 00440b6c  e948010000           jmp 0x440cb9
// 00440b71  f644242c01           test byte ptr [esp + 0x2c], 1
// 00440b76  743d                 je 0x440bb5
// 00440b78  85f6                 test esi, esi
// 00440b7a  742f                 je 0x440bab
// 00440b7c  83fb05               cmp ebx, 5
// 00440b7f  7e2a                 jle 0x440bab
// 00440b81  6683f827             cmp ax, 0x27
// 00440b85  b8488aa600           mov eax, 0xa68a48
// 00440b8a  7405                 je 0x440b91
// 00440b8c  b8388aa600           mov eax, 0xa68a38
// 00440b91  6a0c                 push 0xc
// 00440b93  50                   push eax
// 00440b94  8d141b               lea edx, [ebx + ebx]
// 00440b97  52                   push edx
// 00440b98  56                   push esi
// 00440b99  ff153c0aa400         call dword ptr [0xa40a3c]
// 00440b9f  50                   push eax
// 00440ba0  e86b28fcff           call 0x403410
// 00440ba5  83c414               add esp, 0x14
// 00440ba8  83c60c               add esi, 0xc
// 00440bab  bf06000000           mov edi, 6
// 00440bb0  e904010000           jmp 0x440cb9
// 00440bb5  b900d80000           mov ecx, 0xd800
// 00440bba  663bc1               cmp ax, cx
// 00440bbd  723e                 jb 0x440bfd
// 00440bbf  b9ffdb0000           mov ecx, 0xdbff
// 00440bc4  663bc1               cmp ax, cx
// 00440bc7  7734                 ja 0x440bfd
// 00440bc9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00440bcd  6685c0               test ax, ax
// 00440bd0  741b                 je 0x440bed
// 00440bd2  85f6                 test esi, esi
// 00440bd4  7412                 je 0x440be8
// 00440bd6  83fb07               cmp ebx, 7
// 00440bd9  7e0d                 jle 0x440be8
// 00440bdb  56                   push esi
// 00440bdc  50                   push eax
// 00440bdd  e80efeffff           call 0x4409f0
// 00440be2  83c408               add esp, 8
// 00440be5  83c610               add esi, 0x10
// 00440be8  bf08000000           mov edi, 8
// 00440bed  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00440bf1  0fb702               movzx eax, word ptr [edx]
// 00440bf4  89442414             mov dword ptr [esp + 0x14], eax
// 00440bf8  e9bc000000           jmp 0x440cb9
// 00440bfd  66837c241400         cmp word ptr [esp + 0x14], 0
// 00440c03  7471                 je 0x440c76
// 00440c05  b900dc0000           mov ecx, 0xdc00
// 00440c0a  663bc1               cmp ax, cx
// 00440c0d  7239                 jb 0x440c48
// 00440c0f  b9ffdf0000           mov ecx, 0xdfff
// 00440c14  663bc1               cmp ax, cx
// 00440c17  772f                 ja 0x440c48
// 00440c19  85f6                 test esi, esi
// 00440c1b  7421                 je 0x440c3e
// 00440c1d  83fb09               cmp ebx, 9
// 00440c20  7e1c                 jle 0x440c3e
// 00440c22  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00440c27  2df7d70000           sub eax, 0xd7f7
// 00440c2c  c1e00a               shl eax, 0xa
// 00440c2f  03c2                 add eax, edx
// 00440c31  56                   push esi
// 00440c32  50                   push eax
// 00440c33  e808feffff           call 0x440a40
// 00440c38  83c408               add esp, 8
// 00440c3b  83c614               add esi, 0x14
// 00440c3e  bf0a000000           mov edi, 0xa
// 00440c43  8d6ff7               lea ebp, [edi - 9]
// 00440c46  eb22                 jmp 0x440c6a
// 00440c48  85f6                 test esi, esi
// 00440c4a  7416                 je 0x440c62
// 00440c4c  83fb07               cmp ebx, 7
// 00440c4f  7e11                 jle 0x440c62
// 00440c51  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00440c55  56                   push esi
// 00440c56  51                   push ecx
// 00440c57  e894fdffff           call 0x4409f0
// 00440c5c  83c408               add esp, 8
// 00440c5f  83c610               add esi, 0x10
// 00440c62  83eb08               sub ebx, 8
// 00440c65  8344241008           add dword ptr [esp + 0x10], 8
// 00440c6a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00440c72  85ed                 test ebp, ebp
// 00440c74  7543                 jne 0x440cb9
// 00440c76  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00440c7a  0fb702               movzx eax, word ptr [edx]
// 00440c7d  6683f820             cmp ax, 0x20
// 00440c81  721b                 jb 0x440c9e
// 00440c83  6683f87e             cmp ax, 0x7e
// 00440c87  7715                 ja 0x440c9e
// 00440c89  85f6                 test esi, esi
// 00440c8b  740a                 je 0x440c97
// 00440c8d  85db                 test ebx, ebx
// 00440c8f  7e06                 jle 0x440c97
// 00440c91  668906               mov word ptr [esi], ax
// 00440c94  83c602               add esi, 2
// 00440c97  bf01000000           mov edi, 1
// 00440c9c  eb1b                 jmp 0x440cb9
// 00440c9e  85f6                 test esi, esi
// 00440ca0  7412                 je 0x440cb4
// 00440ca2  83fb07               cmp ebx, 7
// 00440ca5  7e0d                 jle 0x440cb4
// 00440ca7  56                   push esi
// 00440ca8  50                   push eax
// 00440ca9  e842fdffff           call 0x4409f0
// 00440cae  83c408               add esp, 8
// 00440cb1  83c610               add esi, 0x10
// 00440cb4  bf08000000           mov edi, 8
// 00440cb9  017c2410             add dword ptr [esp + 0x10], edi
// 00440cbd  8344241c02           add dword ptr [esp + 0x1c], 2
// 00440cc2  2bdf                 sub ebx, edi
// 00440cc4  837c242000           cmp dword ptr [esp + 0x20], 0
// 00440cc9  0f85f4fdffff         jne 0x440ac3
// 00440ccf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00440cd3  5f                   pop edi
// 00440cd4  5d                   pop ebp
// 00440cd5  6685c0               test ax, ax
// 00440cd8  7436                 je 0x440d10
// 00440cda  8d48e0               lea ecx, [eax - 0x20]
// 00440cdd  6683f95e             cmp cx, 0x5e
// 00440ce1  7712                 ja 0x440cf5
// 00440ce3  85f6                 test esi, esi
// 00440ce5  7407                 je 0x440cee
// 00440ce7  85db                 test ebx, ebx
// 00440ce9  7e03                 jle 0x440cee
// 00440ceb  668906               mov word ptr [esi], ax
// 00440cee  4b                   dec ebx
// 00440cef  ff442408             inc dword ptr [esp + 8]
// 00440cf3  eb1b                 jmp 0x440d10
// 00440cf5  85f6                 test esi, esi
// 00440cf7  740f                 je 0x440d08
// 00440cf9  83fb07               cmp ebx, 7
// 00440cfc  7e0a                 jle 0x440d08
// 00440cfe  56                   push esi
// 00440cff  50                   push eax
// 00440d00  e8ebfcffff           call 0x4409f0
// 00440d05  83c408               add esp, 8
// 00440d08  83eb08               sub ebx, 8
// 00440d0b  8344240808           add dword ptr [esp + 8], 8
// 00440d10  85f6                 test esi, esi
// 00440d12  740c                 je 0x440d20
// 00440d14  85db                 test ebx, ebx
// 00440d16  7d08                 jge 0x440d20
// 00440d18  5e                   pop esi
// 00440d19  33c0                 xor eax, eax
// 00440d1b  5b                   pop ebx
// 00440d1c  83c408               add esp, 8
// 00440d1f  c3                   ret 
// 00440d20  8b442408             mov eax, dword ptr [esp + 8]
// 00440d24  5e                   pop esi
// 00440d25  5b                   pop ebx
// 00440d26  83c408               add esp, 8
// 00440d29  c3                   ret 
// 00440d2a  8bff                 mov edi, edi
// 00440d2c  710b                 jno 0x440d39
// 00440d2e  44                   inc esp
// 00440d2f  00400b               add byte ptr [eax + 0xb], al
// 00440d32  44                   inc esp
// 00440d33  00ef                 add bh, ch
// 00440d35  0a4400b5             or al, byte ptr [eax + eax - 0x4b]
// 00440d39  0b440000             or eax, dword ptr [eax + eax]
// 00440d3d  0303                 add eax, dword ptr [ebx]
// 00440d3f  0301                 add eax, dword ptr [ecx]
// 00440d41  0003                 add byte ptr [ebx], al
// 00440d43  0303                 add eax, dword ptr [ebx]
// 00440d45  0303                 add eax, dword ptr [ebx]
// 00440d47  0303                 add eax, dword ptr [ebx]
// 00440d49  0303                 add eax, dword ptr [ebx]
// 00440d4b  0303                 add eax, dword ptr [ebx]
// 00440d4d  0303                 add eax, dword ptr [ebx]
// 00440d4f  0303                 add eax, dword ptr [ebx]
// 00440d51  0303                 add eax, dword ptr [ebx]
// 00440d53  0303                 add eax, dword ptr [ebx]
// 00440d55  0302                 add eax, dword ptr [edx]
// 00440d57  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function ?EscapeXML@ATL@@YAHPB_WHPA_WHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp