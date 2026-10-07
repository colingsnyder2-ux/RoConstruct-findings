// roc 2012-06 0065e560  unit: seg_00650000  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065e560
//
// 0065e560  83ec20               sub esp, 0x20
// 0065e563  53                   push ebx
// 0065e564  55                   push ebp
// 0065e565  56                   push esi
// 0065e566  57                   push edi
// 0065e567  8b5104               mov edx, dword ptr [ecx + 4]
// 0065e56a  8b19                 mov ebx, dword ptr [ecx]
// 0065e56c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0065e56f  89542424             mov dword ptr [esp + 0x24], edx
// 0065e573  8b5104               mov edx, dword ptr [ecx + 4]
// 0065e576  8b29                 mov ebp, dword ptr [ecx]
// 0065e578  8954242c             mov dword ptr [esp + 0x2c], edx
// 0065e57c  8b5108               mov edx, dword ptr [ecx + 8]
// 0065e57f  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0065e582  33c9                 xor ecx, ecx
// 0065e584  89542428             mov dword ptr [esp + 0x28], edx
// 0065e588  0fb7d1               movzx edx, cx
// 0065e58b  8bca                 mov ecx, edx
// 0065e58d  c1e210               shl edx, 0x10
// 0065e590  0bca                 or ecx, edx
// 0065e592  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 0065e598  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0065e59e  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 0065e5a4  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0065e5aa  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 0065e5b0  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 0065e5b6  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0065e5bc  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 0065e5c2  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 0065e5c8  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 0065e5cf  33c9                 xor ecx, ecx
// 0065e5d1  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0065e5d6  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 0065e5dc  47                   inc edi
// 0065e5dd  81ff3d020000         cmp edi, 0x23d
// 0065e5e3  8974241c             mov dword ptr [esp + 0x1c], esi
// 0065e5e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065e5ef  0f8d76010000         jge 0x65e76b
// 0065e5f5  b93d020000           mov ecx, 0x23d
// 0065e5fa  2bcf                 sub ecx, edi
// 0065e5fc  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 0065e603  03f9                 add edi, ecx
// 0065e605  89542414             mov dword ptr [esp + 0x14], edx
// 0065e609  894c2420             mov dword ptr [esp + 0x20], ecx
// 0065e60d  897c2410             mov dword ptr [esp + 0x10], edi
// 0065e611  eb04                 jmp 0x65e617
// 0065e613  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0065e617  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065e61b  8b11                 mov edx, dword ptr [ecx]
// 0065e61d  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 0065e622  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 0065e627  41                   inc ecx
// 0065e628  3bce                 cmp ecx, esi
// 0065e62a  7e06                 jle 0x65e632
// 0065e62c  ff442418             inc dword ptr [esp + 0x18]
// 0065e630  8bce                 mov ecx, esi
// 0065e632  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0065e636  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0065e63b  7f44                 jg 0x65e681
// 0065e63d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0065e641  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 0065e649  33f6                 xor esi, esi
// 0065e64b  3bd7                 cmp edx, edi
// 0065e64d  7c0b                 jl 0x65e65a
// 0065e64f  8bf2                 mov esi, edx
// 0065e651  2bf7                 sub esi, edi
// 0065e653  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0065e657  8b34b7               mov esi, dword ptr [edi + esi*4]
// 0065e65a  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 0065e65e  03ce                 add ecx, esi
// 0065e660  0fafcf               imul ecx, edi
// 0065e663  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 0065e669  85ed                 test ebp, ebp
// 0065e66b  7410                 je 0x65e67d
// 0065e66d  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 0065e672  03d6                 add edx, esi
// 0065e674  0fafd7               imul edx, edi
// 0065e677  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 0065e67d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065e681  8344241404           add dword ptr [esp + 0x14], 4
// 0065e686  836c242001           sub dword ptr [esp + 0x20], 1
// 0065e68b  7586                 jne 0x65e613
// 0065e68d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065e691  85ed                 test ebp, ebp
// 0065e693  0f84d2000000         je 0x65e76b
// 0065e699  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065e69d  8d51ff               lea edx, [ecx - 1]
// 0065e6a0  8954242c             mov dword ptr [esp + 0x2c], edx
// 0065e6a4  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 0065e6ab  eb03                 jmp 0x65e6b0
// 0065e6ad  8d4900               lea ecx, [ecx]
// 0065e6b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065e6b4  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0065e6bd  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 0065e6c4  750a                 jne 0x65e6d0
// 0065e6c6  83ea02               sub edx, 2
// 0065e6c9  49                   dec ecx
// 0065e6ca  66833a00             cmp word ptr [edx], 0
// 0065e6ce  74f6                 je 0x65e6c6
// 0065e6d0  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 0065e6d9  baffff0000           mov edx, 0xffff
// 0065e6de  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 0065e6e6  8bca                 mov ecx, edx
// 0065e6e8  66010e               add word ptr [esi], cx
// 0065e6eb  83ed02               sub ebp, 2
// 0065e6ee  85ed                 test ebp, ebp
// 0065e6f0  7fbe                 jg 0x65e6b0
// 0065e6f2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065e6f6  85d2                 test edx, edx
// 0065e6f8  7471                 je 0x65e76b
// 0065e6fa  89742420             mov dword ptr [esp + 0x20], esi
// 0065e6fe  8bff                 mov edi, edi
// 0065e700  0fb736               movzx esi, word ptr [esi]
// 0065e703  8974241c             mov dword ptr [esp + 0x1c], esi
// 0065e707  85f6                 test esi, esi
// 0065e709  7450                 je 0x65e75b
// 0065e70b  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 0065e712  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0065e715  ff4c2410             dec dword ptr [esp + 0x10]
// 0065e719  83ed04               sub ebp, 4
// 0065e71c  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0065e720  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0065e724  7f2d                 jg 0x65e753
// 0065e726  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 0065e72b  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 0065e72f  3bfa                 cmp edi, edx
// 0065e731  7418                 je 0x65e74b
// 0065e733  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 0065e737  8bea                 mov ebp, edx
// 0065e739  2bef                 sub ebp, edi
// 0065e73b  0fafe9               imul ebp, ecx
// 0065e73e  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 0065e744  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0065e748  668916               mov word ptr [esi], dx
// 0065e74b  ff4c241c             dec dword ptr [esp + 0x1c]
// 0065e74f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0065e753  85f6                 test esi, esi
// 0065e755  75bb                 jne 0x65e712
// 0065e757  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065e75b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0065e75f  4a                   dec edx
// 0065e760  83ee02               sub esi, 2
// 0065e763  89742420             mov dword ptr [esp + 0x20], esi
// 0065e767  85d2                 test edx, edx
// 0065e769  7595                 jne 0x65e700
// 0065e76b  5f                   pop edi
// 0065e76c  5e                   pop esi
// 0065e76d  5d                   pop ebp
// 0065e76e  5b                   pop ebx
// 0065e76f  83c420               add esp, 0x20
// 0065e772  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
