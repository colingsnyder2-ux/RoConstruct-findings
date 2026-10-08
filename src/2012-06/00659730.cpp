// from server: 100% by auto
// roc 2012-06 00659730  unit: seg_00650000  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00659730
//
// 00659730  8b542404             mov edx, dword ptr [esp + 4]
// 00659734  8a4208               mov al, byte ptr [edx + 8]
// 00659737  83ec34               sub esp, 0x34
// 0065973a  3c03                 cmp al, 3
// 0065973c  0f8481020000         je 0x6599c3
// 00659742  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00659746  53                   push ebx
// 00659747  56                   push esi
// 00659748  57                   push edi
// 00659749  a802                 test al, 2
// 0065974b  7434                 je 0x659781
// 0065974d  0fb64209             movzx eax, byte ptr [edx + 9]
// 00659751  0fb631               movzx esi, byte ptr [ecx]
// 00659754  8bf8                 mov edi, eax
// 00659756  2bfe                 sub edi, esi
// 00659758  89742420             mov dword ptr [esp + 0x20], esi
// 0065975c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00659760  8bd8                 mov ebx, eax
// 00659762  2bde                 sub ebx, esi
// 00659764  89742424             mov dword ptr [esp + 0x24], esi
// 00659768  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0065976c  2bc6                 sub eax, esi
// 0065976e  895c2434             mov dword ptr [esp + 0x34], ebx
// 00659772  89442438             mov dword ptr [esp + 0x38], eax
// 00659776  89742428             mov dword ptr [esp + 0x28], esi
// 0065977a  bb03000000           mov ebx, 3
// 0065977f  eb13                 jmp 0x659794
// 00659781  0fb64103             movzx eax, byte ptr [ecx + 3]
// 00659785  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00659789  2bf8                 sub edi, eax
// 0065978b  89442420             mov dword ptr [esp + 0x20], eax
// 0065978f  bb01000000           mov ebx, 1
// 00659794  f6420804             test byte ptr [edx + 8], 4
// 00659798  895c240c             mov dword ptr [esp + 0xc], ebx
// 0065979c  897c2430             mov dword ptr [esp + 0x30], edi
// 006597a0  741b                 je 0x6597bd
// 006597a2  0fb64104             movzx eax, byte ptr [ecx + 4]
// 006597a6  0fb67209             movzx esi, byte ptr [edx + 9]
// 006597aa  2bf0                 sub esi, eax
// 006597ac  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 006597b0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006597b4  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 006597b8  43                   inc ebx
// 006597b9  895c240c             mov dword ptr [esp + 0xc], ebx
// 006597bd  8a4209               mov al, byte ptr [edx + 9]
// 006597c0  55                   push ebp
// 006597c1  88442448             mov byte ptr [esp + 0x48], al
// 006597c5  3c08                 cmp al, 8
// 006597c7  0f839b000000         jae 0x659868
// 006597cd  8a4903               mov cl, byte ptr [ecx + 3]
// 006597d0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006597d4  8b7204               mov esi, dword ptr [edx + 4]
// 006597d7  80f901               cmp cl, 1
// 006597da  750e                 jne 0x6597ea
// 006597dc  807c244802           cmp byte ptr [esp + 0x48], 2
// 006597e1  7507                 jne 0x6597ea
// 006597e3  c644244855           mov byte ptr [esp + 0x48], 0x55
// 006597e8  eb16                 jmp 0x659800
// 006597ea  807c244804           cmp byte ptr [esp + 0x48], 4
// 006597ef  750a                 jne 0x6597fb
// 006597f1  c644244811           mov byte ptr [esp + 0x48], 0x11
// 006597f6  80f903               cmp cl, 3
// 006597f9  7405                 je 0x659800
// 006597fb  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 00659800  85f6                 test esi, esi
// 00659802  0f86b7010000         jbe 0x6599bf
// 00659808  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0065980c  f7db                 neg ebx
// 0065980e  89742410             mov dword ptr [esp + 0x10], esi
// 00659812  3bfb                 cmp edi, ebx
// 00659814  660fb608             movzx cx, byte ptr [eax]
// 00659818  0fb7c9               movzx ecx, cx
// 0065981b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0065981f  c60000               mov byte ptr [eax], 0
// 00659822  8bf7                 mov esi, edi
// 00659824  7e32                 jle 0x659858
// 00659826  8bef                 mov ebp, edi
// 00659828  f7dd                 neg ebp
// 0065982a  eb08                 jmp 0x659834
// 0065982c  8d642400             lea esp, [esp]
// 00659830  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00659834  85f6                 test esi, esi
// 00659836  7e08                 jle 0x659840
// 00659838  8ad1                 mov dl, cl
// 0065983a  8bce                 mov ecx, esi
// 0065983c  d2e2                 shl dl, cl
// 0065983e  eb0c                 jmp 0x65984c
// 00659840  8bd1                 mov edx, ecx
// 00659842  668bcd               mov cx, bp
// 00659845  66d3ea               shr dx, cl
// 00659848  22542448             and dl, byte ptr [esp + 0x48]
// 0065984c  2b742424             sub esi, dword ptr [esp + 0x24]
// 00659850  0810                 or byte ptr [eax], dl
// 00659852  2beb                 sub ebp, ebx
// 00659854  3bf3                 cmp esi, ebx
// 00659856  7fd8                 jg 0x659830
// 00659858  40                   inc eax
// 00659859  836c241001           sub dword ptr [esp + 0x10], 1
// 0065985e  75b2                 jne 0x659812
// 00659860  5d                   pop ebp
// 00659861  5f                   pop edi
// 00659862  5e                   pop esi
// 00659863  5b                   pop ebx
// 00659864  83c434               add esp, 0x34
// 00659867  c3                   ret 
// 00659868  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0065986c  8b12                 mov edx, dword ptr [edx]
// 0065986e  0f8590000000         jne 0x659904
// 00659874  0fafd3               imul edx, ebx
// 00659877  33ed                 xor ebp, ebp
// 00659879  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065987d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00659881  85d2                 test edx, edx
// 00659883  0f8636010000         jbe 0x6599bf
// 00659889  8da42400000000       lea esp, [esp]
// 00659890  33d2                 xor edx, edx
// 00659892  8bc5                 mov eax, ebp
// 00659894  f7f3                 div ebx
// 00659896  660fb606             movzx ax, byte ptr [esi]
// 0065989a  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 0065989e  0fb7c8               movzx ecx, ax
// 006598a1  894c2448             mov dword ptr [esp + 0x48], ecx
// 006598a5  897c2418             mov dword ptr [esp + 0x18], edi
// 006598a9  f7df                 neg edi
// 006598ab  c60600               mov byte ptr [esi], 0
// 006598ae  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 006598b2  3bc7                 cmp eax, edi
// 006598b4  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 006598b8  7e36                 jle 0x6598f0
// 006598ba  8b09                 mov ecx, dword ptr [ecx]
// 006598bc  f7d9                 neg ecx
// 006598be  8be8                 mov ebp, eax
// 006598c0  894c2414             mov dword ptr [esp + 0x14], ecx
// 006598c4  f7dd                 neg ebp
// 006598c6  85c0                 test eax, eax
// 006598c8  7e0a                 jle 0x6598d4
// 006598ca  8a542448             mov dl, byte ptr [esp + 0x48]
// 006598ce  8bc8                 mov ecx, eax
// 006598d0  d2e2                 shl dl, cl
// 006598d2  eb0a                 jmp 0x6598de
// 006598d4  8b542448             mov edx, dword ptr [esp + 0x48]
// 006598d8  668bcd               mov cx, bp
// 006598db  66d3ea               shr dx, cl
// 006598de  2b442418             sub eax, dword ptr [esp + 0x18]
// 006598e2  0816                 or byte ptr [esi], dl
// 006598e4  2bef                 sub ebp, edi
// 006598e6  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006598ea  7fda                 jg 0x6598c6
// 006598ec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006598f0  45                   inc ebp
// 006598f1  46                   inc esi
// 006598f2  896c2410             mov dword ptr [esp + 0x10], ebp
// 006598f6  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 006598fa  7294                 jb 0x659890
// 006598fc  5d                   pop ebp
// 006598fd  5f                   pop edi
// 006598fe  5e                   pop esi
// 006598ff  5b                   pop ebx
// 00659900  83c434               add esp, 0x34
// 00659903  c3                   ret 
// 00659904  0fafd3               imul edx, ebx
// 00659907  33ff                 xor edi, edi
// 00659909  89542420             mov dword ptr [esp + 0x20], edx
// 0065990d  897c2418             mov dword ptr [esp + 0x18], edi
// 00659911  85d2                 test edx, edx
// 00659913  0f86a6000000         jbe 0x6599bf
// 00659919  8da42400000000       lea esp, [esp]
// 00659920  33d2                 xor edx, edx
// 00659922  8bc7                 mov eax, edi
// 00659924  f7f3                 div ebx
// 00659926  660fb606             movzx ax, byte ptr [esi]
// 0065992a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 0065992e  b900010000           mov ecx, 0x100
// 00659933  660fafc1             imul ax, cx
// 00659937  660fb64e01           movzx cx, byte ptr [esi + 1]
// 0065993c  6603c1               add ax, cx
// 0065993f  0fb7c0               movzx eax, ax
// 00659942  89442414             mov dword ptr [esp + 0x14], eax
// 00659946  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0065994e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 00659952  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 00659956  8bd5                 mov edx, ebp
// 00659958  f7da                 neg edx
// 0065995a  3bc2                 cmp eax, edx
// 0065995c  7e41                 jle 0x65999f
// 0065995e  8bcd                 mov ecx, ebp
// 00659960  f7d9                 neg ecx
// 00659962  8bf8                 mov edi, eax
// 00659964  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00659968  f7df                 neg edi
// 0065996a  8d9b00000000         lea ebx, [ebx]
// 00659970  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00659974  85c0                 test eax, eax
// 00659976  7e0a                 jle 0x659982
// 00659978  8bc8                 mov ecx, eax
// 0065997a  d3e3                 shl ebx, cl
// 0065997c  095c2448             or dword ptr [esp + 0x48], ebx
// 00659980  eb0b                 jmp 0x65998d
// 00659982  668bcf               mov cx, di
// 00659985  66d3eb               shr bx, cl
// 00659988  66095c2448           or word ptr [esp + 0x48], bx
// 0065998d  2bc5                 sub eax, ebp
// 0065998f  2bfa                 sub edi, edx
// 00659991  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00659995  7fd9                 jg 0x659970
// 00659997  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065999b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065999f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006599a3  8a542448             mov dl, byte ptr [esp + 0x48]
// 006599a7  c1e908               shr ecx, 8
// 006599aa  880e                 mov byte ptr [esi], cl
// 006599ac  46                   inc esi
// 006599ad  47                   inc edi
// 006599ae  8816                 mov byte ptr [esi], dl
// 006599b0  46                   inc esi
// 006599b1  897c2418             mov dword ptr [esp + 0x18], edi
// 006599b5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006599b9  0f8261ffffff         jb 0x659920
// 006599bf  5d                   pop ebp
// 006599c0  5f                   pop edi
// 006599c1  5e                   pop esi
// 006599c2  5b                   pop ebx
// 006599c3  83c434               add esp, 0x34
// 006599c6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
