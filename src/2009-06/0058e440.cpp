// roc 2009-06 0058e440  unit: seg_00580000  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058e440
//
// 0058e440  8b542404             mov edx, dword ptr [esp + 4]
// 0058e444  8a4208               mov al, byte ptr [edx + 8]
// 0058e447  83ec34               sub esp, 0x34
// 0058e44a  3c03                 cmp al, 3
// 0058e44c  0f8481020000         je 0x58e6d3
// 0058e452  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0058e456  53                   push ebx
// 0058e457  56                   push esi
// 0058e458  57                   push edi
// 0058e459  a802                 test al, 2
// 0058e45b  7434                 je 0x58e491
// 0058e45d  0fb64209             movzx eax, byte ptr [edx + 9]
// 0058e461  0fb631               movzx esi, byte ptr [ecx]
// 0058e464  8bf8                 mov edi, eax
// 0058e466  2bfe                 sub edi, esi
// 0058e468  89742420             mov dword ptr [esp + 0x20], esi
// 0058e46c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0058e470  8bd8                 mov ebx, eax
// 0058e472  2bde                 sub ebx, esi
// 0058e474  89742424             mov dword ptr [esp + 0x24], esi
// 0058e478  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0058e47c  2bc6                 sub eax, esi
// 0058e47e  895c2434             mov dword ptr [esp + 0x34], ebx
// 0058e482  89442438             mov dword ptr [esp + 0x38], eax
// 0058e486  89742428             mov dword ptr [esp + 0x28], esi
// 0058e48a  bb03000000           mov ebx, 3
// 0058e48f  eb13                 jmp 0x58e4a4
// 0058e491  0fb64103             movzx eax, byte ptr [ecx + 3]
// 0058e495  0fb67a09             movzx edi, byte ptr [edx + 9]
// 0058e499  2bf8                 sub edi, eax
// 0058e49b  89442420             mov dword ptr [esp + 0x20], eax
// 0058e49f  bb01000000           mov ebx, 1
// 0058e4a4  f6420804             test byte ptr [edx + 8], 4
// 0058e4a8  895c240c             mov dword ptr [esp + 0xc], ebx
// 0058e4ac  897c2430             mov dword ptr [esp + 0x30], edi
// 0058e4b0  741b                 je 0x58e4cd
// 0058e4b2  0fb64104             movzx eax, byte ptr [ecx + 4]
// 0058e4b6  0fb67209             movzx esi, byte ptr [edx + 9]
// 0058e4ba  2bf0                 sub esi, eax
// 0058e4bc  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 0058e4c0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0058e4c4  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 0058e4c8  43                   inc ebx
// 0058e4c9  895c240c             mov dword ptr [esp + 0xc], ebx
// 0058e4cd  8a4209               mov al, byte ptr [edx + 9]
// 0058e4d0  55                   push ebp
// 0058e4d1  88442448             mov byte ptr [esp + 0x48], al
// 0058e4d5  3c08                 cmp al, 8
// 0058e4d7  0f839b000000         jae 0x58e578
// 0058e4dd  8a4903               mov cl, byte ptr [ecx + 3]
// 0058e4e0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0058e4e4  8b7204               mov esi, dword ptr [edx + 4]
// 0058e4e7  80f901               cmp cl, 1
// 0058e4ea  750e                 jne 0x58e4fa
// 0058e4ec  807c244802           cmp byte ptr [esp + 0x48], 2
// 0058e4f1  7507                 jne 0x58e4fa
// 0058e4f3  c644244855           mov byte ptr [esp + 0x48], 0x55
// 0058e4f8  eb16                 jmp 0x58e510
// 0058e4fa  807c244804           cmp byte ptr [esp + 0x48], 4
// 0058e4ff  750a                 jne 0x58e50b
// 0058e501  c644244811           mov byte ptr [esp + 0x48], 0x11
// 0058e506  80f903               cmp cl, 3
// 0058e509  7405                 je 0x58e510
// 0058e50b  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 0058e510  85f6                 test esi, esi
// 0058e512  0f86b7010000         jbe 0x58e6cf
// 0058e518  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058e51c  f7db                 neg ebx
// 0058e51e  89742410             mov dword ptr [esp + 0x10], esi
// 0058e522  3bfb                 cmp edi, ebx
// 0058e524  660fb608             movzx cx, byte ptr [eax]
// 0058e528  0fb7c9               movzx ecx, cx
// 0058e52b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058e52f  c60000               mov byte ptr [eax], 0
// 0058e532  8bf7                 mov esi, edi
// 0058e534  7e32                 jle 0x58e568
// 0058e536  8bef                 mov ebp, edi
// 0058e538  f7dd                 neg ebp
// 0058e53a  eb08                 jmp 0x58e544
// 0058e53c  8d642400             lea esp, [esp]
// 0058e540  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058e544  85f6                 test esi, esi
// 0058e546  7e08                 jle 0x58e550
// 0058e548  8ad1                 mov dl, cl
// 0058e54a  8bce                 mov ecx, esi
// 0058e54c  d2e2                 shl dl, cl
// 0058e54e  eb0c                 jmp 0x58e55c
// 0058e550  8bd1                 mov edx, ecx
// 0058e552  668bcd               mov cx, bp
// 0058e555  66d3ea               shr dx, cl
// 0058e558  22542448             and dl, byte ptr [esp + 0x48]
// 0058e55c  2b742424             sub esi, dword ptr [esp + 0x24]
// 0058e560  0810                 or byte ptr [eax], dl
// 0058e562  2beb                 sub ebp, ebx
// 0058e564  3bf3                 cmp esi, ebx
// 0058e566  7fd8                 jg 0x58e540
// 0058e568  40                   inc eax
// 0058e569  836c241001           sub dword ptr [esp + 0x10], 1
// 0058e56e  75b2                 jne 0x58e522
// 0058e570  5d                   pop ebp
// 0058e571  5f                   pop edi
// 0058e572  5e                   pop esi
// 0058e573  5b                   pop ebx
// 0058e574  83c434               add esp, 0x34
// 0058e577  c3                   ret 
// 0058e578  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0058e57c  8b12                 mov edx, dword ptr [edx]
// 0058e57e  0f8590000000         jne 0x58e614
// 0058e584  0fafd3               imul edx, ebx
// 0058e587  33ed                 xor ebp, ebp
// 0058e589  8954241c             mov dword ptr [esp + 0x1c], edx
// 0058e58d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058e591  85d2                 test edx, edx
// 0058e593  0f8636010000         jbe 0x58e6cf
// 0058e599  8da42400000000       lea esp, [esp]
// 0058e5a0  33d2                 xor edx, edx
// 0058e5a2  8bc5                 mov eax, ebp
// 0058e5a4  f7f3                 div ebx
// 0058e5a6  660fb606             movzx ax, byte ptr [esi]
// 0058e5aa  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 0058e5ae  0fb7c8               movzx ecx, ax
// 0058e5b1  894c2448             mov dword ptr [esp + 0x48], ecx
// 0058e5b5  897c2418             mov dword ptr [esp + 0x18], edi
// 0058e5b9  f7df                 neg edi
// 0058e5bb  c60600               mov byte ptr [esi], 0
// 0058e5be  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 0058e5c2  3bc7                 cmp eax, edi
// 0058e5c4  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 0058e5c8  7e36                 jle 0x58e600
// 0058e5ca  8b09                 mov ecx, dword ptr [ecx]
// 0058e5cc  f7d9                 neg ecx
// 0058e5ce  8be8                 mov ebp, eax
// 0058e5d0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058e5d4  f7dd                 neg ebp
// 0058e5d6  85c0                 test eax, eax
// 0058e5d8  7e0a                 jle 0x58e5e4
// 0058e5da  8a542448             mov dl, byte ptr [esp + 0x48]
// 0058e5de  8bc8                 mov ecx, eax
// 0058e5e0  d2e2                 shl dl, cl
// 0058e5e2  eb0a                 jmp 0x58e5ee
// 0058e5e4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0058e5e8  668bcd               mov cx, bp
// 0058e5eb  66d3ea               shr dx, cl
// 0058e5ee  2b442418             sub eax, dword ptr [esp + 0x18]
// 0058e5f2  0816                 or byte ptr [esi], dl
// 0058e5f4  2bef                 sub ebp, edi
// 0058e5f6  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0058e5fa  7fda                 jg 0x58e5d6
// 0058e5fc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0058e600  45                   inc ebp
// 0058e601  46                   inc esi
// 0058e602  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058e606  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0058e60a  7294                 jb 0x58e5a0
// 0058e60c  5d                   pop ebp
// 0058e60d  5f                   pop edi
// 0058e60e  5e                   pop esi
// 0058e60f  5b                   pop ebx
// 0058e610  83c434               add esp, 0x34
// 0058e613  c3                   ret 
// 0058e614  0fafd3               imul edx, ebx
// 0058e617  33ff                 xor edi, edi
// 0058e619  89542420             mov dword ptr [esp + 0x20], edx
// 0058e61d  897c2418             mov dword ptr [esp + 0x18], edi
// 0058e621  85d2                 test edx, edx
// 0058e623  0f86a6000000         jbe 0x58e6cf
// 0058e629  8da42400000000       lea esp, [esp]
// 0058e630  33d2                 xor edx, edx
// 0058e632  8bc7                 mov eax, edi
// 0058e634  f7f3                 div ebx
// 0058e636  660fb606             movzx ax, byte ptr [esi]
// 0058e63a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 0058e63e  b900010000           mov ecx, 0x100
// 0058e643  660fafc1             imul ax, cx
// 0058e647  660fb64e01           movzx cx, byte ptr [esi + 1]
// 0058e64c  6603c1               add ax, cx
// 0058e64f  0fb7c0               movzx eax, ax
// 0058e652  89442414             mov dword ptr [esp + 0x14], eax
// 0058e656  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0058e65e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 0058e662  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 0058e666  8bd5                 mov edx, ebp
// 0058e668  f7da                 neg edx
// 0058e66a  3bc2                 cmp eax, edx
// 0058e66c  7e41                 jle 0x58e6af
// 0058e66e  8bcd                 mov ecx, ebp
// 0058e670  f7d9                 neg ecx
// 0058e672  8bf8                 mov edi, eax
// 0058e674  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058e678  f7df                 neg edi
// 0058e67a  8d9b00000000         lea ebx, [ebx]
// 0058e680  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058e684  85c0                 test eax, eax
// 0058e686  7e0a                 jle 0x58e692
// 0058e688  8bc8                 mov ecx, eax
// 0058e68a  d3e3                 shl ebx, cl
// 0058e68c  095c2448             or dword ptr [esp + 0x48], ebx
// 0058e690  eb0b                 jmp 0x58e69d
// 0058e692  668bcf               mov cx, di
// 0058e695  66d3eb               shr bx, cl
// 0058e698  66095c2448           or word ptr [esp + 0x48], bx
// 0058e69d  2bc5                 sub eax, ebp
// 0058e69f  2bfa                 sub edi, edx
// 0058e6a1  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0058e6a5  7fd9                 jg 0x58e680
// 0058e6a7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0058e6ab  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058e6af  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058e6b3  8a542448             mov dl, byte ptr [esp + 0x48]
// 0058e6b7  c1e908               shr ecx, 8
// 0058e6ba  880e                 mov byte ptr [esi], cl
// 0058e6bc  46                   inc esi
// 0058e6bd  47                   inc edi
// 0058e6be  8816                 mov byte ptr [esi], dl
// 0058e6c0  46                   inc esi
// 0058e6c1  897c2418             mov dword ptr [esp + 0x18], edi
// 0058e6c5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0058e6c9  0f8261ffffff         jb 0x58e630
// 0058e6cf  5d                   pop ebp
// 0058e6d0  5f                   pop edi
// 0058e6d1  5e                   pop esi
// 0058e6d2  5b                   pop ebx
// 0058e6d3  83c434               add esp, 0x34
// 0058e6d6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
