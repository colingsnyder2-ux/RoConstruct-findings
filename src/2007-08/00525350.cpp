// from server: 100% by auto
// roc 2007-08 00525350  unit: G3D::Line  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00525350
//
// 00525350  83ec08               sub esp, 8
// 00525353  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0052535a  56                   push esi
// 0052535b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00525361  c644240700           mov byte ptr [esp + 7], 0
// 00525366  0f843d010000         je 0x5254a9
// 0052536c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00525373  0f8430010000         je 0x5254a9
// 00525379  837e7000             cmp dword ptr [esi + 0x70], 0
// 0052537d  53                   push ebx
// 0052537e  bb01000000           mov ebx, 1
// 00525383  751c                 jne 0x5253a1
// 00525385  8b4724               mov eax, dword ptr [edi + 0x24]
// 00525388  8b4f04               mov ecx, dword ptr [edi + 4]
// 0052538b  8d1440               lea edx, [eax + eax*2]
// 0052538e  8b01                 mov eax, dword ptr [ecx]
// 00525390  03d2                 add edx, edx
// 00525392  03d2                 add edx, edx
// 00525394  03d2                 add edx, edx
// 00525396  52                   push edx
// 00525397  53                   push ebx
// 00525398  57                   push edi
// 00525399  ffd0                 call eax
// 0052539b  83c40c               add esp, 0xc
// 0052539e  894670               mov dword ptr [esi + 0x70], eax
// 005253a1  8b5670               mov edx, dword ptr [esi + 0x70]
// 005253a4  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 005253aa  33f6                 xor esi, esi
// 005253ac  397724               cmp dword ptr [edi + 0x24], esi
// 005253af  55                   push ebp
// 005253b0  0f8edf000000         jle 0x525495
// 005253b6  33ed                 xor ebp, ebp
// 005253b8  83c04c               add eax, 0x4c
// 005253bb  89442410             mov dword ptr [esp + 0x10], eax
// 005253bf  90                   nop 
// 005253c0  8b00                 mov eax, dword ptr [eax]
// 005253c2  85c0                 test eax, eax
// 005253c4  0f84d6000000         je 0x5254a0
// 005253ca  66833800             cmp word ptr [eax], 0
// 005253ce  0f84cc000000         je 0x5254a0
// 005253d4  6683780200           cmp word ptr [eax + 2], 0
// 005253d9  0f84c1000000         je 0x5254a0
// 005253df  6683781000           cmp word ptr [eax + 0x10], 0
// 005253e4  0f84b6000000         je 0x5254a0
// 005253ea  6683782000           cmp word ptr [eax + 0x20], 0
// 005253ef  0f84ab000000         je 0x5254a0
// 005253f5  6683781200           cmp word ptr [eax + 0x12], 0
// 005253fa  0f84a0000000         je 0x5254a0
// 00525400  6683780400           cmp word ptr [eax + 4], 0
// 00525405  0f8495000000         je 0x5254a0
// 0052540b  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00525411  03c5                 add eax, ebp
// 00525413  833800               cmp dword ptr [eax], 0
// 00525416  0f8c84000000         jl 0x5254a0
// 0052541c  8b4804               mov ecx, dword ptr [eax + 4]
// 0052541f  894a04               mov dword ptr [edx + 4], ecx
// 00525422  83780400             cmp dword ptr [eax + 4], 0
// 00525426  7404                 je 0x52542c
// 00525428  885c240f             mov byte ptr [esp + 0xf], bl
// 0052542c  b908000000           mov ecx, 8
// 00525431  8b1c01               mov ebx, dword ptr [ecx + eax]
// 00525434  891c11               mov dword ptr [ecx + edx], ebx
// 00525437  833c0100             cmp dword ptr [ecx + eax], 0
// 0052543b  bb01000000           mov ebx, 1
// 00525440  7404                 je 0x525446
// 00525442  885c240f             mov byte ptr [esp + 0xf], bl
// 00525446  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00525449  894a0c               mov dword ptr [edx + 0xc], ecx
// 0052544c  83780c00             cmp dword ptr [eax + 0xc], 0
// 00525450  7404                 je 0x525456
// 00525452  885c240f             mov byte ptr [esp + 0xf], bl
// 00525456  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00525459  894a10               mov dword ptr [edx + 0x10], ecx
// 0052545c  83781000             cmp dword ptr [eax + 0x10], 0
// 00525460  7404                 je 0x525466
// 00525462  885c240f             mov byte ptr [esp + 0xf], bl
// 00525466  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00525469  894a14               mov dword ptr [edx + 0x14], ecx
// 0052546c  83781400             cmp dword ptr [eax + 0x14], 0
// 00525470  7404                 je 0x525476
// 00525472  885c240f             mov byte ptr [esp + 0xf], bl
// 00525476  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052547a  03f3                 add esi, ebx
// 0052547c  83c054               add eax, 0x54
// 0052547f  83c218               add edx, 0x18
// 00525482  81c500010000         add ebp, 0x100
// 00525488  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0052548b  89442410             mov dword ptr [esp + 0x10], eax
// 0052548f  0f8c2bffffff         jl 0x5253c0
// 00525495  8a44240f             mov al, byte ptr [esp + 0xf]
// 00525499  5d                   pop ebp
// 0052549a  5b                   pop ebx
// 0052549b  5e                   pop esi
// 0052549c  83c408               add esp, 8
// 0052549f  c3                   ret 
// 005254a0  5d                   pop ebp
// 005254a1  5b                   pop ebx
// 005254a2  32c0                 xor al, al
// 005254a4  5e                   pop esi
// 005254a5  83c408               add esp, 8
// 005254a8  c3                   ret 
// 005254a9  32c0                 xor al, al
// 005254ab  5e                   pop esi
// 005254ac  83c408               add esp, 8
// 005254af  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
