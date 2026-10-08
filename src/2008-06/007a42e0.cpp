// from server: 100% by auto
// roc 2008-06 007a42e0  unit: CXTIconHandle  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a42e0
//
// 007a42e0  83ec20               sub esp, 0x20
// 007a42e3  53                   push ebx
// 007a42e4  55                   push ebp
// 007a42e5  56                   push esi
// 007a42e6  57                   push edi
// 007a42e7  8b5104               mov edx, dword ptr [ecx + 4]
// 007a42ea  8b19                 mov ebx, dword ptr [ecx]
// 007a42ec  8b4908               mov ecx, dword ptr [ecx + 8]
// 007a42ef  89542424             mov dword ptr [esp + 0x24], edx
// 007a42f3  8b5104               mov edx, dword ptr [ecx + 4]
// 007a42f6  8b29                 mov ebp, dword ptr [ecx]
// 007a42f8  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a42fc  8b5108               mov edx, dword ptr [ecx + 8]
// 007a42ff  8b7110               mov esi, dword ptr [ecx + 0x10]
// 007a4302  33c9                 xor ecx, ecx
// 007a4304  89542428             mov dword ptr [esp + 0x28], edx
// 007a4308  0fb7d1               movzx edx, cx
// 007a430b  8bca                 mov ecx, edx
// 007a430d  c1e210               shl edx, 0x10
// 007a4310  0bca                 or ecx, edx
// 007a4312  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 007a4318  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 007a431e  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 007a4324  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 007a432a  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 007a4330  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 007a4336  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 007a433c  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 007a4342  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 007a4348  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 007a434f  33c9                 xor ecx, ecx
// 007a4351  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 007a4356  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 007a435c  47                   inc edi
// 007a435d  81ff3d020000         cmp edi, 0x23d
// 007a4363  8974241c             mov dword ptr [esp + 0x1c], esi
// 007a4367  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007a436f  0f8d76010000         jge 0x7a44eb
// 007a4375  b93d020000           mov ecx, 0x23d
// 007a437a  2bcf                 sub ecx, edi
// 007a437c  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 007a4383  03f9                 add edi, ecx
// 007a4385  89542414             mov dword ptr [esp + 0x14], edx
// 007a4389  894c2420             mov dword ptr [esp + 0x20], ecx
// 007a438d  897c2410             mov dword ptr [esp + 0x10], edi
// 007a4391  eb04                 jmp 0x7a4397
// 007a4393  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007a4397  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a439b  8b11                 mov edx, dword ptr [ecx]
// 007a439d  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 007a43a2  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 007a43a7  41                   inc ecx
// 007a43a8  3bce                 cmp ecx, esi
// 007a43aa  7e06                 jle 0x7a43b2
// 007a43ac  ff442418             inc dword ptr [esp + 0x18]
// 007a43b0  8bce                 mov ecx, esi
// 007a43b2  3b542424             cmp edx, dword ptr [esp + 0x24]
// 007a43b6  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 007a43bb  7f44                 jg 0x7a4401
// 007a43bd  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a43c1  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 007a43c9  33f6                 xor esi, esi
// 007a43cb  3bd7                 cmp edx, edi
// 007a43cd  7c0b                 jl 0x7a43da
// 007a43cf  8bf2                 mov esi, edx
// 007a43d1  2bf7                 sub esi, edi
// 007a43d3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007a43d7  8b34b7               mov esi, dword ptr [edi + esi*4]
// 007a43da  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 007a43de  03ce                 add ecx, esi
// 007a43e0  0fafcf               imul ecx, edi
// 007a43e3  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 007a43e9  85ed                 test ebp, ebp
// 007a43eb  7410                 je 0x7a43fd
// 007a43ed  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 007a43f2  03d6                 add edx, esi
// 007a43f4  0fafd7               imul edx, edi
// 007a43f7  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 007a43fd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a4401  8344241404           add dword ptr [esp + 0x14], 4
// 007a4406  836c242001           sub dword ptr [esp + 0x20], 1
// 007a440b  7586                 jne 0x7a4393
// 007a440d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007a4411  85ed                 test ebp, ebp
// 007a4413  0f84d2000000         je 0x7a44eb
// 007a4419  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a441d  8d51ff               lea edx, [ecx - 1]
// 007a4420  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a4424  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 007a442b  eb03                 jmp 0x7a4430
// 007a442d  8d4900               lea ecx, [ecx]
// 007a4430  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a4434  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 007a443d  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 007a4444  750a                 jne 0x7a4450
// 007a4446  83ea02               sub edx, 2
// 007a4449  49                   dec ecx
// 007a444a  66833a00             cmp word ptr [edx], 0
// 007a444e  74f6                 je 0x7a4446
// 007a4450  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 007a4459  baffff0000           mov edx, 0xffff
// 007a445e  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 007a4466  8bca                 mov ecx, edx
// 007a4468  66010e               add word ptr [esi], cx
// 007a446b  83ed02               sub ebp, 2
// 007a446e  85ed                 test ebp, ebp
// 007a4470  7fbe                 jg 0x7a4430
// 007a4472  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a4476  85d2                 test edx, edx
// 007a4478  7471                 je 0x7a44eb
// 007a447a  89742420             mov dword ptr [esp + 0x20], esi
// 007a447e  8bff                 mov edi, edi
// 007a4480  0fb736               movzx esi, word ptr [esi]
// 007a4483  8974241c             mov dword ptr [esp + 0x1c], esi
// 007a4487  85f6                 test esi, esi
// 007a4489  7450                 je 0x7a44db
// 007a448b  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 007a4492  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 007a4495  ff4c2410             dec dword ptr [esp + 0x10]
// 007a4499  83ed04               sub ebp, 4
// 007a449c  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 007a44a0  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007a44a4  7f2d                 jg 0x7a44d3
// 007a44a6  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 007a44ab  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 007a44af  3bfa                 cmp edi, edx
// 007a44b1  7418                 je 0x7a44cb
// 007a44b3  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 007a44b7  8bea                 mov ebp, edx
// 007a44b9  2bef                 sub ebp, edi
// 007a44bb  0fafe9               imul ebp, ecx
// 007a44be  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 007a44c4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a44c8  668916               mov word ptr [esi], dx
// 007a44cb  ff4c241c             dec dword ptr [esp + 0x1c]
// 007a44cf  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007a44d3  85f6                 test esi, esi
// 007a44d5  75bb                 jne 0x7a4492
// 007a44d7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a44db  8b742420             mov esi, dword ptr [esp + 0x20]
// 007a44df  4a                   dec edx
// 007a44e0  83ee02               sub esi, 2
// 007a44e3  89742420             mov dword ptr [esp + 0x20], esi
// 007a44e7  85d2                 test edx, edx
// 007a44e9  7595                 jne 0x7a4480
// 007a44eb  5f                   pop edi
// 007a44ec  5e                   pop esi
// 007a44ed  5d                   pop ebp
// 007a44ee  5b                   pop ebx
// 007a44ef  83c420               add esp, 0x20
// 007a44f2  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
