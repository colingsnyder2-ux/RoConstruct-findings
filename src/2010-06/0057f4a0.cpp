// roc 2010-06 0057f4a0  unit: seg_00570000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057f4a0
//
// 0057f4a0  83ec08               sub esp, 8
// 0057f4a3  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0057f4aa  56                   push esi
// 0057f4ab  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0057f4b1  c644240700           mov byte ptr [esp + 7], 0
// 0057f4b6  0f843b010000         je 0x57f5f7
// 0057f4bc  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0057f4c3  0f842e010000         je 0x57f5f7
// 0057f4c9  837e7000             cmp dword ptr [esi + 0x70], 0
// 0057f4cd  53                   push ebx
// 0057f4ce  bb01000000           mov ebx, 1
// 0057f4d3  751c                 jne 0x57f4f1
// 0057f4d5  8b4724               mov eax, dword ptr [edi + 0x24]
// 0057f4d8  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057f4db  8d1440               lea edx, [eax + eax*2]
// 0057f4de  8b01                 mov eax, dword ptr [ecx]
// 0057f4e0  03d2                 add edx, edx
// 0057f4e2  03d2                 add edx, edx
// 0057f4e4  03d2                 add edx, edx
// 0057f4e6  52                   push edx
// 0057f4e7  53                   push ebx
// 0057f4e8  57                   push edi
// 0057f4e9  ffd0                 call eax
// 0057f4eb  83c40c               add esp, 0xc
// 0057f4ee  894670               mov dword ptr [esi + 0x70], eax
// 0057f4f1  8b5670               mov edx, dword ptr [esi + 0x70]
// 0057f4f4  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 0057f4fa  33f6                 xor esi, esi
// 0057f4fc  397724               cmp dword ptr [edi + 0x24], esi
// 0057f4ff  55                   push ebp
// 0057f500  0f8edd000000         jle 0x57f5e3
// 0057f506  33ed                 xor ebp, ebp
// 0057f508  83c04c               add eax, 0x4c
// 0057f50b  89442410             mov dword ptr [esp + 0x10], eax
// 0057f50f  90                   nop 
// 0057f510  8b00                 mov eax, dword ptr [eax]
// 0057f512  85c0                 test eax, eax
// 0057f514  0f84d4000000         je 0x57f5ee
// 0057f51a  66833800             cmp word ptr [eax], 0
// 0057f51e  0f84ca000000         je 0x57f5ee
// 0057f524  6683780200           cmp word ptr [eax + 2], 0
// 0057f529  0f84bf000000         je 0x57f5ee
// 0057f52f  6683781000           cmp word ptr [eax + 0x10], 0
// 0057f534  0f84b4000000         je 0x57f5ee
// 0057f53a  6683782000           cmp word ptr [eax + 0x20], 0
// 0057f53f  0f84a9000000         je 0x57f5ee
// 0057f545  6683781200           cmp word ptr [eax + 0x12], 0
// 0057f54a  0f849e000000         je 0x57f5ee
// 0057f550  6683780400           cmp word ptr [eax + 4], 0
// 0057f555  0f8493000000         je 0x57f5ee
// 0057f55b  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 0057f561  03c5                 add eax, ebp
// 0057f563  833800               cmp dword ptr [eax], 0
// 0057f566  0f8c82000000         jl 0x57f5ee
// 0057f56c  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f56f  894a04               mov dword ptr [edx + 4], ecx
// 0057f572  83780400             cmp dword ptr [eax + 4], 0
// 0057f576  7404                 je 0x57f57c
// 0057f578  885c240f             mov byte ptr [esp + 0xf], bl
// 0057f57c  b908000000           mov ecx, 8
// 0057f581  8b1c01               mov ebx, dword ptr [ecx + eax]
// 0057f584  891c11               mov dword ptr [ecx + edx], ebx
// 0057f587  833c0100             cmp dword ptr [ecx + eax], 0
// 0057f58b  8d59f9               lea ebx, [ecx - 7]
// 0057f58e  7404                 je 0x57f594
// 0057f590  885c240f             mov byte ptr [esp + 0xf], bl
// 0057f594  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0057f597  894a0c               mov dword ptr [edx + 0xc], ecx
// 0057f59a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0057f59e  7404                 je 0x57f5a4
// 0057f5a0  885c240f             mov byte ptr [esp + 0xf], bl
// 0057f5a4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0057f5a7  894a10               mov dword ptr [edx + 0x10], ecx
// 0057f5aa  83781000             cmp dword ptr [eax + 0x10], 0
// 0057f5ae  7404                 je 0x57f5b4
// 0057f5b0  885c240f             mov byte ptr [esp + 0xf], bl
// 0057f5b4  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057f5b7  894a14               mov dword ptr [edx + 0x14], ecx
// 0057f5ba  83781400             cmp dword ptr [eax + 0x14], 0
// 0057f5be  7404                 je 0x57f5c4
// 0057f5c0  885c240f             mov byte ptr [esp + 0xf], bl
// 0057f5c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057f5c8  03f3                 add esi, ebx
// 0057f5ca  83c054               add eax, 0x54
// 0057f5cd  83c218               add edx, 0x18
// 0057f5d0  81c500010000         add ebp, 0x100
// 0057f5d6  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0057f5d9  89442410             mov dword ptr [esp + 0x10], eax
// 0057f5dd  0f8c2dffffff         jl 0x57f510
// 0057f5e3  8a44240f             mov al, byte ptr [esp + 0xf]
// 0057f5e7  5d                   pop ebp
// 0057f5e8  5b                   pop ebx
// 0057f5e9  5e                   pop esi
// 0057f5ea  83c408               add esp, 8
// 0057f5ed  c3                   ret 
// 0057f5ee  5d                   pop ebp
// 0057f5ef  5b                   pop ebx
// 0057f5f0  32c0                 xor al, al
// 0057f5f2  5e                   pop esi
// 0057f5f3  83c408               add esp, 8
// 0057f5f6  c3                   ret 
// 0057f5f7  32c0                 xor al, al
// 0057f5f9  5e                   pop esi
// 0057f5fa  83c408               add esp, 8
// 0057f5fd  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
