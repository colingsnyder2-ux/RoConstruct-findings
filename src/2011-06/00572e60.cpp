// from server: 100% by auto
// roc 2011-06 00572e60  unit: seg_00570000  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572e60
//
// 00572e60  83ec20               sub esp, 0x20
// 00572e63  53                   push ebx
// 00572e64  55                   push ebp
// 00572e65  56                   push esi
// 00572e66  57                   push edi
// 00572e67  8b5104               mov edx, dword ptr [ecx + 4]
// 00572e6a  8b19                 mov ebx, dword ptr [ecx]
// 00572e6c  8b4908               mov ecx, dword ptr [ecx + 8]
// 00572e6f  89542424             mov dword ptr [esp + 0x24], edx
// 00572e73  8b5104               mov edx, dword ptr [ecx + 4]
// 00572e76  8b29                 mov ebp, dword ptr [ecx]
// 00572e78  8954242c             mov dword ptr [esp + 0x2c], edx
// 00572e7c  8b5108               mov edx, dword ptr [ecx + 8]
// 00572e7f  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00572e82  33c9                 xor ecx, ecx
// 00572e84  89542428             mov dword ptr [esp + 0x28], edx
// 00572e88  0fb7d1               movzx edx, cx
// 00572e8b  8bca                 mov ecx, edx
// 00572e8d  c1e210               shl edx, 0x10
// 00572e90  0bca                 or ecx, edx
// 00572e92  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 00572e98  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 00572e9e  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 00572ea4  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 00572eaa  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 00572eb0  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 00572eb6  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 00572ebc  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 00572ec2  8b8854140000         mov ecx, dword ptr [eax + 0x1454]
// 00572ec8  8b94885c0b0000       mov edx, dword ptr [eax + ecx*4 + 0xb5c]
// 00572ecf  33c9                 xor ecx, ecx
// 00572ed1  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 00572ed6  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 00572edc  47                   inc edi
// 00572edd  81ff3d020000         cmp edi, 0x23d
// 00572ee3  8974241c             mov dword ptr [esp + 0x1c], esi
// 00572ee7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00572eef  0f8d76010000         jge 0x57306b
// 00572ef5  b93d020000           mov ecx, 0x23d
// 00572efa  2bcf                 sub ecx, edi
// 00572efc  8d94b85c0b0000       lea edx, [eax + edi*4 + 0xb5c]
// 00572f03  03f9                 add edi, ecx
// 00572f05  89542414             mov dword ptr [esp + 0x14], edx
// 00572f09  894c2420             mov dword ptr [esp + 0x20], ecx
// 00572f0d  897c2410             mov dword ptr [esp + 0x10], edi
// 00572f11  eb04                 jmp 0x572f17
// 00572f13  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00572f17  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00572f1b  8b11                 mov edx, dword ptr [ecx]
// 00572f1d  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 00572f22  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 00572f27  41                   inc ecx
// 00572f28  3bce                 cmp ecx, esi
// 00572f2a  7e06                 jle 0x572f32
// 00572f2c  ff442418             inc dword ptr [esp + 0x18]
// 00572f30  8bce                 mov ecx, esi
// 00572f32  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00572f36  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 00572f3b  7f44                 jg 0x572f81
// 00572f3d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00572f41  66ff84483c0b0000     inc word ptr [eax + ecx*2 + 0xb3c]
// 00572f49  33f6                 xor esi, esi
// 00572f4b  3bd7                 cmp edx, edi
// 00572f4d  7c0b                 jl 0x572f5a
// 00572f4f  8bf2                 mov esi, edx
// 00572f51  2bf7                 sub esi, edi
// 00572f53  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00572f57  8b34b7               mov esi, dword ptr [edi + esi*4]
// 00572f5a  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 00572f5e  03ce                 add ecx, esi
// 00572f60  0fafcf               imul ecx, edi
// 00572f63  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 00572f69  85ed                 test ebp, ebp
// 00572f6b  7410                 je 0x572f7d
// 00572f6d  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 00572f72  03d6                 add edx, esi
// 00572f74  0fafd7               imul edx, edi
// 00572f77  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 00572f7d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00572f81  8344241404           add dword ptr [esp + 0x14], 4
// 00572f86  836c242001           sub dword ptr [esp + 0x20], 1
// 00572f8b  7586                 jne 0x572f13
// 00572f8d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00572f91  85ed                 test ebp, ebp
// 00572f93  0f84d2000000         je 0x57306b
// 00572f99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00572f9d  8d51ff               lea edx, [ecx - 1]
// 00572fa0  8954242c             mov dword ptr [esp + 0x2c], edx
// 00572fa4  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 00572fab  eb03                 jmp 0x572fb0
// 00572fad  8d4900               lea ecx, [ecx]
// 00572fb0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572fb4  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 00572fbd  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 00572fc4  750a                 jne 0x572fd0
// 00572fc6  83ea02               sub edx, 2
// 00572fc9  49                   dec ecx
// 00572fca  66833a00             cmp word ptr [edx], 0
// 00572fce  74f6                 je 0x572fc6
// 00572fd0  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 00572fd9  baffff0000           mov edx, 0xffff
// 00572fde  660194483c0b0000     add word ptr [eax + ecx*2 + 0xb3c], dx
// 00572fe6  8bca                 mov ecx, edx
// 00572fe8  66010e               add word ptr [esi], cx
// 00572feb  83ed02               sub ebp, 2
// 00572fee  85ed                 test ebp, ebp
// 00572ff0  7fbe                 jg 0x572fb0
// 00572ff2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00572ff6  85d2                 test edx, edx
// 00572ff8  7471                 je 0x57306b
// 00572ffa  89742420             mov dword ptr [esp + 0x20], esi
// 00572ffe  8bff                 mov edi, edi
// 00573000  0fb736               movzx esi, word ptr [esi]
// 00573003  8974241c             mov dword ptr [esp + 0x1c], esi
// 00573007  85f6                 test esi, esi
// 00573009  7450                 je 0x57305b
// 0057300b  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 00573012  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00573015  ff4c2410             dec dword ptr [esp + 0x10]
// 00573019  83ed04               sub ebp, 4
// 0057301c  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 00573020  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00573024  7f2d                 jg 0x573053
// 00573026  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 0057302b  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 0057302f  3bfa                 cmp edi, edx
// 00573031  7418                 je 0x57304b
// 00573033  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 00573037  8bea                 mov ebp, edx
// 00573039  2bef                 sub ebp, edi
// 0057303b  0fafe9               imul ebp, ecx
// 0057303e  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 00573044  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00573048  668916               mov word ptr [esi], dx
// 0057304b  ff4c241c             dec dword ptr [esp + 0x1c]
// 0057304f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00573053  85f6                 test esi, esi
// 00573055  75bb                 jne 0x573012
// 00573057  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057305b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057305f  4a                   dec edx
// 00573060  83ee02               sub esi, 2
// 00573063  89742420             mov dword ptr [esp + 0x20], esi
// 00573067  85d2                 test edx, edx
// 00573069  7595                 jne 0x573000
// 0057306b  5f                   pop edi
// 0057306c  5e                   pop esi
// 0057306d  5d                   pop ebp
// 0057306e  5b                   pop ebx
// 0057306f  83c420               add esp, 0x20
// 00573072  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
