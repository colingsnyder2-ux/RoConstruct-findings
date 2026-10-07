// roc 2010-06 0056a100  unit: seg_00560000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056a100
//
// 0056a100  51                   push ecx
// 0056a101  53                   push ebx
// 0056a102  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0056a106  807b0803             cmp byte ptr [ebx + 8], 3
// 0056a10a  8b13                 mov edx, dword ptr [ebx]
// 0056a10c  0f850b020000         jne 0x56a31d
// 0056a112  8a4309               mov al, byte ptr [ebx + 9]
// 0056a115  55                   push ebp
// 0056a116  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0056a11a  56                   push esi
// 0056a11b  57                   push edi
// 0056a11c  3c08                 cmp al, 8
// 0056a11e  0f83f9000000         jae 0x56a21d
// 0056a124  0fb6c0               movzx eax, al
// 0056a127  83e801               sub eax, 1
// 0056a12a  0f849a000000         je 0x56a1ca
// 0056a130  83e801               sub eax, 1
// 0056a133  7450                 je 0x56a185
// 0056a135  83e802               sub eax, 2
// 0056a138  0f85d4000000         jne 0x56a212
// 0056a13e  8bc2                 mov eax, edx
// 0056a140  83e001               and eax, 1
// 0056a143  8d72ff               lea esi, [edx - 1]
// 0056a146  d1ee                 shr esi, 1
// 0056a148  03c0                 add eax, eax
// 0056a14a  03f5                 add esi, ebp
// 0056a14c  03c0                 add eax, eax
// 0056a14e  8d7c2aff             lea edi, [edx + ebp - 1]
// 0056a152  85d2                 test edx, edx
// 0056a154  0f86b8000000         jbe 0x56a212
// 0056a15a  89542410             mov dword ptr [esp + 0x10], edx
// 0056a15e  8bff                 mov edi, edi
// 0056a160  8a1e                 mov bl, byte ptr [esi]
// 0056a162  8ac8                 mov cl, al
// 0056a164  d2eb                 shr bl, cl
// 0056a166  80e30f               and bl, 0xf
// 0056a169  881f                 mov byte ptr [edi], bl
// 0056a16b  83f804               cmp eax, 4
// 0056a16e  7505                 jne 0x56a175
// 0056a170  33c0                 xor eax, eax
// 0056a172  4e                   dec esi
// 0056a173  eb03                 jmp 0x56a178
// 0056a175  83c004               add eax, 4
// 0056a178  4f                   dec edi
// 0056a179  836c241001           sub dword ptr [esp + 0x10], 1
// 0056a17e  75e0                 jne 0x56a160
// 0056a180  e989000000           jmp 0x56a20e
// 0056a185  8d4aff               lea ecx, [edx - 1]
// 0056a188  83e103               and ecx, 3
// 0056a18b  8d72ff               lea esi, [edx - 1]
// 0056a18e  b803000000           mov eax, 3
// 0056a193  c1ee02               shr esi, 2
// 0056a196  2bc1                 sub eax, ecx
// 0056a198  03f5                 add esi, ebp
// 0056a19a  03c0                 add eax, eax
// 0056a19c  8d7c2aff             lea edi, [edx + ebp - 1]
// 0056a1a0  85d2                 test edx, edx
// 0056a1a2  766e                 jbe 0x56a212
// 0056a1a4  89542410             mov dword ptr [esp + 0x10], edx
// 0056a1a8  8a1e                 mov bl, byte ptr [esi]
// 0056a1aa  8ac8                 mov cl, al
// 0056a1ac  d2eb                 shr bl, cl
// 0056a1ae  80e303               and bl, 3
// 0056a1b1  881f                 mov byte ptr [edi], bl
// 0056a1b3  83f806               cmp eax, 6
// 0056a1b6  7505                 jne 0x56a1bd
// 0056a1b8  33c0                 xor eax, eax
// 0056a1ba  4e                   dec esi
// 0056a1bb  eb03                 jmp 0x56a1c0
// 0056a1bd  83c002               add eax, 2
// 0056a1c0  4f                   dec edi
// 0056a1c1  836c241001           sub dword ptr [esp + 0x10], 1
// 0056a1c6  75e0                 jne 0x56a1a8
// 0056a1c8  eb44                 jmp 0x56a20e
// 0056a1ca  8d72ff               lea esi, [edx - 1]
// 0056a1cd  8d4aff               lea ecx, [edx - 1]
// 0056a1d0  c1ee03               shr esi, 3
// 0056a1d3  83e107               and ecx, 7
// 0056a1d6  b807000000           mov eax, 7
// 0056a1db  03f5                 add esi, ebp
// 0056a1dd  2bc1                 sub eax, ecx
// 0056a1df  8d7c2aff             lea edi, [edx + ebp - 1]
// 0056a1e3  85d2                 test edx, edx
// 0056a1e5  762b                 jbe 0x56a212
// 0056a1e7  89542410             mov dword ptr [esp + 0x10], edx
// 0056a1eb  eb03                 jmp 0x56a1f0
// 0056a1ed  8d4900               lea ecx, [ecx]
// 0056a1f0  8a1e                 mov bl, byte ptr [esi]
// 0056a1f2  8ac8                 mov cl, al
// 0056a1f4  d2eb                 shr bl, cl
// 0056a1f6  80e301               and bl, 1
// 0056a1f9  881f                 mov byte ptr [edi], bl
// 0056a1fb  83f807               cmp eax, 7
// 0056a1fe  7505                 jne 0x56a205
// 0056a200  33c0                 xor eax, eax
// 0056a202  4e                   dec esi
// 0056a203  eb01                 jmp 0x56a206
// 0056a205  40                   inc eax
// 0056a206  4f                   dec edi
// 0056a207  836c241001           sub dword ptr [esp + 0x10], 1
// 0056a20c  75e2                 jne 0x56a1f0
// 0056a20e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056a212  c6430908             mov byte ptr [ebx + 9], 8
// 0056a216  c6430b08             mov byte ptr [ebx + 0xb], 8
// 0056a21a  895304               mov dword ptr [ebx + 4], edx
// 0056a21d  807b0908             cmp byte ptr [ebx + 9], 8
// 0056a221  0f85f3000000         jne 0x56a31a
// 0056a227  837c242400           cmp dword ptr [esp + 0x24], 0
// 0056a22c  8d4c2aff             lea ecx, [edx + ebp - 1]
// 0056a230  0f8484000000         je 0x56a2ba
// 0056a236  8d349500000000       lea esi, [edx*4]
// 0056a23d  89742410             mov dword ptr [esp + 0x10], esi
// 0056a241  8d442eff             lea eax, [esi + ebp - 1]
// 0056a245  85d2                 test edx, edx
// 0056a247  7658                 jbe 0x56a2a1
// 0056a249  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a24d  8bea                 mov ebp, edx
// 0056a24f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056a253  0fb631               movzx esi, byte ptr [ecx]
// 0056a256  3bf2                 cmp esi, edx
// 0056a258  7c05                 jl 0x56a25f
// 0056a25a  c600ff               mov byte ptr [eax], 0xff
// 0056a25d  eb09                 jmp 0x56a268
// 0056a25f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056a263  8a1c1e               mov bl, byte ptr [esi + ebx]
// 0056a266  8818                 mov byte ptr [eax], bl
// 0056a268  0fb631               movzx esi, byte ptr [ecx]
// 0056a26b  8d1c77               lea ebx, [edi + esi*2]
// 0056a26e  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 0056a273  8858ff               mov byte ptr [eax - 1], bl
// 0056a276  0fb631               movzx esi, byte ptr [ecx]
// 0056a279  48                   dec eax
// 0056a27a  8d1c77               lea ebx, [edi + esi*2]
// 0056a27d  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 0056a282  48                   dec eax
// 0056a283  8818                 mov byte ptr [eax], bl
// 0056a285  0fb631               movzx esi, byte ptr [ecx]
// 0056a288  8d1c77               lea ebx, [edi + esi*2]
// 0056a28b  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 0056a28f  48                   dec eax
// 0056a290  8818                 mov byte ptr [eax], bl
// 0056a292  48                   dec eax
// 0056a293  49                   dec ecx
// 0056a294  83ed01               sub ebp, 1
// 0056a297  75ba                 jne 0x56a253
// 0056a299  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056a29d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056a2a1  5f                   pop edi
// 0056a2a2  897304               mov dword ptr [ebx + 4], esi
// 0056a2a5  5e                   pop esi
// 0056a2a6  5d                   pop ebp
// 0056a2a7  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 0056a2ab  c6430806             mov byte ptr [ebx + 8], 6
// 0056a2af  c6430a04             mov byte ptr [ebx + 0xa], 4
// 0056a2b3  c6430908             mov byte ptr [ebx + 9], 8
// 0056a2b7  5b                   pop ebx
// 0056a2b8  59                   pop ecx
// 0056a2b9  c3                   ret 
// 0056a2ba  8d3452               lea esi, [edx + edx*2]
// 0056a2bd  89742410             mov dword ptr [esp + 0x10], esi
// 0056a2c1  8d442eff             lea eax, [esi + ebp - 1]
// 0056a2c5  85d2                 test edx, edx
// 0056a2c7  763e                 jbe 0x56a307
// 0056a2c9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a2cd  8bea                 mov ebp, edx
// 0056a2cf  90                   nop 
// 0056a2d0  0fb631               movzx esi, byte ptr [ecx]
// 0056a2d3  8d1477               lea edx, [edi + esi*2]
// 0056a2d6  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 0056a2db  8810                 mov byte ptr [eax], dl
// 0056a2dd  0fb631               movzx esi, byte ptr [ecx]
// 0056a2e0  8d1477               lea edx, [edi + esi*2]
// 0056a2e3  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 0056a2e8  48                   dec eax
// 0056a2e9  8810                 mov byte ptr [eax], dl
// 0056a2eb  0fb631               movzx esi, byte ptr [ecx]
// 0056a2ee  8d1477               lea edx, [edi + esi*2]
// 0056a2f1  0fb61416             movzx edx, byte ptr [esi + edx]
// 0056a2f5  48                   dec eax
// 0056a2f6  8810                 mov byte ptr [eax], dl
// 0056a2f8  48                   dec eax
// 0056a2f9  49                   dec ecx
// 0056a2fa  83ed01               sub ebp, 1
// 0056a2fd  75d1                 jne 0x56a2d0
// 0056a2ff  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056a303  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056a307  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 0056a30b  c6430802             mov byte ptr [ebx + 8], 2
// 0056a30f  c6430a03             mov byte ptr [ebx + 0xa], 3
// 0056a313  897304               mov dword ptr [ebx + 4], esi
// 0056a316  c6430908             mov byte ptr [ebx + 9], 8
// 0056a31a  5f                   pop edi
// 0056a31b  5e                   pop esi
// 0056a31c  5d                   pop ebp
// 0056a31d  5b                   pop ebx
// 0056a31e  59                   pop ecx
// 0056a31f  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
