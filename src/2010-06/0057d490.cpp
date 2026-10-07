// roc 2010-06 0057d490  unit: seg_00570000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d490
//
// 0057d490  83ec20               sub esp, 0x20
// 0057d493  56                   push esi
// 0057d494  8d742406             lea esi, [esp + 6]
// 0057d498  33c9                 xor ecx, ecx
// 0057d49a  b801000000           mov eax, 1
// 0057d49f  2bd6                 sub edx, esi
// 0057d4a1  8d3442               lea esi, [edx + eax*2]
// 0057d4a4  668b743404           mov si, word ptr [esp + esi + 4]
// 0057d4a9  6603f1               add si, cx
// 0057d4ac  6603f6               add si, si
// 0057d4af  0fb7ce               movzx ecx, si
// 0057d4b2  66894c4404           mov word ptr [esp + eax*2 + 4], cx
// 0057d4b7  40                   inc eax
// 0057d4b8  83f80f               cmp eax, 0xf
// 0057d4bb  7ee4                 jle 0x57d4a1
// 0057d4bd  33f6                 xor esi, esi
// 0057d4bf  85db                 test ebx, ebx
// 0057d4c1  7c39                 jl 0x57d4fc
// 0057d4c3  55                   push ebp
// 0057d4c4  0fb754b702           movzx edx, word ptr [edi + esi*4 + 2]
// 0057d4c9  85d2                 test edx, edx
// 0057d4cb  7429                 je 0x57d4f6
// 0057d4cd  0fb7445408           movzx eax, word ptr [esp + edx*2 + 8]
// 0057d4d2  0fb7c8               movzx ecx, ax
// 0057d4d5  40                   inc eax
// 0057d4d6  6689445408           mov word ptr [esp + edx*2 + 8], ax
// 0057d4db  33c0                 xor eax, eax
// 0057d4dd  8d4900               lea ecx, [ecx]
// 0057d4e0  8be9                 mov ebp, ecx
// 0057d4e2  83e501               and ebp, 1
// 0057d4e5  0bc5                 or eax, ebp
// 0057d4e7  4a                   dec edx
// 0057d4e8  d1e9                 shr ecx, 1
// 0057d4ea  03c0                 add eax, eax
// 0057d4ec  85d2                 test edx, edx
// 0057d4ee  7ff0                 jg 0x57d4e0
// 0057d4f0  d1e8                 shr eax, 1
// 0057d4f2  668904b7             mov word ptr [edi + esi*4], ax
// 0057d4f6  46                   inc esi
// 0057d4f7  3bf3                 cmp esi, ebx
// 0057d4f9  7ec9                 jle 0x57d4c4
// 0057d4fb  5d                   pop ebp
// 0057d4fc  5e                   pop esi
// 0057d4fd  83c420               add esp, 0x20
// 0057d500  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_codes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
