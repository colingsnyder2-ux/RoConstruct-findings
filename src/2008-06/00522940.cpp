// roc 2008-06 00522940  unit: seg_00520000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00522940
//
// 00522940  51                   push ecx
// 00522941  53                   push ebx
// 00522942  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00522946  807b0803             cmp byte ptr [ebx + 8], 3
// 0052294a  8b13                 mov edx, dword ptr [ebx]
// 0052294c  0f850b020000         jne 0x522b5d
// 00522952  8a4309               mov al, byte ptr [ebx + 9]
// 00522955  55                   push ebp
// 00522956  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052295a  56                   push esi
// 0052295b  57                   push edi
// 0052295c  3c08                 cmp al, 8
// 0052295e  0f83f9000000         jae 0x522a5d
// 00522964  0fb6c0               movzx eax, al
// 00522967  83e801               sub eax, 1
// 0052296a  0f849a000000         je 0x522a0a
// 00522970  83e801               sub eax, 1
// 00522973  7450                 je 0x5229c5
// 00522975  83e802               sub eax, 2
// 00522978  0f85d4000000         jne 0x522a52
// 0052297e  8bc2                 mov eax, edx
// 00522980  83e001               and eax, 1
// 00522983  8d72ff               lea esi, [edx - 1]
// 00522986  d1ee                 shr esi, 1
// 00522988  03c0                 add eax, eax
// 0052298a  03f5                 add esi, ebp
// 0052298c  03c0                 add eax, eax
// 0052298e  8d7c2aff             lea edi, [edx + ebp - 1]
// 00522992  85d2                 test edx, edx
// 00522994  0f86b8000000         jbe 0x522a52
// 0052299a  89542410             mov dword ptr [esp + 0x10], edx
// 0052299e  8bff                 mov edi, edi
// 005229a0  8a1e                 mov bl, byte ptr [esi]
// 005229a2  8ac8                 mov cl, al
// 005229a4  d2eb                 shr bl, cl
// 005229a6  80e30f               and bl, 0xf
// 005229a9  881f                 mov byte ptr [edi], bl
// 005229ab  83f804               cmp eax, 4
// 005229ae  7505                 jne 0x5229b5
// 005229b0  33c0                 xor eax, eax
// 005229b2  4e                   dec esi
// 005229b3  eb03                 jmp 0x5229b8
// 005229b5  83c004               add eax, 4
// 005229b8  4f                   dec edi
// 005229b9  836c241001           sub dword ptr [esp + 0x10], 1
// 005229be  75e0                 jne 0x5229a0
// 005229c0  e989000000           jmp 0x522a4e
// 005229c5  8d4aff               lea ecx, [edx - 1]
// 005229c8  83e103               and ecx, 3
// 005229cb  8d72ff               lea esi, [edx - 1]
// 005229ce  b803000000           mov eax, 3
// 005229d3  c1ee02               shr esi, 2
// 005229d6  2bc1                 sub eax, ecx
// 005229d8  03f5                 add esi, ebp
// 005229da  03c0                 add eax, eax
// 005229dc  8d7c2aff             lea edi, [edx + ebp - 1]
// 005229e0  85d2                 test edx, edx
// 005229e2  766e                 jbe 0x522a52
// 005229e4  89542410             mov dword ptr [esp + 0x10], edx
// 005229e8  8a1e                 mov bl, byte ptr [esi]
// 005229ea  8ac8                 mov cl, al
// 005229ec  d2eb                 shr bl, cl
// 005229ee  80e303               and bl, 3
// 005229f1  881f                 mov byte ptr [edi], bl
// 005229f3  83f806               cmp eax, 6
// 005229f6  7505                 jne 0x5229fd
// 005229f8  33c0                 xor eax, eax
// 005229fa  4e                   dec esi
// 005229fb  eb03                 jmp 0x522a00
// 005229fd  83c002               add eax, 2
// 00522a00  4f                   dec edi
// 00522a01  836c241001           sub dword ptr [esp + 0x10], 1
// 00522a06  75e0                 jne 0x5229e8
// 00522a08  eb44                 jmp 0x522a4e
// 00522a0a  8d72ff               lea esi, [edx - 1]
// 00522a0d  8d4aff               lea ecx, [edx - 1]
// 00522a10  c1ee03               shr esi, 3
// 00522a13  83e107               and ecx, 7
// 00522a16  b807000000           mov eax, 7
// 00522a1b  03f5                 add esi, ebp
// 00522a1d  2bc1                 sub eax, ecx
// 00522a1f  8d7c2aff             lea edi, [edx + ebp - 1]
// 00522a23  85d2                 test edx, edx
// 00522a25  762b                 jbe 0x522a52
// 00522a27  89542410             mov dword ptr [esp + 0x10], edx
// 00522a2b  eb03                 jmp 0x522a30
// 00522a2d  8d4900               lea ecx, [ecx]
// 00522a30  8a1e                 mov bl, byte ptr [esi]
// 00522a32  8ac8                 mov cl, al
// 00522a34  d2eb                 shr bl, cl
// 00522a36  80e301               and bl, 1
// 00522a39  881f                 mov byte ptr [edi], bl
// 00522a3b  83f807               cmp eax, 7
// 00522a3e  7505                 jne 0x522a45
// 00522a40  33c0                 xor eax, eax
// 00522a42  4e                   dec esi
// 00522a43  eb01                 jmp 0x522a46
// 00522a45  40                   inc eax
// 00522a46  4f                   dec edi
// 00522a47  836c241001           sub dword ptr [esp + 0x10], 1
// 00522a4c  75e2                 jne 0x522a30
// 00522a4e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00522a52  c6430908             mov byte ptr [ebx + 9], 8
// 00522a56  c6430b08             mov byte ptr [ebx + 0xb], 8
// 00522a5a  895304               mov dword ptr [ebx + 4], edx
// 00522a5d  807b0908             cmp byte ptr [ebx + 9], 8
// 00522a61  0f85f3000000         jne 0x522b5a
// 00522a67  837c242400           cmp dword ptr [esp + 0x24], 0
// 00522a6c  8d4c2aff             lea ecx, [edx + ebp - 1]
// 00522a70  0f8484000000         je 0x522afa
// 00522a76  8d349500000000       lea esi, [edx*4]
// 00522a7d  89742410             mov dword ptr [esp + 0x10], esi
// 00522a81  8d442eff             lea eax, [esi + ebp - 1]
// 00522a85  85d2                 test edx, edx
// 00522a87  7658                 jbe 0x522ae1
// 00522a89  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00522a8d  8bea                 mov ebp, edx
// 00522a8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00522a93  0fb631               movzx esi, byte ptr [ecx]
// 00522a96  3bf2                 cmp esi, edx
// 00522a98  7c05                 jl 0x522a9f
// 00522a9a  c600ff               mov byte ptr [eax], 0xff
// 00522a9d  eb09                 jmp 0x522aa8
// 00522a9f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00522aa3  8a1c1e               mov bl, byte ptr [esi + ebx]
// 00522aa6  8818                 mov byte ptr [eax], bl
// 00522aa8  0fb631               movzx esi, byte ptr [ecx]
// 00522aab  8d1c77               lea ebx, [edi + esi*2]
// 00522aae  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 00522ab3  8858ff               mov byte ptr [eax - 1], bl
// 00522ab6  0fb631               movzx esi, byte ptr [ecx]
// 00522ab9  48                   dec eax
// 00522aba  8d1c77               lea ebx, [edi + esi*2]
// 00522abd  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 00522ac2  48                   dec eax
// 00522ac3  8818                 mov byte ptr [eax], bl
// 00522ac5  0fb631               movzx esi, byte ptr [ecx]
// 00522ac8  8d1c77               lea ebx, [edi + esi*2]
// 00522acb  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 00522acf  48                   dec eax
// 00522ad0  8818                 mov byte ptr [eax], bl
// 00522ad2  48                   dec eax
// 00522ad3  49                   dec ecx
// 00522ad4  83ed01               sub ebp, 1
// 00522ad7  75ba                 jne 0x522a93
// 00522ad9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00522add  8b742410             mov esi, dword ptr [esp + 0x10]
// 00522ae1  5f                   pop edi
// 00522ae2  897304               mov dword ptr [ebx + 4], esi
// 00522ae5  5e                   pop esi
// 00522ae6  5d                   pop ebp
// 00522ae7  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 00522aeb  c6430806             mov byte ptr [ebx + 8], 6
// 00522aef  c6430a04             mov byte ptr [ebx + 0xa], 4
// 00522af3  c6430908             mov byte ptr [ebx + 9], 8
// 00522af7  5b                   pop ebx
// 00522af8  59                   pop ecx
// 00522af9  c3                   ret 
// 00522afa  8d3452               lea esi, [edx + edx*2]
// 00522afd  89742410             mov dword ptr [esp + 0x10], esi
// 00522b01  8d442eff             lea eax, [esi + ebp - 1]
// 00522b05  85d2                 test edx, edx
// 00522b07  763e                 jbe 0x522b47
// 00522b09  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00522b0d  8bea                 mov ebp, edx
// 00522b0f  90                   nop 
// 00522b10  0fb631               movzx esi, byte ptr [ecx]
// 00522b13  8d1477               lea edx, [edi + esi*2]
// 00522b16  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 00522b1b  8810                 mov byte ptr [eax], dl
// 00522b1d  0fb631               movzx esi, byte ptr [ecx]
// 00522b20  8d1477               lea edx, [edi + esi*2]
// 00522b23  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 00522b28  48                   dec eax
// 00522b29  8810                 mov byte ptr [eax], dl
// 00522b2b  0fb631               movzx esi, byte ptr [ecx]
// 00522b2e  8d1477               lea edx, [edi + esi*2]
// 00522b31  0fb61416             movzx edx, byte ptr [esi + edx]
// 00522b35  48                   dec eax
// 00522b36  8810                 mov byte ptr [eax], dl
// 00522b38  48                   dec eax
// 00522b39  49                   dec ecx
// 00522b3a  83ed01               sub ebp, 1
// 00522b3d  75d1                 jne 0x522b10
// 00522b3f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00522b43  8b742410             mov esi, dword ptr [esp + 0x10]
// 00522b47  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 00522b4b  c6430802             mov byte ptr [ebx + 8], 2
// 00522b4f  c6430a03             mov byte ptr [ebx + 0xa], 3
// 00522b53  897304               mov dword ptr [ebx + 4], esi
// 00522b56  c6430908             mov byte ptr [ebx + 9], 8
// 00522b5a  5f                   pop edi
// 00522b5b  5e                   pop esi
// 00522b5c  5d                   pop ebp
// 00522b5d  5b                   pop ebx
// 00522b5e  59                   pop ecx
// 00522b5f  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
