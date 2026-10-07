// roc 2010-06 005849f0  unit: seg_00580000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005849f0
//
// 005849f0  83ec38               sub esp, 0x38
// 005849f3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005849f7  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 005849fa  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00584a00  55                   push ebp
// 00584a01  8b6864               mov ebp, dword ptr [eax + 0x64]
// 00584a04  56                   push esi
// 00584a05  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00584a0b  8b442450             mov eax, dword ptr [esp + 0x50]
// 00584a0f  8974240c             mov dword ptr [esp + 0xc], esi
// 00584a13  896c2420             mov dword ptr [esp + 0x20], ebp
// 00584a17  894c2444             mov dword ptr [esp + 0x44], ecx
// 00584a1b  89542430             mov dword ptr [esp + 0x30], edx
// 00584a1f  85c0                 test eax, eax
// 00584a21  0f8e63010000         jle 0x584b8a
// 00584a27  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00584a2b  53                   push ebx
// 00584a2c  57                   push edi
// 00584a2d  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00584a31  2bcf                 sub ecx, edi
// 00584a33  897c2418             mov dword ptr [esp + 0x18], edi
// 00584a37  894c2434             mov dword ptr [esp + 0x34], ecx
// 00584a3b  89442430             mov dword ptr [esp + 0x30], eax
// 00584a3f  90                   nop 
// 00584a40  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00584a44  8b0f                 mov ecx, dword ptr [edi]
// 00584a46  50                   push eax
// 00584a47  51                   push ecx
// 00584a48  e89389feff           call 0x56d3e0
// 00584a4d  33d2                 xor edx, edx
// 00584a4f  83c408               add esp, 8
// 00584a52  8954242c             mov dword ptr [esp + 0x2c], edx
// 00584a56  85ed                 test ebp, ebp
// 00584a58  0f8e0e010000         jle 0x584b6c
// 00584a5e  8d4e44               lea ecx, [esi + 0x44]
// 00584a61  894c2410             mov dword ptr [esp + 0x10], ecx
// 00584a65  eb0d                 jmp 0x584a74
// 00584a67  eb07                 jmp 0x584a70
// 00584a69  8da42400000000       lea esp, [esp]
// 00584a70  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00584a74  8b442434             mov eax, dword ptr [esp + 0x34]
// 00584a78  8b1c38               mov ebx, dword ptr [eax + edi]
// 00584a7b  8b3f                 mov edi, dword ptr [edi]
// 00584a7d  8b09                 mov ecx, dword ptr [ecx]
// 00584a7f  03da                 add ebx, edx
// 00584a81  807e5400             cmp byte ptr [esi + 0x54], 0
// 00584a85  741d                 je 0x584aa4
// 00584a87  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00584a8b  48                   dec eax
// 00584a8c  8bf0                 mov esi, eax
// 00584a8e  0faff5               imul esi, ebp
// 00584a91  03f8                 add edi, eax
// 00584a93  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00584a97  03de                 add ebx, esi
// 00584a99  83ceff               or esi, 0xffffffff
// 00584a9c  f7dd                 neg ebp
// 00584a9e  8d4c4102             lea ecx, [ecx + eax*2 + 2]
// 00584aa2  eb05                 jmp 0x584aa9
// 00584aa4  be01000000           mov esi, 1
// 00584aa9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00584aad  896c2420             mov dword ptr [esp + 0x20], ebp
// 00584ab1  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00584ab4  8b4010               mov eax, dword ptr [eax + 0x10]
// 00584ab7  8b6c9500             mov ebp, dword ptr [ebp + edx*4]
// 00584abb  8b0490               mov eax, dword ptr [eax + edx*4]
// 00584abe  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00584ac2  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00584ac6  89442440             mov dword ptr [esp + 0x40], eax
// 00584aca  33c0                 xor eax, eax
// 00584acc  89442458             mov dword ptr [esp + 0x58], eax
// 00584ad0  8944241c             mov dword ptr [esp + 0x1c], eax
// 00584ad4  896c2424             mov dword ptr [esp + 0x24], ebp
// 00584ad8  85ed                 test ebp, ebp
// 00584ada  766a                 jbe 0x584b46
// 00584adc  8d642400             lea esp, [esp]
// 00584ae0  0fbf1471             movsx edx, word ptr [ecx + esi*2]
// 00584ae4  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00584ae8  8d440208             lea eax, [edx + eax + 8]
// 00584aec  0fb613               movzx edx, byte ptr [ebx]
// 00584aef  c1f804               sar eax, 4
// 00584af2  03442438             add eax, dword ptr [esp + 0x38]
// 00584af6  035c2420             add ebx, dword ptr [esp + 0x20]
// 00584afa  0fb60402             movzx eax, byte ptr [edx + eax]
// 00584afe  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00584b02  0fb61410             movzx edx, byte ptr [eax + edx]
// 00584b06  0017                 add byte ptr [edi], dl
// 00584b08  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00584b0c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00584b10  2bc2                 sub eax, edx
// 00584b12  89442444             mov dword ptr [esp + 0x44], eax
// 00584b16  8d1400               lea edx, [eax + eax]
// 00584b19  03c2                 add eax, edx
// 00584b1b  03e8                 add ebp, eax
// 00584b1d  668929               mov word ptr [ecx], bp
// 00584b20  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00584b24  03c2                 add eax, edx
// 00584b26  03e8                 add ebp, eax
// 00584b28  896c2458             mov dword ptr [esp + 0x58], ebp
// 00584b2c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00584b30  03c2                 add eax, edx
// 00584b32  03fe                 add edi, esi
// 00584b34  836c242401           sub dword ptr [esp + 0x24], 1
// 00584b39  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00584b3d  8d0c71               lea ecx, [ecx + esi*2]
// 00584b40  759e                 jne 0x584ae0
// 00584b42  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00584b46  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00584b4a  668b442458           mov ax, word ptr [esp + 0x58]
// 00584b4f  8344241004           add dword ptr [esp + 0x10], 4
// 00584b54  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00584b58  8b742414             mov esi, dword ptr [esp + 0x14]
// 00584b5c  42                   inc edx
// 00584b5d  3bd5                 cmp edx, ebp
// 00584b5f  668901               mov word ptr [ecx], ax
// 00584b62  8954242c             mov dword ptr [esp + 0x2c], edx
// 00584b66  0f8c04ffffff         jl 0x584a70
// 00584b6c  807e5400             cmp byte ptr [esi + 0x54], 0
// 00584b70  0f94c1               sete cl
// 00584b73  83c704               add edi, 4
// 00584b76  836c243001           sub dword ptr [esp + 0x30], 1
// 00584b7b  884e54               mov byte ptr [esi + 0x54], cl
// 00584b7e  897c2418             mov dword ptr [esp + 0x18], edi
// 00584b82  0f85b8feffff         jne 0x584a40
// 00584b88  5f                   pop edi
// 00584b89  5b                   pop ebx
// 00584b8a  5e                   pop esi
// 00584b8b  5d                   pop ebp
// 00584b8c  83c438               add esp, 0x38
// 00584b8f  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
