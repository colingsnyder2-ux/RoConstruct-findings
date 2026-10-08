// from server: 100% by auto
// roc 2007-08 0051b580  unit: seg_00510000  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051b580
//
// 0051b580  51                   push ecx
// 0051b581  53                   push ebx
// 0051b582  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051b586  807b0803             cmp byte ptr [ebx + 8], 3
// 0051b58a  8b13                 mov edx, dword ptr [ebx]
// 0051b58c  0f8533020000         jne 0x51b7c5
// 0051b592  8a4309               mov al, byte ptr [ebx + 9]
// 0051b595  3c08                 cmp al, 8
// 0051b597  55                   push ebp
// 0051b598  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051b59c  56                   push esi
// 0051b59d  57                   push edi
// 0051b59e  0f8306010000         jae 0x51b6aa
// 0051b5a4  0fb6c0               movzx eax, al
// 0051b5a7  83e801               sub eax, 1
// 0051b5aa  0f84a6000000         je 0x51b656
// 0051b5b0  83e801               sub eax, 1
// 0051b5b3  7454                 je 0x51b609
// 0051b5b5  83e802               sub eax, 2
// 0051b5b8  0f85e1000000         jne 0x51b69f
// 0051b5be  8bc2                 mov eax, edx
// 0051b5c0  83e001               and eax, 1
// 0051b5c3  8d72ff               lea esi, [edx - 1]
// 0051b5c6  d1ee                 shr esi, 1
// 0051b5c8  03c0                 add eax, eax
// 0051b5ca  03f5                 add esi, ebp
// 0051b5cc  03c0                 add eax, eax
// 0051b5ce  85d2                 test edx, edx
// 0051b5d0  8d7c2aff             lea edi, [edx + ebp - 1]
// 0051b5d4  0f86c5000000         jbe 0x51b69f
// 0051b5da  89542410             mov dword ptr [esp + 0x10], edx
// 0051b5de  8bff                 mov edi, edi
// 0051b5e0  8a1e                 mov bl, byte ptr [esi]
// 0051b5e2  8ac8                 mov cl, al
// 0051b5e4  d2eb                 shr bl, cl
// 0051b5e6  80e30f               and bl, 0xf
// 0051b5e9  83f804               cmp eax, 4
// 0051b5ec  881f                 mov byte ptr [edi], bl
// 0051b5ee  7507                 jne 0x51b5f7
// 0051b5f0  33c0                 xor eax, eax
// 0051b5f2  83ee01               sub esi, 1
// 0051b5f5  eb03                 jmp 0x51b5fa
// 0051b5f7  83c004               add eax, 4
// 0051b5fa  83ef01               sub edi, 1
// 0051b5fd  836c241001           sub dword ptr [esp + 0x10], 1
// 0051b602  75dc                 jne 0x51b5e0
// 0051b604  e992000000           jmp 0x51b69b
// 0051b609  8d4aff               lea ecx, [edx - 1]
// 0051b60c  83e103               and ecx, 3
// 0051b60f  8d72ff               lea esi, [edx - 1]
// 0051b612  b803000000           mov eax, 3
// 0051b617  c1ee02               shr esi, 2
// 0051b61a  2bc1                 sub eax, ecx
// 0051b61c  03f5                 add esi, ebp
// 0051b61e  03c0                 add eax, eax
// 0051b620  85d2                 test edx, edx
// 0051b622  8d7c2aff             lea edi, [edx + ebp - 1]
// 0051b626  7677                 jbe 0x51b69f
// 0051b628  89542410             mov dword ptr [esp + 0x10], edx
// 0051b62c  8d642400             lea esp, [esp]
// 0051b630  8a1e                 mov bl, byte ptr [esi]
// 0051b632  8ac8                 mov cl, al
// 0051b634  d2eb                 shr bl, cl
// 0051b636  80e303               and bl, 3
// 0051b639  83f806               cmp eax, 6
// 0051b63c  881f                 mov byte ptr [edi], bl
// 0051b63e  7507                 jne 0x51b647
// 0051b640  33c0                 xor eax, eax
// 0051b642  83ee01               sub esi, 1
// 0051b645  eb03                 jmp 0x51b64a
// 0051b647  83c002               add eax, 2
// 0051b64a  83ef01               sub edi, 1
// 0051b64d  836c241001           sub dword ptr [esp + 0x10], 1
// 0051b652  75dc                 jne 0x51b630
// 0051b654  eb45                 jmp 0x51b69b
// 0051b656  8d72ff               lea esi, [edx - 1]
// 0051b659  8d4aff               lea ecx, [edx - 1]
// 0051b65c  c1ee03               shr esi, 3
// 0051b65f  83e107               and ecx, 7
// 0051b662  b807000000           mov eax, 7
// 0051b667  03f5                 add esi, ebp
// 0051b669  2bc1                 sub eax, ecx
// 0051b66b  85d2                 test edx, edx
// 0051b66d  8d7c2aff             lea edi, [edx + ebp - 1]
// 0051b671  762c                 jbe 0x51b69f
// 0051b673  89542410             mov dword ptr [esp + 0x10], edx
// 0051b677  8a1e                 mov bl, byte ptr [esi]
// 0051b679  8ac8                 mov cl, al
// 0051b67b  d2eb                 shr bl, cl
// 0051b67d  80e301               and bl, 1
// 0051b680  83f807               cmp eax, 7
// 0051b683  881f                 mov byte ptr [edi], bl
// 0051b685  7507                 jne 0x51b68e
// 0051b687  33c0                 xor eax, eax
// 0051b689  83ee01               sub esi, 1
// 0051b68c  eb03                 jmp 0x51b691
// 0051b68e  83c001               add eax, 1
// 0051b691  83ef01               sub edi, 1
// 0051b694  836c241001           sub dword ptr [esp + 0x10], 1
// 0051b699  75dc                 jne 0x51b677
// 0051b69b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051b69f  c6430908             mov byte ptr [ebx + 9], 8
// 0051b6a3  c6430b08             mov byte ptr [ebx + 0xb], 8
// 0051b6a7  895304               mov dword ptr [ebx + 4], edx
// 0051b6aa  807b0908             cmp byte ptr [ebx + 9], 8
// 0051b6ae  0f850e010000         jne 0x51b7c2
// 0051b6b4  837c242400           cmp dword ptr [esp + 0x24], 0
// 0051b6b9  8d4c2aff             lea ecx, [edx + ebp - 1]
// 0051b6bd  0f848e000000         je 0x51b751
// 0051b6c3  85d2                 test edx, edx
// 0051b6c5  8d349500000000       lea esi, [edx*4]
// 0051b6cc  89742410             mov dword ptr [esp + 0x10], esi
// 0051b6d0  8d442eff             lea eax, [esi + ebp - 1]
// 0051b6d4  7662                 jbe 0x51b738
// 0051b6d6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051b6da  8bea                 mov ebp, edx
// 0051b6dc  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051b6e0  0fb631               movzx esi, byte ptr [ecx]
// 0051b6e3  3bf2                 cmp esi, edx
// 0051b6e5  7c05                 jl 0x51b6ec
// 0051b6e7  c600ff               mov byte ptr [eax], 0xff
// 0051b6ea  eb09                 jmp 0x51b6f5
// 0051b6ec  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0051b6f0  8a1c1e               mov bl, byte ptr [esi + ebx]
// 0051b6f3  8818                 mov byte ptr [eax], bl
// 0051b6f5  0fb631               movzx esi, byte ptr [ecx]
// 0051b6f8  8d1c77               lea ebx, [edi + esi*2]
// 0051b6fb  0fb65c1e02           movzx ebx, byte ptr [esi + ebx + 2]
// 0051b700  8858ff               mov byte ptr [eax - 1], bl
// 0051b703  0fb631               movzx esi, byte ptr [ecx]
// 0051b706  83e801               sub eax, 1
// 0051b709  8d1c77               lea ebx, [edi + esi*2]
// 0051b70c  0fb65c1e01           movzx ebx, byte ptr [esi + ebx + 1]
// 0051b711  83e801               sub eax, 1
// 0051b714  8818                 mov byte ptr [eax], bl
// 0051b716  0fb631               movzx esi, byte ptr [ecx]
// 0051b719  8d1c77               lea ebx, [edi + esi*2]
// 0051b71c  0fb61c1e             movzx ebx, byte ptr [esi + ebx]
// 0051b720  83e801               sub eax, 1
// 0051b723  8818                 mov byte ptr [eax], bl
// 0051b725  83e801               sub eax, 1
// 0051b728  83e901               sub ecx, 1
// 0051b72b  83ed01               sub ebp, 1
// 0051b72e  75b0                 jne 0x51b6e0
// 0051b730  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051b734  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051b738  5f                   pop edi
// 0051b739  897304               mov dword ptr [ebx + 4], esi
// 0051b73c  5e                   pop esi
// 0051b73d  5d                   pop ebp
// 0051b73e  c6430b20             mov byte ptr [ebx + 0xb], 0x20
// 0051b742  c6430806             mov byte ptr [ebx + 8], 6
// 0051b746  c6430a04             mov byte ptr [ebx + 0xa], 4
// 0051b74a  c6430908             mov byte ptr [ebx + 9], 8
// 0051b74e  5b                   pop ebx
// 0051b74f  59                   pop ecx
// 0051b750  c3                   ret 
// 0051b751  85d2                 test edx, edx
// 0051b753  8d3452               lea esi, [edx + edx*2]
// 0051b756  89742410             mov dword ptr [esp + 0x10], esi
// 0051b75a  8d442eff             lea eax, [esi + ebp - 1]
// 0051b75e  764f                 jbe 0x51b7af
// 0051b760  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051b764  8bea                 mov ebp, edx
// 0051b766  eb08                 jmp 0x51b770
// 0051b768  8da42400000000       lea esp, [esp]
// 0051b76f  90                   nop 
// 0051b770  0fb631               movzx esi, byte ptr [ecx]
// 0051b773  8d1477               lea edx, [edi + esi*2]
// 0051b776  0fb6541602           movzx edx, byte ptr [esi + edx + 2]
// 0051b77b  8810                 mov byte ptr [eax], dl
// 0051b77d  0fb631               movzx esi, byte ptr [ecx]
// 0051b780  8d1477               lea edx, [edi + esi*2]
// 0051b783  0fb6541601           movzx edx, byte ptr [esi + edx + 1]
// 0051b788  83e801               sub eax, 1
// 0051b78b  8810                 mov byte ptr [eax], dl
// 0051b78d  0fb631               movzx esi, byte ptr [ecx]
// 0051b790  8d1477               lea edx, [edi + esi*2]
// 0051b793  0fb61416             movzx edx, byte ptr [esi + edx]
// 0051b797  83e801               sub eax, 1
// 0051b79a  8810                 mov byte ptr [eax], dl
// 0051b79c  83e801               sub eax, 1
// 0051b79f  83e901               sub ecx, 1
// 0051b7a2  83ed01               sub ebp, 1
// 0051b7a5  75c9                 jne 0x51b770
// 0051b7a7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051b7ab  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051b7af  c6430b18             mov byte ptr [ebx + 0xb], 0x18
// 0051b7b3  c6430802             mov byte ptr [ebx + 8], 2
// 0051b7b7  c6430a03             mov byte ptr [ebx + 0xa], 3
// 0051b7bb  897304               mov dword ptr [ebx + 4], esi
// 0051b7be  c6430908             mov byte ptr [ebx + 9], 8
// 0051b7c2  5f                   pop edi
// 0051b7c3  5e                   pop esi
// 0051b7c4  5d                   pop ebp
// 0051b7c5  5b                   pop ebx
// 0051b7c6  59                   pop ecx
// 0051b7c7  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_do_expand_palette)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
