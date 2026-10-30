// from server: 100% by auto
// roc 2008-06 0051b720  unit: G3D::_internal::DialogTemplate  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b720
//
// 0051b720  53                   push ebx
// 0051b721  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051b725  f7436800040000       test dword ptr [ebx + 0x68], 0x400
// 0051b72c  0f85b1010000         jne 0x51b8e3
// 0051b732  56                   push esi
// 0051b733  57                   push edi
// 0051b734  53                   push ebx
// 0051b735  e8b6ad0000           call 0x5264f0
// 0051b73a  bf00100000           mov edi, 0x1000
// 0051b73f  83c404               add esp, 4
// 0051b742  857b68               test dword ptr [ebx + 0x68], edi
// 0051b745  7421                 je 0x51b768
// 0051b747  83bb3002000000       cmp dword ptr [ebx + 0x230], 0
// 0051b74e  7418                 je 0x51b768
// 0051b750  68388d8200           push 0x828d38
// 0051b755  53                   push ebx
// 0051b756  e8f5e20000           call 0x529a50
// 0051b75b  83c408               add esp, 8
// 0051b75e  c7833002000000000000 mov dword ptr [ebx + 0x230], 0
// 0051b768  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051b76c  0fb6461c             movzx eax, byte ptr [esi + 0x1c]
// 0051b770  0fb64e1b             movzx ecx, byte ptr [esi + 0x1b]
// 0051b774  0fb6561a             movzx edx, byte ptr [esi + 0x1a]
// 0051b778  50                   push eax
// 0051b779  0fb64619             movzx eax, byte ptr [esi + 0x19]
// 0051b77d  51                   push ecx
// 0051b77e  0fb64e18             movzx ecx, byte ptr [esi + 0x18]
// 0051b782  52                   push edx
// 0051b783  8b5604               mov edx, dword ptr [esi + 4]
// 0051b786  50                   push eax
// 0051b787  8b06                 mov eax, dword ptr [esi]
// 0051b789  51                   push ecx
// 0051b78a  52                   push edx
// 0051b78b  50                   push eax
// 0051b78c  53                   push ebx
// 0051b78d  e89ebe0000           call 0x527630
// 0051b792  83c420               add esp, 0x20
// 0051b795  f6460801             test byte ptr [esi + 8], 1
// 0051b799  7412                 je 0x51b7ad
// 0051b79b  d94628               fld dword ptr [esi + 0x28]
// 0051b79e  83ec08               sub esp, 8
// 0051b7a1  dd1c24               fstp qword ptr [esp]
// 0051b7a4  53                   push ebx
// 0051b7a5  e8d6c30000           call 0x527b80
// 0051b7aa  83c40c               add esp, 0xc
// 0051b7ad  f7460800080000       test dword ptr [esi + 8], 0x800
// 0051b7b4  740e                 je 0x51b7c4
// 0051b7b6  0fb64e2c             movzx ecx, byte ptr [esi + 0x2c]
// 0051b7ba  51                   push ecx
// 0051b7bb  53                   push ebx
// 0051b7bc  e87fc40000           call 0x527c40
// 0051b7c1  83c408               add esp, 8
// 0051b7c4  857e08               test dword ptr [esi + 8], edi
// 0051b7c7  7420                 je 0x51b7e9
// 0051b7c9  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0051b7cf  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0051b7d5  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0051b7db  52                   push edx
// 0051b7dc  50                   push eax
// 0051b7dd  6a00                 push 0
// 0051b7df  51                   push ecx
// 0051b7e0  53                   push ebx
// 0051b7e1  e8dac40000           call 0x527cc0
// 0051b7e6  83c414               add esp, 0x14
// 0051b7e9  f6460802             test byte ptr [esi + 8], 2
// 0051b7ed  7412                 je 0x51b801
// 0051b7ef  0fb65619             movzx edx, byte ptr [esi + 0x19]
// 0051b7f3  52                   push edx
// 0051b7f4  8d4644               lea eax, [esi + 0x44]
// 0051b7f7  50                   push eax
// 0051b7f8  53                   push ebx
// 0051b7f9  e892c70000           call 0x527f90
// 0051b7fe  83c40c               add esp, 0xc
// 0051b801  f6460804             test byte ptr [esi + 8], 4
// 0051b805  745b                 je 0x51b862
// 0051b807  d9869c000000         fld dword ptr [esi + 0x9c]
// 0051b80d  83ec40               sub esp, 0x40
// 0051b810  dd5c2438             fstp qword ptr [esp + 0x38]
// 0051b814  d98698000000         fld dword ptr [esi + 0x98]
// 0051b81a  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051b81e  d98694000000         fld dword ptr [esi + 0x94]
// 0051b824  dd5c2428             fstp qword ptr [esp + 0x28]
// 0051b828  d98690000000         fld dword ptr [esi + 0x90]
// 0051b82e  dd5c2420             fstp qword ptr [esp + 0x20]
// 0051b832  d9868c000000         fld dword ptr [esi + 0x8c]
// 0051b838  dd5c2418             fstp qword ptr [esp + 0x18]
// 0051b83c  d98688000000         fld dword ptr [esi + 0x88]
// 0051b842  dd5c2410             fstp qword ptr [esp + 0x10]
// 0051b846  d98684000000         fld dword ptr [esi + 0x84]
// 0051b84c  dd5c2408             fstp qword ptr [esp + 8]
// 0051b850  d98680000000         fld dword ptr [esi + 0x80]
// 0051b856  dd1c24               fstp qword ptr [esp]
// 0051b859  53                   push ebx
// 0051b85a  e8f1c70000           call 0x528050
// 0051b85f  83c444               add esp, 0x44
// 0051b862  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051b868  85c0                 test eax, eax
// 0051b86a  746e                 je 0x51b8da
// 0051b86c  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0051b872  8d0c80               lea ecx, [eax + eax*4]
// 0051b875  8d148f               lea edx, [edi + ecx*4]
// 0051b878  3bfa                 cmp edi, edx
// 0051b87a  735e                 jae 0x51b8da
// 0051b87c  8d642400             lea esp, [esp]
// 0051b880  57                   push edi
// 0051b881  53                   push ebx
// 0051b882  e849290000           call 0x51e1d0
// 0051b887  83c408               add esp, 8
// 0051b88a  83f801               cmp eax, 1
// 0051b88d  7432                 je 0x51b8c1
// 0051b88f  8a4f10               mov cl, byte ptr [edi + 0x10]
// 0051b892  84c9                 test cl, cl
// 0051b894  742b                 je 0x51b8c1
// 0051b896  f6c106               test cl, 6
// 0051b899  7526                 jne 0x51b8c1
// 0051b89b  f6470320             test byte ptr [edi + 3], 0x20
// 0051b89f  750e                 jne 0x51b8af
// 0051b8a1  83f803               cmp eax, 3
// 0051b8a4  7409                 je 0x51b8af
// 0051b8a6  f7436c00000100       test dword ptr [ebx + 0x6c], 0x10000
// 0051b8ad  7412                 je 0x51b8c1
// 0051b8af  8b470c               mov eax, dword ptr [edi + 0xc]
// 0051b8b2  8b4f08               mov ecx, dword ptr [edi + 8]
// 0051b8b5  50                   push eax
// 0051b8b6  51                   push ecx
// 0051b8b7  57                   push edi
// 0051b8b8  53                   push ebx
// 0051b8b9  e8f2bc0000           call 0x5275b0
// 0051b8be  83c410               add esp, 0x10
// 0051b8c1  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051b8c7  8d1480               lea edx, [eax + eax*4]
// 0051b8ca  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0051b8d0  83c714               add edi, 0x14
// 0051b8d3  8d0c90               lea ecx, [eax + edx*4]
// 0051b8d6  3bf9                 cmp edi, ecx
// 0051b8d8  72a6                 jb 0x51b880
// 0051b8da  814b6800040000       or dword ptr [ebx + 0x68], 0x400
// 0051b8e1  5f                   pop edi
// 0051b8e2  5e                   pop esi
// 0051b8e3  5b                   pop ebx
// 0051b8e4  c3                   ret 
// library libpng-1.2.6/pngwrite.c (function _png_write_info_before_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwrite.c
