// from server: 100% by auto
// roc 2012-06 00a77fa0  unit: CXTPRibbonSystemPopupBar  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77fa0
//
// 00a77fa0  53                   push ebx
// 00a77fa1  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00a77fa4  55                   push ebp
// 00a77fa5  56                   push esi
// 00a77fa6  8b6f3c               mov ebp, dword ptr [edi + 0x3c]
// 00a77fa9  2b6f74               sub ebp, dword ptr [edi + 0x74]
// 00a77fac  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a77faf  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a77fb2  8d940bfafeffff       lea edx, [ebx + ecx - 0x106]
// 00a77fb9  2be8                 sub ebp, eax
// 00a77fbb  3bc2                 cmp eax, edx
// 00a77fbd  725f                 jb 0xa7801e
// 00a77fbf  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a77fc2  53                   push ebx
// 00a77fc3  8d0c18               lea ecx, [eax + ebx]
// 00a77fc6  51                   push ecx
// 00a77fc7  50                   push eax
// 00a77fc8  e88fb6f0ff           call 0x98365c
// 00a77fcd  8b574c               mov edx, dword ptr [edi + 0x4c]
// 00a77fd0  8b4744               mov eax, dword ptr [edi + 0x44]
// 00a77fd3  295f70               sub dword ptr [edi + 0x70], ebx
// 00a77fd6  295f6c               sub dword ptr [edi + 0x6c], ebx
// 00a77fd9  83c40c               add esp, 0xc
// 00a77fdc  295f5c               sub dword ptr [edi + 0x5c], ebx
// 00a77fdf  8d0c50               lea ecx, [eax + edx*2]
// 00a77fe2  0fb741fe             movzx eax, word ptr [ecx - 2]
// 00a77fe6  83e902               sub ecx, 2
// 00a77fe9  3bc3                 cmp eax, ebx
// 00a77feb  7204                 jb 0xa77ff1
// 00a77fed  2bc3                 sub eax, ebx
// 00a77fef  eb02                 jmp 0xa77ff3
// 00a77ff1  33c0                 xor eax, eax
// 00a77ff3  83ea01               sub edx, 1
// 00a77ff6  668901               mov word ptr [ecx], ax
// 00a77ff9  75e7                 jne 0xa77fe2
// 00a77ffb  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a77ffe  8bd3                 mov edx, ebx
// 00a78000  8d0c59               lea ecx, [ecx + ebx*2]
// 00a78003  0fb741fe             movzx eax, word ptr [ecx - 2]
// 00a78007  83e902               sub ecx, 2
// 00a7800a  3bc3                 cmp eax, ebx
// 00a7800c  7204                 jb 0xa78012
// 00a7800e  2bc3                 sub eax, ebx
// 00a78010  eb02                 jmp 0xa78014
// 00a78012  33c0                 xor eax, eax
// 00a78014  83ea01               sub edx, 1
// 00a78017  668901               mov word ptr [ecx], ax
// 00a7801a  75e7                 jne 0xa78003
// 00a7801c  03eb                 add ebp, ebx
// 00a7801e  8b37                 mov esi, dword ptr [edi]
// 00a78020  837e0400             cmp dword ptr [esi + 4], 0
// 00a78024  7453                 je 0xa78079
// 00a78026  8b5774               mov edx, dword ptr [edi + 0x74]
// 00a78029  03576c               add edx, dword ptr [edi + 0x6c]
// 00a7802c  8bcd                 mov ecx, ebp
// 00a7802e  035738               add edx, dword ptr [edi + 0x38]
// 00a78031  52                   push edx
// 00a78032  e8f9feffff           call 0xa77f30
// 00a78037  014774               add dword ptr [edi + 0x74], eax
// 00a7803a  8b5774               mov edx, dword ptr [edi + 0x74]
// 00a7803d  83c404               add esp, 4
// 00a78040  83fa03               cmp edx, 3
// 00a78043  7220                 jb 0xa78065
// 00a78045  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a78048  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a7804b  8d3408               lea esi, [eax + ecx]
// 00a7804e  0fb606               movzx eax, byte ptr [esi]
// 00a78051  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a78054  894748               mov dword ptr [edi + 0x48], eax
// 00a78057  d3e0                 shl eax, cl
// 00a78059  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00a7805d  33c1                 xor eax, ecx
// 00a7805f  234754               and eax, dword ptr [edi + 0x54]
// 00a78062  894748               mov dword ptr [edi + 0x48], eax
// 00a78065  81fa06010000         cmp edx, 0x106
// 00a7806b  730c                 jae 0xa78079
// 00a7806d  8b17                 mov edx, dword ptr [edi]
// 00a7806f  837a0400             cmp dword ptr [edx + 4], 0
// 00a78073  0f852dffffff         jne 0xa77fa6
// 00a78079  5e                   pop esi
// 00a7807a  5d                   pop ebp
// 00a7807b  5b                   pop ebx
// 00a7807c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
