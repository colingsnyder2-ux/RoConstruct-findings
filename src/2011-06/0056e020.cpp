// from server: 100% by auto
// roc 2011-06 0056e020  unit: seg_00560000  size: 663 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056e020
//
// 0056e020  8b542404             mov edx, dword ptr [esp + 4]
// 0056e024  8a4208               mov al, byte ptr [edx + 8]
// 0056e027  83ec34               sub esp, 0x34
// 0056e02a  3c03                 cmp al, 3
// 0056e02c  0f8481020000         je 0x56e2b3
// 0056e032  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0056e036  53                   push ebx
// 0056e037  56                   push esi
// 0056e038  57                   push edi
// 0056e039  a802                 test al, 2
// 0056e03b  7434                 je 0x56e071
// 0056e03d  0fb64209             movzx eax, byte ptr [edx + 9]
// 0056e041  0fb631               movzx esi, byte ptr [ecx]
// 0056e044  8bf8                 mov edi, eax
// 0056e046  2bfe                 sub edi, esi
// 0056e048  89742420             mov dword ptr [esp + 0x20], esi
// 0056e04c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0056e050  8bd8                 mov ebx, eax
// 0056e052  2bde                 sub ebx, esi
// 0056e054  89742424             mov dword ptr [esp + 0x24], esi
// 0056e058  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0056e05c  2bc6                 sub eax, esi
// 0056e05e  895c2434             mov dword ptr [esp + 0x34], ebx
// 0056e062  89442438             mov dword ptr [esp + 0x38], eax
// 0056e066  89742428             mov dword ptr [esp + 0x28], esi
// 0056e06a  bb03000000           mov ebx, 3
// 0056e06f  eb13                 jmp 0x56e084
// 0056e071  0fb64103             movzx eax, byte ptr [ecx + 3]
// 0056e075  0fb67a09             movzx edi, byte ptr [edx + 9]
// 0056e079  2bf8                 sub edi, eax
// 0056e07b  89442420             mov dword ptr [esp + 0x20], eax
// 0056e07f  bb01000000           mov ebx, 1
// 0056e084  f6420804             test byte ptr [edx + 8], 4
// 0056e088  895c240c             mov dword ptr [esp + 0xc], ebx
// 0056e08c  897c2430             mov dword ptr [esp + 0x30], edi
// 0056e090  741b                 je 0x56e0ad
// 0056e092  0fb64104             movzx eax, byte ptr [ecx + 4]
// 0056e096  0fb67209             movzx esi, byte ptr [edx + 9]
// 0056e09a  2bf0                 sub esi, eax
// 0056e09c  89749c30             mov dword ptr [esp + ebx*4 + 0x30], esi
// 0056e0a0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0056e0a4  89449c20             mov dword ptr [esp + ebx*4 + 0x20], eax
// 0056e0a8  43                   inc ebx
// 0056e0a9  895c240c             mov dword ptr [esp + 0xc], ebx
// 0056e0ad  8a4209               mov al, byte ptr [edx + 9]
// 0056e0b0  55                   push ebp
// 0056e0b1  88442448             mov byte ptr [esp + 0x48], al
// 0056e0b5  3c08                 cmp al, 8
// 0056e0b7  0f839b000000         jae 0x56e158
// 0056e0bd  8a4903               mov cl, byte ptr [ecx + 3]
// 0056e0c0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0056e0c4  8b7204               mov esi, dword ptr [edx + 4]
// 0056e0c7  80f901               cmp cl, 1
// 0056e0ca  750e                 jne 0x56e0da
// 0056e0cc  807c244802           cmp byte ptr [esp + 0x48], 2
// 0056e0d1  7507                 jne 0x56e0da
// 0056e0d3  c644244855           mov byte ptr [esp + 0x48], 0x55
// 0056e0d8  eb16                 jmp 0x56e0f0
// 0056e0da  807c244804           cmp byte ptr [esp + 0x48], 4
// 0056e0df  750a                 jne 0x56e0eb
// 0056e0e1  c644244811           mov byte ptr [esp + 0x48], 0x11
// 0056e0e6  80f903               cmp cl, 3
// 0056e0e9  7405                 je 0x56e0f0
// 0056e0eb  c6442448ff           mov byte ptr [esp + 0x48], 0xff
// 0056e0f0  85f6                 test esi, esi
// 0056e0f2  0f86b7010000         jbe 0x56e2af
// 0056e0f8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0056e0fc  f7db                 neg ebx
// 0056e0fe  89742410             mov dword ptr [esp + 0x10], esi
// 0056e102  3bfb                 cmp edi, ebx
// 0056e104  660fb608             movzx cx, byte ptr [eax]
// 0056e108  0fb7c9               movzx ecx, cx
// 0056e10b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056e10f  c60000               mov byte ptr [eax], 0
// 0056e112  8bf7                 mov esi, edi
// 0056e114  7e32                 jle 0x56e148
// 0056e116  8bef                 mov ebp, edi
// 0056e118  f7dd                 neg ebp
// 0056e11a  eb08                 jmp 0x56e124
// 0056e11c  8d642400             lea esp, [esp]
// 0056e120  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056e124  85f6                 test esi, esi
// 0056e126  7e08                 jle 0x56e130
// 0056e128  8ad1                 mov dl, cl
// 0056e12a  8bce                 mov ecx, esi
// 0056e12c  d2e2                 shl dl, cl
// 0056e12e  eb0c                 jmp 0x56e13c
// 0056e130  8bd1                 mov edx, ecx
// 0056e132  668bcd               mov cx, bp
// 0056e135  66d3ea               shr dx, cl
// 0056e138  22542448             and dl, byte ptr [esp + 0x48]
// 0056e13c  2b742424             sub esi, dword ptr [esp + 0x24]
// 0056e140  0810                 or byte ptr [eax], dl
// 0056e142  2beb                 sub ebp, ebx
// 0056e144  3bf3                 cmp esi, ebx
// 0056e146  7fd8                 jg 0x56e120
// 0056e148  40                   inc eax
// 0056e149  836c241001           sub dword ptr [esp + 0x10], 1
// 0056e14e  75b2                 jne 0x56e102
// 0056e150  5d                   pop ebp
// 0056e151  5f                   pop edi
// 0056e152  5e                   pop esi
// 0056e153  5b                   pop ebx
// 0056e154  83c434               add esp, 0x34
// 0056e157  c3                   ret 
// 0056e158  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0056e15c  8b12                 mov edx, dword ptr [edx]
// 0056e15e  0f8590000000         jne 0x56e1f4
// 0056e164  0fafd3               imul edx, ebx
// 0056e167  33ed                 xor ebp, ebp
// 0056e169  8954241c             mov dword ptr [esp + 0x1c], edx
// 0056e16d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056e171  85d2                 test edx, edx
// 0056e173  0f8636010000         jbe 0x56e2af
// 0056e179  8da42400000000       lea esp, [esp]
// 0056e180  33d2                 xor edx, edx
// 0056e182  8bc5                 mov eax, ebp
// 0056e184  f7f3                 div ebx
// 0056e186  660fb606             movzx ax, byte ptr [esi]
// 0056e18a  8b7c9424             mov edi, dword ptr [esp + edx*4 + 0x24]
// 0056e18e  0fb7c8               movzx ecx, ax
// 0056e191  894c2448             mov dword ptr [esp + 0x48], ecx
// 0056e195  897c2418             mov dword ptr [esp + 0x18], edi
// 0056e199  f7df                 neg edi
// 0056e19b  c60600               mov byte ptr [esi], 0
// 0056e19e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 0056e1a2  3bc7                 cmp eax, edi
// 0056e1a4  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 0056e1a8  7e36                 jle 0x56e1e0
// 0056e1aa  8b09                 mov ecx, dword ptr [ecx]
// 0056e1ac  f7d9                 neg ecx
// 0056e1ae  8be8                 mov ebp, eax
// 0056e1b0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056e1b4  f7dd                 neg ebp
// 0056e1b6  85c0                 test eax, eax
// 0056e1b8  7e0a                 jle 0x56e1c4
// 0056e1ba  8a542448             mov dl, byte ptr [esp + 0x48]
// 0056e1be  8bc8                 mov ecx, eax
// 0056e1c0  d2e2                 shl dl, cl
// 0056e1c2  eb0a                 jmp 0x56e1ce
// 0056e1c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0056e1c8  668bcd               mov cx, bp
// 0056e1cb  66d3ea               shr dx, cl
// 0056e1ce  2b442418             sub eax, dword ptr [esp + 0x18]
// 0056e1d2  0816                 or byte ptr [esi], dl
// 0056e1d4  2bef                 sub ebp, edi
// 0056e1d6  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0056e1da  7fda                 jg 0x56e1b6
// 0056e1dc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0056e1e0  45                   inc ebp
// 0056e1e1  46                   inc esi
// 0056e1e2  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056e1e6  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0056e1ea  7294                 jb 0x56e180
// 0056e1ec  5d                   pop ebp
// 0056e1ed  5f                   pop edi
// 0056e1ee  5e                   pop esi
// 0056e1ef  5b                   pop ebx
// 0056e1f0  83c434               add esp, 0x34
// 0056e1f3  c3                   ret 
// 0056e1f4  0fafd3               imul edx, ebx
// 0056e1f7  33ff                 xor edi, edi
// 0056e1f9  89542420             mov dword ptr [esp + 0x20], edx
// 0056e1fd  897c2418             mov dword ptr [esp + 0x18], edi
// 0056e201  85d2                 test edx, edx
// 0056e203  0f86a6000000         jbe 0x56e2af
// 0056e209  8da42400000000       lea esp, [esp]
// 0056e210  33d2                 xor edx, edx
// 0056e212  8bc7                 mov eax, edi
// 0056e214  f7f3                 div ebx
// 0056e216  660fb606             movzx ax, byte ptr [esi]
// 0056e21a  8b6c9424             mov ebp, dword ptr [esp + edx*4 + 0x24]
// 0056e21e  b900010000           mov ecx, 0x100
// 0056e223  660fafc1             imul ax, cx
// 0056e227  660fb64e01           movzx cx, byte ptr [esi + 1]
// 0056e22c  6603c1               add ax, cx
// 0056e22f  0fb7c0               movzx eax, ax
// 0056e232  89442414             mov dword ptr [esp + 0x14], eax
// 0056e236  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0056e23e  8b449434             mov eax, dword ptr [esp + edx*4 + 0x34]
// 0056e242  8d4c9424             lea ecx, [esp + edx*4 + 0x24]
// 0056e246  8bd5                 mov edx, ebp
// 0056e248  f7da                 neg edx
// 0056e24a  3bc2                 cmp eax, edx
// 0056e24c  7e41                 jle 0x56e28f
// 0056e24e  8bcd                 mov ecx, ebp
// 0056e250  f7d9                 neg ecx
// 0056e252  8bf8                 mov edi, eax
// 0056e254  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0056e258  f7df                 neg edi
// 0056e25a  8d9b00000000         lea ebx, [ebx]
// 0056e260  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0056e264  85c0                 test eax, eax
// 0056e266  7e0a                 jle 0x56e272
// 0056e268  8bc8                 mov ecx, eax
// 0056e26a  d3e3                 shl ebx, cl
// 0056e26c  095c2448             or dword ptr [esp + 0x48], ebx
// 0056e270  eb0b                 jmp 0x56e27d
// 0056e272  668bcf               mov cx, di
// 0056e275  66d3eb               shr bx, cl
// 0056e278  66095c2448           or word ptr [esp + 0x48], bx
// 0056e27d  2bc5                 sub eax, ebp
// 0056e27f  2bfa                 sub edi, edx
// 0056e281  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0056e285  7fd9                 jg 0x56e260
// 0056e287  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056e28b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056e28f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0056e293  8a542448             mov dl, byte ptr [esp + 0x48]
// 0056e297  c1e908               shr ecx, 8
// 0056e29a  880e                 mov byte ptr [esi], cl
// 0056e29c  46                   inc esi
// 0056e29d  47                   inc edi
// 0056e29e  8816                 mov byte ptr [esi], dl
// 0056e2a0  46                   inc esi
// 0056e2a1  897c2418             mov dword ptr [esp + 0x18], edi
// 0056e2a5  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0056e2a9  0f8261ffffff         jb 0x56e210
// 0056e2af  5d                   pop ebp
// 0056e2b0  5f                   pop edi
// 0056e2b1  5e                   pop esi
// 0056e2b2  5b                   pop ebx
// 0056e2b3  83c434               add esp, 0x34
// 0056e2b6  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_shift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
