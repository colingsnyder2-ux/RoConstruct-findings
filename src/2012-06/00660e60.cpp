// from server: 100% by auto
// roc 2012-06 00660e60  unit: seg_00660000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660e60
//
// 00660e60  83ec08               sub esp, 8
// 00660e63  80bfc800000000       cmp byte ptr [edi + 0xc8], 0
// 00660e6a  56                   push esi
// 00660e6b  8bb788010000         mov esi, dword ptr [edi + 0x188]
// 00660e71  c644240700           mov byte ptr [esp + 7], 0
// 00660e76  0f843b010000         je 0x660fb7
// 00660e7c  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00660e83  0f842e010000         je 0x660fb7
// 00660e89  837e7000             cmp dword ptr [esi + 0x70], 0
// 00660e8d  53                   push ebx
// 00660e8e  bb01000000           mov ebx, 1
// 00660e93  751c                 jne 0x660eb1
// 00660e95  8b4724               mov eax, dword ptr [edi + 0x24]
// 00660e98  8b4f04               mov ecx, dword ptr [edi + 4]
// 00660e9b  8d1440               lea edx, [eax + eax*2]
// 00660e9e  8b01                 mov eax, dword ptr [ecx]
// 00660ea0  03d2                 add edx, edx
// 00660ea2  03d2                 add edx, edx
// 00660ea4  03d2                 add edx, edx
// 00660ea6  52                   push edx
// 00660ea7  53                   push ebx
// 00660ea8  57                   push edi
// 00660ea9  ffd0                 call eax
// 00660eab  83c40c               add esp, 0xc
// 00660eae  894670               mov dword ptr [esi + 0x70], eax
// 00660eb1  8b5670               mov edx, dword ptr [esi + 0x70]
// 00660eb4  8b87c4000000         mov eax, dword ptr [edi + 0xc4]
// 00660eba  33f6                 xor esi, esi
// 00660ebc  397724               cmp dword ptr [edi + 0x24], esi
// 00660ebf  55                   push ebp
// 00660ec0  0f8edd000000         jle 0x660fa3
// 00660ec6  33ed                 xor ebp, ebp
// 00660ec8  83c04c               add eax, 0x4c
// 00660ecb  89442410             mov dword ptr [esp + 0x10], eax
// 00660ecf  90                   nop 
// 00660ed0  8b00                 mov eax, dword ptr [eax]
// 00660ed2  85c0                 test eax, eax
// 00660ed4  0f84d4000000         je 0x660fae
// 00660eda  66833800             cmp word ptr [eax], 0
// 00660ede  0f84ca000000         je 0x660fae
// 00660ee4  6683780200           cmp word ptr [eax + 2], 0
// 00660ee9  0f84bf000000         je 0x660fae
// 00660eef  6683781000           cmp word ptr [eax + 0x10], 0
// 00660ef4  0f84b4000000         je 0x660fae
// 00660efa  6683782000           cmp word ptr [eax + 0x20], 0
// 00660eff  0f84a9000000         je 0x660fae
// 00660f05  6683781200           cmp word ptr [eax + 0x12], 0
// 00660f0a  0f849e000000         je 0x660fae
// 00660f10  6683780400           cmp word ptr [eax + 4], 0
// 00660f15  0f8493000000         je 0x660fae
// 00660f1b  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00660f21  03c5                 add eax, ebp
// 00660f23  833800               cmp dword ptr [eax], 0
// 00660f26  0f8c82000000         jl 0x660fae
// 00660f2c  8b4804               mov ecx, dword ptr [eax + 4]
// 00660f2f  894a04               mov dword ptr [edx + 4], ecx
// 00660f32  83780400             cmp dword ptr [eax + 4], 0
// 00660f36  7404                 je 0x660f3c
// 00660f38  885c240f             mov byte ptr [esp + 0xf], bl
// 00660f3c  b908000000           mov ecx, 8
// 00660f41  8b1c01               mov ebx, dword ptr [ecx + eax]
// 00660f44  891c11               mov dword ptr [ecx + edx], ebx
// 00660f47  833c0100             cmp dword ptr [ecx + eax], 0
// 00660f4b  8d59f9               lea ebx, [ecx - 7]
// 00660f4e  7404                 je 0x660f54
// 00660f50  885c240f             mov byte ptr [esp + 0xf], bl
// 00660f54  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00660f57  894a0c               mov dword ptr [edx + 0xc], ecx
// 00660f5a  83780c00             cmp dword ptr [eax + 0xc], 0
// 00660f5e  7404                 je 0x660f64
// 00660f60  885c240f             mov byte ptr [esp + 0xf], bl
// 00660f64  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00660f67  894a10               mov dword ptr [edx + 0x10], ecx
// 00660f6a  83781000             cmp dword ptr [eax + 0x10], 0
// 00660f6e  7404                 je 0x660f74
// 00660f70  885c240f             mov byte ptr [esp + 0xf], bl
// 00660f74  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00660f77  894a14               mov dword ptr [edx + 0x14], ecx
// 00660f7a  83781400             cmp dword ptr [eax + 0x14], 0
// 00660f7e  7404                 je 0x660f84
// 00660f80  885c240f             mov byte ptr [esp + 0xf], bl
// 00660f84  8b442410             mov eax, dword ptr [esp + 0x10]
// 00660f88  03f3                 add esi, ebx
// 00660f8a  83c054               add eax, 0x54
// 00660f8d  83c218               add edx, 0x18
// 00660f90  81c500010000         add ebp, 0x100
// 00660f96  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00660f99  89442410             mov dword ptr [esp + 0x10], eax
// 00660f9d  0f8c2dffffff         jl 0x660ed0
// 00660fa3  8a44240f             mov al, byte ptr [esp + 0xf]
// 00660fa7  5d                   pop ebp
// 00660fa8  5b                   pop ebx
// 00660fa9  5e                   pop esi
// 00660faa  83c408               add esp, 8
// 00660fad  c3                   ret 
// 00660fae  5d                   pop ebp
// 00660faf  5b                   pop ebx
// 00660fb0  32c0                 xor al, al
// 00660fb2  5e                   pop esi
// 00660fb3  83c408               add esp, 8
// 00660fb6  c3                   ret 
// 00660fb7  32c0                 xor al, al
// 00660fb9  5e                   pop esi
// 00660fba  83c408               add esp, 8
// 00660fbd  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _smoothing_ok)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
