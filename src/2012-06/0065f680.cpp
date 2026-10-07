// roc 2012-06 0065f680  unit: seg_00650000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f680
//
// 0065f680  83ec20               sub esp, 0x20
// 0065f683  56                   push esi
// 0065f684  8d742406             lea esi, [esp + 6]
// 0065f688  33c9                 xor ecx, ecx
// 0065f68a  b801000000           mov eax, 1
// 0065f68f  2bd6                 sub edx, esi
// 0065f691  8d3442               lea esi, [edx + eax*2]
// 0065f694  668b743404           mov si, word ptr [esp + esi + 4]
// 0065f699  6603f1               add si, cx
// 0065f69c  6603f6               add si, si
// 0065f69f  0fb7ce               movzx ecx, si
// 0065f6a2  66894c4404           mov word ptr [esp + eax*2 + 4], cx
// 0065f6a7  40                   inc eax
// 0065f6a8  83f80f               cmp eax, 0xf
// 0065f6ab  7ee4                 jle 0x65f691
// 0065f6ad  33f6                 xor esi, esi
// 0065f6af  85db                 test ebx, ebx
// 0065f6b1  7c39                 jl 0x65f6ec
// 0065f6b3  55                   push ebp
// 0065f6b4  0fb754b702           movzx edx, word ptr [edi + esi*4 + 2]
// 0065f6b9  85d2                 test edx, edx
// 0065f6bb  7429                 je 0x65f6e6
// 0065f6bd  0fb7445408           movzx eax, word ptr [esp + edx*2 + 8]
// 0065f6c2  0fb7c8               movzx ecx, ax
// 0065f6c5  40                   inc eax
// 0065f6c6  6689445408           mov word ptr [esp + edx*2 + 8], ax
// 0065f6cb  33c0                 xor eax, eax
// 0065f6cd  8d4900               lea ecx, [ecx]
// 0065f6d0  8be9                 mov ebp, ecx
// 0065f6d2  83e501               and ebp, 1
// 0065f6d5  0bc5                 or eax, ebp
// 0065f6d7  4a                   dec edx
// 0065f6d8  d1e9                 shr ecx, 1
// 0065f6da  03c0                 add eax, eax
// 0065f6dc  85d2                 test edx, edx
// 0065f6de  7ff0                 jg 0x65f6d0
// 0065f6e0  d1e8                 shr eax, 1
// 0065f6e2  668904b7             mov word ptr [edi + esi*4], ax
// 0065f6e6  46                   inc esi
// 0065f6e7  3bf3                 cmp esi, ebx
// 0065f6e9  7ec9                 jle 0x65f6b4
// 0065f6eb  5d                   pop ebp
// 0065f6ec  5e                   pop esi
// 0065f6ed  83c420               add esp, 0x20
// 0065f6f0  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_codes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
