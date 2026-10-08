// roc 2009-12 0061b930  unit: seg_00610000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b930
//
// 0061b930  83ec20               sub esp, 0x20
// 0061b933  56                   push esi
// 0061b934  8d742406             lea esi, [esp + 6]
// 0061b938  33c9                 xor ecx, ecx
// 0061b93a  b801000000           mov eax, 1
// 0061b93f  2bd6                 sub edx, esi
// 0061b941  8d3442               lea esi, [edx + eax*2]
// 0061b944  668b743404           mov si, word ptr [esp + esi + 4]
// 0061b949  6603f1               add si, cx
// 0061b94c  6603f6               add si, si
// 0061b94f  0fb7ce               movzx ecx, si
// 0061b952  66894c4404           mov word ptr [esp + eax*2 + 4], cx
// 0061b957  40                   inc eax
// 0061b958  83f80f               cmp eax, 0xf
// 0061b95b  7ee4                 jle 0x61b941
// 0061b95d  33f6                 xor esi, esi
// 0061b95f  85db                 test ebx, ebx
// 0061b961  7c39                 jl 0x61b99c
// 0061b963  55                   push ebp
// 0061b964  0fb754b702           movzx edx, word ptr [edi + esi*4 + 2]
// 0061b969  85d2                 test edx, edx
// 0061b96b  7429                 je 0x61b996
// 0061b96d  0fb7445408           movzx eax, word ptr [esp + edx*2 + 8]
// 0061b972  0fb7c8               movzx ecx, ax
// 0061b975  40                   inc eax
// 0061b976  6689445408           mov word ptr [esp + edx*2 + 8], ax
// 0061b97b  33c0                 xor eax, eax
// 0061b97d  8d4900               lea ecx, [ecx]
// 0061b980  8be9                 mov ebp, ecx
// 0061b982  83e501               and ebp, 1
// 0061b985  0bc5                 or eax, ebp
// 0061b987  4a                   dec edx
// 0061b988  d1e9                 shr ecx, 1
// 0061b98a  03c0                 add eax, eax
// 0061b98c  85d2                 test edx, edx
// 0061b98e  7ff0                 jg 0x61b980
// 0061b990  d1e8                 shr eax, 1
// 0061b992  668904b7             mov word ptr [edi + esi*4], ax
// 0061b996  46                   inc esi
// 0061b997  3bf3                 cmp esi, ebx
// 0061b999  7ec9                 jle 0x61b964
// 0061b99b  5d                   pop ebp
// 0061b99c  5e                   pop esi
// 0061b99d  83c420               add esp, 0x20
// 0061b9a0  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_codes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
