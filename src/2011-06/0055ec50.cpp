// roc 2011-06 0055ec50  unit: seg_00550000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055ec50
//
// 0055ec50  51                   push ecx
// 0055ec51  53                   push ebx
// 0055ec52  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0055ec56  807b0803             cmp byte ptr [ebx + 8], 3
// 0055ec5a  8b13                 mov edx, dword ptr [ebx]
// 0055ec5c  0f850b020000         jne 0x55ee6d
// 0055ec62  8a4309               mov al, byte ptr [ebx + 9]
// 0055ec65  55                   push ebp
// 0055ec66  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0055ec6a  56                   push esi
// 0055ec6b  57                   push edi
// 0055ec6c  3c08                 cmp al, 8
// 0055ec6e  0f83f9000000         jae 0x55ed6d
// 0055ec74  0fb6c0               movzx eax, al
// 0055ec77  83e801               sub eax, 1
// 0055ec7a  0f849a000000         je 0x55ed1a
// 0055ec80  83e801               sub eax, 1
// 0055ec83  7450                 je 0x55ecd5
// 0055ec85  83e802               sub eax, 2
// 0055ec88  0f85d4000000         jne 0x55ed62
// 0055ec8e  8bc2                 mov eax, edx
// 0055ec90  83e001               and eax, 1
// 0055ec93  8d72ff               lea esi, [edx - 1]
// 0055ec96  d1ee                 shr esi, 1
// 0055ec98  03c0                 add eax, eax
// 0055ec9a  03f5                 add esi, ebp
// 0055ec9c  03c0                 add eax, eax
// 0055ec9e  8d7c2aff             lea edi, [edx + ebp - 1]
// 0055eca2  85d2                 test edx, edx
// 0055eca4  0f86b8000000         jbe 0x55ed62
// 0055ecaa  89542410             mov dword ptr [esp + 0x10], edx
// 0055ecae  8bff                 mov edi, edi
// 0055ecb0  8a1e                 mov bl, byte ptr [esi]
// 0055ecb2  8ac8                 mov cl, al
// 0055ecb4  d2eb                 shr bl, cl
// 0055ecb6  80e30f               and bl, 0xf
// 0055ecb9  881f                 mov byte ptr [edi], bl
// 0055ecbb  83f804               cmp eax, 4
// 0055ecbe  7505                 jne 0x55ecc5
// 0055ecc0  33c0                 xor eax, eax
// 0055ecc2  4e                   dec esi
// 0055ecc3  eb03                 jmp 0x55ecc8
// 0055ecc5  83c004               add eax, 4
// 0055ecc8  4f                   dec edi
// 0055ecc9  836c241001           sub dword ptr [esp + 0x10], 1
// 0055ecce  75e0                 jne 0x55ecb0
// 0055ecd0  e989000000           jmp 0x55ed5e
// 0055ecd5  8d4aff               lea ecx, [edx - 1]
// 0055ecd8  83e103               and ecx, 3
// 0055ecdb  8d72ff               lea esi, [edx - 1]
// 0055ecde  b803000000           mov eax, 3
// 0055ece3  c1ee02               shr esi, 2
// 0055ece6  2bc1                 sub eax, ecx
// 0055ece8  03f5                 add esi, ebp
// 0055ecea  03c0                 add eax, eax
// 0055ecec  8d7c2aff             lea edi, [edx + ebp - 1]
// 0055ecf0  85d2                 test edx, edx
// 0055ecf2  766e                 jbe 0x55ed62
// 0055ecf4  89542410             mov dword ptr [esp + 0x10], edx
// 0055ecf8  8a1e                 mov bl, byte ptr [esi]
// 0055ecfa  8ac8                 mov cl, al
// 0055ecfc  d2eb                 shr bl, cl
// 0055ecfe  80e303               and bl, 3
// 0055ed01  881f                 mov byte ptr [edi], bl
// 0055ed03  83f806               cmp eax, 6
// 0055ed06  7505                 jne 0x55ed0d
// 0055ed08  33c0                 xor eax, eax
// 0055ed0a  4e                   dec esi
// 0055ed0b  eb03                 jmp 0x55ed10
// 0055ed0d  83c002               add eax, 2
// 0055ed10  4f                   dec edi
// 0055ed11  836c241001           sub dword ptr [esp + 0x10], 1
// 0055ed16  75e0                 jne 0x55ecf8
// 0055ed18  eb44                 jmp 0x55ed5e
// 0055ed1a  8d72ff               lea esi, [edx - 1]
// 0055ed1d  8d4aff               lea ecx, [edx - 1]
// 0055ed20  c1ee03               shr esi, 3
// 0055ed23  83e107               and ecx, 7
// 0055ed26  b807000000           mov eax, 7
// 0055ed2b  03f5                 add esi, ebp
// 0055ed2d  2bc1                 sub eax, ecx
// 0055ed2f  8d7c2aff             lea edi, [edx + ebp - 1]
// 0055ed33  85d2                 test edx, edx
// 0055ed35  762b                 jbe 0x55ed62
// 0055ed37  89542410             mov dword ptr [esp + 0x10], edx
// 0055ed3b  eb03                 jmp 0x55ed40
// 0055ed3d  8d4900               lea ecx, [ecx]
// 0055ed40  8a1e                 mov bl, byte ptr [esi]
// 0055ed42  8ac8                 mov cl, al
// 0055ed44  d2eb                 shr bl, cl
// 0055ed46  80e301               and bl, 1
// 0055ed49  881f                 mov byte ptr [edi], bl
// 0055ed4b  83f807               cmp eax, 7
// 0055ed4e  7505                 jne 0x55ed55
// 0055ed50  33c0                 xor eax, eax
// 0055ed52  4e                   dec esi
// 0055ed53  eb01                 jmp 0x55ed56
// 0055ed55  40                   inc eax
// 0055ed56  4f                   dec edi
// 0055ed57  836c241001           sub dword ptr [esp + 0x10], 1
// 0055ed5c  75e2                 jne 0x55ed40
// 0055ed5e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055ed62  c6430908             mov byte ptr [ebx + 9], 8
// 0055ed66  c6430b08             mov byte ptr [ebx + 0xb], 8
// 0055ed6a  895304               mov dword ptr [ebx + 4], edx
// 0055ed6d  807b0908             cmp byte ptr [ebx + 9], 8
// 0055ed71  0f85f3000000         jne 0x55ee6a
// 0055ed77  837c242400           cmp dword ptr [esp + 0x24], 0
// 0055ed7c  8d4c2aff             lea ecx, [edx + ebp - 1]
// 0055ed80  0f8484000000         je 0x55ee0a
// 0055ed86  8d349500000000       lea esi, [edx*4]
// 0055ed8d  89742410             mov dword ptr [esp + 0x10], esi
// 0055ed91  8d442eff             lea eax, [esi + ebp - 1]
// 0055ed95  85d2                 test edx, edx
// 0055ed97  7658                 jbe 0x55edf1
// 0055ed99  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055ed9d  8bea                 mov ebp, edx
// 0055ed9f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055eda3  0fb631               movzx esi, byte ptr [ecx]
// 0055eda6  3bf2                 cmp esi, edx
// 0055eda8  7c05                 jl 0x55edaf
// 0055edaa  c600ff               mov byte ptr [eax], 0xff
// 0055edad  eb09                 jmp 0x55edb8
// 0055edaf  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0055edb3  8a1c1e               mov bl, byte ptr [esi + ebx]
// 0055edb6  8818                 mov byte ptr [eax], bl
// 0055edb8  0fb631               movzx esi, byte ptr [ecx]
// 0055edbb  8d1c77               lea ebx, [edi + esi*2]
// 0055edbe  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 0055edc3  8858ff               mov byte ptr [eax - 1], bl
// 0055edc6  0fb631               movzx esi, byte ptr [ecx]
// 0055edc9  48                   dec eax
// 0055edca  8d1c77               lea ebx, [edi + esi*2]
// 0055edcd  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 0055edd2  48                   dec eax
// 0055edd3  8818                 mov byte ptr [eax], bl
// 0055edd5  0fb631               movzx esi, byte ptr [ecx]
// 0055edd8  8d1c77               lea ebx, [edi + esi*2]
// 0055eddb  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 0055eddf  48                   dec eax
// 0055ede0  8818                 mov byte ptr [eax], bl
// 0055ede2  48                   dec eax
// 0055ede3  49                   dec ecx
// 0055ede4  83ed01               sub ebp, 1
// 0055ede7  75ba                 jne 0x55eda3
// 0055ede9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055eded  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055edf1  5f                   pop edi
// 0055edf2  897304               mov dword ptr [ebx + 4], esi
// 0055edf5  5e                   pop esi
// 0055edf6  5d                   pop ebp
// 0055edf7  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 0055edfb  c6430806             mov byte ptr [ebx + 8], 6
// 0055edff  c6430a04             mov byte ptr [ebx + 0xa], 4
// 0055ee03  c6430908             mov byte ptr [ebx + 9], 8
// 0055ee07  5b                   pop ebx
// 0055ee08  59                   pop ecx
// 0055ee09  c3                   ret 
// 0055ee0a  8d3452               lea esi, [edx + edx*2]
// 0055ee0d  89742410             mov dword ptr [esp + 0x10], esi
// 0055ee11  8d442eff             lea eax, [esi + ebp - 1]
// 0055ee15  85d2                 test edx, edx
// 0055ee17  763e                 jbe 0x55ee57
// 0055ee19  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055ee1d  8bea                 mov ebp, edx
// 0055ee1f  90                   nop 
// 0055ee20  0fb631               movzx esi, byte ptr [ecx]
// 0055ee23  8d1477               lea edx, [edi + esi*2]
// 0055ee26  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 0055ee2b  8810                 mov byte ptr [eax], dl
// 0055ee2d  0fb631               movzx esi, byte ptr [ecx]
// 0055ee30  8d1477               lea edx, [edi + esi*2]
// 0055ee33  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 0055ee38  48                   dec eax
// 0055ee39  8810                 mov byte ptr [eax], dl
// 0055ee3b  0fb631               movzx esi, byte ptr [ecx]
// 0055ee3e  8d1477               lea edx, [edi + esi*2]
// 0055ee41  0fb61416             movzx edx, byte ptr [esi + edx]
// 0055ee45  48                   dec eax
// 0055ee46  8810                 mov byte ptr [eax], dl
// 0055ee48  48                   dec eax
// 0055ee49  49                   dec ecx
// 0055ee4a  83ed01               sub ebp, 1
// 0055ee4d  75d1                 jne 0x55ee20
// 0055ee4f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055ee53  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055ee57  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 0055ee5b  c6430802             mov byte ptr [ebx + 8], 2
// 0055ee5f  c6430a03             mov byte ptr [ebx + 0xa], 3
// 0055ee63  897304               mov dword ptr [ebx + 4], esi
// 0055ee66  c6430908             mov byte ptr [ebx + 9], 8
// 0055ee6a  5f                   pop edi
// 0055ee6b  5e                   pop esi
// 0055ee6c  5d                   pop ebp
// 0055ee6d  5b                   pop ebx
// 0055ee6e  59                   pop ecx
// 0055ee6f  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
