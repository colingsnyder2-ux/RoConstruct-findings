// roc 2010-06 00571d90  unit: seg_00570000  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00571d90
//
// 00571d90  8b542404             mov edx, dword ptr [esp + 4]
// 00571d94  8a4208               mov al, byte ptr [edx + 8]
// 00571d97  83ec34               sub esp, 0x34
// 00571d9a  3c03                 cmp al, 3
// 00571d9c  0f8481020000         je 0x572023
// 00571da2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00571da6  53                   push ebx
// 00571da7  56                   push esi
// 00571da8  57                   push edi
// 00571da9  a802                 test al, 2
// 00571dab  7434                 je 0x571de1
// 00571dad  0fb64209             movzx eax, byte ptr [edx + 9]
// 00571db1  0fb631               movzx esi, byte ptr [ecx]
// 00571db4  8bf8                 mov edi, eax
// 00571db6  2bfe                 sub edi, esi
// 00571db8  89742420             mov dword ptr [esp + 0x20], esi
// 00571dbc  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00571dc0  8bd8                 mov ebx, eax
// 00571dc2  2bde                 sub ebx, esi
// 00571dc4  89742424             mov dword ptr [esp + 0x24], esi
// 00571dc8  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00571dcc  2bc6                 sub eax, esi
// 00571dce  895c2434             mov dword ptr [esp + 0x34], ebx
// 00571dd2  89442438             mov dword ptr [esp + 0x38], eax
// 00571dd6  89742428             mov dword ptr [esp + 0x28], esi
// 00571dda  bb03000000           mov ebx, 3
// 00571ddf  eb13                 jmp 0x571df4
// 00571de1  0fb64103             movzx eax, byte ptr [ecx + 3]
// 00571de5  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00571de9  2bf8                 sub edi, eax
// 00571deb  89442420             mov dword ptr [esp + 0x20], eax
// 00571def  bb01000000           mov ebx, 1
// 00571df4  f6420804             test byte ptr [edx + 8], 4
// 00571df8  895c240c             mov dword ptr [esp + 0xc], ebx
// 00571dfc  897c2430             mov dword ptr [esp + 0x30], edi
// 00571e00  741b                 je 0x571e1d
// 00571e02  0fb64104             movzx eax, byte ptr [ecx + 4]
// 00571e06  0fb67209             movzx esi, byte ptr [edx + 9]
// 00571e0a  2bf0                 sub esi, eax
// 00571e0c  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 00571e10  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00571e14  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 00571e18  43                   inc ebx
// 00571e19  895c240c             mov dword ptr [esp + 0xc], ebx
// 00571e1d  8a4209               mov al, byte ptr [edx + 9]
// 00571e20  55                   push ebp
// 00571e21  88442448             mov byte ptr [esp + 0x48], al
// 00571e25  3c08                 cmp al, 8
// 00571e27  0f839b000000         jae 0x571ec8
// 00571e2d  8a4903               mov cl, byte ptr [ecx + 3]
// 00571e30  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00571e34  8b7204               mov esi, dword ptr [edx + 4]
// 00571e37  80f901               cmp cl, 1
// 00571e3a  750e                 jne 0x571e4a
// 00571e3c  807c244802           cmp byte ptr [esp + 0x48], 2
// 00571e41  7507                 jne 0x571e4a
// 00571e43  c644244855           mov byte ptr [esp + 0x48], 0x55
// 00571e48  eb16                 jmp 0x571e60
// 00571e4a  807c244804           cmp byte ptr [esp + 0x48], 4
// 00571e4f  750a                 jne 0x571e5b
// 00571e51  c644244811           mov byte ptr [esp + 0x48], 0x11
// 00571e56  80f903               cmp cl, 3
// 00571e59  7405                 je 0x571e60
// 00571e5b  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 00571e60  85f6                 test esi, esi
// 00571e62  0f86b7010000         jbe 0x57201f
// 00571e68  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00571e6c  f7db                 neg ebx
// 00571e6e  89742410             mov dword ptr [esp + 0x10], esi
// 00571e72  3bfb                 cmp edi, ebx
// 00571e74  660fb608             movzx cx, byte ptr [eax]
// 00571e78  0fb7c9               movzx ecx, cx
// 00571e7b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00571e7f  c60000               mov byte ptr [eax], 0
// 00571e82  8bf7                 mov esi, edi
// 00571e84  7e32                 jle 0x571eb8
// 00571e86  8bef                 mov ebp, edi
// 00571e88  f7dd                 neg ebp
// 00571e8a  eb08                 jmp 0x571e94
// 00571e8c  8d642400             lea esp, [esp]
// 00571e90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00571e94  85f6                 test esi, esi
// 00571e96  7e08                 jle 0x571ea0
// 00571e98  8ad1                 mov dl, cl
// 00571e9a  8bce                 mov ecx, esi
// 00571e9c  d2e2                 shl dl, cl
// 00571e9e  eb0c                 jmp 0x571eac
// 00571ea0  8bd1                 mov edx, ecx
// 00571ea2  668bcd               mov cx, bp
// 00571ea5  66d3ea               shr dx, cl
// 00571ea8  22542448             and dl, byte ptr [esp + 0x48]
// 00571eac  2b742424             sub esi, dword ptr [esp + 0x24]
// 00571eb0  0810                 or byte ptr [eax], dl
// 00571eb2  2beb                 sub ebp, ebx
// 00571eb4  3bf3                 cmp esi, ebx
// 00571eb6  7fd8                 jg 0x571e90
// 00571eb8  40                   inc eax
// 00571eb9  836c241001           sub dword ptr [esp + 0x10], 1
// 00571ebe  75b2                 jne 0x571e72
// 00571ec0  5d                   pop ebp
// 00571ec1  5f                   pop edi
// 00571ec2  5e                   pop esi
// 00571ec3  5b                   pop ebx
// 00571ec4  83c434               add esp, 0x34
// 00571ec7  c3                   ret 
// 00571ec8  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00571ecc  8b12                 mov edx, dword ptr [edx]
// 00571ece  0f8590000000         jne 0x571f64
// 00571ed4  0fafd3               imul edx, ebx
// 00571ed7  33ed                 xor ebp, ebp
// 00571ed9  8954241c             mov dword ptr [esp + 0x1c], edx
// 00571edd  896c2410             mov dword ptr [esp + 0x10], ebp
// 00571ee1  85d2                 test edx, edx
// 00571ee3  0f8636010000         jbe 0x57201f
// 00571ee9  8da42400000000       lea esp, [esp]
// 00571ef0  33d2                 xor edx, edx
// 00571ef2  8bc5                 mov eax, ebp
// 00571ef4  f7f3                 div ebx
// 00571ef6  660fb606             movzx ax, byte ptr [esi]
// 00571efa  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 00571efe  0fb7c8               movzx ecx, ax
// 00571f01  894c2448             mov dword ptr [esp + 0x48], ecx
// 00571f05  897c2418             mov dword ptr [esp + 0x18], edi
// 00571f09  f7df                 neg edi
// 00571f0b  c60600               mov byte ptr [esi], 0
// 00571f0e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00571f12  3bc7                 cmp eax, edi
// 00571f14  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00571f18  7e36                 jle 0x571f50
// 00571f1a  8b09                 mov ecx, dword ptr [ecx]
// 00571f1c  f7d9                 neg ecx
// 00571f1e  8be8                 mov ebp, eax
// 00571f20  894c2414             mov dword ptr [esp + 0x14], ecx
// 00571f24  f7dd                 neg ebp
// 00571f26  85c0                 test eax, eax
// 00571f28  7e0a                 jle 0x571f34
// 00571f2a  8a542448             mov dl, byte ptr [esp + 0x48]
// 00571f2e  8bc8                 mov ecx, eax
// 00571f30  d2e2                 shl dl, cl
// 00571f32  eb0a                 jmp 0x571f3e
// 00571f34  8b542448             mov edx, dword ptr [esp + 0x48]
// 00571f38  668bcd               mov cx, bp
// 00571f3b  66d3ea               shr dx, cl
// 00571f3e  2b442418             sub eax, dword ptr [esp + 0x18]
// 00571f42  0816                 or byte ptr [esi], dl
// 00571f44  2bef                 sub ebp, edi
// 00571f46  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00571f4a  7fda                 jg 0x571f26
// 00571f4c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00571f50  45                   inc ebp
// 00571f51  46                   inc esi
// 00571f52  896c2410             mov dword ptr [esp + 0x10], ebp
// 00571f56  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00571f5a  7294                 jb 0x571ef0
// 00571f5c  5d                   pop ebp
// 00571f5d  5f                   pop edi
// 00571f5e  5e                   pop esi
// 00571f5f  5b                   pop ebx
// 00571f60  83c434               add esp, 0x34
// 00571f63  c3                   ret 
// 00571f64  0fafd3               imul edx, ebx
// 00571f67  33ff                 xor edi, edi
// 00571f69  89542420             mov dword ptr [esp + 0x20], edx
// 00571f6d  897c2418             mov dword ptr [esp + 0x18], edi
// 00571f71  85d2                 test edx, edx
// 00571f73  0f86a6000000         jbe 0x57201f
// 00571f79  8da42400000000       lea esp, [esp]
// 00571f80  33d2                 xor edx, edx
// 00571f82  8bc7                 mov eax, edi
// 00571f84  f7f3                 div ebx
// 00571f86  660fb606             movzx ax, byte ptr [esi]
// 00571f8a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 00571f8e  b900010000           mov ecx, 0x100
// 00571f93  660fafc1             imul ax, cx
// 00571f97  660fb64e01           movzx cx, byte ptr [esi + 1]
// 00571f9c  6603c1               add ax, cx
// 00571f9f  0fb7c0               movzx eax, ax
// 00571fa2  89442414             mov dword ptr [esp + 0x14], eax
// 00571fa6  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00571fae  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00571fb2  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00571fb6  8bd5                 mov edx, ebp
// 00571fb8  f7da                 neg edx
// 00571fba  3bc2                 cmp eax, edx
// 00571fbc  7e41                 jle 0x571fff
// 00571fbe  8bcd                 mov ecx, ebp
// 00571fc0  f7d9                 neg ecx
// 00571fc2  8bf8                 mov edi, eax
// 00571fc4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00571fc8  f7df                 neg edi
// 00571fca  8d9b00000000         lea ebx, [ebx]
// 00571fd0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00571fd4  85c0                 test eax, eax
// 00571fd6  7e0a                 jle 0x571fe2
// 00571fd8  8bc8                 mov ecx, eax
// 00571fda  d3e3                 shl ebx, cl
// 00571fdc  095c2448             or dword ptr [esp + 0x48], ebx
// 00571fe0  eb0b                 jmp 0x571fed
// 00571fe2  668bcf               mov cx, di
// 00571fe5  66d3eb               shr bx, cl
// 00571fe8  66095c2448           or word ptr [esp + 0x48], bx
// 00571fed  2bc5                 sub eax, ebp
// 00571fef  2bfa                 sub edi, edx
// 00571ff1  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00571ff5  7fd9                 jg 0x571fd0
// 00571ff7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00571ffb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00571fff  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00572003  8a542448             mov dl, byte ptr [esp + 0x48]
// 00572007  c1e908               shr ecx, 8
// 0057200a  880e                 mov byte ptr [esi], cl
// 0057200c  46                   inc esi
// 0057200d  47                   inc edi
// 0057200e  8816                 mov byte ptr [esi], dl
// 00572010  46                   inc esi
// 00572011  897c2418             mov dword ptr [esp + 0x18], edi
// 00572015  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00572019  0f8261ffffff         jb 0x571f80
// 0057201f  5d                   pop ebp
// 00572020  5f                   pop edi
// 00572021  5e                   pop esi
// 00572022  5b                   pop ebx
// 00572023  83c434               add esp, 0x34
// 00572026  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
