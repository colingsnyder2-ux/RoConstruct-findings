// roc 2008-06 00529c30  unit: G3D::Line  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529c30
//
// 00529c30  8b542404             mov edx, dword ptr [esp + 4]
// 00529c34  8a4208               mov al, byte ptr [edx + 8]
// 00529c37  83ec34               sub esp, 0x34
// 00529c3a  3c03                 cmp al, 3
// 00529c3c  0f8481020000         je 0x529ec3
// 00529c42  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00529c46  53                   push ebx
// 00529c47  56                   push esi
// 00529c48  57                   push edi
// 00529c49  a802                 test al, 2
// 00529c4b  7434                 je 0x529c81
// 00529c4d  0fb64209             movzx eax, byte ptr [edx + 9]
// 00529c51  0fb631               movzx esi, byte ptr [ecx]
// 00529c54  8bf8                 mov edi, eax
// 00529c56  2bfe                 sub edi, esi
// 00529c58  89742420             mov dword ptr [esp + 0x20], esi
// 00529c5c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00529c60  8bd8                 mov ebx, eax
// 00529c62  2bde                 sub ebx, esi
// 00529c64  89742424             mov dword ptr [esp + 0x24], esi
// 00529c68  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00529c6c  2bc6                 sub eax, esi
// 00529c6e  895c2434             mov dword ptr [esp + 0x34], ebx
// 00529c72  89442438             mov dword ptr [esp + 0x38], eax
// 00529c76  89742428             mov dword ptr [esp + 0x28], esi
// 00529c7a  bb03000000           mov ebx, 3
// 00529c7f  eb13                 jmp 0x529c94
// 00529c81  0fb64103             movzx eax, byte ptr [ecx + 3]
// 00529c85  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00529c89  2bf8                 sub edi, eax
// 00529c8b  89442420             mov dword ptr [esp + 0x20], eax
// 00529c8f  bb01000000           mov ebx, 1
// 00529c94  f6420804             test byte ptr [edx + 8], 4
// 00529c98  895c240c             mov dword ptr [esp + 0xc], ebx
// 00529c9c  897c2430             mov dword ptr [esp + 0x30], edi
// 00529ca0  741b                 je 0x529cbd
// 00529ca2  0fb64104             movzx eax, byte ptr [ecx + 4]
// 00529ca6  0fb67209             movzx esi, byte ptr [edx + 9]
// 00529caa  2bf0                 sub esi, eax
// 00529cac  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 00529cb0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00529cb4  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 00529cb8  43                   inc ebx
// 00529cb9  895c240c             mov dword ptr [esp + 0xc], ebx
// 00529cbd  8a4209               mov al, byte ptr [edx + 9]
// 00529cc0  55                   push ebp
// 00529cc1  88442448             mov byte ptr [esp + 0x48], al
// 00529cc5  3c08                 cmp al, 8
// 00529cc7  0f839b000000         jae 0x529d68
// 00529ccd  8a4903               mov cl, byte ptr [ecx + 3]
// 00529cd0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00529cd4  8b7204               mov esi, dword ptr [edx + 4]
// 00529cd7  80f901               cmp cl, 1
// 00529cda  750e                 jne 0x529cea
// 00529cdc  807c244802           cmp byte ptr [esp + 0x48], 2
// 00529ce1  7507                 jne 0x529cea
// 00529ce3  c644244855           mov byte ptr [esp + 0x48], 0x55
// 00529ce8  eb16                 jmp 0x529d00
// 00529cea  807c244804           cmp byte ptr [esp + 0x48], 4
// 00529cef  750a                 jne 0x529cfb
// 00529cf1  c644244811           mov byte ptr [esp + 0x48], 0x11
// 00529cf6  80f903               cmp cl, 3
// 00529cf9  7405                 je 0x529d00
// 00529cfb  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 00529d00  85f6                 test esi, esi
// 00529d02  0f86b7010000         jbe 0x529ebf
// 00529d08  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00529d0c  f7db                 neg ebx
// 00529d0e  89742410             mov dword ptr [esp + 0x10], esi
// 00529d12  3bfb                 cmp edi, ebx
// 00529d14  660fb608             movzx cx, byte ptr [eax]
// 00529d18  0fb7c9               movzx ecx, cx
// 00529d1b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00529d1f  c60000               mov byte ptr [eax], 0
// 00529d22  8bf7                 mov esi, edi
// 00529d24  7e32                 jle 0x529d58
// 00529d26  8bef                 mov ebp, edi
// 00529d28  f7dd                 neg ebp
// 00529d2a  eb08                 jmp 0x529d34
// 00529d2c  8d642400             lea esp, [esp]
// 00529d30  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00529d34  85f6                 test esi, esi
// 00529d36  7e08                 jle 0x529d40
// 00529d38  8ad1                 mov dl, cl
// 00529d3a  8bce                 mov ecx, esi
// 00529d3c  d2e2                 shl dl, cl
// 00529d3e  eb0c                 jmp 0x529d4c
// 00529d40  8bd1                 mov edx, ecx
// 00529d42  668bcd               mov cx, bp
// 00529d45  66d3ea               shr dx, cl
// 00529d48  22542448             and dl, byte ptr [esp + 0x48]
// 00529d4c  2b742424             sub esi, dword ptr [esp + 0x24]
// 00529d50  0810                 or byte ptr [eax], dl
// 00529d52  2beb                 sub ebp, ebx
// 00529d54  3bf3                 cmp esi, ebx
// 00529d56  7fd8                 jg 0x529d30
// 00529d58  40                   inc eax
// 00529d59  836c241001           sub dword ptr [esp + 0x10], 1
// 00529d5e  75b2                 jne 0x529d12
// 00529d60  5d                   pop ebp
// 00529d61  5f                   pop edi
// 00529d62  5e                   pop esi
// 00529d63  5b                   pop ebx
// 00529d64  83c434               add esp, 0x34
// 00529d67  c3                   ret 
// 00529d68  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00529d6c  8b12                 mov edx, dword ptr [edx]
// 00529d6e  0f8590000000         jne 0x529e04
// 00529d74  0fafd3               imul edx, ebx
// 00529d77  33ed                 xor ebp, ebp
// 00529d79  8954241c             mov dword ptr [esp + 0x1c], edx
// 00529d7d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00529d81  85d2                 test edx, edx
// 00529d83  0f8636010000         jbe 0x529ebf
// 00529d89  8da42400000000       lea esp, [esp]
// 00529d90  33d2                 xor edx, edx
// 00529d92  8bc5                 mov eax, ebp
// 00529d94  f7f3                 div ebx
// 00529d96  660fb606             movzx ax, byte ptr [esi]
// 00529d9a  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 00529d9e  0fb7c8               movzx ecx, ax
// 00529da1  894c2448             mov dword ptr [esp + 0x48], ecx
// 00529da5  897c2418             mov dword ptr [esp + 0x18], edi
// 00529da9  f7df                 neg edi
// 00529dab  c60600               mov byte ptr [esi], 0
// 00529dae  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00529db2  3bc7                 cmp eax, edi
// 00529db4  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00529db8  7e36                 jle 0x529df0
// 00529dba  8b09                 mov ecx, dword ptr [ecx]
// 00529dbc  f7d9                 neg ecx
// 00529dbe  8be8                 mov ebp, eax
// 00529dc0  894c2414             mov dword ptr [esp + 0x14], ecx
// 00529dc4  f7dd                 neg ebp
// 00529dc6  85c0                 test eax, eax
// 00529dc8  7e0a                 jle 0x529dd4
// 00529dca  8a542448             mov dl, byte ptr [esp + 0x48]
// 00529dce  8bc8                 mov ecx, eax
// 00529dd0  d2e2                 shl dl, cl
// 00529dd2  eb0a                 jmp 0x529dde
// 00529dd4  8b542448             mov edx, dword ptr [esp + 0x48]
// 00529dd8  668bcd               mov cx, bp
// 00529ddb  66d3ea               shr dx, cl
// 00529dde  2b442418             sub eax, dword ptr [esp + 0x18]
// 00529de2  0816                 or byte ptr [esi], dl
// 00529de4  2bef                 sub ebp, edi
// 00529de6  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00529dea  7fda                 jg 0x529dc6
// 00529dec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529df0  45                   inc ebp
// 00529df1  46                   inc esi
// 00529df2  896c2410             mov dword ptr [esp + 0x10], ebp
// 00529df6  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00529dfa  7294                 jb 0x529d90
// 00529dfc  5d                   pop ebp
// 00529dfd  5f                   pop edi
// 00529dfe  5e                   pop esi
// 00529dff  5b                   pop ebx
// 00529e00  83c434               add esp, 0x34
// 00529e03  c3                   ret 
// 00529e04  0fafd3               imul edx, ebx
// 00529e07  33ff                 xor edi, edi
// 00529e09  89542420             mov dword ptr [esp + 0x20], edx
// 00529e0d  897c2418             mov dword ptr [esp + 0x18], edi
// 00529e11  85d2                 test edx, edx
// 00529e13  0f86a6000000         jbe 0x529ebf
// 00529e19  8da42400000000       lea esp, [esp]
// 00529e20  33d2                 xor edx, edx
// 00529e22  8bc7                 mov eax, edi
// 00529e24  f7f3                 div ebx
// 00529e26  660fb606             movzx ax, byte ptr [esi]
// 00529e2a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 00529e2e  b900010000           mov ecx, 0x100
// 00529e33  660fafc1             imul ax, cx
// 00529e37  660fb64e01           movzx cx, byte ptr [esi + 1]
// 00529e3c  6603c1               add ax, cx
// 00529e3f  0fb7c0               movzx eax, ax
// 00529e42  89442414             mov dword ptr [esp + 0x14], eax
// 00529e46  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00529e4e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00529e52  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00529e56  8bd5                 mov edx, ebp
// 00529e58  f7da                 neg edx
// 00529e5a  3bc2                 cmp eax, edx
// 00529e5c  7e41                 jle 0x529e9f
// 00529e5e  8bcd                 mov ecx, ebp
// 00529e60  f7d9                 neg ecx
// 00529e62  8bf8                 mov edi, eax
// 00529e64  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00529e68  f7df                 neg edi
// 00529e6a  8d9b00000000         lea ebx, [ebx]
// 00529e70  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00529e74  85c0                 test eax, eax
// 00529e76  7e0a                 jle 0x529e82
// 00529e78  8bc8                 mov ecx, eax
// 00529e7a  d3e3                 shl ebx, cl
// 00529e7c  095c2448             or dword ptr [esp + 0x48], ebx
// 00529e80  eb0b                 jmp 0x529e8d
// 00529e82  668bcf               mov cx, di
// 00529e85  66d3eb               shr bx, cl
// 00529e88  66095c2448           or word ptr [esp + 0x48], bx
// 00529e8d  2bc5                 sub eax, ebp
// 00529e8f  2bfa                 sub edi, edx
// 00529e91  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00529e95  7fd9                 jg 0x529e70
// 00529e97  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00529e9b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00529e9f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00529ea3  8a542448             mov dl, byte ptr [esp + 0x48]
// 00529ea7  c1e908               shr ecx, 8
// 00529eaa  880e                 mov byte ptr [esi], cl
// 00529eac  46                   inc esi
// 00529ead  47                   inc edi
// 00529eae  8816                 mov byte ptr [esi], dl
// 00529eb0  46                   inc esi
// 00529eb1  897c2418             mov dword ptr [esp + 0x18], edi
// 00529eb5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00529eb9  0f8261ffffff         jb 0x529e20
// 00529ebf  5d                   pop ebp
// 00529ec0  5f                   pop edi
// 00529ec1  5e                   pop esi
// 00529ec2  5b                   pop ebx
// 00529ec3  83c434               add esp, 0x34
// 00529ec6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
