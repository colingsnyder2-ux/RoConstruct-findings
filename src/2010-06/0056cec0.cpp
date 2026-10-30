// roc 2010-06 0056cec0  unit: seg_00560000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056cec0
//
// 0056cec0  53                   push ebx
// 0056cec1  56                   push esi
// 0056cec2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056cec6  8b4628               mov eax, dword ptr [esi + 0x28]
// 0056cec9  57                   push edi
// 0056ceca  83f805               cmp eax, 5
// 0056cecd  0f877c020000         ja 0x56d14f
// 0056ced3  ff248568d15600       jmp dword ptr [eax*4 + 0x56d168]
// 0056ceda  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056cede  741b                 je 0x56cefb
// 0056cee0  8b06                 mov eax, dword ptr [esi]
// 0056cee2  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056cee9  8b0e                 mov ecx, dword ptr [esi]
// 0056ceeb  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056ceee  895118               mov dword ptr [ecx + 0x18], edx
// 0056cef1  8b06                 mov eax, dword ptr [esi]
// 0056cef3  8b08                 mov ecx, dword ptr [eax]
// 0056cef5  56                   push esi
// 0056cef6  ffd1                 call ecx
// 0056cef8  83c404               add esp, 4
// 0056cefb  b801000000           mov eax, 1
// 0056cf00  894640               mov dword ptr [esi + 0x40], eax
// 0056cf03  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0056cf09  89463c               mov dword ptr [esi + 0x3c], eax
// 0056cf0c  33c9                 xor ecx, ecx
// 0056cf0e  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 0056cf14  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cf17  5f                   pop edi
// 0056cf18  8906                 mov dword ptr [esi], eax
// 0056cf1a  894608               mov dword ptr [esi + 8], eax
// 0056cf1d  89460c               mov dword ptr [esi + 0xc], eax
// 0056cf20  894e10               mov dword ptr [esi + 0x10], ecx
// 0056cf23  894e14               mov dword ptr [esi + 0x14], ecx
// 0056cf26  894e18               mov dword ptr [esi + 0x18], ecx
// 0056cf29  5e                   pop esi
// 0056cf2a  5b                   pop ebx
// 0056cf2b  c3                   ret 
// 0056cf2c  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056cf30  741b                 je 0x56cf4d
// 0056cf32  8b16                 mov edx, dword ptr [esi]
// 0056cf34  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0056cf3b  8b06                 mov eax, dword ptr [esi]
// 0056cf3d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0056cf40  894818               mov dword ptr [eax + 0x18], ecx
// 0056cf43  8b16                 mov edx, dword ptr [esi]
// 0056cf45  8b02                 mov eax, dword ptr [edx]
// 0056cf47  56                   push esi
// 0056cf48  ffd0                 call eax
// 0056cf4a  83c404               add esp, 4
// 0056cf4d  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056cf50  b801000000           mov eax, 1
// 0056cf55  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0056cf5b  33c9                 xor ecx, ecx
// 0056cf5d  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 0056cf63  bb03000000           mov ebx, 3
// 0056cf68  895e40               mov dword ptr [esi + 0x40], ebx
// 0056cf6b  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0056cf6e  8902                 mov dword ptr [edx], eax
// 0056cf70  bf02000000           mov edi, 2
// 0056cf75  897a08               mov dword ptr [edx + 8], edi
// 0056cf78  897a0c               mov dword ptr [edx + 0xc], edi
// 0056cf7b  894a10               mov dword ptr [edx + 0x10], ecx
// 0056cf7e  894a14               mov dword ptr [edx + 0x14], ecx
// 0056cf81  894a18               mov dword ptr [edx + 0x18], ecx
// 0056cf84  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0056cf87  897954               mov dword ptr [ecx + 0x54], edi
// 0056cf8a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0056cf8d  83c154               add ecx, 0x54
// 0056cf90  89410c               mov dword ptr [ecx + 0xc], eax
// 0056cf93  894110               mov dword ptr [ecx + 0x10], eax
// 0056cf96  894114               mov dword ptr [ecx + 0x14], eax
// 0056cf99  894118               mov dword ptr [ecx + 0x18], eax
// 0056cf9c  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cf9f  81c6a8000000         add esi, 0xa8
// 0056cfa5  891e                 mov dword ptr [esi], ebx
// 0056cfa7  894608               mov dword ptr [esi + 8], eax
// 0056cfaa  89460c               mov dword ptr [esi + 0xc], eax
// 0056cfad  894610               mov dword ptr [esi + 0x10], eax
// 0056cfb0  894614               mov dword ptr [esi + 0x14], eax
// 0056cfb3  5f                   pop edi
// 0056cfb4  894618               mov dword ptr [esi + 0x18], eax
// 0056cfb7  5e                   pop esi
// 0056cfb8  5b                   pop ebx
// 0056cfb9  c3                   ret 
// 0056cfba  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056cfbe  748d                 je 0x56cf4d
// 0056cfc0  8b0e                 mov ecx, dword ptr [esi]
// 0056cfc2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 0056cfc9  8b16                 mov edx, dword ptr [esi]
// 0056cfcb  8b4614               mov eax, dword ptr [esi + 0x14]
// 0056cfce  894218               mov dword ptr [edx + 0x18], eax
// 0056cfd1  8b0e                 mov ecx, dword ptr [esi]
// 0056cfd3  8b11                 mov edx, dword ptr [ecx]
// 0056cfd5  56                   push esi
// 0056cfd6  ffd2                 call edx
// 0056cfd8  e96dffffff           jmp 0x56cf4a
// 0056cfdd  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056cfe1  741b                 je 0x56cffe
// 0056cfe3  8b06                 mov eax, dword ptr [esi]
// 0056cfe5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056cfec  8b0e                 mov ecx, dword ptr [esi]
// 0056cfee  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056cff1  895118               mov dword ptr [ecx + 0x18], edx
// 0056cff4  8b06                 mov eax, dword ptr [esi]
// 0056cff6  8b08                 mov ecx, dword ptr [eax]
// 0056cff8  56                   push esi
// 0056cff9  ffd1                 call ecx
// 0056cffb  83c404               add esp, 4
// 0056cffe  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d001  33c9                 xor ecx, ecx
// 0056d003  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0056d009  b801000000           mov eax, 1
// 0056d00e  8886cc000000         mov byte ptr [esi + 0xcc], al
// 0056d014  bb04000000           mov ebx, 4
// 0056d019  895e40               mov dword ptr [esi + 0x40], ebx
// 0056d01c  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0056d01f  c70243000000         mov dword ptr [edx], 0x43
// 0056d025  894208               mov dword ptr [edx + 8], eax
// 0056d028  89420c               mov dword ptr [edx + 0xc], eax
// 0056d02b  894a10               mov dword ptr [edx + 0x10], ecx
// 0056d02e  894a14               mov dword ptr [edx + 0x14], ecx
// 0056d031  894a18               mov dword ptr [edx + 0x18], ecx
// 0056d034  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d037  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 0056d03e  89425c               mov dword ptr [edx + 0x5c], eax
// 0056d041  894260               mov dword ptr [edx + 0x60], eax
// 0056d044  894a64               mov dword ptr [edx + 0x64], ecx
// 0056d047  894a68               mov dword ptr [edx + 0x68], ecx
// 0056d04a  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0056d04d  83c254               add edx, 0x54
// 0056d050  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d053  81c2a8000000         add edx, 0xa8
// 0056d059  c70259000000         mov dword ptr [edx], 0x59
// 0056d05f  894208               mov dword ptr [edx + 8], eax
// 0056d062  89420c               mov dword ptr [edx + 0xc], eax
// 0056d065  894a10               mov dword ptr [edx + 0x10], ecx
// 0056d068  894a14               mov dword ptr [edx + 0x14], ecx
// 0056d06b  894a18               mov dword ptr [edx + 0x18], ecx
// 0056d06e  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056d071  81c6fc000000         add esi, 0xfc
// 0056d077  5f                   pop edi
// 0056d078  c7064b000000         mov dword ptr [esi], 0x4b
// 0056d07e  894608               mov dword ptr [esi + 8], eax
// 0056d081  89460c               mov dword ptr [esi + 0xc], eax
// 0056d084  894e10               mov dword ptr [esi + 0x10], ecx
// 0056d087  894e14               mov dword ptr [esi + 0x14], ecx
// 0056d08a  894e18               mov dword ptr [esi + 0x18], ecx
// 0056d08d  5e                   pop esi
// 0056d08e  5b                   pop ebx
// 0056d08f  c3                   ret 
// 0056d090  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056d094  741b                 je 0x56d0b1
// 0056d096  8b16                 mov edx, dword ptr [esi]
// 0056d098  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0056d09f  8b06                 mov eax, dword ptr [esi]
// 0056d0a1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0056d0a4  894818               mov dword ptr [eax + 0x18], ecx
// 0056d0a7  8b16                 mov edx, dword ptr [esi]
// 0056d0a9  8b02                 mov eax, dword ptr [edx]
// 0056d0ab  56                   push esi
// 0056d0ac  ffd0                 call eax
// 0056d0ae  83c404               add esp, 4
// 0056d0b1  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d0b4  c7464005000000       mov dword ptr [esi + 0x40], 5
// 0056d0bb  b801000000           mov eax, 1
// 0056d0c0  8886cc000000         mov byte ptr [esi + 0xcc], al
// 0056d0c6  33c9                 xor ecx, ecx
// 0056d0c8  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0056d0ce  bf02000000           mov edi, 2
// 0056d0d3  bb04000000           mov ebx, 4
// 0056d0d8  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0056d0db  897a08               mov dword ptr [edx + 8], edi
// 0056d0de  897a0c               mov dword ptr [edx + 0xc], edi
// 0056d0e1  8902                 mov dword ptr [edx], eax
// 0056d0e3  894a10               mov dword ptr [edx + 0x10], ecx
// 0056d0e6  894a14               mov dword ptr [edx + 0x14], ecx
// 0056d0e9  894a18               mov dword ptr [edx + 0x18], ecx
// 0056d0ec  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d0ef  897a54               mov dword ptr [edx + 0x54], edi
// 0056d0f2  89425c               mov dword ptr [edx + 0x5c], eax
// 0056d0f5  894260               mov dword ptr [edx + 0x60], eax
// 0056d0f8  894264               mov dword ptr [edx + 0x64], eax
// 0056d0fb  894268               mov dword ptr [edx + 0x68], eax
// 0056d0fe  89426c               mov dword ptr [edx + 0x6c], eax
// 0056d101  83c254               add edx, 0x54
// 0056d104  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d107  81c2a8000000         add edx, 0xa8
// 0056d10d  c70203000000         mov dword ptr [edx], 3
// 0056d113  894208               mov dword ptr [edx + 8], eax
// 0056d116  89420c               mov dword ptr [edx + 0xc], eax
// 0056d119  894210               mov dword ptr [edx + 0x10], eax
// 0056d11c  894214               mov dword ptr [edx + 0x14], eax
// 0056d11f  894218               mov dword ptr [edx + 0x18], eax
// 0056d122  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056d125  81c6fc000000         add esi, 0xfc
// 0056d12b  897e08               mov dword ptr [esi + 8], edi
// 0056d12e  897e0c               mov dword ptr [esi + 0xc], edi
// 0056d131  5f                   pop edi
// 0056d132  891e                 mov dword ptr [esi], ebx
// 0056d134  894e10               mov dword ptr [esi + 0x10], ecx
// 0056d137  894e14               mov dword ptr [esi + 0x14], ecx
// 0056d13a  894e18               mov dword ptr [esi + 0x18], ecx
// 0056d13d  5e                   pop esi
// 0056d13e  5b                   pop ebx
// 0056d13f  c3                   ret 
// 0056d140  6a00                 push 0
// 0056d142  56                   push esi
// 0056d143  e888faffff           call 0x56cbd0
// 0056d148  83c408               add esp, 8
// 0056d14b  5f                   pop edi
// 0056d14c  5e                   pop esi
// 0056d14d  5b                   pop ebx
// 0056d14e  c3                   ret 
// 0056d14f  8b0e                 mov ecx, dword ptr [esi]
// 0056d151  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 0056d158  8b16                 mov edx, dword ptr [esi]
// 0056d15a  8b02                 mov eax, dword ptr [edx]
// 0056d15c  56                   push esi
// 0056d15d  ffd0                 call eax
// 0056d15f  83c404               add esp, 4
// 0056d162  5f                   pop edi
// 0056d163  5e                   pop esi
// 0056d164  5b                   pop ebx
// 0056d165  c3                   ret 
// 0056d166  8bff                 mov edi, edi
// 0056d168  40                   inc eax
// 0056d169  d15600               rcl dword ptr [esi]
// 0056d16c  dace                 fcmove st(0), st(6)
// 0056d16e  56                   push esi
// 0056d16f  002ccf               add byte ptr [edi + ecx*8], ch
// 0056d172  56                   push esi
// 0056d173  00bacf5600dd         add byte ptr [edx - 0x22ffa931], bh
// 0056d179  cf                   iretd 
// 0056d17a  56                   push esi
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
