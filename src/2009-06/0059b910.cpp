// from server: 100% by auto
// roc 2009-06 0059b910  unit: seg_00590000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b910
//
// 0059b910  83ec08               sub esp, 8
// 0059b913  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0059b91a  56                   push esi
// 0059b91b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0059b921  c644240700           mov byte ptr [esp + 7], 0
// 0059b926  0f843b010000         je 0x59ba67
// 0059b92c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0059b933  0f842e010000         je 0x59ba67
// 0059b939  837e7000             cmp dword ptr [esi + 0x70], 0
// 0059b93d  53                   push ebx
// 0059b93e  bb01000000           mov ebx, 1
// 0059b943  751c                 jne 0x59b961
// 0059b945  8b4724               mov eax, dword ptr [edi + 0x24]
// 0059b948  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059b94b  8d1440               lea edx, [eax + eax*2]
// 0059b94e  8b01                 mov eax, dword ptr [ecx]
// 0059b950  03d2                 add edx, edx
// 0059b952  03d2                 add edx, edx
// 0059b954  03d2                 add edx, edx
// 0059b956  52                   push edx
// 0059b957  53                   push ebx
// 0059b958  57                   push edi
// 0059b959  ffd0                 call eax
// 0059b95b  83c40c               add esp, 0xc
// 0059b95e  894670               mov dword ptr [esi + 0x70], eax
// 0059b961  8b5670               mov edx, dword ptr [esi + 0x70]
// 0059b964  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 0059b96a  33f6                 xor esi, esi
// 0059b96c  397724               cmp dword ptr [edi + 0x24], esi
// 0059b96f  55                   push ebp
// 0059b970  0f8edd000000         jle 0x59ba53
// 0059b976  33ed                 xor ebp, ebp
// 0059b978  83c04c               add eax, 0x4c
// 0059b97b  89442410             mov dword ptr [esp + 0x10], eax
// 0059b97f  90                   nop 
// 0059b980  8b00                 mov eax, dword ptr [eax]
// 0059b982  85c0                 test eax, eax
// 0059b984  0f84d4000000         je 0x59ba5e
// 0059b98a  66833800             cmp word ptr [eax], 0
// 0059b98e  0f84ca000000         je 0x59ba5e
// 0059b994  6683780200           cmp word ptr [eax + 2], 0
// 0059b999  0f84bf000000         je 0x59ba5e
// 0059b99f  6683781000           cmp word ptr [eax + 0x10], 0
// 0059b9a4  0f84b4000000         je 0x59ba5e
// 0059b9aa  6683782000           cmp word ptr [eax + 0x20], 0
// 0059b9af  0f84a9000000         je 0x59ba5e
// 0059b9b5  6683781200           cmp word ptr [eax + 0x12], 0
// 0059b9ba  0f849e000000         je 0x59ba5e
// 0059b9c0  6683780400           cmp word ptr [eax + 4], 0
// 0059b9c5  0f8493000000         je 0x59ba5e
// 0059b9cb  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 0059b9d1  03c5                 add eax, ebp
// 0059b9d3  833800               cmp dword ptr [eax], 0
// 0059b9d6  0f8c82000000         jl 0x59ba5e
// 0059b9dc  8b4804               mov ecx, dword ptr [eax + 4]
// 0059b9df  894a04               mov dword ptr [edx + 4], ecx
// 0059b9e2  83780400             cmp dword ptr [eax + 4], 0
// 0059b9e6  7404                 je 0x59b9ec
// 0059b9e8  885c240f             mov byte ptr [esp + 0xf], bl
// 0059b9ec  b908000000           mov ecx, 8
// 0059b9f1  8b1c01               mov ebx, dword ptr [ecx + eax]
// 0059b9f4  891c11               mov dword ptr [ecx + edx], ebx
// 0059b9f7  833c0100             cmp dword ptr [ecx + eax], 0
// 0059b9fb  8d59f9               lea ebx, [ecx - 7]
// 0059b9fe  7404                 je 0x59ba04
// 0059ba00  885c240f             mov byte ptr [esp + 0xf], bl
// 0059ba04  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059ba07  894a0c               mov dword ptr [edx + 0xc], ecx
// 0059ba0a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0059ba0e  7404                 je 0x59ba14
// 0059ba10  885c240f             mov byte ptr [esp + 0xf], bl
// 0059ba14  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0059ba17  894a10               mov dword ptr [edx + 0x10], ecx
// 0059ba1a  83781000             cmp dword ptr [eax + 0x10], 0
// 0059ba1e  7404                 je 0x59ba24
// 0059ba20  885c240f             mov byte ptr [esp + 0xf], bl
// 0059ba24  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059ba27  894a14               mov dword ptr [edx + 0x14], ecx
// 0059ba2a  83781400             cmp dword ptr [eax + 0x14], 0
// 0059ba2e  7404                 je 0x59ba34
// 0059ba30  885c240f             mov byte ptr [esp + 0xf], bl
// 0059ba34  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059ba38  03f3                 add esi, ebx
// 0059ba3a  83c054               add eax, 0x54
// 0059ba3d  83c218               add edx, 0x18
// 0059ba40  81c500010000         add ebp, 0x100
// 0059ba46  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0059ba49  89442410             mov dword ptr [esp + 0x10], eax
// 0059ba4d  0f8c2dffffff         jl 0x59b980
// 0059ba53  8a44240f             mov al, byte ptr [esp + 0xf]
// 0059ba57  5d                   pop ebp
// 0059ba58  5b                   pop ebx
// 0059ba59  5e                   pop esi
// 0059ba5a  83c408               add esp, 8
// 0059ba5d  c3                   ret 
// 0059ba5e  5d                   pop ebp
// 0059ba5f  5b                   pop ebx
// 0059ba60  32c0                 xor al, al
// 0059ba62  5e                   pop esi
// 0059ba63  83c408               add esp, 8
// 0059ba66  c3                   ret 
// 0059ba67  32c0                 xor al, al
// 0059ba69  5e                   pop esi
// 0059ba6a  83c408               add esp, 8
// 0059ba6d  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
