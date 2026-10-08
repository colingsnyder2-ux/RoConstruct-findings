// from server: 100% by auto
// roc 2011-06 008ffd80  unit: CXTPRibbonSystemPopupBar  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ffd80
//
// 008ffd80  53                   push ebx
// 008ffd81  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 008ffd84  55                   push ebp
// 008ffd85  56                   push esi
// 008ffd86  8b6f3c               mov ebp, dword ptr [edi + 0x3c]
// 008ffd89  2b6f74               sub ebp, dword ptr [edi + 0x74]
// 008ffd8c  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008ffd8f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008ffd92  8d940bfafeffff       lea edx, [ebx + ecx - 0x106]
// 008ffd99  2be8                 sub ebp, eax
// 008ffd9b  3bc2                 cmp eax, edx
// 008ffd9d  725f                 jb 0x8ffdfe
// 008ffd9f  8b4738               mov eax, dword ptr [edi + 0x38]
// 008ffda2  53                   push ebx
// 008ffda3  8d0c18               lea ecx, [eax + ebx]
// 008ffda6  51                   push ecx
// 008ffda7  50                   push eax
// 008ffda8  e82fb8f0ff           call 0x80b5dc
// 008ffdad  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008ffdb0  8b4744               mov eax, dword ptr [edi + 0x44]
// 008ffdb3  295f70               sub dword ptr [edi + 0x70], ebx
// 008ffdb6  295f6c               sub dword ptr [edi + 0x6c], ebx
// 008ffdb9  83c40c               add esp, 0xc
// 008ffdbc  295f5c               sub dword ptr [edi + 0x5c], ebx
// 008ffdbf  8d0c50               lea ecx, [eax + edx*2]
// 008ffdc2  0fb741fe             movzx eax, word ptr [ecx - 2]
// 008ffdc6  83e902               sub ecx, 2
// 008ffdc9  3bc3                 cmp eax, ebx
// 008ffdcb  7204                 jb 0x8ffdd1
// 008ffdcd  2bc3                 sub eax, ebx
// 008ffdcf  eb02                 jmp 0x8ffdd3
// 008ffdd1  33c0                 xor eax, eax
// 008ffdd3  83ea01               sub edx, 1
// 008ffdd6  668901               mov word ptr [ecx], ax
// 008ffdd9  75e7                 jne 0x8ffdc2
// 008ffddb  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008ffdde  8bd3                 mov edx, ebx
// 008ffde0  8d0c59               lea ecx, [ecx + ebx*2]
// 008ffde3  0fb741fe             movzx eax, word ptr [ecx - 2]
// 008ffde7  83e902               sub ecx, 2
// 008ffdea  3bc3                 cmp eax, ebx
// 008ffdec  7204                 jb 0x8ffdf2
// 008ffdee  2bc3                 sub eax, ebx
// 008ffdf0  eb02                 jmp 0x8ffdf4
// 008ffdf2  33c0                 xor eax, eax
// 008ffdf4  83ea01               sub edx, 1
// 008ffdf7  668901               mov word ptr [ecx], ax
// 008ffdfa  75e7                 jne 0x8ffde3
// 008ffdfc  03eb                 add ebp, ebx
// 008ffdfe  8b37                 mov esi, dword ptr [edi]
// 008ffe00  837e0400             cmp dword ptr [esi + 4], 0
// 008ffe04  7453                 je 0x8ffe59
// 008ffe06  8b5774               mov edx, dword ptr [edi + 0x74]
// 008ffe09  03576c               add edx, dword ptr [edi + 0x6c]
// 008ffe0c  8bcd                 mov ecx, ebp
// 008ffe0e  035738               add edx, dword ptr [edi + 0x38]
// 008ffe11  52                   push edx
// 008ffe12  e899fdffff           call 0x8ffbb0
// 008ffe17  014774               add dword ptr [edi + 0x74], eax
// 008ffe1a  8b5774               mov edx, dword ptr [edi + 0x74]
// 008ffe1d  83c404               add esp, 4
// 008ffe20  83fa03               cmp edx, 3
// 008ffe23  7220                 jb 0x8ffe45
// 008ffe25  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008ffe28  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008ffe2b  8d3408               lea esi, [eax + ecx]
// 008ffe2e  0fb606               movzx eax, byte ptr [esi]
// 008ffe31  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008ffe34  894748               mov dword ptr [edi + 0x48], eax
// 008ffe37  d3e0                 shl eax, cl
// 008ffe39  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 008ffe3d  33c1                 xor eax, ecx
// 008ffe3f  234754               and eax, dword ptr [edi + 0x54]
// 008ffe42  894748               mov dword ptr [edi + 0x48], eax
// 008ffe45  81fa06010000         cmp edx, 0x106
// 008ffe4b  730c                 jae 0x8ffe59
// 008ffe4d  8b17                 mov edx, dword ptr [edi]
// 008ffe4f  837a0400             cmp dword ptr [edx + 4], 0
// 008ffe53  0f852dffffff         jne 0x8ffd86
// 008ffe59  5e                   pop esi
// 008ffe5a  5d                   pop ebp
// 008ffe5b  5b                   pop ebx
// 008ffe5c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
