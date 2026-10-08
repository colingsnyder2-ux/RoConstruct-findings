// roc 2009-12 00610470  unit: seg_00610000  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610470
//
// 00610470  8b542404             mov edx, dword ptr [esp + 4]
// 00610474  8a4208               mov al, byte ptr [edx + 8]
// 00610477  83ec34               sub esp, 0x34
// 0061047a  3c03                 cmp al, 3
// 0061047c  0f8481020000         je 0x610703
// 00610482  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00610486  53                   push ebx
// 00610487  56                   push esi
// 00610488  57                   push edi
// 00610489  a802                 test al, 2
// 0061048b  7434                 je 0x6104c1
// 0061048d  0fb64209             movzx eax, byte ptr [edx + 9]
// 00610491  0fb631               movzx esi, byte ptr [ecx]
// 00610494  8bf8                 mov edi, eax
// 00610496  2bfe                 sub edi, esi
// 00610498  89742420             mov dword ptr [esp + 0x20], esi
// 0061049c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 006104a0  8bd8                 mov ebx, eax
// 006104a2  2bde                 sub ebx, esi
// 006104a4  89742424             mov dword ptr [esp + 0x24], esi
// 006104a8  0fb67102             movzx esi, byte ptr [ecx + 2]
// 006104ac  2bc6                 sub eax, esi
// 006104ae  895c2434             mov dword ptr [esp + 0x34], ebx
// 006104b2  89442438             mov dword ptr [esp + 0x38], eax
// 006104b6  89742428             mov dword ptr [esp + 0x28], esi
// 006104ba  bb03000000           mov ebx, 3
// 006104bf  eb13                 jmp 0x6104d4
// 006104c1  0fb64103             movzx eax, byte ptr [ecx + 3]
// 006104c5  0fb67a09             movzx edi, byte ptr [edx + 9]
// 006104c9  2bf8                 sub edi, eax
// 006104cb  89442420             mov dword ptr [esp + 0x20], eax
// 006104cf  bb01000000           mov ebx, 1
// 006104d4  f6420804             test byte ptr [edx + 8], 4
// 006104d8  895c240c             mov dword ptr [esp + 0xc], ebx
// 006104dc  897c2430             mov dword ptr [esp + 0x30], edi
// 006104e0  741b                 je 0x6104fd
// 006104e2  0fb64104             movzx eax, byte ptr [ecx + 4]
// 006104e6  0fb67209             movzx esi, byte ptr [edx + 9]
// 006104ea  2bf0                 sub esi, eax
// 006104ec  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 006104f0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006104f4  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 006104f8  43                   inc ebx
// 006104f9  895c240c             mov dword ptr [esp + 0xc], ebx
// 006104fd  8a4209               mov al, byte ptr [edx + 9]
// 00610500  55                   push ebp
// 00610501  88442448             mov byte ptr [esp + 0x48], al
// 00610505  3c08                 cmp al, 8
// 00610507  0f839b000000         jae 0x6105a8
// 0061050d  8a4903               mov cl, byte ptr [ecx + 3]
// 00610510  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00610514  8b7204               mov esi, dword ptr [edx + 4]
// 00610517  80f901               cmp cl, 1
// 0061051a  750e                 jne 0x61052a
// 0061051c  807c244802           cmp byte ptr [esp + 0x48], 2
// 00610521  7507                 jne 0x61052a
// 00610523  c644244855           mov byte ptr [esp + 0x48], 0x55
// 00610528  eb16                 jmp 0x610540
// 0061052a  807c244804           cmp byte ptr [esp + 0x48], 4
// 0061052f  750a                 jne 0x61053b
// 00610531  c644244811           mov byte ptr [esp + 0x48], 0x11
// 00610536  80f903               cmp cl, 3
// 00610539  7405                 je 0x610540
// 0061053b  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 00610540  85f6                 test esi, esi
// 00610542  0f86b7010000         jbe 0x6106ff
// 00610548  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061054c  f7db                 neg ebx
// 0061054e  89742410             mov dword ptr [esp + 0x10], esi
// 00610552  3bfb                 cmp edi, ebx
// 00610554  660fb608             movzx cx, byte ptr [eax]
// 00610558  0fb7c9               movzx ecx, cx
// 0061055b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061055f  c60000               mov byte ptr [eax], 0
// 00610562  8bf7                 mov esi, edi
// 00610564  7e32                 jle 0x610598
// 00610566  8bef                 mov ebp, edi
// 00610568  f7dd                 neg ebp
// 0061056a  eb08                 jmp 0x610574
// 0061056c  8d642400             lea esp, [esp]
// 00610570  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00610574  85f6                 test esi, esi
// 00610576  7e08                 jle 0x610580
// 00610578  8ad1                 mov dl, cl
// 0061057a  8bce                 mov ecx, esi
// 0061057c  d2e2                 shl dl, cl
// 0061057e  eb0c                 jmp 0x61058c
// 00610580  8bd1                 mov edx, ecx
// 00610582  668bcd               mov cx, bp
// 00610585  66d3ea               shr dx, cl
// 00610588  22542448             and dl, byte ptr [esp + 0x48]
// 0061058c  2b742424             sub esi, dword ptr [esp + 0x24]
// 00610590  0810                 or byte ptr [eax], dl
// 00610592  2beb                 sub ebp, ebx
// 00610594  3bf3                 cmp esi, ebx
// 00610596  7fd8                 jg 0x610570
// 00610598  40                   inc eax
// 00610599  836c241001           sub dword ptr [esp + 0x10], 1
// 0061059e  75b2                 jne 0x610552
// 006105a0  5d                   pop ebp
// 006105a1  5f                   pop edi
// 006105a2  5e                   pop esi
// 006105a3  5b                   pop ebx
// 006105a4  83c434               add esp, 0x34
// 006105a7  c3                   ret 
// 006105a8  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 006105ac  8b12                 mov edx, dword ptr [edx]
// 006105ae  0f8590000000         jne 0x610644
// 006105b4  0fafd3               imul edx, ebx
// 006105b7  33ed                 xor ebp, ebp
// 006105b9  8954241c             mov dword ptr [esp + 0x1c], edx
// 006105bd  896c2410             mov dword ptr [esp + 0x10], ebp
// 006105c1  85d2                 test edx, edx
// 006105c3  0f8636010000         jbe 0x6106ff
// 006105c9  8da42400000000       lea esp, [esp]
// 006105d0  33d2                 xor edx, edx
// 006105d2  8bc5                 mov eax, ebp
// 006105d4  f7f3                 div ebx
// 006105d6  660fb606             movzx ax, byte ptr [esi]
// 006105da  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 006105de  0fb7c8               movzx ecx, ax
// 006105e1  894c2448             mov dword ptr [esp + 0x48], ecx
// 006105e5  897c2418             mov dword ptr [esp + 0x18], edi
// 006105e9  f7df                 neg edi
// 006105eb  c60600               mov byte ptr [esi], 0
// 006105ee  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 006105f2  3bc7                 cmp eax, edi
// 006105f4  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 006105f8  7e36                 jle 0x610630
// 006105fa  8b09                 mov ecx, dword ptr [ecx]
// 006105fc  f7d9                 neg ecx
// 006105fe  8be8                 mov ebp, eax
// 00610600  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610604  f7dd                 neg ebp
// 00610606  85c0                 test eax, eax
// 00610608  7e0a                 jle 0x610614
// 0061060a  8a542448             mov dl, byte ptr [esp + 0x48]
// 0061060e  8bc8                 mov ecx, eax
// 00610610  d2e2                 shl dl, cl
// 00610612  eb0a                 jmp 0x61061e
// 00610614  8b542448             mov edx, dword ptr [esp + 0x48]
// 00610618  668bcd               mov cx, bp
// 0061061b  66d3ea               shr dx, cl
// 0061061e  2b442418             sub eax, dword ptr [esp + 0x18]
// 00610622  0816                 or byte ptr [esi], dl
// 00610624  2bef                 sub ebp, edi
// 00610626  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0061062a  7fda                 jg 0x610606
// 0061062c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00610630  45                   inc ebp
// 00610631  46                   inc esi
// 00610632  896c2410             mov dword ptr [esp + 0x10], ebp
// 00610636  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0061063a  7294                 jb 0x6105d0
// 0061063c  5d                   pop ebp
// 0061063d  5f                   pop edi
// 0061063e  5e                   pop esi
// 0061063f  5b                   pop ebx
// 00610640  83c434               add esp, 0x34
// 00610643  c3                   ret 
// 00610644  0fafd3               imul edx, ebx
// 00610647  33ff                 xor edi, edi
// 00610649  89542420             mov dword ptr [esp + 0x20], edx
// 0061064d  897c2418             mov dword ptr [esp + 0x18], edi
// 00610651  85d2                 test edx, edx
// 00610653  0f86a6000000         jbe 0x6106ff
// 00610659  8da42400000000       lea esp, [esp]
// 00610660  33d2                 xor edx, edx
// 00610662  8bc7                 mov eax, edi
// 00610664  f7f3                 div ebx
// 00610666  660fb606             movzx ax, byte ptr [esi]
// 0061066a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 0061066e  b900010000           mov ecx, 0x100
// 00610673  660fafc1             imul ax, cx
// 00610677  660fb64e01           movzx cx, byte ptr [esi + 1]
// 0061067c  6603c1               add ax, cx
// 0061067f  0fb7c0               movzx eax, ax
// 00610682  89442414             mov dword ptr [esp + 0x14], eax
// 00610686  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0061068e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00610692  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00610696  8bd5                 mov edx, ebp
// 00610698  f7da                 neg edx
// 0061069a  3bc2                 cmp eax, edx
// 0061069c  7e41                 jle 0x6106df
// 0061069e  8bcd                 mov ecx, ebp
// 006106a0  f7d9                 neg ecx
// 006106a2  8bf8                 mov edi, eax
// 006106a4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006106a8  f7df                 neg edi
// 006106aa  8d9b00000000         lea ebx, [ebx]
// 006106b0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006106b4  85c0                 test eax, eax
// 006106b6  7e0a                 jle 0x6106c2
// 006106b8  8bc8                 mov ecx, eax
// 006106ba  d3e3                 shl ebx, cl
// 006106bc  095c2448             or dword ptr [esp + 0x48], ebx
// 006106c0  eb0b                 jmp 0x6106cd
// 006106c2  668bcf               mov cx, di
// 006106c5  66d3eb               shr bx, cl
// 006106c8  66095c2448           or word ptr [esp + 0x48], bx
// 006106cd  2bc5                 sub eax, ebp
// 006106cf  2bfa                 sub edi, edx
// 006106d1  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006106d5  7fd9                 jg 0x6106b0
// 006106d7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006106db  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006106df  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006106e3  8a542448             mov dl, byte ptr [esp + 0x48]
// 006106e7  c1e908               shr ecx, 8
// 006106ea  880e                 mov byte ptr [esi], cl
// 006106ec  46                   inc esi
// 006106ed  47                   inc edi
// 006106ee  8816                 mov byte ptr [esi], dl
// 006106f0  46                   inc esi
// 006106f1  897c2418             mov dword ptr [esp + 0x18], edi
// 006106f5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006106f9  0f8261ffffff         jb 0x610660
// 006106ff  5d                   pop ebp
// 00610700  5f                   pop edi
// 00610701  5e                   pop esi
// 00610702  5b                   pop ebx
// 00610703  83c434               add esp, 0x34
// 00610706  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
