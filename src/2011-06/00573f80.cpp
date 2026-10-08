// from server: 100% by auto
// roc 2011-06 00573f80  unit: seg_00570000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573f80
//
// 00573f80  83ec20               sub esp, 0x20
// 00573f83  56                   push esi
// 00573f84  8d742406             lea esi, [esp + 6]
// 00573f88  33c9                 xor ecx, ecx
// 00573f8a  b801000000           mov eax, 1
// 00573f8f  2bd6                 sub edx, esi
// 00573f91  8d3442               lea esi, [edx + eax*2]
// 00573f94  668b743404           mov si, word ptr [esp + esi + 4]
// 00573f99  6603f1               add si, cx
// 00573f9c  6603f6               add si, si
// 00573f9f  0fb7ce               movzx ecx, si
// 00573fa2  66894c4404           mov word ptr [esp + eax*2 + 4], cx
// 00573fa7  40                   inc eax
// 00573fa8  83f80f               cmp eax, 0xf
// 00573fab  7ee4                 jle 0x573f91
// 00573fad  33f6                 xor esi, esi
// 00573faf  85db                 test ebx, ebx
// 00573fb1  7c39                 jl 0x573fec
// 00573fb3  55                   push ebp
// 00573fb4  0fb754b702           movzx edx, word ptr [edi + esi*4 + 2]
// 00573fb9  85d2                 test edx, edx
// 00573fbb  7429                 je 0x573fe6
// 00573fbd  0fb7445408           movzx eax, word ptr [esp + edx*2 + 8]
// 00573fc2  0fb7c8               movzx ecx, ax
// 00573fc5  40                   inc eax
// 00573fc6  6689445408           mov word ptr [esp + edx*2 + 8], ax
// 00573fcb  33c0                 xor eax, eax
// 00573fcd  8d4900               lea ecx, [ecx]
// 00573fd0  8be9                 mov ebp, ecx
// 00573fd2  83e501               and ebp, 1
// 00573fd5  0bc5                 or eax, ebp
// 00573fd7  4a                   dec edx
// 00573fd8  d1e9                 shr ecx, 1
// 00573fda  03c0                 add eax, eax
// 00573fdc  85d2                 test edx, edx
// 00573fde  7ff0                 jg 0x573fd0
// 00573fe0  d1e8                 shr eax, 1
// 00573fe2  668904b7             mov word ptr [edi + esi*4], ax
// 00573fe6  46                   inc esi
// 00573fe7  3bf3                 cmp esi, ebx
// 00573fe9  7ec9                 jle 0x573fb4
// 00573feb  5d                   pop ebp
// 00573fec  5e                   pop esi
// 00573fed  83c420               add esp, 0x20
// 00573ff0  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_codes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
