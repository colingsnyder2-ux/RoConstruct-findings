// from server: 100% by auto
// roc 2012-06 0064bad0  unit: seg_00640000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064bad0
//
// 0064bad0  51                   push ecx
// 0064bad1  53                   push ebx
// 0064bad2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0064bad6  807b0803             cmp byte ptr [ebx + 8], 3
// 0064bada  8b13                 mov edx, dword ptr [ebx]
// 0064badc  0f850b020000         jne 0x64bced
// 0064bae2  8a4309               mov al, byte ptr [ebx + 9]
// 0064bae5  55                   push ebp
// 0064bae6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0064baea  56                   push esi
// 0064baeb  57                   push edi
// 0064baec  3c08                 cmp al, 8
// 0064baee  0f83f9000000         jae 0x64bbed
// 0064baf4  0fb6c0               movzx eax, al
// 0064baf7  83e801               sub eax, 1
// 0064bafa  0f849a000000         je 0x64bb9a
// 0064bb00  83e801               sub eax, 1
// 0064bb03  7450                 je 0x64bb55
// 0064bb05  83e802               sub eax, 2
// 0064bb08  0f85d4000000         jne 0x64bbe2
// 0064bb0e  8bc2                 mov eax, edx
// 0064bb10  83e001               and eax, 1
// 0064bb13  8d72ff               lea esi, [edx - 1]
// 0064bb16  d1ee                 shr esi, 1
// 0064bb18  03c0                 add eax, eax
// 0064bb1a  03f5                 add esi, ebp
// 0064bb1c  03c0                 add eax, eax
// 0064bb1e  8d7c2aff             lea edi, [edx + ebp - 1]
// 0064bb22  85d2                 test edx, edx
// 0064bb24  0f86b8000000         jbe 0x64bbe2
// 0064bb2a  89542410             mov dword ptr [esp + 0x10], edx
// 0064bb2e  8bff                 mov edi, edi
// 0064bb30  8a1e                 mov bl, byte ptr [esi]
// 0064bb32  8ac8                 mov cl, al
// 0064bb34  d2eb                 shr bl, cl
// 0064bb36  80e30f               and bl, 0xf
// 0064bb39  881f                 mov byte ptr [edi], bl
// 0064bb3b  83f804               cmp eax, 4
// 0064bb3e  7505                 jne 0x64bb45
// 0064bb40  33c0                 xor eax, eax
// 0064bb42  4e                   dec esi
// 0064bb43  eb03                 jmp 0x64bb48
// 0064bb45  83c004               add eax, 4
// 0064bb48  4f                   dec edi
// 0064bb49  836c241001           sub dword ptr [esp + 0x10], 1
// 0064bb4e  75e0                 jne 0x64bb30
// 0064bb50  e989000000           jmp 0x64bbde
// 0064bb55  8d4aff               lea ecx, [edx - 1]
// 0064bb58  83e103               and ecx, 3
// 0064bb5b  8d72ff               lea esi, [edx - 1]
// 0064bb5e  b803000000           mov eax, 3
// 0064bb63  c1ee02               shr esi, 2
// 0064bb66  2bc1                 sub eax, ecx
// 0064bb68  03f5                 add esi, ebp
// 0064bb6a  03c0                 add eax, eax
// 0064bb6c  8d7c2aff             lea edi, [edx + ebp - 1]
// 0064bb70  85d2                 test edx, edx
// 0064bb72  766e                 jbe 0x64bbe2
// 0064bb74  89542410             mov dword ptr [esp + 0x10], edx
// 0064bb78  8a1e                 mov bl, byte ptr [esi]
// 0064bb7a  8ac8                 mov cl, al
// 0064bb7c  d2eb                 shr bl, cl
// 0064bb7e  80e303               and bl, 3
// 0064bb81  881f                 mov byte ptr [edi], bl
// 0064bb83  83f806               cmp eax, 6
// 0064bb86  7505                 jne 0x64bb8d
// 0064bb88  33c0                 xor eax, eax
// 0064bb8a  4e                   dec esi
// 0064bb8b  eb03                 jmp 0x64bb90
// 0064bb8d  83c002               add eax, 2
// 0064bb90  4f                   dec edi
// 0064bb91  836c241001           sub dword ptr [esp + 0x10], 1
// 0064bb96  75e0                 jne 0x64bb78
// 0064bb98  eb44                 jmp 0x64bbde
// 0064bb9a  8d72ff               lea esi, [edx - 1]
// 0064bb9d  8d4aff               lea ecx, [edx - 1]
// 0064bba0  c1ee03               shr esi, 3
// 0064bba3  83e107               and ecx, 7
// 0064bba6  b807000000           mov eax, 7
// 0064bbab  03f5                 add esi, ebp
// 0064bbad  2bc1                 sub eax, ecx
// 0064bbaf  8d7c2aff             lea edi, [edx + ebp - 1]
// 0064bbb3  85d2                 test edx, edx
// 0064bbb5  762b                 jbe 0x64bbe2
// 0064bbb7  89542410             mov dword ptr [esp + 0x10], edx
// 0064bbbb  eb03                 jmp 0x64bbc0
// 0064bbbd  8d4900               lea ecx, [ecx]
// 0064bbc0  8a1e                 mov bl, byte ptr [esi]
// 0064bbc2  8ac8                 mov cl, al
// 0064bbc4  d2eb                 shr bl, cl
// 0064bbc6  80e301               and bl, 1
// 0064bbc9  881f                 mov byte ptr [edi], bl
// 0064bbcb  83f807               cmp eax, 7
// 0064bbce  7505                 jne 0x64bbd5
// 0064bbd0  33c0                 xor eax, eax
// 0064bbd2  4e                   dec esi
// 0064bbd3  eb01                 jmp 0x64bbd6
// 0064bbd5  40                   inc eax
// 0064bbd6  4f                   dec edi
// 0064bbd7  836c241001           sub dword ptr [esp + 0x10], 1
// 0064bbdc  75e2                 jne 0x64bbc0
// 0064bbde  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064bbe2  c6430908             mov byte ptr [ebx + 9], 8
// 0064bbe6  c6430b08             mov byte ptr [ebx + 0xb], 8
// 0064bbea  895304               mov dword ptr [ebx + 4], edx
// 0064bbed  807b0908             cmp byte ptr [ebx + 9], 8
// 0064bbf1  0f85f3000000         jne 0x64bcea
// 0064bbf7  837c242400           cmp dword ptr [esp + 0x24], 0
// 0064bbfc  8d4c2aff             lea ecx, [edx + ebp - 1]
// 0064bc00  0f8484000000         je 0x64bc8a
// 0064bc06  8d349500000000       lea esi, [edx*4]
// 0064bc0d  89742410             mov dword ptr [esp + 0x10], esi
// 0064bc11  8d442eff             lea eax, [esi + ebp - 1]
// 0064bc15  85d2                 test edx, edx
// 0064bc17  7658                 jbe 0x64bc71
// 0064bc19  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064bc1d  8bea                 mov ebp, edx
// 0064bc1f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064bc23  0fb631               movzx esi, byte ptr [ecx]
// 0064bc26  3bf2                 cmp esi, edx
// 0064bc28  7c05                 jl 0x64bc2f
// 0064bc2a  c600ff               mov byte ptr [eax], 0xff
// 0064bc2d  eb09                 jmp 0x64bc38
// 0064bc2f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0064bc33  8a1c1e               mov bl, byte ptr [esi + ebx]
// 0064bc36  8818                 mov byte ptr [eax], bl
// 0064bc38  0fb631               movzx esi, byte ptr [ecx]
// 0064bc3b  8d1c77               lea ebx, [edi + esi*2]
// 0064bc3e  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 0064bc43  8858ff               mov byte ptr [eax - 1], bl
// 0064bc46  0fb631               movzx esi, byte ptr [ecx]
// 0064bc49  48                   dec eax
// 0064bc4a  8d1c77               lea ebx, [edi + esi*2]
// 0064bc4d  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 0064bc52  48                   dec eax
// 0064bc53  8818                 mov byte ptr [eax], bl
// 0064bc55  0fb631               movzx esi, byte ptr [ecx]
// 0064bc58  8d1c77               lea ebx, [edi + esi*2]
// 0064bc5b  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 0064bc5f  48                   dec eax
// 0064bc60  8818                 mov byte ptr [eax], bl
// 0064bc62  48                   dec eax
// 0064bc63  49                   dec ecx
// 0064bc64  83ed01               sub ebp, 1
// 0064bc67  75ba                 jne 0x64bc23
// 0064bc69  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064bc6d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0064bc71  5f                   pop edi
// 0064bc72  897304               mov dword ptr [ebx + 4], esi
// 0064bc75  5e                   pop esi
// 0064bc76  5d                   pop ebp
// 0064bc77  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 0064bc7b  c6430806             mov byte ptr [ebx + 8], 6
// 0064bc7f  c6430a04             mov byte ptr [ebx + 0xa], 4
// 0064bc83  c6430908             mov byte ptr [ebx + 9], 8
// 0064bc87  5b                   pop ebx
// 0064bc88  59                   pop ecx
// 0064bc89  c3                   ret 
// 0064bc8a  8d3452               lea esi, [edx + edx*2]
// 0064bc8d  89742410             mov dword ptr [esp + 0x10], esi
// 0064bc91  8d442eff             lea eax, [esi + ebp - 1]
// 0064bc95  85d2                 test edx, edx
// 0064bc97  763e                 jbe 0x64bcd7
// 0064bc99  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064bc9d  8bea                 mov ebp, edx
// 0064bc9f  90                   nop 
// 0064bca0  0fb631               movzx esi, byte ptr [ecx]
// 0064bca3  8d1477               lea edx, [edi + esi*2]
// 0064bca6  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 0064bcab  8810                 mov byte ptr [eax], dl
// 0064bcad  0fb631               movzx esi, byte ptr [ecx]
// 0064bcb0  8d1477               lea edx, [edi + esi*2]
// 0064bcb3  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 0064bcb8  48                   dec eax
// 0064bcb9  8810                 mov byte ptr [eax], dl
// 0064bcbb  0fb631               movzx esi, byte ptr [ecx]
// 0064bcbe  8d1477               lea edx, [edi + esi*2]
// 0064bcc1  0fb61416             movzx edx, byte ptr [esi + edx]
// 0064bcc5  48                   dec eax
// 0064bcc6  8810                 mov byte ptr [eax], dl
// 0064bcc8  48                   dec eax
// 0064bcc9  49                   dec ecx
// 0064bcca  83ed01               sub ebp, 1
// 0064bccd  75d1                 jne 0x64bca0
// 0064bccf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064bcd3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0064bcd7  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 0064bcdb  c6430802             mov byte ptr [ebx + 8], 2
// 0064bcdf  c6430a03             mov byte ptr [ebx + 0xa], 3
// 0064bce3  897304               mov dword ptr [ebx + 4], esi
// 0064bce6  c6430908             mov byte ptr [ebx + 9], 8
// 0064bcea  5f                   pop edi
// 0064bceb  5e                   pop esi
// 0064bcec  5d                   pop ebp
// 0064bced  5b                   pop ebx
// 0064bcee  59                   pop ecx
// 0064bcef  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
