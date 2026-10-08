// roc 2009-12 00606350  unit: seg_00600000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00606350
//
// 00606350  8b542404             mov edx, dword ptr [esp + 4]
// 00606354  83ec10               sub esp, 0x10
// 00606357  53                   push ebx
// 00606358  8a5a08               mov bl, byte ptr [edx + 8]
// 0060635b  80fb03               cmp bl, 3
// 0060635e  0f8496010000         je 0x6064fa
// 00606364  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00606368  55                   push ebp
// 00606369  8b2a                 mov ebp, dword ptr [edx]
// 0060636b  56                   push esi
// 0060636c  33f6                 xor esi, esi
// 0060636e  57                   push edi
// 0060636f  89742424             mov dword ptr [esp + 0x24], esi
// 00606373  f6c302               test bl, 2
// 00606376  7430                 je 0x6063a8
// 00606378  0fb64209             movzx eax, byte ptr [edx + 9]
// 0060637c  0fb631               movzx esi, byte ptr [ecx]
// 0060637f  8bf8                 mov edi, eax
// 00606381  2bfe                 sub edi, esi
// 00606383  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00606387  897c2410             mov dword ptr [esp + 0x10], edi
// 0060638b  8bf8                 mov edi, eax
// 0060638d  2bfe                 sub edi, esi
// 0060638f  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00606393  2bc6                 sub eax, esi
// 00606395  8b742424             mov esi, dword ptr [esp + 0x24]
// 00606399  897c2414             mov dword ptr [esp + 0x14], edi
// 0060639d  89442418             mov dword ptr [esp + 0x18], eax
// 006063a1  bf03000000           mov edi, 3
// 006063a6  eb13                 jmp 0x6063bb
// 006063a8  0fb64103             movzx eax, byte ptr [ecx + 3]
// 006063ac  0fb67a09             movzx edi, byte ptr [edx + 9]
// 006063b0  2bf8                 sub edi, eax
// 006063b2  897c2410             mov dword ptr [esp + 0x10], edi
// 006063b6  bf01000000           mov edi, 1
// 006063bb  f6c304               test bl, 4
// 006063be  740f                 je 0x6063cf
// 006063c0  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 006063c4  0fb64209             movzx eax, byte ptr [edx + 9]
// 006063c8  2bc1                 sub eax, ecx
// 006063ca  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 006063ce  47                   inc edi
// 006063cf  33c9                 xor ecx, ecx
// 006063d1  33c0                 xor eax, eax
// 006063d3  3bf9                 cmp edi, ecx
// 006063d5  0f8e1c010000         jle 0x6064f7
// 006063db  eb03                 jmp 0x6063e0
// 006063dd  8d4900               lea ecx, [ecx]
// 006063e0  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 006063e4  7f06                 jg 0x6063ec
// 006063e6  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 006063ea  eb05                 jmp 0x6063f1
// 006063ec  be01000000           mov esi, 1
// 006063f1  40                   inc eax
// 006063f2  3bc7                 cmp eax, edi
// 006063f4  7cea                 jl 0x6063e0
// 006063f6  663bf1               cmp si, cx
// 006063f9  0f84f8000000         je 0x6064f7
// 006063ff  0fb64209             movzx eax, byte ptr [edx + 9]
// 00606403  83c0fe               add eax, -2
// 00606406  83f80e               cmp eax, 0xe
// 00606409  0f87e8000000         ja 0x6064f7
// 0060640f  0fb68014656000       movzx eax, byte ptr [eax + 0x606514]
// 00606416  ff248500656000       jmp dword ptr [eax*4 + 0x606500]
// 0060641d  8b5204               mov edx, dword ptr [edx + 4]
// 00606420  8b442428             mov eax, dword ptr [esp + 0x28]
// 00606424  3bd1                 cmp edx, ecx
// 00606426  0f86cb000000         jbe 0x6064f7
// 0060642c  8d642400             lea esp, [esp]
// 00606430  8a08                 mov cl, byte ptr [eax]
// 00606432  d0e9                 shr cl, 1
// 00606434  80e155               and cl, 0x55
// 00606437  8808                 mov byte ptr [eax], cl
// 00606439  40                   inc eax
// 0060643a  83ea01               sub edx, 1
// 0060643d  75f1                 jne 0x606430
// 0060643f  5f                   pop edi
// 00606440  5e                   pop esi
// 00606441  5d                   pop ebp
// 00606442  5b                   pop ebx
// 00606443  83c410               add esp, 0x10
// 00606446  c3                   ret 
// 00606447  8b7a04               mov edi, dword ptr [edx + 4]
// 0060644a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060644e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00606452  8bca                 mov ecx, edx
// 00606454  b8f0000000           mov eax, 0xf0
// 00606459  d3f8                 sar eax, cl
// 0060645b  bb0f000000           mov ebx, 0xf
// 00606460  d3fb                 sar ebx, cl
// 00606462  24f0                 and al, 0xf0
// 00606464  0ac3                 or al, bl
// 00606466  85ff                 test edi, edi
// 00606468  0f8689000000         jbe 0x6064f7
// 0060646e  8bff                 mov edi, edi
// 00606470  8a1e                 mov bl, byte ptr [esi]
// 00606472  8aca                 mov cl, dl
// 00606474  d2eb                 shr bl, cl
// 00606476  46                   inc esi
// 00606477  22d8                 and bl, al
// 00606479  83ef01               sub edi, 1
// 0060647c  885eff               mov byte ptr [esi - 1], bl
// 0060647f  75ef                 jne 0x606470
// 00606481  5f                   pop edi
// 00606482  5e                   pop esi
// 00606483  5d                   pop ebp
// 00606484  5b                   pop ebx
// 00606485  83c410               add esp, 0x10
// 00606488  c3                   ret 
// 00606489  8b742428             mov esi, dword ptr [esp + 0x28]
// 0060648d  0fafef               imul ebp, edi
// 00606490  33db                 xor ebx, ebx
// 00606492  85ed                 test ebp, ebp
// 00606494  7661                 jbe 0x6064f7
// 00606496  8bc3                 mov eax, ebx
// 00606498  33d2                 xor edx, edx
// 0060649a  f7f7                 div edi
// 0060649c  43                   inc ebx
// 0060649d  46                   inc esi
// 0060649e  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 006064a2  d26eff               shr byte ptr [esi - 1], cl
// 006064a5  3bdd                 cmp ebx, ebp
// 006064a7  72ed                 jb 0x606496
// 006064a9  5f                   pop edi
// 006064aa  5e                   pop esi
// 006064ab  5d                   pop ebp
// 006064ac  5b                   pop ebx
// 006064ad  83c410               add esp, 0x10
// 006064b0  c3                   ret 
// 006064b1  8b742428             mov esi, dword ptr [esp + 0x28]
// 006064b5  0fafef               imul ebp, edi
// 006064b8  33db                 xor ebx, ebx
// 006064ba  85ed                 test ebp, ebp
// 006064bc  7639                 jbe 0x6064f7
// 006064be  8bff                 mov edi, edi
// 006064c0  33d2                 xor edx, edx
// 006064c2  8bc3                 mov eax, ebx
// 006064c4  f7f7                 div edi
// 006064c6  660fb606             movzx ax, byte ptr [esi]
// 006064ca  b900010000           mov ecx, 0x100
// 006064cf  660fafc1             imul ax, cx
// 006064d3  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 006064d7  6603c1               add ax, cx
// 006064da  46                   inc esi
// 006064db  43                   inc ebx
// 006064dc  46                   inc esi
// 006064dd  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 006064e2  66d3e8               shr ax, cl
// 006064e5  0fb7c0               movzx eax, ax
// 006064e8  8bd0                 mov edx, eax
// 006064ea  c1ea08               shr edx, 8
// 006064ed  8856fe               mov byte ptr [esi - 2], dl
// 006064f0  8846ff               mov byte ptr [esi - 1], al
// 006064f3  3bdd                 cmp ebx, ebp
// 006064f5  72c9                 jb 0x6064c0
// 006064f7  5f                   pop edi
// 006064f8  5e                   pop esi
// 006064f9  5d                   pop ebp
// 006064fa  5b                   pop ebx
// 006064fb  83c410               add esp, 0x10
// 006064fe  c3                   ret 
// 006064ff  90                   nop 
// 00606500  1d64600047           sbb eax, 0x47006064
// 00606505  6460                 pushal 
// 00606507  0089646000b1         add byte ptr [ecx - 0x4eff9f9c], cl
// 0060650d  6460                 pushal 
// 0060650f  00f7                 add bh, dh
// 00606511  6460                 pushal 
// 00606513  0000                 add byte ptr [eax], al
// 00606515  0401                 add al, 1
// 00606517  0404                 add al, 4
// 00606519  0402                 add al, 2
// 0060651b  0404                 add al, 4
// 0060651d  0404                 add al, 4
// 0060651f  0404                 add al, 4
// 00606521  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
