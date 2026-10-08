// from server: 100% by auto
// roc 2011-06 0055c820  unit: seg_00550000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055c820
//
// 0055c820  8b542404             mov edx, dword ptr [esp + 4]
// 0055c824  83ec10               sub esp, 0x10
// 0055c827  53                   push ebx
// 0055c828  8a5a08               mov bl, byte ptr [edx + 8]
// 0055c82b  80fb03               cmp bl, 3
// 0055c82e  0f8496010000         je 0x55c9ca
// 0055c834  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055c838  55                   push ebp
// 0055c839  8b2a                 mov ebp, dword ptr [edx]
// 0055c83b  56                   push esi
// 0055c83c  33f6                 xor esi, esi
// 0055c83e  57                   push edi
// 0055c83f  89742424             mov dword ptr [esp + 0x24], esi
// 0055c843  f6c302               test bl, 2
// 0055c846  7430                 je 0x55c878
// 0055c848  0fb64209             movzx eax, byte ptr [edx + 9]
// 0055c84c  0fb631               movzx esi, byte ptr [ecx]
// 0055c84f  8bf8                 mov edi, eax
// 0055c851  2bfe                 sub edi, esi
// 0055c853  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0055c857  897c2410             mov dword ptr [esp + 0x10], edi
// 0055c85b  8bf8                 mov edi, eax
// 0055c85d  2bfe                 sub edi, esi
// 0055c85f  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0055c863  2bc6                 sub eax, esi
// 0055c865  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055c869  897c2414             mov dword ptr [esp + 0x14], edi
// 0055c86d  89442418             mov dword ptr [esp + 0x18], eax
// 0055c871  bf03000000           mov edi, 3
// 0055c876  eb13                 jmp 0x55c88b
// 0055c878  0fb64103             movzx eax, byte ptr [ecx + 3]
// 0055c87c  0fb67a09             movzx edi, byte ptr [edx + 9]
// 0055c880  2bf8                 sub edi, eax
// 0055c882  897c2410             mov dword ptr [esp + 0x10], edi
// 0055c886  bf01000000           mov edi, 1
// 0055c88b  f6c304               test bl, 4
// 0055c88e  740f                 je 0x55c89f
// 0055c890  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 0055c894  0fb64209             movzx eax, byte ptr [edx + 9]
// 0055c898  2bc1                 sub eax, ecx
// 0055c89a  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 0055c89e  47                   inc edi
// 0055c89f  33c9                 xor ecx, ecx
// 0055c8a1  33c0                 xor eax, eax
// 0055c8a3  3bf9                 cmp edi, ecx
// 0055c8a5  0f8e1c010000         jle 0x55c9c7
// 0055c8ab  eb03                 jmp 0x55c8b0
// 0055c8ad  8d4900               lea ecx, [ecx]
// 0055c8b0  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 0055c8b4  7f06                 jg 0x55c8bc
// 0055c8b6  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 0055c8ba  eb05                 jmp 0x55c8c1
// 0055c8bc  be01000000           mov esi, 1
// 0055c8c1  40                   inc eax
// 0055c8c2  3bc7                 cmp eax, edi
// 0055c8c4  7cea                 jl 0x55c8b0
// 0055c8c6  663bf1               cmp si, cx
// 0055c8c9  0f84f8000000         je 0x55c9c7
// 0055c8cf  0fb64209             movzx eax, byte ptr [edx + 9]
// 0055c8d3  83c0fe               add eax, -2
// 0055c8d6  83f80e               cmp eax, 0xe
// 0055c8d9  0f87e8000000         ja 0x55c9c7
// 0055c8df  0fb680e4c95500       movzx eax, byte ptr [eax + 0x55c9e4]
// 0055c8e6  ff2485d0c95500       jmp dword ptr [eax*4 + 0x55c9d0]
// 0055c8ed  8b5204               mov edx, dword ptr [edx + 4]
// 0055c8f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055c8f4  3bd1                 cmp edx, ecx
// 0055c8f6  0f86cb000000         jbe 0x55c9c7
// 0055c8fc  8d642400             lea esp, [esp]
// 0055c900  8a08                 mov cl, byte ptr [eax]
// 0055c902  d0e9                 shr cl, 1
// 0055c904  80e155               and cl, 0x55
// 0055c907  8808                 mov byte ptr [eax], cl
// 0055c909  40                   inc eax
// 0055c90a  83ea01               sub edx, 1
// 0055c90d  75f1                 jne 0x55c900
// 0055c90f  5f                   pop edi
// 0055c910  5e                   pop esi
// 0055c911  5d                   pop ebp
// 0055c912  5b                   pop ebx
// 0055c913  83c410               add esp, 0x10
// 0055c916  c3                   ret 
// 0055c917  8b7a04               mov edi, dword ptr [edx + 4]
// 0055c91a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055c91e  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055c922  8bca                 mov ecx, edx
// 0055c924  b8f0000000           mov eax, 0xf0
// 0055c929  d3f8                 sar eax, cl
// 0055c92b  bb0f000000           mov ebx, 0xf
// 0055c930  d3fb                 sar ebx, cl
// 0055c932  24f0                 and al, 0xf0
// 0055c934  0ac3                 or al, bl
// 0055c936  85ff                 test edi, edi
// 0055c938  0f8689000000         jbe 0x55c9c7
// 0055c93e  8bff                 mov edi, edi
// 0055c940  8a1e                 mov bl, byte ptr [esi]
// 0055c942  8aca                 mov cl, dl
// 0055c944  d2eb                 shr bl, cl
// 0055c946  46                   inc esi
// 0055c947  22d8                 and bl, al
// 0055c949  83ef01               sub edi, 1
// 0055c94c  885eff               mov byte ptr [esi - 1], bl
// 0055c94f  75ef                 jne 0x55c940
// 0055c951  5f                   pop edi
// 0055c952  5e                   pop esi
// 0055c953  5d                   pop ebp
// 0055c954  5b                   pop ebx
// 0055c955  83c410               add esp, 0x10
// 0055c958  c3                   ret 
// 0055c959  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055c95d  0fafef               imul ebp, edi
// 0055c960  33db                 xor ebx, ebx
// 0055c962  85ed                 test ebp, ebp
// 0055c964  7661                 jbe 0x55c9c7
// 0055c966  8bc3                 mov eax, ebx
// 0055c968  33d2                 xor edx, edx
// 0055c96a  f7f7                 div edi
// 0055c96c  43                   inc ebx
// 0055c96d  46                   inc esi
// 0055c96e  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 0055c972  d26eff               shr byte ptr [esi - 1], cl
// 0055c975  3bdd                 cmp ebx, ebp
// 0055c977  72ed                 jb 0x55c966
// 0055c979  5f                   pop edi
// 0055c97a  5e                   pop esi
// 0055c97b  5d                   pop ebp
// 0055c97c  5b                   pop ebx
// 0055c97d  83c410               add esp, 0x10
// 0055c980  c3                   ret 
// 0055c981  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055c985  0fafef               imul ebp, edi
// 0055c988  33db                 xor ebx, ebx
// 0055c98a  85ed                 test ebp, ebp
// 0055c98c  7639                 jbe 0x55c9c7
// 0055c98e  8bff                 mov edi, edi
// 0055c990  33d2                 xor edx, edx
// 0055c992  8bc3                 mov eax, ebx
// 0055c994  f7f7                 div edi
// 0055c996  660fb606             movzx ax, byte ptr [esi]
// 0055c99a  b900010000           mov ecx, 0x100
// 0055c99f  660fafc1             imul ax, cx
// 0055c9a3  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0055c9a7  6603c1               add ax, cx
// 0055c9aa  46                   inc esi
// 0055c9ab  43                   inc ebx
// 0055c9ac  46                   inc esi
// 0055c9ad  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 0055c9b2  66d3e8               shr ax, cl
// 0055c9b5  0fb7c0               movzx eax, ax
// 0055c9b8  8bd0                 mov edx, eax
// 0055c9ba  c1ea08               shr edx, 8
// 0055c9bd  8856fe               mov byte ptr [esi - 2], dl
// 0055c9c0  8846ff               mov byte ptr [esi - 1], al
// 0055c9c3  3bdd                 cmp ebx, ebp
// 0055c9c5  72c9                 jb 0x55c990
// 0055c9c7  5f                   pop edi
// 0055c9c8  5e                   pop esi
// 0055c9c9  5d                   pop ebp
// 0055c9ca  5b                   pop ebx
// 0055c9cb  83c410               add esp, 0x10
// 0055c9ce  c3                   ret 
// 0055c9cf  90                   nop 
// 0055c9d0  ed                   in eax, dx
// 0055c9d1  c8550017             enter 0x55, 0x17
// 0055c9d5  c9                   leave 
// 0055c9d6  55                   push ebp
// 0055c9d7  0059c9               add byte ptr [ecx - 0x37], bl
// 0055c9da  55                   push ebp
// 0055c9db  0081c95500c7         add byte ptr [ecx - 0x38ffaa37], al
// 0055c9e1  c9                   leave 
// 0055c9e2  55                   push ebp
// 0055c9e3  0000                 add byte ptr [eax], al
// 0055c9e5  0401                 add al, 1
// 0055c9e7  0404                 add al, 4
// 0055c9e9  0402                 add al, 2
// 0055c9eb  0404                 add al, 4
// 0055c9ed  0404                 add al, 4
// 0055c9ef  0404                 add al, 4
// 0055c9f1  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
