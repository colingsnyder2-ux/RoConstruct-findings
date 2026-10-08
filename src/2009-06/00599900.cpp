// from server: 100% by auto
// roc 2009-06 00599900  unit: seg_00590000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599900
//
// 00599900  83ec20               sub esp, 0x20
// 00599903  56                   push esi
// 00599904  8d742406             lea esi, [esp + 6]
// 00599908  33c9                 xor ecx, ecx
// 0059990a  b801000000           mov eax, 1
// 0059990f  2bd6                 sub edx, esi
// 00599911  8d3442               lea esi, [edx + eax*2]
// 00599914  668b743404           mov si, word ptr [esp + esi + 4]
// 00599919  6603f1               add si, cx
// 0059991c  6603f6               add si, si
// 0059991f  0fb7ce               movzx ecx, si
// 00599922  66894c4404           mov word ptr [esp + eax*2 + 4], cx
// 00599927  40                   inc eax
// 00599928  83f80f               cmp eax, 0xf
// 0059992b  7ee4                 jle 0x599911
// 0059992d  33f6                 xor esi, esi
// 0059992f  85db                 test ebx, ebx
// 00599931  7c39                 jl 0x59996c
// 00599933  55                   push ebp
// 00599934  0fb754b702           movzx edx, word ptr [edi + esi*4 + 2]
// 00599939  85d2                 test edx, edx
// 0059993b  7429                 je 0x599966
// 0059993d  0fb7445408           movzx eax, word ptr [esp + edx*2 + 8]
// 00599942  0fb7c8               movzx ecx, ax
// 00599945  40                   inc eax
// 00599946  6689445408           mov word ptr [esp + edx*2 + 8], ax
// 0059994b  33c0                 xor eax, eax
// 0059994d  8d4900               lea ecx, [ecx]
// 00599950  8be9                 mov ebp, ecx
// 00599952  83e501               and ebp, 1
// 00599955  0bc5                 or eax, ebp
// 00599957  4a                   dec edx
// 00599958  d1e9                 shr ecx, 1
// 0059995a  03c0                 add eax, eax
// 0059995c  85d2                 test edx, edx
// 0059995e  7ff0                 jg 0x599950
// 00599960  d1e8                 shr eax, 1
// 00599962  668904b7             mov word ptr [edi + esi*4], ax
// 00599966  46                   inc esi
// 00599967  3bf3                 cmp esi, ebx
// 00599969  7ec9                 jle 0x599934
// 0059996b  5d                   pop ebp
// 0059996c  5e                   pop esi
// 0059996d  83c420               add esp, 0x20
// 00599970  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_codes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
