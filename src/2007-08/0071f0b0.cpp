// from server: 100% by auto
// roc 2007-08 0071f0b0  unit: CXTPDialogBar  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071f0b0
//
// 0071f0b0  53                   push ebx
// 0071f0b1  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 0071f0b4  55                   push ebp
// 0071f0b5  56                   push esi
// 0071f0b6  8b6f3c               mov ebp, dword ptr [edi + 0x3c]
// 0071f0b9  2b6f74               sub ebp, dword ptr [edi + 0x74]
// 0071f0bc  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f0bf  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0071f0c2  8d940bfafeffff       lea edx, [ebx + ecx - 0x106]
// 0071f0c9  2be8                 sub ebp, eax
// 0071f0cb  3bc2                 cmp eax, edx
// 0071f0cd  725f                 jb 0x71f12e
// 0071f0cf  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f0d2  53                   push ebx
// 0071f0d3  8d0c18               lea ecx, [eax + ebx]
// 0071f0d6  51                   push ecx
// 0071f0d7  50                   push eax
// 0071f0d8  e86f1cf1ff           call 0x630d4c
// 0071f0dd  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0071f0e0  8b4744               mov eax, dword ptr [edi + 0x44]
// 0071f0e3  295f70               sub dword ptr [edi + 0x70], ebx
// 0071f0e6  295f6c               sub dword ptr [edi + 0x6c], ebx
// 0071f0e9  83c40c               add esp, 0xc
// 0071f0ec  295f5c               sub dword ptr [edi + 0x5c], ebx
// 0071f0ef  8d0c50               lea ecx, [eax + edx*2]
// 0071f0f2  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0071f0f6  83e902               sub ecx, 2
// 0071f0f9  3bc3                 cmp eax, ebx
// 0071f0fb  7204                 jb 0x71f101
// 0071f0fd  2bc3                 sub eax, ebx
// 0071f0ff  eb02                 jmp 0x71f103
// 0071f101  33c0                 xor eax, eax
// 0071f103  83ea01               sub edx, 1
// 0071f106  668901               mov word ptr [ecx], ax
// 0071f109  75e7                 jne 0x71f0f2
// 0071f10b  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0071f10e  8bd3                 mov edx, ebx
// 0071f110  8d0c59               lea ecx, [ecx + ebx*2]
// 0071f113  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0071f117  83e902               sub ecx, 2
// 0071f11a  3bc3                 cmp eax, ebx
// 0071f11c  7204                 jb 0x71f122
// 0071f11e  2bc3                 sub eax, ebx
// 0071f120  eb02                 jmp 0x71f124
// 0071f122  33c0                 xor eax, eax
// 0071f124  83ea01               sub edx, 1
// 0071f127  668901               mov word ptr [ecx], ax
// 0071f12a  75e7                 jne 0x71f113
// 0071f12c  03eb                 add ebp, ebx
// 0071f12e  8b37                 mov esi, dword ptr [edi]
// 0071f130  837e0400             cmp dword ptr [esi + 4], 0
// 0071f134  7453                 je 0x71f189
// 0071f136  8b5774               mov edx, dword ptr [edi + 0x74]
// 0071f139  03576c               add edx, dword ptr [edi + 0x6c]
// 0071f13c  8bcd                 mov ecx, ebp
// 0071f13e  035738               add edx, dword ptr [edi + 0x38]
// 0071f141  52                   push edx
// 0071f142  e8a9fcffff           call 0x71edf0
// 0071f147  014774               add dword ptr [edi + 0x74], eax
// 0071f14a  8b5774               mov edx, dword ptr [edi + 0x74]
// 0071f14d  83c404               add esp, 4
// 0071f150  83fa03               cmp edx, 3
// 0071f153  7220                 jb 0x71f175
// 0071f155  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f158  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071f15b  8d3408               lea esi, [eax + ecx]
// 0071f15e  0fb606               movzx eax, byte ptr [esi]
// 0071f161  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0071f164  894748               mov dword ptr [edi + 0x48], eax
// 0071f167  d3e0                 shl eax, cl
// 0071f169  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0071f16d  33c1                 xor eax, ecx
// 0071f16f  234754               and eax, dword ptr [edi + 0x54]
// 0071f172  894748               mov dword ptr [edi + 0x48], eax
// 0071f175  81fa06010000         cmp edx, 0x106
// 0071f17b  730c                 jae 0x71f189
// 0071f17d  8b17                 mov edx, dword ptr [edi]
// 0071f17f  837a0400             cmp dword ptr [edx + 4], 0
// 0071f183  0f852dffffff         jne 0x71f0b6
// 0071f189  5e                   pop esi
// 0071f18a  5d                   pop ebp
// 0071f18b  5b                   pop ebx
// 0071f18c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
