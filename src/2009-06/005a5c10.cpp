// from server: 100% by auto
// roc 2009-06 005a5c10  unit: seg_005a0000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5c10
//
// 005a5c10  55                   push ebp
// 005a5c11  8bec                 mov ebp, esp
// 005a5c13  83e4f8               and esp, 0xfffffff8
// 005a5c16  81ec300a0000         sub esp, 0xa30
// 005a5c1c  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 005a5c23  53                   push ebx
// 005a5c24  57                   push edi
// 005a5c25  7f1c                 jg 0x5a5c43
// 005a5c27  8b06                 mov eax, dword ptr [esi]
// 005a5c29  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 005a5c30  8b0e                 mov ecx, dword ptr [esi]
// 005a5c32  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 005a5c39  8b16                 mov edx, dword ptr [esi]
// 005a5c3b  8b02                 mov eax, dword ptr [edx]
// 005a5c3d  56                   push esi
// 005a5c3e  ffd0                 call eax
// 005a5c40  83c404               add esp, 4
// 005a5c43  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 005a5c49  837b1400             cmp dword ptr [ebx + 0x14], 0
// 005a5c4d  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a5c51  7528                 jne 0x5a5c7b
// 005a5c53  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 005a5c57  7522                 jne 0x5a5c7b
// 005a5c59  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a5c5d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 005a5c64  7e37                 jle 0x5a5c9d
// 005a5c66  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005a5c69  51                   push ecx
// 005a5c6a  8d542430             lea edx, [esp + 0x30]
// 005a5c6e  6a00                 push 0
// 005a5c70  52                   push edx
// 005a5c71  e8fe3f1700           call 0x719c74
// 005a5c76  83c40c               add esp, 0xc
// 005a5c79  eb22                 jmp 0x5a5c9d
// 005a5c7b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a5c7f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 005a5c86  7e15                 jle 0x5a5c9d
// 005a5c88  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005a5c8b  81e1ffffff00         and ecx, 0xffffff
// 005a5c91  c1e106               shl ecx, 6
// 005a5c94  83c8ff               or eax, 0xffffffff
// 005a5c97  8d7c2438             lea edi, [esp + 0x38]
// 005a5c9b  f3ab                 rep stosd dword ptr es:[edi], eax
// 005a5c9d  b801000000           mov eax, 1
// 005a5ca2  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 005a5ca8  8944240c             mov dword ptr [esp + 0xc], eax
// 005a5cac  0f8cb4020000         jl 0x5a5f66
// 005a5cb2  8b03                 mov eax, dword ptr [ebx]
// 005a5cb4  89442410             mov dword ptr [esp + 0x10], eax
// 005a5cb8  85c0                 test eax, eax
// 005a5cba  7e05                 jle 0x5a5cc1
// 005a5cbc  83f804               cmp eax, 4
// 005a5cbf  7e21                 jle 0x5a5ce2
// 005a5cc1  8b0e                 mov ecx, dword ptr [esi]
// 005a5cc3  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005a5cca  8b16                 mov edx, dword ptr [esi]
// 005a5ccc  894218               mov dword ptr [edx + 0x18], eax
// 005a5ccf  8b06                 mov eax, dword ptr [esi]
// 005a5cd1  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 005a5cd8  8b0e                 mov ecx, dword ptr [esi]
// 005a5cda  8b11                 mov edx, dword ptr [ecx]
// 005a5cdc  56                   push esi
// 005a5cdd  ffd2                 call edx
// 005a5cdf  83c404               add esp, 4
// 005a5ce2  33ff                 xor edi, edi
// 005a5ce4  397c2410             cmp dword ptr [esp + 0x10], edi
// 005a5ce8  7e63                 jle 0x5a5d4d
// 005a5cea  8d9b00000000         lea ebx, [ebx]
// 005a5cf0  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 005a5cf4  85db                 test ebx, ebx
// 005a5cf6  7c05                 jl 0x5a5cfd
// 005a5cf8  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 005a5cfb  7c1c                 jl 0x5a5d19
// 005a5cfd  8b06                 mov eax, dword ptr [esi]
// 005a5cff  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a5d03  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 005a5d0a  8b0e                 mov ecx, dword ptr [esi]
// 005a5d0c  895118               mov dword ptr [ecx + 0x18], edx
// 005a5d0f  8b06                 mov eax, dword ptr [esi]
// 005a5d11  8b08                 mov ecx, dword ptr [eax]
// 005a5d13  56                   push esi
// 005a5d14  ffd1                 call ecx
// 005a5d16  83c404               add esp, 4
// 005a5d19  85ff                 test edi, edi
// 005a5d1b  7e25                 jle 0x5a5d42
// 005a5d1d  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a5d21  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 005a5d24  7f1c                 jg 0x5a5d42
// 005a5d26  8b06                 mov eax, dword ptr [esi]
// 005a5d28  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a5d2c  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 005a5d33  8b0e                 mov ecx, dword ptr [esi]
// 005a5d35  895118               mov dword ptr [ecx + 0x18], edx
// 005a5d38  8b06                 mov eax, dword ptr [esi]
// 005a5d3a  8b08                 mov ecx, dword ptr [eax]
// 005a5d3c  56                   push esi
// 005a5d3d  ffd1                 call ecx
// 005a5d3f  83c404               add esp, 4
// 005a5d42  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a5d46  47                   inc edi
// 005a5d47  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005a5d4b  7ca3                 jl 0x5a5cf0
// 005a5d4d  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005a5d54  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 005a5d57  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005a5d5a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005a5d5d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 005a5d60  897c2420             mov dword ptr [esp + 0x20], edi
// 005a5d64  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a5d68  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a5d6c  89542428             mov dword ptr [esp + 0x28], edx
// 005a5d70  0f8454010000         je 0x5a5eca
// 005a5d76  83ff3f               cmp edi, 0x3f
// 005a5d79  7717                 ja 0x5a5d92
// 005a5d7b  3bc7                 cmp eax, edi
// 005a5d7d  7c13                 jl 0x5a5d92
// 005a5d7f  83f840               cmp eax, 0x40
// 005a5d82  7d0e                 jge 0x5a5d92
// 005a5d84  83f90a               cmp ecx, 0xa
// 005a5d87  7709                 ja 0x5a5d92
// 005a5d89  85d2                 test edx, edx
// 005a5d8b  7c05                 jl 0x5a5d92
// 005a5d8d  83fa0a               cmp edx, 0xa
// 005a5d90  7e20                 jle 0x5a5db2
// 005a5d92  8b16                 mov edx, dword ptr [esi]
// 005a5d94  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a5d98  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 005a5d9f  8b06                 mov eax, dword ptr [esi]
// 005a5da1  894818               mov dword ptr [eax + 0x18], ecx
// 005a5da4  8b16                 mov edx, dword ptr [esi]
// 005a5da6  8b02                 mov eax, dword ptr [edx]
// 005a5da8  56                   push esi
// 005a5da9  ffd0                 call eax
// 005a5dab  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a5daf  83c404               add esp, 4
// 005a5db2  85ff                 test edi, edi
// 005a5db4  751f                 jne 0x5a5dd5
// 005a5db6  85c0                 test eax, eax
// 005a5db8  743e                 je 0x5a5df8
// 005a5dba  8b0e                 mov ecx, dword ptr [esi]
// 005a5dbc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5dc0  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005a5dc7  8b16                 mov edx, dword ptr [esi]
// 005a5dc9  894218               mov dword ptr [edx + 0x18], eax
// 005a5dcc  8b0e                 mov ecx, dword ptr [esi]
// 005a5dce  8b11                 mov edx, dword ptr [ecx]
// 005a5dd0  56                   push esi
// 005a5dd1  ffd2                 call edx
// 005a5dd3  eb20                 jmp 0x5a5df5
// 005a5dd5  837c241001           cmp dword ptr [esp + 0x10], 1
// 005a5dda  741c                 je 0x5a5df8
// 005a5ddc  8b06                 mov eax, dword ptr [esi]
// 005a5dde  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a5de2  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 005a5de9  8b0e                 mov ecx, dword ptr [esi]
// 005a5deb  895118               mov dword ptr [ecx + 0x18], edx
// 005a5dee  8b06                 mov eax, dword ptr [esi]
// 005a5df0  8b08                 mov ecx, dword ptr [eax]
// 005a5df2  56                   push esi
// 005a5df3  ffd1                 call ecx
// 005a5df5  83c404               add esp, 4
// 005a5df8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a5dfc  85c0                 test eax, eax
// 005a5dfe  0f8e46010000         jle 0x5a5f4a
// 005a5e04  83c304               add ebx, 4
// 005a5e07  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a5e0b  89442418             mov dword ptr [esp + 0x18], eax
// 005a5e0f  eb04                 jmp 0x5a5e15
// 005a5e11  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005a5e15  8b1b                 mov ebx, dword ptr [ebx]
// 005a5e17  c1e308               shl ebx, 8
// 005a5e1a  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 005a5e1e  85ff                 test edi, edi
// 005a5e20  7421                 je 0x5a5e43
// 005a5e22  833b00               cmp dword ptr [ebx], 0
// 005a5e25  7d1c                 jge 0x5a5e43
// 005a5e27  8b16                 mov edx, dword ptr [esi]
// 005a5e29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a5e2d  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 005a5e34  8b06                 mov eax, dword ptr [esi]
// 005a5e36  894818               mov dword ptr [eax + 0x18], ecx
// 005a5e39  8b16                 mov edx, dword ptr [esi]
// 005a5e3b  8b02                 mov eax, dword ptr [edx]
// 005a5e3d  56                   push esi
// 005a5e3e  ffd0                 call eax
// 005a5e40  83c404               add esp, 4
// 005a5e43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a5e47  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 005a5e4b  7f65                 jg 0x5a5eb2
// 005a5e4d  8d4900               lea ecx, [ecx]
// 005a5e50  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 005a5e53  85c0                 test eax, eax
// 005a5e55  7d22                 jge 0x5a5e79
// 005a5e57  837c242400           cmp dword ptr [esp + 0x24], 0
// 005a5e5c  7446                 je 0x5a5ea4
// 005a5e5e  8b16                 mov edx, dword ptr [esi]
// 005a5e60  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a5e64  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 005a5e6b  8b06                 mov eax, dword ptr [esi]
// 005a5e6d  894818               mov dword ptr [eax + 0x18], ecx
// 005a5e70  8b16                 mov edx, dword ptr [esi]
// 005a5e72  8b02                 mov eax, dword ptr [edx]
// 005a5e74  56                   push esi
// 005a5e75  ffd0                 call eax
// 005a5e77  eb28                 jmp 0x5a5ea1
// 005a5e79  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a5e7d  3bc8                 cmp ecx, eax
// 005a5e7f  7507                 jne 0x5a5e88
// 005a5e81  49                   dec ecx
// 005a5e82  394c2428             cmp dword ptr [esp + 0x28], ecx
// 005a5e86  741c                 je 0x5a5ea4
// 005a5e88  8b0e                 mov ecx, dword ptr [esi]
// 005a5e8a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5e8e  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005a5e95  8b16                 mov edx, dword ptr [esi]
// 005a5e97  894218               mov dword ptr [edx + 0x18], eax
// 005a5e9a  8b0e                 mov ecx, dword ptr [esi]
// 005a5e9c  8b11                 mov edx, dword ptr [ecx]
// 005a5e9e  56                   push esi
// 005a5e9f  ffd2                 call edx
// 005a5ea1  83c404               add esp, 4
// 005a5ea4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a5ea8  8904bb               mov dword ptr [ebx + edi*4], eax
// 005a5eab  47                   inc edi
// 005a5eac  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005a5eb0  7e9e                 jle 0x5a5e50
// 005a5eb2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a5eb6  83c304               add ebx, 4
// 005a5eb9  836c241801           sub dword ptr [esp + 0x18], 1
// 005a5ebe  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a5ec2  0f8549ffffff         jne 0x5a5e11
// 005a5ec8  eb7c                 jmp 0x5a5f46
// 005a5eca  85ff                 test edi, edi
// 005a5ecc  750d                 jne 0x5a5edb
// 005a5ece  83f83f               cmp eax, 0x3f
// 005a5ed1  7508                 jne 0x5a5edb
// 005a5ed3  85c9                 test ecx, ecx
// 005a5ed5  7504                 jne 0x5a5edb
// 005a5ed7  85d2                 test edx, edx
// 005a5ed9  741c                 je 0x5a5ef7
// 005a5edb  8b0e                 mov ecx, dword ptr [esi]
// 005a5edd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5ee1  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005a5ee8  8b16                 mov edx, dword ptr [esi]
// 005a5eea  894218               mov dword ptr [edx + 0x18], eax
// 005a5eed  8b0e                 mov ecx, dword ptr [esi]
// 005a5eef  8b11                 mov edx, dword ptr [ecx]
// 005a5ef1  56                   push esi
// 005a5ef2  ffd2                 call edx
// 005a5ef4  83c404               add esp, 4
// 005a5ef7  837c241000           cmp dword ptr [esp + 0x10], 0
// 005a5efc  7e4c                 jle 0x5a5f4a
// 005a5efe  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a5f02  83c304               add ebx, 4
// 005a5f05  89442418             mov dword ptr [esp + 0x18], eax
// 005a5f09  8da42400000000       lea esp, [esp]
// 005a5f10  8b03                 mov eax, dword ptr [ebx]
// 005a5f12  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 005a5f17  8d7c042c             lea edi, [esp + eax + 0x2c]
// 005a5f1b  741c                 je 0x5a5f39
// 005a5f1d  8b0e                 mov ecx, dword ptr [esi]
// 005a5f1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5f23  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 005a5f2a  8b16                 mov edx, dword ptr [esi]
// 005a5f2c  894218               mov dword ptr [edx + 0x18], eax
// 005a5f2f  8b0e                 mov ecx, dword ptr [esi]
// 005a5f31  8b11                 mov edx, dword ptr [ecx]
// 005a5f33  56                   push esi
// 005a5f34  ffd2                 call edx
// 005a5f36  83c404               add esp, 4
// 005a5f39  83c304               add ebx, 4
// 005a5f3c  836c241801           sub dword ptr [esp + 0x18], 1
// 005a5f41  c60701               mov byte ptr [edi], 1
// 005a5f44  75ca                 jne 0x5a5f10
// 005a5f46  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a5f4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5f4e  40                   inc eax
// 005a5f4f  83c324               add ebx, 0x24
// 005a5f52  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 005a5f58  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a5f5c  8944240c             mov dword ptr [esp + 0xc], eax
// 005a5f60  0f8e4cfdffff         jle 0x5a5cb2
// 005a5f66  33ff                 xor edi, edi
// 005a5f68  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005a5f6f  7433                 je 0x5a5fa4
// 005a5f71  397e3c               cmp dword ptr [esi + 0x3c], edi
// 005a5f74  7e5a                 jle 0x5a5fd0
// 005a5f76  8d5c2438             lea ebx, [esp + 0x38]
// 005a5f7a  833b00               cmp dword ptr [ebx], 0
// 005a5f7d  7d13                 jge 0x5a5f92
// 005a5f7f  8b06                 mov eax, dword ptr [esi]
// 005a5f81  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 005a5f88  8b0e                 mov ecx, dword ptr [esi]
// 005a5f8a  8b11                 mov edx, dword ptr [ecx]
// 005a5f8c  56                   push esi
// 005a5f8d  ffd2                 call edx
// 005a5f8f  83c404               add esp, 4
// 005a5f92  47                   inc edi
// 005a5f93  81c300010000         add ebx, 0x100
// 005a5f99  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 005a5f9c  7cdc                 jl 0x5a5f7a
// 005a5f9e  5f                   pop edi
// 005a5f9f  5b                   pop ebx
// 005a5fa0  8be5                 mov esp, ebp
// 005a5fa2  5d                   pop ebp
// 005a5fa3  c3                   ret 
// 005a5fa4  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a5fa8  7e26                 jle 0x5a5fd0
// 005a5faa  8d9b00000000         lea ebx, [ebx]
// 005a5fb0  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 005a5fb5  7513                 jne 0x5a5fca
// 005a5fb7  8b06                 mov eax, dword ptr [esi]
// 005a5fb9  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 005a5fc0  8b0e                 mov ecx, dword ptr [esi]
// 005a5fc2  8b11                 mov edx, dword ptr [ecx]
// 005a5fc4  56                   push esi
// 005a5fc5  ffd2                 call edx
// 005a5fc7  83c404               add esp, 4
// 005a5fca  47                   inc edi
// 005a5fcb  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 005a5fce  7ce0                 jl 0x5a5fb0
// 005a5fd0  5f                   pop edi
// 005a5fd1  5b                   pop ebx
// 005a5fd2  8be5                 mov esp, ebp
// 005a5fd4  5d                   pop ebp
// 005a5fd5  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
