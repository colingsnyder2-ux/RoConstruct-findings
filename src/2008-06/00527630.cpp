// roc 2008-06 00527630  unit: G3D::Line  size: 996 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527630
//
// 00527630  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527634  83ec10               sub esp, 0x10
// 00527637  53                   push ebx
// 00527638  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052763c  56                   push esi
// 0052763d  83f806               cmp eax, 6
// 00527640  0f87c3000000         ja 0x527709
// 00527646  ff2485d0795200       jmp dword ptr [eax*4 + 0x5279d0]
// 0052764d  8d43ff               lea eax, [ebx - 1]
// 00527650  83f80f               cmp eax, 0xf
// 00527653  771e                 ja 0x527673
// 00527655  0fb680f4795200       movzx eax, byte ptr [eax + 0x5279f4]
// 0052765c  ff2485ec795200       jmp dword ptr [eax*4 + 0x5279ec]
// 00527663  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00527667  c6862a01000001       mov byte ptr [esi + 0x12a], 1
// 0052766e  e9a8000000           jmp 0x52771b
// 00527673  6810b78200           push 0x82b710
// 00527678  e991000000           jmp 0x52770e
// 0052767d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00527681  83fb08               cmp ebx, 8
// 00527684  7413                 je 0x527699
// 00527686  83fb10               cmp ebx, 0x10
// 00527689  740e                 je 0x527699
// 0052768b  68f0b68200           push 0x82b6f0
// 00527690  56                   push esi
// 00527691  e81a230000           call 0x5299b0
// 00527696  83c408               add esp, 8
// 00527699  c6862a01000003       mov byte ptr [esi + 0x12a], 3
// 005276a0  eb79                 jmp 0x52771b
// 005276a2  8d43ff               lea eax, [ebx - 1]
// 005276a5  83f807               cmp eax, 7
// 005276a8  770e                 ja 0x5276b8
// 005276aa  0fb6880c7a5200       movzx ecx, byte ptr [eax + 0x527a0c]
// 005276b1  ff248d047a5200       jmp dword ptr [ecx*4 + 0x527a04]
// 005276b8  68c8b68200           push 0x82b6c8
// 005276bd  eb4f                 jmp 0x52770e
// 005276bf  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005276c3  83fb08               cmp ebx, 8
// 005276c6  7413                 je 0x5276db
// 005276c8  83fb10               cmp ebx, 0x10
// 005276cb  740e                 je 0x5276db
// 005276cd  689cb68200           push 0x82b69c
// 005276d2  56                   push esi
// 005276d3  e8d8220000           call 0x5299b0
// 005276d8  83c408               add esp, 8
// 005276db  c6862a01000002       mov byte ptr [esi + 0x12a], 2
// 005276e2  eb37                 jmp 0x52771b
// 005276e4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005276e8  83fb08               cmp ebx, 8
// 005276eb  7413                 je 0x527700
// 005276ed  83fb10               cmp ebx, 0x10
// 005276f0  740e                 je 0x527700
// 005276f2  6878b68200           push 0x82b678
// 005276f7  56                   push esi
// 005276f8  e8b3220000           call 0x5299b0
// 005276fd  83c408               add esp, 8
// 00527700  c6862a01000004       mov byte ptr [esi + 0x12a], 4
// 00527707  eb12                 jmp 0x52771b
// 00527709  6854b68200           push 0x82b654
// 0052770e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00527712  56                   push esi
// 00527713  e898220000           call 0x5299b0
// 00527718  83c408               add esp, 8
// 0052771b  837c243000           cmp dword ptr [esp + 0x30], 0
// 00527720  7416                 je 0x527738
// 00527722  6830b68200           push 0x82b630
// 00527727  56                   push esi
// 00527728  e823230000           call 0x529a50
// 0052772d  83c408               add esp, 8
// 00527730  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00527738  f6863002000004       test byte ptr [esi + 0x230], 4
// 0052773f  741e                 je 0x52775f
// 00527741  f7466800100000       test dword ptr [esi + 0x68], 0x1000
// 00527748  7515                 jne 0x52775f
// 0052774a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052774e  83f802               cmp eax, 2
// 00527751  7405                 je 0x527758
// 00527753  83f806               cmp eax, 6
// 00527756  7507                 jne 0x52775f
// 00527758  837c243440           cmp dword ptr [esp + 0x34], 0x40
// 0052775d  741d                 je 0x52777c
// 0052775f  837c243400           cmp dword ptr [esp + 0x34], 0
// 00527764  7416                 je 0x52777c
// 00527766  6810b68200           push 0x82b610
// 0052776b  56                   push esi
// 0052776c  e8df220000           call 0x529a50
// 00527771  83c408               add esp, 8
// 00527774  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0052777c  8b442438             mov eax, dword ptr [esp + 0x38]
// 00527780  85c0                 test eax, eax
// 00527782  741c                 je 0x5277a0
// 00527784  83f801               cmp eax, 1
// 00527787  7417                 je 0x5277a0
// 00527789  68ecb58200           push 0x82b5ec
// 0052778e  56                   push esi
// 0052778f  e8bc220000           call 0x529a50
// 00527794  b801000000           mov eax, 1
// 00527799  83c408               add esp, 8
// 0052779c  89442438             mov dword ptr [esp + 0x38], eax
// 005277a0  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005277a4  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 005277a8  888623010000         mov byte ptr [esi + 0x123], al
// 005277ae  8a442434             mov al, byte ptr [esp + 0x34]
// 005277b2  888638020000         mov byte ptr [esi + 0x238], al
// 005277b8  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 005277be  f6eb                 imul bl
// 005277c0  889626010000         mov byte ptr [esi + 0x126], dl
// 005277c6  8b542424             mov edx, dword ptr [esp + 0x24]
// 005277ca  888e60020000         mov byte ptr [esi + 0x260], cl
// 005277d0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005277d4  888629010000         mov byte ptr [esi + 0x129], al
// 005277da  3c08                 cmp al, 8
// 005277dc  889e27010000         mov byte ptr [esi + 0x127], bl
// 005277e2  898ec8000000         mov dword ptr [esi + 0xc8], ecx
// 005277e8  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 005277ee  0fb6c0               movzx eax, al
// 005277f1  7208                 jb 0x5277fb
// 005277f3  c1e803               shr eax, 3
// 005277f6  0fafc1               imul eax, ecx
// 005277f9  eb09                 jmp 0x527804
// 005277fb  0fafc1               imul eax, ecx
// 005277fe  83c007               add eax, 7
// 00527801  c1e803               shr eax, 3
// 00527804  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0052780a  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 00527810  88862b010000         mov byte ptr [esi + 0x12b], al
// 00527816  8bc1                 mov eax, ecx
// 00527818  c1e818               shr eax, 0x18
// 0052781b  88442408             mov byte ptr [esp + 8], al
// 0052781f  8bc1                 mov eax, ecx
// 00527821  c1e810               shr eax, 0x10
// 00527824  88442409             mov byte ptr [esp + 9], al
// 00527828  8bc1                 mov eax, ecx
// 0052782a  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 00527830  884c240b             mov byte ptr [esp + 0xb], cl
// 00527834  8bca                 mov ecx, edx
// 00527836  c1e808               shr eax, 8
// 00527839  c1e918               shr ecx, 0x18
// 0052783c  8844240a             mov byte ptr [esp + 0xa], al
// 00527840  884c240c             mov byte ptr [esp + 0xc], cl
// 00527844  8bc2                 mov eax, edx
// 00527846  8bca                 mov ecx, edx
// 00527848  8854240f             mov byte ptr [esp + 0xf], dl
// 0052784c  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 00527850  c1e810               shr eax, 0x10
// 00527853  c1e908               shr ecx, 8
// 00527856  6a0d                 push 0xd
// 00527858  88442411             mov byte ptr [esp + 0x11], al
// 0052785c  8a442434             mov al, byte ptr [esp + 0x34]
// 00527860  884c2412             mov byte ptr [esp + 0x12], cl
// 00527864  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 00527868  88542415             mov byte ptr [esp + 0x15], dl
// 0052786c  8a54243c             mov dl, byte ptr [esp + 0x3c]
// 00527870  6844948200           push 0x829444
// 00527875  56                   push esi
// 00527876  889e28010000         mov byte ptr [esi + 0x128], bl
// 0052787c  885c241c             mov byte ptr [esp + 0x1c], bl
// 00527880  8844241e             mov byte ptr [esp + 0x1e], al
// 00527884  884c241f             mov byte ptr [esp + 0x1f], cl
// 00527888  88542420             mov byte ptr [esp + 0x20], dl
// 0052788c  e88febffff           call 0x526420
// 00527891  6a0d                 push 0xd
// 00527893  8d442418             lea eax, [esp + 0x18]
// 00527897  50                   push eax
// 00527898  56                   push esi
// 00527899  e8e264ffff           call 0x51dd80
// 0052789e  6a0d                 push 0xd
// 005278a0  8d4c2424             lea ecx, [esp + 0x24]
// 005278a4  51                   push ecx
// 005278a5  56                   push esi
// 005278a6  e80562ffff           call 0x51dab0
// 005278ab  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005278b1  8bd0                 mov edx, eax
// 005278b3  c1ea18               shr edx, 0x18
// 005278b6  88542440             mov byte ptr [esp + 0x40], dl
// 005278ba  8bc8                 mov ecx, eax
// 005278bc  8bd0                 mov edx, eax
// 005278be  88442443             mov byte ptr [esp + 0x43], al
// 005278c2  6a04                 push 4
// 005278c4  8d442444             lea eax, [esp + 0x44]
// 005278c8  50                   push eax
// 005278c9  c1e910               shr ecx, 0x10
// 005278cc  c1ea08               shr edx, 8
// 005278cf  56                   push esi
// 005278d0  884c244d             mov byte ptr [esp + 0x4d], cl
// 005278d4  8854244e             mov byte ptr [esp + 0x4e], dl
// 005278d8  e8d361ffff           call 0x51dab0
// 005278dd  83c430               add esp, 0x30
// 005278e0  80be2501000000       cmp byte ptr [esi + 0x125], 0
// 005278e7  c7869400000000dd5100 mov dword ptr [esi + 0x94], 0x51dd00
// 005278f1  c7869800000050dd5100 mov dword ptr [esi + 0x98], 0x51dd50
// 005278fb  89b69c000000         mov dword ptr [esi + 0x9c], esi
// 00527901  7522                 jne 0x527925
// 00527903  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0052790a  7412                 je 0x52791e
// 0052790c  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 00527913  7209                 jb 0x52791e
// 00527915  c68625010000f8       mov byte ptr [esi + 0x125], 0xf8
// 0052791c  eb07                 jmp 0x527925
// 0052791e  c6862501000008       mov byte ptr [esi + 0x125], 8
// 00527925  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00527928  a801                 test al, 1
// 0052792a  7512                 jne 0x52793e
// 0052792c  33c9                 xor ecx, ecx
// 0052792e  80be2501000008       cmp byte ptr [esi + 0x125], 8
// 00527935  0f95c1               setne cl
// 00527938  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0052793e  a802                 test al, 2
// 00527940  750a                 jne 0x52794c
// 00527942  c786b4000000ffffffff mov dword ptr [esi + 0xb4], 0xffffffff
// 0052794c  a804                 test al, 4
// 0052794e  750a                 jne 0x52795a
// 00527950  c786c000000008000000 mov dword ptr [esi + 0xc0], 8
// 0052795a  a808                 test al, 8
// 0052795c  750a                 jne 0x527968
// 0052795e  c786bc0000000f000000 mov dword ptr [esi + 0xbc], 0xf
// 00527968  a810                 test al, 0x10
// 0052796a  750a                 jne 0x527976
// 0052796c  c786b800000008000000 mov dword ptr [esi + 0xb8], 8
// 00527976  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0052797c  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00527982  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00527988  6a38                 push 0x38
// 0052798a  68d0aa8200           push 0x82aad0
// 0052798f  52                   push edx
// 00527990  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 00527996  50                   push eax
// 00527997  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0052799d  51                   push ecx
// 0052799e  52                   push edx
// 0052799f  50                   push eax
// 005279a0  8d4e74               lea ecx, [esi + 0x74]
// 005279a3  51                   push ecx
// 005279a4  e897022800           call 0x7a7c40
// 005279a9  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 005279af  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005279b5  899680000000         mov dword ptr [esi + 0x80], edx
// 005279bb  898684000000         mov dword ptr [esi + 0x84], eax
// 005279c1  c7466801000000       mov dword ptr [esi + 0x68], 1
// 005279c8  5e                   pop esi
// 005279c9  5b                   pop ebx
// 005279ca  83c410               add esp, 0x10
// 005279cd  c3                   ret 
// 005279ce  8bff                 mov edi, edi
// 005279d0  4d                   dec ebp
// 005279d1  7652                 jbe 0x527a25
// 005279d3  0009                 add byte ptr [ecx], cl
// 005279d5  7752                 ja 0x527a29
// 005279d7  007d76               add byte ptr [ebp + 0x76], bh
// 005279da  52                   push edx
// 005279db  00a2765200bf         add byte ptr [edx - 0x40ffad8a], ah
// 005279e1  7652                 jbe 0x527a35
// 005279e3  0009                 add byte ptr [ecx], cl
// 005279e5  7752                 ja 0x527a39
// 005279e7  00e4                 add ah, ah
// 005279e9  7652                 jbe 0x527a3d
// 005279eb  006376               add byte ptr [ebx + 0x76], ah
// 005279ee  52                   push edx
// 005279ef  007376               add byte ptr [ebx + 0x76], dh
// 005279f2  52                   push edx
// 005279f3  0000                 add byte ptr [eax], al
// 005279f5  0001                 add byte ptr [ecx], al
// 005279f7  0001                 add byte ptr [ecx], al
// 005279f9  0101                 add dword ptr [ecx], eax
// 005279fb  0001                 add byte ptr [ecx], al
// 005279fd  0101                 add dword ptr [ecx], eax
// 005279ff  0101                 add dword ptr [ecx], eax
// 00527a01  0101                 add dword ptr [ecx], eax
// 00527a03  006376               add byte ptr [ebx + 0x76], ah
// 00527a06  52                   push edx
// 00527a07  00b876520000         add byte ptr [eax + 0x5276], bh
// 00527a0d  0001                 add byte ptr [ecx], al
// 00527a0f  0001                 add byte ptr [ecx], al
// 00527a11  0101                 add dword ptr [ecx], eax
// library libpng-1.2.6-winapi/pngwutil.c (function _png_write_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6-winapi pngwutil.c
