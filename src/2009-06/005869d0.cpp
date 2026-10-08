// from server: 100% by auto
// roc 2009-06 005869d0  unit: seg_00580000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005869d0
//
// 005869d0  51                   push ecx
// 005869d1  53                   push ebx
// 005869d2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005869d6  807b0803             cmp byte ptr [ebx + 8], 3
// 005869da  8b13                 mov edx, dword ptr [ebx]
// 005869dc  0f850b020000         jne 0x586bed
// 005869e2  8a4309               mov al, byte ptr [ebx + 9]
// 005869e5  55                   push ebp
// 005869e6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005869ea  56                   push esi
// 005869eb  57                   push edi
// 005869ec  3c08                 cmp al, 8
// 005869ee  0f83f9000000         jae 0x586aed
// 005869f4  0fb6c0               movzx eax, al
// 005869f7  83e801               sub eax, 1
// 005869fa  0f849a000000         je 0x586a9a
// 00586a00  83e801               sub eax, 1
// 00586a03  7450                 je 0x586a55
// 00586a05  83e802               sub eax, 2
// 00586a08  0f85d4000000         jne 0x586ae2
// 00586a0e  8bc2                 mov eax, edx
// 00586a10  83e001               and eax, 1
// 00586a13  8d72ff               lea esi, [edx - 1]
// 00586a16  d1ee                 shr esi, 1
// 00586a18  03c0                 add eax, eax
// 00586a1a  03f5                 add esi, ebp
// 00586a1c  03c0                 add eax, eax
// 00586a1e  8d7c2aff             lea edi, [edx + ebp - 1]
// 00586a22  85d2                 test edx, edx
// 00586a24  0f86b8000000         jbe 0x586ae2
// 00586a2a  89542410             mov dword ptr [esp + 0x10], edx
// 00586a2e  8bff                 mov edi, edi
// 00586a30  8a1e                 mov bl, byte ptr [esi]
// 00586a32  8ac8                 mov cl, al
// 00586a34  d2eb                 shr bl, cl
// 00586a36  80e30f               and bl, 0xf
// 00586a39  881f                 mov byte ptr [edi], bl
// 00586a3b  83f804               cmp eax, 4
// 00586a3e  7505                 jne 0x586a45
// 00586a40  33c0                 xor eax, eax
// 00586a42  4e                   dec esi
// 00586a43  eb03                 jmp 0x586a48
// 00586a45  83c004               add eax, 4
// 00586a48  4f                   dec edi
// 00586a49  836c241001           sub dword ptr [esp + 0x10], 1
// 00586a4e  75e0                 jne 0x586a30
// 00586a50  e989000000           jmp 0x586ade
// 00586a55  8d4aff               lea ecx, [edx - 1]
// 00586a58  83e103               and ecx, 3
// 00586a5b  8d72ff               lea esi, [edx - 1]
// 00586a5e  b803000000           mov eax, 3
// 00586a63  c1ee02               shr esi, 2
// 00586a66  2bc1                 sub eax, ecx
// 00586a68  03f5                 add esi, ebp
// 00586a6a  03c0                 add eax, eax
// 00586a6c  8d7c2aff             lea edi, [edx + ebp - 1]
// 00586a70  85d2                 test edx, edx
// 00586a72  766e                 jbe 0x586ae2
// 00586a74  89542410             mov dword ptr [esp + 0x10], edx
// 00586a78  8a1e                 mov bl, byte ptr [esi]
// 00586a7a  8ac8                 mov cl, al
// 00586a7c  d2eb                 shr bl, cl
// 00586a7e  80e303               and bl, 3
// 00586a81  881f                 mov byte ptr [edi], bl
// 00586a83  83f806               cmp eax, 6
// 00586a86  7505                 jne 0x586a8d
// 00586a88  33c0                 xor eax, eax
// 00586a8a  4e                   dec esi
// 00586a8b  eb03                 jmp 0x586a90
// 00586a8d  83c002               add eax, 2
// 00586a90  4f                   dec edi
// 00586a91  836c241001           sub dword ptr [esp + 0x10], 1
// 00586a96  75e0                 jne 0x586a78
// 00586a98  eb44                 jmp 0x586ade
// 00586a9a  8d72ff               lea esi, [edx - 1]
// 00586a9d  8d4aff               lea ecx, [edx - 1]
// 00586aa0  c1ee03               shr esi, 3
// 00586aa3  83e107               and ecx, 7
// 00586aa6  b807000000           mov eax, 7
// 00586aab  03f5                 add esi, ebp
// 00586aad  2bc1                 sub eax, ecx
// 00586aaf  8d7c2aff             lea edi, [edx + ebp - 1]
// 00586ab3  85d2                 test edx, edx
// 00586ab5  762b                 jbe 0x586ae2
// 00586ab7  89542410             mov dword ptr [esp + 0x10], edx
// 00586abb  eb03                 jmp 0x586ac0
// 00586abd  8d4900               lea ecx, [ecx]
// 00586ac0  8a1e                 mov bl, byte ptr [esi]
// 00586ac2  8ac8                 mov cl, al
// 00586ac4  d2eb                 shr bl, cl
// 00586ac6  80e301               and bl, 1
// 00586ac9  881f                 mov byte ptr [edi], bl
// 00586acb  83f807               cmp eax, 7
// 00586ace  7505                 jne 0x586ad5
// 00586ad0  33c0                 xor eax, eax
// 00586ad2  4e                   dec esi
// 00586ad3  eb01                 jmp 0x586ad6
// 00586ad5  40                   inc eax
// 00586ad6  4f                   dec edi
// 00586ad7  836c241001           sub dword ptr [esp + 0x10], 1
// 00586adc  75e2                 jne 0x586ac0
// 00586ade  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00586ae2  c6430908             mov byte ptr [ebx + 9], 8
// 00586ae6  c6430b08             mov byte ptr [ebx + 0xb], 8
// 00586aea  895304               mov dword ptr [ebx + 4], edx
// 00586aed  807b0908             cmp byte ptr [ebx + 9], 8
// 00586af1  0f85f3000000         jne 0x586bea
// 00586af7  837c242400           cmp dword ptr [esp + 0x24], 0
// 00586afc  8d4c2aff             lea ecx, [edx + ebp - 1]
// 00586b00  0f8484000000         je 0x586b8a
// 00586b06  8d349500000000       lea esi, [edx*4]
// 00586b0d  89742410             mov dword ptr [esp + 0x10], esi
// 00586b11  8d442eff             lea eax, [esi + ebp - 1]
// 00586b15  85d2                 test edx, edx
// 00586b17  7658                 jbe 0x586b71
// 00586b19  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00586b1d  8bea                 mov ebp, edx
// 00586b1f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00586b23  0fb631               movzx esi, byte ptr [ecx]
// 00586b26  3bf2                 cmp esi, edx
// 00586b28  7c05                 jl 0x586b2f
// 00586b2a  c600ff               mov byte ptr [eax], 0xff
// 00586b2d  eb09                 jmp 0x586b38
// 00586b2f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00586b33  8a1c1e               mov bl, byte ptr [esi + ebx]
// 00586b36  8818                 mov byte ptr [eax], bl
// 00586b38  0fb631               movzx esi, byte ptr [ecx]
// 00586b3b  8d1c77               lea ebx, [edi + esi*2]
// 00586b3e  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 00586b43  8858ff               mov byte ptr [eax - 1], bl
// 00586b46  0fb631               movzx esi, byte ptr [ecx]
// 00586b49  48                   dec eax
// 00586b4a  8d1c77               lea ebx, [edi + esi*2]
// 00586b4d  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 00586b52  48                   dec eax
// 00586b53  8818                 mov byte ptr [eax], bl
// 00586b55  0fb631               movzx esi, byte ptr [ecx]
// 00586b58  8d1c77               lea ebx, [edi + esi*2]
// 00586b5b  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 00586b5f  48                   dec eax
// 00586b60  8818                 mov byte ptr [eax], bl
// 00586b62  48                   dec eax
// 00586b63  49                   dec ecx
// 00586b64  83ed01               sub ebp, 1
// 00586b67  75ba                 jne 0x586b23
// 00586b69  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00586b6d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00586b71  5f                   pop edi
// 00586b72  897304               mov dword ptr [ebx + 4], esi
// 00586b75  5e                   pop esi
// 00586b76  5d                   pop ebp
// 00586b77  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 00586b7b  c6430806             mov byte ptr [ebx + 8], 6
// 00586b7f  c6430a04             mov byte ptr [ebx + 0xa], 4
// 00586b83  c6430908             mov byte ptr [ebx + 9], 8
// 00586b87  5b                   pop ebx
// 00586b88  59                   pop ecx
// 00586b89  c3                   ret 
// 00586b8a  8d3452               lea esi, [edx + edx*2]
// 00586b8d  89742410             mov dword ptr [esp + 0x10], esi
// 00586b91  8d442eff             lea eax, [esi + ebp - 1]
// 00586b95  85d2                 test edx, edx
// 00586b97  763e                 jbe 0x586bd7
// 00586b99  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00586b9d  8bea                 mov ebp, edx
// 00586b9f  90                   nop 
// 00586ba0  0fb631               movzx esi, byte ptr [ecx]
// 00586ba3  8d1477               lea edx, [edi + esi*2]
// 00586ba6  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 00586bab  8810                 mov byte ptr [eax], dl
// 00586bad  0fb631               movzx esi, byte ptr [ecx]
// 00586bb0  8d1477               lea edx, [edi + esi*2]
// 00586bb3  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 00586bb8  48                   dec eax
// 00586bb9  8810                 mov byte ptr [eax], dl
// 00586bbb  0fb631               movzx esi, byte ptr [ecx]
// 00586bbe  8d1477               lea edx, [edi + esi*2]
// 00586bc1  0fb61416             movzx edx, byte ptr [esi + edx]
// 00586bc5  48                   dec eax
// 00586bc6  8810                 mov byte ptr [eax], dl
// 00586bc8  48                   dec eax
// 00586bc9  49                   dec ecx
// 00586bca  83ed01               sub ebp, 1
// 00586bcd  75d1                 jne 0x586ba0
// 00586bcf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00586bd3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00586bd7  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 00586bdb  c6430802             mov byte ptr [ebx + 8], 2
// 00586bdf  c6430a03             mov byte ptr [ebx + 0xa], 3
// 00586be3  897304               mov dword ptr [ebx + 4], esi
// 00586be6  c6430908             mov byte ptr [ebx + 9], 8
// 00586bea  5f                   pop edi
// 00586beb  5e                   pop esi
// 00586bec  5d                   pop ebp
// 00586bed  5b                   pop ebx
// 00586bee  59                   pop ecx
// 00586bef  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
