// roc 2009-12 0061a810  unit: seg_00610000  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a810
//
// 0061a810  83ec20               sub esp, 0x20
// 0061a813  53                   push ebx
// 0061a814  55                   push ebp
// 0061a815  56                   push esi
// 0061a816  57                   push edi
// 0061a817  8b5104               mov edx, dword ptr [ecx + 4]
// 0061a81a  8b19                 mov ebx, dword ptr [ecx]
// 0061a81c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0061a81f  89542424             mov dword ptr [esp + 0x24], edx
// 0061a823  8b5104               mov edx, dword ptr [ecx + 4]
// 0061a826  8b29                 mov ebp, dword ptr [ecx]
// 0061a828  8954242c             mov dword ptr [esp + 0x2c], edx
// 0061a82c  8b5108               mov edx, dword ptr [ecx + 8]
// 0061a82f  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0061a832  33c9                 xor ecx, ecx
// 0061a834  89542428             mov dword ptr [esp + 0x28], edx
// 0061a838  0fb7d1               movzx edx, cx
// 0061a83b  8bca                 mov ecx, edx
// 0061a83d  c1e210               shl edx, 0x10
// 0061a840  0bca                 or ecx, edx
// 0061a842  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 0061a848  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0061a84e  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 0061a854  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0061a85a  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 0061a860  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 0061a866  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0061a86c  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 0061a872  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 0061a878  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 0061a87f  33c9                 xor ecx, ecx
// 0061a881  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0061a886  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 0061a88c  47                   inc edi
// 0061a88d  81ff3d020000         cmp edi, 0x23d
// 0061a893  8974241c             mov dword ptr [esp + 0x1c], esi
// 0061a897  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061a89f  0f8d76010000         jge 0x61aa1b
// 0061a8a5  b93d020000           mov ecx, 0x23d
// 0061a8aa  2bcf                 sub ecx, edi
// 0061a8ac  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 0061a8b3  03f9                 add edi, ecx
// 0061a8b5  89542414             mov dword ptr [esp + 0x14], edx
// 0061a8b9  894c2420             mov dword ptr [esp + 0x20], ecx
// 0061a8bd  897c2410             mov dword ptr [esp + 0x10], edi
// 0061a8c1  eb04                 jmp 0x61a8c7
// 0061a8c3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061a8c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061a8cb  8b11                 mov edx, dword ptr [ecx]
// 0061a8cd  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 0061a8d2  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 0061a8d7  41                   inc ecx
// 0061a8d8  3bce                 cmp ecx, esi
// 0061a8da  7e06                 jle 0x61a8e2
// 0061a8dc  ff442418             inc dword ptr [esp + 0x18]
// 0061a8e0  8bce                 mov ecx, esi
// 0061a8e2  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0061a8e6  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0061a8eb  7f44                 jg 0x61a931
// 0061a8ed  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0061a8f1  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 0061a8f9  33f6                 xor esi, esi
// 0061a8fb  3bd7                 cmp edx, edi
// 0061a8fd  7c0b                 jl 0x61a90a
// 0061a8ff  8bf2                 mov esi, edx
// 0061a901  2bf7                 sub esi, edi
// 0061a903  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0061a907  8b34b7               mov esi, dword ptr [edi + esi*4]
// 0061a90a  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 0061a90e  03ce                 add ecx, esi
// 0061a910  0fafcf               imul ecx, edi
// 0061a913  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 0061a919  85ed                 test ebp, ebp
// 0061a91b  7410                 je 0x61a92d
// 0061a91d  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 0061a922  03d6                 add edx, esi
// 0061a924  0fafd7               imul edx, edi
// 0061a927  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 0061a92d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061a931  8344241404           add dword ptr [esp + 0x14], 4
// 0061a936  836c242001           sub dword ptr [esp + 0x20], 1
// 0061a93b  7586                 jne 0x61a8c3
// 0061a93d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0061a941  85ed                 test ebp, ebp
// 0061a943  0f84d2000000         je 0x61aa1b
// 0061a949  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061a94d  8d51ff               lea edx, [ecx - 1]
// 0061a950  8954242c             mov dword ptr [esp + 0x2c], edx
// 0061a954  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 0061a95b  eb03                 jmp 0x61a960
// 0061a95d  8d4900               lea ecx, [ecx]
// 0061a960  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061a964  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0061a96d  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 0061a974  750a                 jne 0x61a980
// 0061a976  83ea02               sub edx, 2
// 0061a979  49                   dec ecx
// 0061a97a  66833a00             cmp word ptr [edx], 0
// 0061a97e  74f6                 je 0x61a976
// 0061a980  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 0061a989  baffff0000           mov edx, 0xffff
// 0061a98e  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 0061a996  8bca                 mov ecx, edx
// 0061a998  66010e               add word ptr [esi], cx
// 0061a99b  83ed02               sub ebp, 2
// 0061a99e  85ed                 test ebp, ebp
// 0061a9a0  7fbe                 jg 0x61a960
// 0061a9a2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061a9a6  85d2                 test edx, edx
// 0061a9a8  7471                 je 0x61aa1b
// 0061a9aa  89742420             mov dword ptr [esp + 0x20], esi
// 0061a9ae  8bff                 mov edi, edi
// 0061a9b0  0fb736               movzx esi, word ptr [esi]
// 0061a9b3  8974241c             mov dword ptr [esp + 0x1c], esi
// 0061a9b7  85f6                 test esi, esi
// 0061a9b9  7450                 je 0x61aa0b
// 0061a9bb  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 0061a9c2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0061a9c5  ff4c2410             dec dword ptr [esp + 0x10]
// 0061a9c9  83ed04               sub ebp, 4
// 0061a9cc  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0061a9d0  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0061a9d4  7f2d                 jg 0x61aa03
// 0061a9d6  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 0061a9db  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 0061a9df  3bfa                 cmp edi, edx
// 0061a9e1  7418                 je 0x61a9fb
// 0061a9e3  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 0061a9e7  8bea                 mov ebp, edx
// 0061a9e9  2bef                 sub ebp, edi
// 0061a9eb  0fafe9               imul ebp, ecx
// 0061a9ee  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 0061a9f4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0061a9f8  668916               mov word ptr [esi], dx
// 0061a9fb  ff4c241c             dec dword ptr [esp + 0x1c]
// 0061a9ff  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061aa03  85f6                 test esi, esi
// 0061aa05  75bb                 jne 0x61a9c2
// 0061aa07  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061aa0b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061aa0f  4a                   dec edx
// 0061aa10  83ee02               sub esi, 2
// 0061aa13  89742420             mov dword ptr [esp + 0x20], esi
// 0061aa17  85d2                 test edx, edx
// 0061aa19  7595                 jne 0x61a9b0
// 0061aa1b  5f                   pop edi
// 0061aa1c  5e                   pop esi
// 0061aa1d  5d                   pop ebp
// 0061aa1e  5b                   pop ebx
// 0061aa1f  83c420               add esp, 0x20
// 0061aa22  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
