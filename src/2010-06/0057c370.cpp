// roc 2010-06 0057c370  unit: seg_00570000  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057c370
//
// 0057c370  83ec20               sub esp, 0x20
// 0057c373  53                   push ebx
// 0057c374  55                   push ebp
// 0057c375  56                   push esi
// 0057c376  57                   push edi
// 0057c377  8b5104               mov edx, dword ptr [ecx + 4]
// 0057c37a  8b19                 mov ebx, dword ptr [ecx]
// 0057c37c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0057c37f  89542424             mov dword ptr [esp + 0x24], edx
// 0057c383  8b5104               mov edx, dword ptr [ecx + 4]
// 0057c386  8b29                 mov ebp, dword ptr [ecx]
// 0057c388  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057c38c  8b5108               mov edx, dword ptr [ecx + 8]
// 0057c38f  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0057c392  33c9                 xor ecx, ecx
// 0057c394  89542428             mov dword ptr [esp + 0x28], edx
// 0057c398  0fb7d1               movzx edx, cx
// 0057c39b  8bca                 mov ecx, edx
// 0057c39d  c1e210               shl edx, 0x10
// 0057c3a0  0bca                 or ecx, edx
// 0057c3a2  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 0057c3a8  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0057c3ae  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 0057c3b4  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0057c3ba  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 0057c3c0  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 0057c3c6  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0057c3cc  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 0057c3d2  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 0057c3d8  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 0057c3df  33c9                 xor ecx, ecx
// 0057c3e1  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0057c3e6  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 0057c3ec  47                   inc edi
// 0057c3ed  81ff3d020000         cmp edi, 0x23d
// 0057c3f3  8974241c             mov dword ptr [esp + 0x1c], esi
// 0057c3f7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057c3ff  0f8d76010000         jge 0x57c57b
// 0057c405  b93d020000           mov ecx, 0x23d
// 0057c40a  2bcf                 sub ecx, edi
// 0057c40c  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 0057c413  03f9                 add edi, ecx
// 0057c415  89542414             mov dword ptr [esp + 0x14], edx
// 0057c419  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057c41d  897c2410             mov dword ptr [esp + 0x10], edi
// 0057c421  eb04                 jmp 0x57c427
// 0057c423  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057c427  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057c42b  8b11                 mov edx, dword ptr [ecx]
// 0057c42d  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 0057c432  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 0057c437  41                   inc ecx
// 0057c438  3bce                 cmp ecx, esi
// 0057c43a  7e06                 jle 0x57c442
// 0057c43c  ff442418             inc dword ptr [esp + 0x18]
// 0057c440  8bce                 mov ecx, esi
// 0057c442  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0057c446  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0057c44b  7f44                 jg 0x57c491
// 0057c44d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057c451  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 0057c459  33f6                 xor esi, esi
// 0057c45b  3bd7                 cmp edx, edi
// 0057c45d  7c0b                 jl 0x57c46a
// 0057c45f  8bf2                 mov esi, edx
// 0057c461  2bf7                 sub esi, edi
// 0057c463  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0057c467  8b34b7               mov esi, dword ptr [edi + esi*4]
// 0057c46a  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 0057c46e  03ce                 add ecx, esi
// 0057c470  0fafcf               imul ecx, edi
// 0057c473  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 0057c479  85ed                 test ebp, ebp
// 0057c47b  7410                 je 0x57c48d
// 0057c47d  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 0057c482  03d6                 add edx, esi
// 0057c484  0fafd7               imul edx, edi
// 0057c487  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 0057c48d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057c491  8344241404           add dword ptr [esp + 0x14], 4
// 0057c496  836c242001           sub dword ptr [esp + 0x20], 1
// 0057c49b  7586                 jne 0x57c423
// 0057c49d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057c4a1  85ed                 test ebp, ebp
// 0057c4a3  0f84d2000000         je 0x57c57b
// 0057c4a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c4ad  8d51ff               lea edx, [ecx - 1]
// 0057c4b0  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057c4b4  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 0057c4bb  eb03                 jmp 0x57c4c0
// 0057c4bd  8d4900               lea ecx, [ecx]
// 0057c4c0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057c4c4  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0057c4cd  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 0057c4d4  750a                 jne 0x57c4e0
// 0057c4d6  83ea02               sub edx, 2
// 0057c4d9  49                   dec ecx
// 0057c4da  66833a00             cmp word ptr [edx], 0
// 0057c4de  74f6                 je 0x57c4d6
// 0057c4e0  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 0057c4e9  baffff0000           mov edx, 0xffff
// 0057c4ee  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 0057c4f6  8bca                 mov ecx, edx
// 0057c4f8  66010e               add word ptr [esi], cx
// 0057c4fb  83ed02               sub ebp, 2
// 0057c4fe  85ed                 test ebp, ebp
// 0057c500  7fbe                 jg 0x57c4c0
// 0057c502  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057c506  85d2                 test edx, edx
// 0057c508  7471                 je 0x57c57b
// 0057c50a  89742420             mov dword ptr [esp + 0x20], esi
// 0057c50e  8bff                 mov edi, edi
// 0057c510  0fb736               movzx esi, word ptr [esi]
// 0057c513  8974241c             mov dword ptr [esp + 0x1c], esi
// 0057c517  85f6                 test esi, esi
// 0057c519  7450                 je 0x57c56b
// 0057c51b  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 0057c522  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0057c525  ff4c2410             dec dword ptr [esp + 0x10]
// 0057c529  83ed04               sub ebp, 4
// 0057c52c  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0057c530  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0057c534  7f2d                 jg 0x57c563
// 0057c536  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 0057c53b  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 0057c53f  3bfa                 cmp edi, edx
// 0057c541  7418                 je 0x57c55b
// 0057c543  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 0057c547  8bea                 mov ebp, edx
// 0057c549  2bef                 sub ebp, edi
// 0057c54b  0fafe9               imul ebp, ecx
// 0057c54e  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 0057c554  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0057c558  668916               mov word ptr [esi], dx
// 0057c55b  ff4c241c             dec dword ptr [esp + 0x1c]
// 0057c55f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057c563  85f6                 test esi, esi
// 0057c565  75bb                 jne 0x57c522
// 0057c567  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057c56b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057c56f  4a                   dec edx
// 0057c570  83ee02               sub esi, 2
// 0057c573  89742420             mov dword ptr [esp + 0x20], esi
// 0057c577  85d2                 test edx, edx
// 0057c579  7595                 jne 0x57c510
// 0057c57b  5f                   pop edi
// 0057c57c  5e                   pop esi
// 0057c57d  5d                   pop ebp
// 0057c57e  5b                   pop ebx
// 0057c57f  83c420               add esp, 0x20
// 0057c582  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
