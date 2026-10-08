// from server: 100% by auto
// roc 2007-08 00723430  unit: CXTIconHandle  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00723430
//
// 00723430  83ec20               sub esp, 0x20
// 00723433  8b5104               mov edx, dword ptr [ecx + 4]
// 00723436  53                   push ebx
// 00723437  8b19                 mov ebx, dword ptr [ecx]
// 00723439  8b4908               mov ecx, dword ptr [ecx + 8]
// 0072343c  89542418             mov dword ptr [esp + 0x18], edx
// 00723440  8b5104               mov edx, dword ptr [ecx + 4]
// 00723443  55                   push ebp
// 00723444  8b29                 mov ebp, dword ptr [ecx]
// 00723446  89542424             mov dword ptr [esp + 0x24], edx
// 0072344a  8b5108               mov edx, dword ptr [ecx + 8]
// 0072344d  56                   push esi
// 0072344e  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00723451  33c9                 xor ecx, ecx
// 00723453  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 00723459  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0072345f  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 00723465  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0072346b  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 00723471  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 00723477  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0072347d  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 00723483  89542424             mov dword ptr [esp + 0x24], edx
// 00723487  8b9054140000         mov edx, dword ptr [eax + 0x1454]
// 0072348d  8b94905c0b0000       mov edx, dword ptr [eax + edx*4 + 0xb5c]
// 00723494  57                   push edi
// 00723495  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0072349a  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 007234a0  83c701               add edi, 1
// 007234a3  81ff3d020000         cmp edi, 0x23d
// 007234a9  8974241c             mov dword ptr [esp + 0x1c], esi
// 007234ad  894c2418             mov dword ptr [esp + 0x18], ecx
// 007234b1  0f8d88010000         jge 0x72363f
// 007234b7  8d8cb85c0b0000       lea ecx, [eax + edi*4 + 0xb5c]
// 007234be  894c2414             mov dword ptr [esp + 0x14], ecx
// 007234c2  b93d020000           mov ecx, 0x23d
// 007234c7  2bcf                 sub ecx, edi
// 007234c9  03f9                 add edi, ecx
// 007234cb  894c2420             mov dword ptr [esp + 0x20], ecx
// 007234cf  897c2410             mov dword ptr [esp + 0x10], edi
// 007234d3  eb04                 jmp 0x7234d9
// 007234d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007234d9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007234dd  8b12                 mov edx, dword ptr [edx]
// 007234df  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 007234e4  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 007234e9  83c101               add ecx, 1
// 007234ec  3bce                 cmp ecx, esi
// 007234ee  7e07                 jle 0x7234f7
// 007234f0  8344241801           add dword ptr [esp + 0x18], 1
// 007234f5  8bce                 mov ecx, esi
// 007234f7  3b542424             cmp edx, dword ptr [esp + 0x24]
// 007234fb  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 00723500  7f48                 jg 0x72354a
// 00723502  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00723506  668384483c0b000001   add word ptr [eax + ecx*2 + 0xb3c], 1
// 0072350f  33f6                 xor esi, esi
// 00723511  3bd7                 cmp edx, edi
// 00723513  7c0b                 jl 0x723520
// 00723515  8bf2                 mov esi, edx
// 00723517  2bf7                 sub esi, edi
// 00723519  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0072351d  8b34b7               mov esi, dword ptr [edi + esi*4]
// 00723520  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 00723524  0fb7ff               movzx edi, di
// 00723527  03ce                 add ecx, esi
// 00723529  0fafcf               imul ecx, edi
// 0072352c  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 00723532  85ed                 test ebp, ebp
// 00723534  7410                 je 0x723546
// 00723536  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 0072353b  03d6                 add edx, esi
// 0072353d  0fafd7               imul edx, edi
// 00723540  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 00723546  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072354a  8344241404           add dword ptr [esp + 0x14], 4
// 0072354f  836c242001           sub dword ptr [esp + 0x20], 1
// 00723554  0f857bffffff         jne 0x7234d5
// 0072355a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0072355e  85ed                 test ebp, ebp
// 00723560  0f84d9000000         je 0x72363f
// 00723566  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072356a  8d51ff               lea edx, [ecx - 1]
// 0072356d  8954242c             mov dword ptr [esp + 0x2c], edx
// 00723571  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 00723578  eb06                 jmp 0x723580
// 0072357a  8d9b00000000         lea ebx, [ebx]
// 00723580  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00723584  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0072358d  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 00723594  750c                 jne 0x7235a2
// 00723596  83ea02               sub edx, 2
// 00723599  83e901               sub ecx, 1
// 0072359c  66833a00             cmp word ptr [edx], 0
// 007235a0  74f4                 je 0x723596
// 007235a2  668184483c0b0000ffff add word ptr [eax + ecx*2 + 0xb3c], 0xffff
// 007235ac  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 007235b5  668106ffff           add word ptr [esi], 0xffff
// 007235ba  83ed02               sub ebp, 2
// 007235bd  85ed                 test ebp, ebp
// 007235bf  7fbf                 jg 0x723580
// 007235c1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007235c5  85d2                 test edx, edx
// 007235c7  7476                 je 0x72363f
// 007235c9  89742420             mov dword ptr [esp + 0x20], esi
// 007235cd  8d4900               lea ecx, [ecx]
// 007235d0  0fb736               movzx esi, word ptr [esi]
// 007235d3  85f6                 test esi, esi
// 007235d5  8974241c             mov dword ptr [esp + 0x1c], esi
// 007235d9  7452                 je 0x72362d
// 007235db  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 007235e2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 007235e5  836c241001           sub dword ptr [esp + 0x10], 1
// 007235ea  83ed04               sub ebp, 4
// 007235ed  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 007235f1  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007235f5  7f2e                 jg 0x723625
// 007235f7  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 007235fc  3bfa                 cmp edi, edx
// 007235fe  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 00723602  7418                 je 0x72361c
// 00723604  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 00723608  8bea                 mov ebp, edx
// 0072360a  2bef                 sub ebp, edi
// 0072360c  0fafe9               imul ebp, ecx
// 0072360f  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 00723615  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00723619  668916               mov word ptr [esi], dx
// 0072361c  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00723621  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00723625  85f6                 test esi, esi
// 00723627  75b9                 jne 0x7235e2
// 00723629  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072362d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00723631  83ea01               sub edx, 1
// 00723634  83ee02               sub esi, 2
// 00723637  85d2                 test edx, edx
// 00723639  89742420             mov dword ptr [esp + 0x20], esi
// 0072363d  7591                 jne 0x7235d0
// 0072363f  5f                   pop edi
// 00723640  5e                   pop esi
// 00723641  5d                   pop ebp
// 00723642  5b                   pop ebx
// 00723643  83c420               add esp, 0x20
// 00723646  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
