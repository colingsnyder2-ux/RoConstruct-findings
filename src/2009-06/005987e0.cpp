// from server: 100% by auto
// roc 2009-06 005987e0  unit: seg_00590000  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005987e0
//
// 005987e0  83ec20               sub esp, 0x20
// 005987e3  53                   push ebx
// 005987e4  55                   push ebp
// 005987e5  56                   push esi
// 005987e6  57                   push edi
// 005987e7  8b5104               mov edx, dword ptr [ecx + 4]
// 005987ea  8b19                 mov ebx, dword ptr [ecx]
// 005987ec  8b4908               mov ecx, dword ptr [ecx + 8]
// 005987ef  89542424             mov dword ptr [esp + 0x24], edx
// 005987f3  8b5104               mov edx, dword ptr [ecx + 4]
// 005987f6  8b29                 mov ebp, dword ptr [ecx]
// 005987f8  8954242c             mov dword ptr [esp + 0x2c], edx
// 005987fc  8b5108               mov edx, dword ptr [ecx + 8]
// 005987ff  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00598802  33c9                 xor ecx, ecx
// 00598804  89542428             mov dword ptr [esp + 0x28], edx
// 00598808  0fb7d1               movzx edx, cx
// 0059880b  8bca                 mov ecx, edx
// 0059880d  c1e210               shl edx, 0x10
// 00598810  0bca                 or ecx, edx
// 00598812  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 00598818  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0059881e  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 00598824  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0059882a  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 00598830  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 00598836  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0059883c  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 00598842  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 00598848  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 0059884f  33c9                 xor ecx, ecx
// 00598851  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 00598856  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 0059885c  47                   inc edi
// 0059885d  81ff3d020000         cmp edi, 0x23d
// 00598863  8974241c             mov dword ptr [esp + 0x1c], esi
// 00598867  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059886f  0f8d76010000         jge 0x5989eb
// 00598875  b93d020000           mov ecx, 0x23d
// 0059887a  2bcf                 sub ecx, edi
// 0059887c  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 00598883  03f9                 add edi, ecx
// 00598885  89542414             mov dword ptr [esp + 0x14], edx
// 00598889  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059888d  897c2410             mov dword ptr [esp + 0x10], edi
// 00598891  eb04                 jmp 0x598897
// 00598893  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00598897  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059889b  8b11                 mov edx, dword ptr [ecx]
// 0059889d  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 005988a2  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 005988a7  41                   inc ecx
// 005988a8  3bce                 cmp ecx, esi
// 005988aa  7e06                 jle 0x5988b2
// 005988ac  ff442418             inc dword ptr [esp + 0x18]
// 005988b0  8bce                 mov ecx, esi
// 005988b2  3b542424             cmp edx, dword ptr [esp + 0x24]
// 005988b6  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 005988bb  7f44                 jg 0x598901
// 005988bd  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005988c1  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 005988c9  33f6                 xor esi, esi
// 005988cb  3bd7                 cmp edx, edi
// 005988cd  7c0b                 jl 0x5988da
// 005988cf  8bf2                 mov esi, edx
// 005988d1  2bf7                 sub esi, edi
// 005988d3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005988d7  8b34b7               mov esi, dword ptr [edi + esi*4]
// 005988da  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 005988de  03ce                 add ecx, esi
// 005988e0  0fafcf               imul ecx, edi
// 005988e3  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 005988e9  85ed                 test ebp, ebp
// 005988eb  7410                 je 0x5988fd
// 005988ed  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 005988f2  03d6                 add edx, esi
// 005988f4  0fafd7               imul edx, edi
// 005988f7  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 005988fd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00598901  8344241404           add dword ptr [esp + 0x14], 4
// 00598906  836c242001           sub dword ptr [esp + 0x20], 1
// 0059890b  7586                 jne 0x598893
// 0059890d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00598911  85ed                 test ebp, ebp
// 00598913  0f84d2000000         je 0x5989eb
// 00598919  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059891d  8d51ff               lea edx, [ecx - 1]
// 00598920  8954242c             mov dword ptr [esp + 0x2c], edx
// 00598924  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 0059892b  eb03                 jmp 0x598930
// 0059892d  8d4900               lea ecx, [ecx]
// 00598930  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00598934  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0059893d  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 00598944  750a                 jne 0x598950
// 00598946  83ea02               sub edx, 2
// 00598949  49                   dec ecx
// 0059894a  66833a00             cmp word ptr [edx], 0
// 0059894e  74f6                 je 0x598946
// 00598950  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 00598959  baffff0000           mov edx, 0xffff
// 0059895e  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 00598966  8bca                 mov ecx, edx
// 00598968  66010e               add word ptr [esi], cx
// 0059896b  83ed02               sub ebp, 2
// 0059896e  85ed                 test ebp, ebp
// 00598970  7fbe                 jg 0x598930
// 00598972  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00598976  85d2                 test edx, edx
// 00598978  7471                 je 0x5989eb
// 0059897a  89742420             mov dword ptr [esp + 0x20], esi
// 0059897e  8bff                 mov edi, edi
// 00598980  0fb736               movzx esi, word ptr [esi]
// 00598983  8974241c             mov dword ptr [esp + 0x1c], esi
// 00598987  85f6                 test esi, esi
// 00598989  7450                 je 0x5989db
// 0059898b  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 00598992  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00598995  ff4c2410             dec dword ptr [esp + 0x10]
// 00598999  83ed04               sub ebp, 4
// 0059899c  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 005989a0  896c242c             mov dword ptr [esp + 0x2c], ebp
// 005989a4  7f2d                 jg 0x5989d3
// 005989a6  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 005989ab  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 005989af  3bfa                 cmp edi, edx
// 005989b1  7418                 je 0x5989cb
// 005989b3  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 005989b7  8bea                 mov ebp, edx
// 005989b9  2bef                 sub ebp, edi
// 005989bb  0fafe9               imul ebp, ecx
// 005989be  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 005989c4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005989c8  668916               mov word ptr [esi], dx
// 005989cb  ff4c241c             dec dword ptr [esp + 0x1c]
// 005989cf  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005989d3  85f6                 test esi, esi
// 005989d5  75bb                 jne 0x598992
// 005989d7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005989db  8b742420             mov esi, dword ptr [esp + 0x20]
// 005989df  4a                   dec edx
// 005989e0  83ee02               sub esi, 2
// 005989e3  89742420             mov dword ptr [esp + 0x20], esi
// 005989e7  85d2                 test edx, edx
// 005989e9  7595                 jne 0x598980
// 005989eb  5f                   pop edi
// 005989ec  5e                   pop esi
// 005989ed  5d                   pop ebp
// 005989ee  5b                   pop ebx
// 005989ef  83c420               add esp, 0x20
// 005989f2  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
