// roc 2008-06 00520510  unit: seg_00520000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520510
//
// 00520510  8b542404             mov edx, dword ptr [esp + 4]
// 00520514  83ec10               sub esp, 0x10
// 00520517  53                   push ebx
// 00520518  8a5a08               mov bl, byte ptr [edx + 8]
// 0052051b  80fb03               cmp bl, 3
// 0052051e  0f8496010000         je 0x5206ba
// 00520524  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00520528  55                   push ebp
// 00520529  8b2a                 mov ebp, dword ptr [edx]
// 0052052b  56                   push esi
// 0052052c  33f6                 xor esi, esi
// 0052052e  57                   push edi
// 0052052f  89742424             mov dword ptr [esp + 0x24], esi
// 00520533  f6c302               test bl, 2
// 00520536  7430                 je 0x520568
// 00520538  0fb64209             movzx eax, byte ptr [edx + 9]
// 0052053c  0fb631               movzx esi, byte ptr [ecx]
// 0052053f  8bf8                 mov edi, eax
// 00520541  2bfe                 sub edi, esi
// 00520543  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00520547  897c2410             mov dword ptr [esp + 0x10], edi
// 0052054b  8bf8                 mov edi, eax
// 0052054d  2bfe                 sub edi, esi
// 0052054f  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00520553  2bc6                 sub eax, esi
// 00520555  8b742424             mov esi, dword ptr [esp + 0x24]
// 00520559  897c2414             mov dword ptr [esp + 0x14], edi
// 0052055d  89442418             mov dword ptr [esp + 0x18], eax
// 00520561  bf03000000           mov edi, 3
// 00520566  eb13                 jmp 0x52057b
// 00520568  0fb64103             movzx eax, byte ptr [ecx + 3]
// 0052056c  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00520570  2bf8                 sub edi, eax
// 00520572  897c2410             mov dword ptr [esp + 0x10], edi
// 00520576  bf01000000           mov edi, 1
// 0052057b  f6c304               test bl, 4
// 0052057e  740f                 je 0x52058f
// 00520580  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 00520584  0fb64209             movzx eax, byte ptr [edx + 9]
// 00520588  2bc1                 sub eax, ecx
// 0052058a  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 0052058e  47                   inc edi
// 0052058f  33c9                 xor ecx, ecx
// 00520591  33c0                 xor eax, eax
// 00520593  3bf9                 cmp edi, ecx
// 00520595  0f8e1c010000         jle 0x5206b7
// 0052059b  eb03                 jmp 0x5205a0
// 0052059d  8d4900               lea ecx, [ecx]
// 005205a0  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 005205a4  7f06                 jg 0x5205ac
// 005205a6  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 005205aa  eb05                 jmp 0x5205b1
// 005205ac  be01000000           mov esi, 1
// 005205b1  40                   inc eax
// 005205b2  3bc7                 cmp eax, edi
// 005205b4  7cea                 jl 0x5205a0
// 005205b6  663bf1               cmp si, cx
// 005205b9  0f84f8000000         je 0x5206b7
// 005205bf  0fb64209             movzx eax, byte ptr [edx + 9]
// 005205c3  83c0fe               add eax, -2
// 005205c6  83f80e               cmp eax, 0xe
// 005205c9  0f87e8000000         ja 0x5206b7
// 005205cf  0fb680d4065200       movzx eax, byte ptr [eax + 0x5206d4]
// 005205d6  ff2485c0065200       jmp dword ptr [eax*4 + 0x5206c0]
// 005205dd  8b5204               mov edx, dword ptr [edx + 4]
// 005205e0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005205e4  3bd1                 cmp edx, ecx
// 005205e6  0f86cb000000         jbe 0x5206b7
// 005205ec  8d642400             lea esp, [esp]
// 005205f0  8a08                 mov cl, byte ptr [eax]
// 005205f2  d0e9                 shr cl, 1
// 005205f4  80e155               and cl, 0x55
// 005205f7  8808                 mov byte ptr [eax], cl
// 005205f9  40                   inc eax
// 005205fa  83ea01               sub edx, 1
// 005205fd  75f1                 jne 0x5205f0
// 005205ff  5f                   pop edi
// 00520600  5e                   pop esi
// 00520601  5d                   pop ebp
// 00520602  5b                   pop ebx
// 00520603  83c410               add esp, 0x10
// 00520606  c3                   ret 
// 00520607  8b7a04               mov edi, dword ptr [edx + 4]
// 0052060a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052060e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00520612  8bca                 mov ecx, edx
// 00520614  b8f0000000           mov eax, 0xf0
// 00520619  d3f8                 sar eax, cl
// 0052061b  bb0f000000           mov ebx, 0xf
// 00520620  d3fb                 sar ebx, cl
// 00520622  24f0                 and al, 0xf0
// 00520624  0ac3                 or al, bl
// 00520626  85ff                 test edi, edi
// 00520628  0f8689000000         jbe 0x5206b7
// 0052062e  8bff                 mov edi, edi
// 00520630  8a1e                 mov bl, byte ptr [esi]
// 00520632  8aca                 mov cl, dl
// 00520634  d2eb                 shr bl, cl
// 00520636  46                   inc esi
// 00520637  22d8                 and bl, al
// 00520639  83ef01               sub edi, 1
// 0052063c  885eff               mov byte ptr [esi - 1], bl
// 0052063f  75ef                 jne 0x520630
// 00520641  5f                   pop edi
// 00520642  5e                   pop esi
// 00520643  5d                   pop ebp
// 00520644  5b                   pop ebx
// 00520645  83c410               add esp, 0x10
// 00520648  c3                   ret 
// 00520649  8b742428             mov esi, dword ptr [esp + 0x28]
// 0052064d  0fafef               imul ebp, edi
// 00520650  33db                 xor ebx, ebx
// 00520652  85ed                 test ebp, ebp
// 00520654  7661                 jbe 0x5206b7
// 00520656  8bc3                 mov eax, ebx
// 00520658  33d2                 xor edx, edx
// 0052065a  f7f7                 div edi
// 0052065c  43                   inc ebx
// 0052065d  46                   inc esi
// 0052065e  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 00520662  d26eff               shr byte ptr [esi - 1], cl
// 00520665  3bdd                 cmp ebx, ebp
// 00520667  72ed                 jb 0x520656
// 00520669  5f                   pop edi
// 0052066a  5e                   pop esi
// 0052066b  5d                   pop ebp
// 0052066c  5b                   pop ebx
// 0052066d  83c410               add esp, 0x10
// 00520670  c3                   ret 
// 00520671  8b742428             mov esi, dword ptr [esp + 0x28]
// 00520675  0fafef               imul ebp, edi
// 00520678  33db                 xor ebx, ebx
// 0052067a  85ed                 test ebp, ebp
// 0052067c  7639                 jbe 0x5206b7
// 0052067e  8bff                 mov edi, edi
// 00520680  33d2                 xor edx, edx
// 00520682  8bc3                 mov eax, ebx
// 00520684  f7f7                 div edi
// 00520686  660fb606             movzx ax, byte ptr [esi]
// 0052068a  b900010000           mov ecx, 0x100
// 0052068f  660fafc1             imul ax, cx
// 00520693  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00520697  6603c1               add ax, cx
// 0052069a  46                   inc esi
// 0052069b  43                   inc ebx
// 0052069c  46                   inc esi
// 0052069d  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 005206a2  66d3e8               shr ax, cl
// 005206a5  0fb7c0               movzx eax, ax
// 005206a8  8bd0                 mov edx, eax
// 005206aa  c1ea08               shr edx, 8
// 005206ad  8856fe               mov byte ptr [esi - 2], dl
// 005206b0  8846ff               mov byte ptr [esi - 1], al
// 005206b3  3bdd                 cmp ebx, ebp
// 005206b5  72c9                 jb 0x520680
// 005206b7  5f                   pop edi
// 005206b8  5e                   pop esi
// 005206b9  5d                   pop ebp
// 005206ba  5b                   pop ebx
// 005206bb  83c410               add esp, 0x10
// 005206be  c3                   ret 
// 005206bf  90                   nop 
// 005206c0  dd0552000706         fld qword ptr [0x6070052]
// 005206c6  52                   push edx
// 005206c7  004906               add byte ptr [ecx + 6], cl
// 005206ca  52                   push edx
// 005206cb  007106               add byte ptr [ecx + 6], dh
// 005206ce  52                   push edx
// 005206cf  00b706520000         add byte ptr [edi + 0x5206], dh
// 005206d5  0401                 add al, 1
// 005206d7  0404                 add al, 4
// 005206d9  0402                 add al, 2
// 005206db  0404                 add al, 4
// 005206dd  0404                 add al, 4
// 005206df  0404                 add al, 4
// 005206e1  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
