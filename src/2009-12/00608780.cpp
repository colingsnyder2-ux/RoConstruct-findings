// roc 2009-12 00608780  unit: seg_00600000  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00608780
//
// 00608780  51                   push ecx
// 00608781  53                   push ebx
// 00608782  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00608786  807b0803             cmp byte ptr [ebx + 8], 3
// 0060878a  8b13                 mov edx, dword ptr [ebx]
// 0060878c  0f850b020000         jne 0x60899d
// 00608792  8a4309               mov al, byte ptr [ebx + 9]
// 00608795  55                   push ebp
// 00608796  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0060879a  56                   push esi
// 0060879b  57                   push edi
// 0060879c  3c08                 cmp al, 8
// 0060879e  0f83f9000000         jae 0x60889d
// 006087a4  0fb6c0               movzx eax, al
// 006087a7  83e801               sub eax, 1
// 006087aa  0f849a000000         je 0x60884a
// 006087b0  83e801               sub eax, 1
// 006087b3  7450                 je 0x608805
// 006087b5  83e802               sub eax, 2
// 006087b8  0f85d4000000         jne 0x608892
// 006087be  8bc2                 mov eax, edx
// 006087c0  83e001               and eax, 1
// 006087c3  8d72ff               lea esi, [edx - 1]
// 006087c6  d1ee                 shr esi, 1
// 006087c8  03c0                 add eax, eax
// 006087ca  03f5                 add esi, ebp
// 006087cc  03c0                 add eax, eax
// 006087ce  8d7c2aff             lea edi, [edx + ebp - 1]
// 006087d2  85d2                 test edx, edx
// 006087d4  0f86b8000000         jbe 0x608892
// 006087da  89542410             mov dword ptr [esp + 0x10], edx
// 006087de  8bff                 mov edi, edi
// 006087e0  8a1e                 mov bl, byte ptr [esi]
// 006087e2  8ac8                 mov cl, al
// 006087e4  d2eb                 shr bl, cl
// 006087e6  80e30f               and bl, 0xf
// 006087e9  881f                 mov byte ptr [edi], bl
// 006087eb  83f804               cmp eax, 4
// 006087ee  7505                 jne 0x6087f5
// 006087f0  33c0                 xor eax, eax
// 006087f2  4e                   dec esi
// 006087f3  eb03                 jmp 0x6087f8
// 006087f5  83c004               add eax, 4
// 006087f8  4f                   dec edi
// 006087f9  836c241001           sub dword ptr [esp + 0x10], 1
// 006087fe  75e0                 jne 0x6087e0
// 00608800  e989000000           jmp 0x60888e
// 00608805  8d4aff               lea ecx, [edx - 1]
// 00608808  83e103               and ecx, 3
// 0060880b  8d72ff               lea esi, [edx - 1]
// 0060880e  b803000000           mov eax, 3
// 00608813  c1ee02               shr esi, 2
// 00608816  2bc1                 sub eax, ecx
// 00608818  03f5                 add esi, ebp
// 0060881a  03c0                 add eax, eax
// 0060881c  8d7c2aff             lea edi, [edx + ebp - 1]
// 00608820  85d2                 test edx, edx
// 00608822  766e                 jbe 0x608892
// 00608824  89542410             mov dword ptr [esp + 0x10], edx
// 00608828  8a1e                 mov bl, byte ptr [esi]
// 0060882a  8ac8                 mov cl, al
// 0060882c  d2eb                 shr bl, cl
// 0060882e  80e303               and bl, 3
// 00608831  881f                 mov byte ptr [edi], bl
// 00608833  83f806               cmp eax, 6
// 00608836  7505                 jne 0x60883d
// 00608838  33c0                 xor eax, eax
// 0060883a  4e                   dec esi
// 0060883b  eb03                 jmp 0x608840
// 0060883d  83c002               add eax, 2
// 00608840  4f                   dec edi
// 00608841  836c241001           sub dword ptr [esp + 0x10], 1
// 00608846  75e0                 jne 0x608828
// 00608848  eb44                 jmp 0x60888e
// 0060884a  8d72ff               lea esi, [edx - 1]
// 0060884d  8d4aff               lea ecx, [edx - 1]
// 00608850  c1ee03               shr esi, 3
// 00608853  83e107               and ecx, 7
// 00608856  b807000000           mov eax, 7
// 0060885b  03f5                 add esi, ebp
// 0060885d  2bc1                 sub eax, ecx
// 0060885f  8d7c2aff             lea edi, [edx + ebp - 1]
// 00608863  85d2                 test edx, edx
// 00608865  762b                 jbe 0x608892
// 00608867  89542410             mov dword ptr [esp + 0x10], edx
// 0060886b  eb03                 jmp 0x608870
// 0060886d  8d4900               lea ecx, [ecx]
// 00608870  8a1e                 mov bl, byte ptr [esi]
// 00608872  8ac8                 mov cl, al
// 00608874  d2eb                 shr bl, cl
// 00608876  80e301               and bl, 1
// 00608879  881f                 mov byte ptr [edi], bl
// 0060887b  83f807               cmp eax, 7
// 0060887e  7505                 jne 0x608885
// 00608880  33c0                 xor eax, eax
// 00608882  4e                   dec esi
// 00608883  eb01                 jmp 0x608886
// 00608885  40                   inc eax
// 00608886  4f                   dec edi
// 00608887  836c241001           sub dword ptr [esp + 0x10], 1
// 0060888c  75e2                 jne 0x608870
// 0060888e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00608892  c6430908             mov byte ptr [ebx + 9], 8
// 00608896  c6430b08             mov byte ptr [ebx + 0xb], 8
// 0060889a  895304               mov dword ptr [ebx + 4], edx
// 0060889d  807b0908             cmp byte ptr [ebx + 9], 8
// 006088a1  0f85f3000000         jne 0x60899a
// 006088a7  837c242400           cmp dword ptr [esp + 0x24], 0
// 006088ac  8d4c2aff             lea ecx, [edx + ebp - 1]
// 006088b0  0f8484000000         je 0x60893a
// 006088b6  8d349500000000       lea esi, [edx*4]
// 006088bd  89742410             mov dword ptr [esp + 0x10], esi
// 006088c1  8d442eff             lea eax, [esi + ebp - 1]
// 006088c5  85d2                 test edx, edx
// 006088c7  7658                 jbe 0x608921
// 006088c9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006088cd  8bea                 mov ebp, edx
// 006088cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 006088d3  0fb631               movzx esi, byte ptr [ecx]
// 006088d6  3bf2                 cmp esi, edx
// 006088d8  7c05                 jl 0x6088df
// 006088da  c600ff               mov byte ptr [eax], 0xff
// 006088dd  eb09                 jmp 0x6088e8
// 006088df  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006088e3  8a1c1e               mov bl, byte ptr [esi + ebx]
// 006088e6  8818                 mov byte ptr [eax], bl
// 006088e8  0fb631               movzx esi, byte ptr [ecx]
// 006088eb  8d1c77               lea ebx, [edi + esi*2]
// 006088ee  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 006088f3  8858ff               mov byte ptr [eax - 1], bl
// 006088f6  0fb631               movzx esi, byte ptr [ecx]
// 006088f9  48                   dec eax
// 006088fa  8d1c77               lea ebx, [edi + esi*2]
// 006088fd  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 00608902  48                   dec eax
// 00608903  8818                 mov byte ptr [eax], bl
// 00608905  0fb631               movzx esi, byte ptr [ecx]
// 00608908  8d1c77               lea ebx, [edi + esi*2]
// 0060890b  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 0060890f  48                   dec eax
// 00608910  8818                 mov byte ptr [eax], bl
// 00608912  48                   dec eax
// 00608913  49                   dec ecx
// 00608914  83ed01               sub ebp, 1
// 00608917  75ba                 jne 0x6088d3
// 00608919  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060891d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00608921  5f                   pop edi
// 00608922  897304               mov dword ptr [ebx + 4], esi
// 00608925  5e                   pop esi
// 00608926  5d                   pop ebp
// 00608927  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 0060892b  c6430806             mov byte ptr [ebx + 8], 6
// 0060892f  c6430a04             mov byte ptr [ebx + 0xa], 4
// 00608933  c6430908             mov byte ptr [ebx + 9], 8
// 00608937  5b                   pop ebx
// 00608938  59                   pop ecx
// 00608939  c3                   ret 
// 0060893a  8d3452               lea esi, [edx + edx*2]
// 0060893d  89742410             mov dword ptr [esp + 0x10], esi
// 00608941  8d442eff             lea eax, [esi + ebp - 1]
// 00608945  85d2                 test edx, edx
// 00608947  763e                 jbe 0x608987
// 00608949  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060894d  8bea                 mov ebp, edx
// 0060894f  90                   nop 
// 00608950  0fb631               movzx esi, byte ptr [ecx]
// 00608953  8d1477               lea edx, [edi + esi*2]
// 00608956  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 0060895b  8810                 mov byte ptr [eax], dl
// 0060895d  0fb631               movzx esi, byte ptr [ecx]
// 00608960  8d1477               lea edx, [edi + esi*2]
// 00608963  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 00608968  48                   dec eax
// 00608969  8810                 mov byte ptr [eax], dl
// 0060896b  0fb631               movzx esi, byte ptr [ecx]
// 0060896e  8d1477               lea edx, [edi + esi*2]
// 00608971  0fb61416             movzx edx, byte ptr [esi + edx]
// 00608975  48                   dec eax
// 00608976  8810                 mov byte ptr [eax], dl
// 00608978  48                   dec eax
// 00608979  49                   dec ecx
// 0060897a  83ed01               sub ebp, 1
// 0060897d  75d1                 jne 0x608950
// 0060897f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00608983  8b742410             mov esi, dword ptr [esp + 0x10]
// 00608987  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 0060898b  c6430802             mov byte ptr [ebx + 8], 2
// 0060898f  c6430a03             mov byte ptr [ebx + 0xa], 3
// 00608993  897304               mov dword ptr [ebx + 4], esi
// 00608996  c6430908             mov byte ptr [ebx + 9], 8
// 0060899a  5f                   pop edi
// 0060899b  5e                   pop esi
// 0060899c  5d                   pop ebp
// 0060899d  5b                   pop ebx
// 0060899e  59                   pop ecx
// 0060899f  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
