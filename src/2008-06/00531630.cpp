// from server: 100% by auto
// roc 2008-06 00531630  unit: seg_00530000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531630
//
// 00531630  83ec08               sub esp, 8
// 00531633  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0053163a  56                   push esi
// 0053163b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00531641  c644240700           mov byte ptr [esp + 7], 0
// 00531646  0f843b010000         je 0x531787
// 0053164c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00531653  0f842e010000         je 0x531787
// 00531659  837e7000             cmp dword ptr [esi + 0x70], 0
// 0053165d  53                   push ebx
// 0053165e  bb01000000           mov ebx, 1
// 00531663  751c                 jne 0x531681
// 00531665  8b4724               mov eax, dword ptr [edi + 0x24]
// 00531668  8b4f04               mov ecx, dword ptr [edi + 4]
// 0053166b  8d1440               lea edx, [eax + eax*2]
// 0053166e  8b01                 mov eax, dword ptr [ecx]
// 00531670  03d2                 add edx, edx
// 00531672  03d2                 add edx, edx
// 00531674  03d2                 add edx, edx
// 00531676  52                   push edx
// 00531677  53                   push ebx
// 00531678  57                   push edi
// 00531679  ffd0                 call eax
// 0053167b  83c40c               add esp, 0xc
// 0053167e  894670               mov dword ptr [esi + 0x70], eax
// 00531681  8b5670               mov edx, dword ptr [esi + 0x70]
// 00531684  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 0053168a  33f6                 xor esi, esi
// 0053168c  397724               cmp dword ptr [edi + 0x24], esi
// 0053168f  55                   push ebp
// 00531690  0f8edd000000         jle 0x531773
// 00531696  33ed                 xor ebp, ebp
// 00531698  83c04c               add eax, 0x4c
// 0053169b  89442410             mov dword ptr [esp + 0x10], eax
// 0053169f  90                   nop 
// 005316a0  8b00                 mov eax, dword ptr [eax]
// 005316a2  85c0                 test eax, eax
// 005316a4  0f84d4000000         je 0x53177e
// 005316aa  66833800             cmp word ptr [eax], 0
// 005316ae  0f84ca000000         je 0x53177e
// 005316b4  6683780200           cmp word ptr [eax + 2], 0
// 005316b9  0f84bf000000         je 0x53177e
// 005316bf  6683781000           cmp word ptr [eax + 0x10], 0
// 005316c4  0f84b4000000         je 0x53177e
// 005316ca  6683782000           cmp word ptr [eax + 0x20], 0
// 005316cf  0f84a9000000         je 0x53177e
// 005316d5  6683781200           cmp word ptr [eax + 0x12], 0
// 005316da  0f849e000000         je 0x53177e
// 005316e0  6683780400           cmp word ptr [eax + 4], 0
// 005316e5  0f8493000000         je 0x53177e
// 005316eb  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 005316f1  03c5                 add eax, ebp
// 005316f3  833800               cmp dword ptr [eax], 0
// 005316f6  0f8c82000000         jl 0x53177e
// 005316fc  8b4804               mov ecx, dword ptr [eax + 4]
// 005316ff  894a04               mov dword ptr [edx + 4], ecx
// 00531702  83780400             cmp dword ptr [eax + 4], 0
// 00531706  7404                 je 0x53170c
// 00531708  885c240f             mov byte ptr [esp + 0xf], bl
// 0053170c  b908000000           mov ecx, 8
// 00531711  8b1c01               mov ebx, dword ptr [ecx + eax]
// 00531714  891c11               mov dword ptr [ecx + edx], ebx
// 00531717  833c0100             cmp dword ptr [ecx + eax], 0
// 0053171b  8d59f9               lea ebx, [ecx - 7]
// 0053171e  7404                 je 0x531724
// 00531720  885c240f             mov byte ptr [esp + 0xf], bl
// 00531724  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00531727  894a0c               mov dword ptr [edx + 0xc], ecx
// 0053172a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0053172e  7404                 je 0x531734
// 00531730  885c240f             mov byte ptr [esp + 0xf], bl
// 00531734  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00531737  894a10               mov dword ptr [edx + 0x10], ecx
// 0053173a  83781000             cmp dword ptr [eax + 0x10], 0
// 0053173e  7404                 je 0x531744
// 00531740  885c240f             mov byte ptr [esp + 0xf], bl
// 00531744  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00531747  894a14               mov dword ptr [edx + 0x14], ecx
// 0053174a  83781400             cmp dword ptr [eax + 0x14], 0
// 0053174e  7404                 je 0x531754
// 00531750  885c240f             mov byte ptr [esp + 0xf], bl
// 00531754  8b442410             mov eax, dword ptr [esp + 0x10]
// 00531758  03f3                 add esi, ebx
// 0053175a  83c054               add eax, 0x54
// 0053175d  83c218               add edx, 0x18
// 00531760  81c500010000         add ebp, 0x100
// 00531766  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00531769  89442410             mov dword ptr [esp + 0x10], eax
// 0053176d  0f8c2dffffff         jl 0x5316a0
// 00531773  8a44240f             mov al, byte ptr [esp + 0xf]
// 00531777  5d                   pop ebp
// 00531778  5b                   pop ebx
// 00531779  5e                   pop esi
// 0053177a  83c408               add esp, 8
// 0053177d  c3                   ret 
// 0053177e  5d                   pop ebp
// 0053177f  5b                   pop ebx
// 00531780  32c0                 xor al, al
// 00531782  5e                   pop esi
// 00531783  83c408               add esp, 8
// 00531786  c3                   ret 
// 00531787  32c0                 xor al, al
// 00531789  5e                   pop esi
// 0053178a  83c408               add esp, 8
// 0053178d  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
