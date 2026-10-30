// roc 2009-12 0061d940  unit: seg_00610000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d940
//
// 0061d940  83ec08               sub esp, 8
// 0061d943  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 0061d94a  56                   push esi
// 0061d94b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 0061d951  c644240700           mov byte ptr [esp + 7], 0
// 0061d956  0f843b010000         je 0x61da97
// 0061d95c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0061d963  0f842e010000         je 0x61da97
// 0061d969  837e7000             cmp dword ptr [esi + 0x70], 0
// 0061d96d  53                   push ebx
// 0061d96e  bb01000000           mov ebx, 1
// 0061d973  751c                 jne 0x61d991
// 0061d975  8b4724               mov eax, dword ptr [edi + 0x24]
// 0061d978  8b4f04               mov ecx, dword ptr [edi + 4]
// 0061d97b  8d1440               lea edx, [eax + eax*2]
// 0061d97e  8b01                 mov eax, dword ptr [ecx]
// 0061d980  03d2                 add edx, edx
// 0061d982  03d2                 add edx, edx
// 0061d984  03d2                 add edx, edx
// 0061d986  52                   push edx
// 0061d987  53                   push ebx
// 0061d988  57                   push edi
// 0061d989  ffd0                 call eax
// 0061d98b  83c40c               add esp, 0xc
// 0061d98e  894670               mov dword ptr [esi + 0x70], eax
// 0061d991  8b5670               mov edx, dword ptr [esi + 0x70]
// 0061d994  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 0061d99a  33f6                 xor esi, esi
// 0061d99c  397724               cmp dword ptr [edi + 0x24], esi
// 0061d99f  55                   push ebp
// 0061d9a0  0f8edd000000         jle 0x61da83
// 0061d9a6  33ed                 xor ebp, ebp
// 0061d9a8  83c04c               add eax, 0x4c
// 0061d9ab  89442410             mov dword ptr [esp + 0x10], eax
// 0061d9af  90                   nop 
// 0061d9b0  8b00                 mov eax, dword ptr [eax]
// 0061d9b2  85c0                 test eax, eax
// 0061d9b4  0f84d4000000         je 0x61da8e
// 0061d9ba  66833800             cmp word ptr [eax], 0
// 0061d9be  0f84ca000000         je 0x61da8e
// 0061d9c4  6683780200           cmp word ptr [eax + 2], 0
// 0061d9c9  0f84bf000000         je 0x61da8e
// 0061d9cf  6683781000           cmp word ptr [eax + 0x10], 0
// 0061d9d4  0f84b4000000         je 0x61da8e
// 0061d9da  6683782000           cmp word ptr [eax + 0x20], 0
// 0061d9df  0f84a9000000         je 0x61da8e
// 0061d9e5  6683781200           cmp word ptr [eax + 0x12], 0
// 0061d9ea  0f849e000000         je 0x61da8e
// 0061d9f0  6683780400           cmp word ptr [eax + 4], 0
// 0061d9f5  0f8493000000         je 0x61da8e
// 0061d9fb  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 0061da01  03c5                 add eax, ebp
// 0061da03  833800               cmp dword ptr [eax], 0
// 0061da06  0f8c82000000         jl 0x61da8e
// 0061da0c  8b4804               mov ecx, dword ptr [eax + 4]
// 0061da0f  894a04               mov dword ptr [edx + 4], ecx
// 0061da12  83780400             cmp dword ptr [eax + 4], 0
// 0061da16  7404                 je 0x61da1c
// 0061da18  885c240f             mov byte ptr [esp + 0xf], bl
// 0061da1c  b908000000           mov ecx, 8
// 0061da21  8b1c01               mov ebx, dword ptr [ecx + eax]
// 0061da24  891c11               mov dword ptr [ecx + edx], ebx
// 0061da27  833c0100             cmp dword ptr [ecx + eax], 0
// 0061da2b  8d59f9               lea ebx, [ecx - 7]
// 0061da2e  7404                 je 0x61da34
// 0061da30  885c240f             mov byte ptr [esp + 0xf], bl
// 0061da34  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061da37  894a0c               mov dword ptr [edx + 0xc], ecx
// 0061da3a  83780c00             cmp dword ptr [eax + 0xc], 0
// 0061da3e  7404                 je 0x61da44
// 0061da40  885c240f             mov byte ptr [esp + 0xf], bl
// 0061da44  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0061da47  894a10               mov dword ptr [edx + 0x10], ecx
// 0061da4a  83781000             cmp dword ptr [eax + 0x10], 0
// 0061da4e  7404                 je 0x61da54
// 0061da50  885c240f             mov byte ptr [esp + 0xf], bl
// 0061da54  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061da57  894a14               mov dword ptr [edx + 0x14], ecx
// 0061da5a  83781400             cmp dword ptr [eax + 0x14], 0
// 0061da5e  7404                 je 0x61da64
// 0061da60  885c240f             mov byte ptr [esp + 0xf], bl
// 0061da64  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061da68  03f3                 add esi, ebx
// 0061da6a  83c054               add eax, 0x54
// 0061da6d  83c218               add edx, 0x18
// 0061da70  81c500010000         add ebp, 0x100
// 0061da76  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0061da79  89442410             mov dword ptr [esp + 0x10], eax
// 0061da7d  0f8c2dffffff         jl 0x61d9b0
// 0061da83  8a44240f             mov al, byte ptr [esp + 0xf]
// 0061da87  5d                   pop ebp
// 0061da88  5b                   pop ebx
// 0061da89  5e                   pop esi
// 0061da8a  83c408               add esp, 8
// 0061da8d  c3                   ret 
// 0061da8e  5d                   pop ebp
// 0061da8f  5b                   pop ebx
// 0061da90  32c0                 xor al, al
// 0061da92  5e                   pop esi
// 0061da93  83c408               add esp, 8
// 0061da96  c3                   ret 
// 0061da97  32c0                 xor al, al
// 0061da99  5e                   pop esi
// 0061da9a  83c408               add esp, 8
// 0061da9d  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
