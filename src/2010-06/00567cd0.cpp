// from server: 100% by auto
// roc 2010-06 00567cd0  unit: seg_00560000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00567cd0
//
// 00567cd0  8b542404             mov edx, dword ptr [esp + 4]
// 00567cd4  83ec10               sub esp, 0x10
// 00567cd7  53                   push ebx
// 00567cd8  8a5a08               mov bl, byte ptr [edx + 8]
// 00567cdb  80fb03               cmp bl, 3
// 00567cde  0f8496010000         je 0x567e7a
// 00567ce4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00567ce8  55                   push ebp
// 00567ce9  8b2a                 mov ebp, dword ptr [edx]
// 00567ceb  56                   push esi
// 00567cec  33f6                 xor esi, esi
// 00567cee  57                   push edi
// 00567cef  89742424             mov dword ptr [esp + 0x24], esi
// 00567cf3  f6c302               test bl, 2
// 00567cf6  7430                 je 0x567d28
// 00567cf8  0fb64209             movzx eax, byte ptr [edx + 9]
// 00567cfc  0fb631               movzx esi, byte ptr [ecx]
// 00567cff  8bf8                 mov edi, eax
// 00567d01  2bfe                 sub edi, esi
// 00567d03  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00567d07  897c2410             mov dword ptr [esp + 0x10], edi
// 00567d0b  8bf8                 mov edi, eax
// 00567d0d  2bfe                 sub edi, esi
// 00567d0f  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00567d13  2bc6                 sub eax, esi
// 00567d15  8b742424             mov esi, dword ptr [esp + 0x24]
// 00567d19  897c2414             mov dword ptr [esp + 0x14], edi
// 00567d1d  89442418             mov dword ptr [esp + 0x18], eax
// 00567d21  bf03000000           mov edi, 3
// 00567d26  eb13                 jmp 0x567d3b
// 00567d28  0fb64103             movzx eax, byte ptr [ecx + 3]
// 00567d2c  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00567d30  2bf8                 sub edi, eax
// 00567d32  897c2410             mov dword ptr [esp + 0x10], edi
// 00567d36  bf01000000           mov edi, 1
// 00567d3b  f6c304               test bl, 4
// 00567d3e  740f                 je 0x567d4f
// 00567d40  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 00567d44  0fb64209             movzx eax, byte ptr [edx + 9]
// 00567d48  2bc1                 sub eax, ecx
// 00567d4a  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 00567d4e  47                   inc edi
// 00567d4f  33c9                 xor ecx, ecx
// 00567d51  33c0                 xor eax, eax
// 00567d53  3bf9                 cmp edi, ecx
// 00567d55  0f8e1c010000         jle 0x567e77
// 00567d5b  eb03                 jmp 0x567d60
// 00567d5d  8d4900               lea ecx, [ecx]
// 00567d60  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 00567d64  7f06                 jg 0x567d6c
// 00567d66  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 00567d6a  eb05                 jmp 0x567d71
// 00567d6c  be01000000           mov esi, 1
// 00567d71  40                   inc eax
// 00567d72  3bc7                 cmp eax, edi
// 00567d74  7cea                 jl 0x567d60
// 00567d76  663bf1               cmp si, cx
// 00567d79  0f84f8000000         je 0x567e77
// 00567d7f  0fb64209             movzx eax, byte ptr [edx + 9]
// 00567d83  83c0fe               add eax, -2
// 00567d86  83f80e               cmp eax, 0xe
// 00567d89  0f87e8000000         ja 0x567e77
// 00567d8f  0fb680947e5600       movzx eax, byte ptr [eax + 0x567e94]
// 00567d96  ff2485807e5600       jmp dword ptr [eax*4 + 0x567e80]
// 00567d9d  8b5204               mov edx, dword ptr [edx + 4]
// 00567da0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00567da4  3bd1                 cmp edx, ecx
// 00567da6  0f86cb000000         jbe 0x567e77
// 00567dac  8d642400             lea esp, [esp]
// 00567db0  8a08                 mov cl, byte ptr [eax]
// 00567db2  d0e9                 shr cl, 1
// 00567db4  80e155               and cl, 0x55
// 00567db7  8808                 mov byte ptr [eax], cl
// 00567db9  40                   inc eax
// 00567dba  83ea01               sub edx, 1
// 00567dbd  75f1                 jne 0x567db0
// 00567dbf  5f                   pop edi
// 00567dc0  5e                   pop esi
// 00567dc1  5d                   pop ebp
// 00567dc2  5b                   pop ebx
// 00567dc3  83c410               add esp, 0x10
// 00567dc6  c3                   ret 
// 00567dc7  8b7a04               mov edi, dword ptr [edx + 4]
// 00567dca  8b542410             mov edx, dword ptr [esp + 0x10]
// 00567dce  8b742428             mov esi, dword ptr [esp + 0x28]
// 00567dd2  8bca                 mov ecx, edx
// 00567dd4  b8f0000000           mov eax, 0xf0
// 00567dd9  d3f8                 sar eax, cl
// 00567ddb  bb0f000000           mov ebx, 0xf
// 00567de0  d3fb                 sar ebx, cl
// 00567de2  24f0                 and al, 0xf0
// 00567de4  0ac3                 or al, bl
// 00567de6  85ff                 test edi, edi
// 00567de8  0f8689000000         jbe 0x567e77
// 00567dee  8bff                 mov edi, edi
// 00567df0  8a1e                 mov bl, byte ptr [esi]
// 00567df2  8aca                 mov cl, dl
// 00567df4  d2eb                 shr bl, cl
// 00567df6  46                   inc esi
// 00567df7  22d8                 and bl, al
// 00567df9  83ef01               sub edi, 1
// 00567dfc  885eff               mov byte ptr [esi - 1], bl
// 00567dff  75ef                 jne 0x567df0
// 00567e01  5f                   pop edi
// 00567e02  5e                   pop esi
// 00567e03  5d                   pop ebp
// 00567e04  5b                   pop ebx
// 00567e05  83c410               add esp, 0x10
// 00567e08  c3                   ret 
// 00567e09  8b742428             mov esi, dword ptr [esp + 0x28]
// 00567e0d  0fafef               imul ebp, edi
// 00567e10  33db                 xor ebx, ebx
// 00567e12  85ed                 test ebp, ebp
// 00567e14  7661                 jbe 0x567e77
// 00567e16  8bc3                 mov eax, ebx
// 00567e18  33d2                 xor edx, edx
// 00567e1a  f7f7                 div edi
// 00567e1c  43                   inc ebx
// 00567e1d  46                   inc esi
// 00567e1e  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 00567e22  d26eff               shr byte ptr [esi - 1], cl
// 00567e25  3bdd                 cmp ebx, ebp
// 00567e27  72ed                 jb 0x567e16
// 00567e29  5f                   pop edi
// 00567e2a  5e                   pop esi
// 00567e2b  5d                   pop ebp
// 00567e2c  5b                   pop ebx
// 00567e2d  83c410               add esp, 0x10
// 00567e30  c3                   ret 
// 00567e31  8b742428             mov esi, dword ptr [esp + 0x28]
// 00567e35  0fafef               imul ebp, edi
// 00567e38  33db                 xor ebx, ebx
// 00567e3a  85ed                 test ebp, ebp
// 00567e3c  7639                 jbe 0x567e77
// 00567e3e  8bff                 mov edi, edi
// 00567e40  33d2                 xor edx, edx
// 00567e42  8bc3                 mov eax, ebx
// 00567e44  f7f7                 div edi
// 00567e46  660fb606             movzx ax, byte ptr [esi]
// 00567e4a  b900010000           mov ecx, 0x100
// 00567e4f  660fafc1             imul ax, cx
// 00567e53  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00567e57  6603c1               add ax, cx
// 00567e5a  46                   inc esi
// 00567e5b  43                   inc ebx
// 00567e5c  46                   inc esi
// 00567e5d  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 00567e62  66d3e8               shr ax, cl
// 00567e65  0fb7c0               movzx eax, ax
// 00567e68  8bd0                 mov edx, eax
// 00567e6a  c1ea08               shr edx, 8
// 00567e6d  8856fe               mov byte ptr [esi - 2], dl
// 00567e70  8846ff               mov byte ptr [esi - 1], al
// 00567e73  3bdd                 cmp ebx, ebp
// 00567e75  72c9                 jb 0x567e40
// 00567e77  5f                   pop edi
// 00567e78  5e                   pop esi
// 00567e79  5d                   pop ebp
// 00567e7a  5b                   pop ebx
// 00567e7b  83c410               add esp, 0x10
// 00567e7e  c3                   ret 
// 00567e7f  90                   nop 
// 00567e80  9d                   popfd 
// 00567e81  7d56                 jge 0x567ed9
// 00567e83  00c7                 add bh, al
// 00567e85  7d56                 jge 0x567edd
// 00567e87  0009                 add byte ptr [ecx], cl
// 00567e89  7e56                 jle 0x567ee1
// 00567e8b  0031                 add byte ptr [ecx], dh
// 00567e8d  7e56                 jle 0x567ee5
// 00567e8f  00777e               add byte ptr [edi + 0x7e], dh
// 00567e92  56                   push esi
// 00567e93  0000                 add byte ptr [eax], al
// 00567e95  0401                 add al, 1
// 00567e97  0404                 add al, 4
// 00567e99  0402                 add al, 2
// 00567e9b  0404                 add al, 4
// 00567e9d  0404                 add al, 4
// 00567e9f  0404                 add al, 4
// 00567ea1  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
