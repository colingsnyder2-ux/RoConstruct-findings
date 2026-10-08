// roc 2009-12 00627bc0  unit: seg_00620000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00627bc0
//
// 00627bc0  55                   push ebp
// 00627bc1  8bec                 mov ebp, esp
// 00627bc3  83e4f8               and esp, 0xfffffff8
// 00627bc6  81ec300a0000         sub esp, 0xa30
// 00627bcc  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00627bd3  53                   push ebx
// 00627bd4  57                   push edi
// 00627bd5  7f1c                 jg 0x627bf3
// 00627bd7  8b06                 mov eax, dword ptr [esi]
// 00627bd9  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 00627be0  8b0e                 mov ecx, dword ptr [esi]
// 00627be2  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 00627be9  8b16                 mov edx, dword ptr [esi]
// 00627beb  8b02                 mov eax, dword ptr [edx]
// 00627bed  56                   push esi
// 00627bee  ffd0                 call eax
// 00627bf0  83c404               add esp, 4
// 00627bf3  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 00627bf9  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00627bfd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00627c01  7528                 jne 0x627c2b
// 00627c03  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 00627c07  7522                 jne 0x627c2b
// 00627c09  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00627c0d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 00627c14  7e37                 jle 0x627c4d
// 00627c16  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00627c19  51                   push ecx
// 00627c1a  8d542430             lea edx, [esp + 0x30]
// 00627c1e  6a00                 push 0
// 00627c20  52                   push edx
// 00627c21  e87ece1c00           call 0x7f4aa4
// 00627c26  83c40c               add esp, 0xc
// 00627c29  eb22                 jmp 0x627c4d
// 00627c2b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00627c2f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 00627c36  7e15                 jle 0x627c4d
// 00627c38  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00627c3b  81e1ffffff00         and ecx, 0xffffff
// 00627c41  c1e106               shl ecx, 6
// 00627c44  83c8ff               or eax, 0xffffffff
// 00627c47  8d7c2438             lea edi, [esp + 0x38]
// 00627c4b  f3ab                 rep stosd dword ptr es:[edi], eax
// 00627c4d  b801000000           mov eax, 1
// 00627c52  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 00627c58  8944240c             mov dword ptr [esp + 0xc], eax
// 00627c5c  0f8cb4020000         jl 0x627f16
// 00627c62  8b03                 mov eax, dword ptr [ebx]
// 00627c64  89442410             mov dword ptr [esp + 0x10], eax
// 00627c68  85c0                 test eax, eax
// 00627c6a  7e05                 jle 0x627c71
// 00627c6c  83f804               cmp eax, 4
// 00627c6f  7e21                 jle 0x627c92
// 00627c71  8b0e                 mov ecx, dword ptr [esi]
// 00627c73  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00627c7a  8b16                 mov edx, dword ptr [esi]
// 00627c7c  894218               mov dword ptr [edx + 0x18], eax
// 00627c7f  8b06                 mov eax, dword ptr [esi]
// 00627c81  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 00627c88  8b0e                 mov ecx, dword ptr [esi]
// 00627c8a  8b11                 mov edx, dword ptr [ecx]
// 00627c8c  56                   push esi
// 00627c8d  ffd2                 call edx
// 00627c8f  83c404               add esp, 4
// 00627c92  33ff                 xor edi, edi
// 00627c94  397c2410             cmp dword ptr [esp + 0x10], edi
// 00627c98  7e63                 jle 0x627cfd
// 00627c9a  8d9b00000000         lea ebx, [ebx]
// 00627ca0  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 00627ca4  85db                 test ebx, ebx
// 00627ca6  7c05                 jl 0x627cad
// 00627ca8  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 00627cab  7c1c                 jl 0x627cc9
// 00627cad  8b06                 mov eax, dword ptr [esi]
// 00627caf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00627cb3  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 00627cba  8b0e                 mov ecx, dword ptr [esi]
// 00627cbc  895118               mov dword ptr [ecx + 0x18], edx
// 00627cbf  8b06                 mov eax, dword ptr [esi]
// 00627cc1  8b08                 mov ecx, dword ptr [eax]
// 00627cc3  56                   push esi
// 00627cc4  ffd1                 call ecx
// 00627cc6  83c404               add esp, 4
// 00627cc9  85ff                 test edi, edi
// 00627ccb  7e25                 jle 0x627cf2
// 00627ccd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00627cd1  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 00627cd4  7f1c                 jg 0x627cf2
// 00627cd6  8b06                 mov eax, dword ptr [esi]
// 00627cd8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00627cdc  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 00627ce3  8b0e                 mov ecx, dword ptr [esi]
// 00627ce5  895118               mov dword ptr [ecx + 0x18], edx
// 00627ce8  8b06                 mov eax, dword ptr [esi]
// 00627cea  8b08                 mov ecx, dword ptr [eax]
// 00627cec  56                   push esi
// 00627ced  ffd1                 call ecx
// 00627cef  83c404               add esp, 4
// 00627cf2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00627cf6  47                   inc edi
// 00627cf7  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00627cfb  7ca3                 jl 0x627ca0
// 00627cfd  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00627d04  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 00627d07  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00627d0a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00627d0d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00627d10  897c2420             mov dword ptr [esp + 0x20], edi
// 00627d14  8944241c             mov dword ptr [esp + 0x1c], eax
// 00627d18  894c2424             mov dword ptr [esp + 0x24], ecx
// 00627d1c  89542428             mov dword ptr [esp + 0x28], edx
// 00627d20  0f8454010000         je 0x627e7a
// 00627d26  83ff3f               cmp edi, 0x3f
// 00627d29  7717                 ja 0x627d42
// 00627d2b  3bc7                 cmp eax, edi
// 00627d2d  7c13                 jl 0x627d42
// 00627d2f  83f840               cmp eax, 0x40
// 00627d32  7d0e                 jge 0x627d42
// 00627d34  83f90a               cmp ecx, 0xa
// 00627d37  7709                 ja 0x627d42
// 00627d39  85d2                 test edx, edx
// 00627d3b  7c05                 jl 0x627d42
// 00627d3d  83fa0a               cmp edx, 0xa
// 00627d40  7e20                 jle 0x627d62
// 00627d42  8b16                 mov edx, dword ptr [esi]
// 00627d44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00627d48  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 00627d4f  8b06                 mov eax, dword ptr [esi]
// 00627d51  894818               mov dword ptr [eax + 0x18], ecx
// 00627d54  8b16                 mov edx, dword ptr [esi]
// 00627d56  8b02                 mov eax, dword ptr [edx]
// 00627d58  56                   push esi
// 00627d59  ffd0                 call eax
// 00627d5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00627d5f  83c404               add esp, 4
// 00627d62  85ff                 test edi, edi
// 00627d64  751f                 jne 0x627d85
// 00627d66  85c0                 test eax, eax
// 00627d68  743e                 je 0x627da8
// 00627d6a  8b0e                 mov ecx, dword ptr [esi]
// 00627d6c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627d70  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 00627d77  8b16                 mov edx, dword ptr [esi]
// 00627d79  894218               mov dword ptr [edx + 0x18], eax
// 00627d7c  8b0e                 mov ecx, dword ptr [esi]
// 00627d7e  8b11                 mov edx, dword ptr [ecx]
// 00627d80  56                   push esi
// 00627d81  ffd2                 call edx
// 00627d83  eb20                 jmp 0x627da5
// 00627d85  837c241001           cmp dword ptr [esp + 0x10], 1
// 00627d8a  741c                 je 0x627da8
// 00627d8c  8b06                 mov eax, dword ptr [esi]
// 00627d8e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00627d92  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 00627d99  8b0e                 mov ecx, dword ptr [esi]
// 00627d9b  895118               mov dword ptr [ecx + 0x18], edx
// 00627d9e  8b06                 mov eax, dword ptr [esi]
// 00627da0  8b08                 mov ecx, dword ptr [eax]
// 00627da2  56                   push esi
// 00627da3  ffd1                 call ecx
// 00627da5  83c404               add esp, 4
// 00627da8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00627dac  85c0                 test eax, eax
// 00627dae  0f8e46010000         jle 0x627efa
// 00627db4  83c304               add ebx, 4
// 00627db7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00627dbb  89442418             mov dword ptr [esp + 0x18], eax
// 00627dbf  eb04                 jmp 0x627dc5
// 00627dc1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00627dc5  8b1b                 mov ebx, dword ptr [ebx]
// 00627dc7  c1e308               shl ebx, 8
// 00627dca  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 00627dce  85ff                 test edi, edi
// 00627dd0  7421                 je 0x627df3
// 00627dd2  833b00               cmp dword ptr [ebx], 0
// 00627dd5  7d1c                 jge 0x627df3
// 00627dd7  8b16                 mov edx, dword ptr [esi]
// 00627dd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00627ddd  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 00627de4  8b06                 mov eax, dword ptr [esi]
// 00627de6  894818               mov dword ptr [eax + 0x18], ecx
// 00627de9  8b16                 mov edx, dword ptr [esi]
// 00627deb  8b02                 mov eax, dword ptr [edx]
// 00627ded  56                   push esi
// 00627dee  ffd0                 call eax
// 00627df0  83c404               add esp, 4
// 00627df3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00627df7  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00627dfb  7f65                 jg 0x627e62
// 00627dfd  8d4900               lea ecx, [ecx]
// 00627e00  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 00627e03  85c0                 test eax, eax
// 00627e05  7d22                 jge 0x627e29
// 00627e07  837c242400           cmp dword ptr [esp + 0x24], 0
// 00627e0c  7446                 je 0x627e54
// 00627e0e  8b16                 mov edx, dword ptr [esi]
// 00627e10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00627e14  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 00627e1b  8b06                 mov eax, dword ptr [esi]
// 00627e1d  894818               mov dword ptr [eax + 0x18], ecx
// 00627e20  8b16                 mov edx, dword ptr [esi]
// 00627e22  8b02                 mov eax, dword ptr [edx]
// 00627e24  56                   push esi
// 00627e25  ffd0                 call eax
// 00627e27  eb28                 jmp 0x627e51
// 00627e29  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00627e2d  3bc8                 cmp ecx, eax
// 00627e2f  7507                 jne 0x627e38
// 00627e31  49                   dec ecx
// 00627e32  394c2428             cmp dword ptr [esp + 0x28], ecx
// 00627e36  741c                 je 0x627e54
// 00627e38  8b0e                 mov ecx, dword ptr [esi]
// 00627e3a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627e3e  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 00627e45  8b16                 mov edx, dword ptr [esi]
// 00627e47  894218               mov dword ptr [edx + 0x18], eax
// 00627e4a  8b0e                 mov ecx, dword ptr [esi]
// 00627e4c  8b11                 mov edx, dword ptr [ecx]
// 00627e4e  56                   push esi
// 00627e4f  ffd2                 call edx
// 00627e51  83c404               add esp, 4
// 00627e54  8b442428             mov eax, dword ptr [esp + 0x28]
// 00627e58  8904bb               mov dword ptr [ebx + edi*4], eax
// 00627e5b  47                   inc edi
// 00627e5c  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00627e60  7e9e                 jle 0x627e00
// 00627e62  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00627e66  83c304               add ebx, 4
// 00627e69  836c241801           sub dword ptr [esp + 0x18], 1
// 00627e6e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00627e72  0f8549ffffff         jne 0x627dc1
// 00627e78  eb7c                 jmp 0x627ef6
// 00627e7a  85ff                 test edi, edi
// 00627e7c  750d                 jne 0x627e8b
// 00627e7e  83f83f               cmp eax, 0x3f
// 00627e81  7508                 jne 0x627e8b
// 00627e83  85c9                 test ecx, ecx
// 00627e85  7504                 jne 0x627e8b
// 00627e87  85d2                 test edx, edx
// 00627e89  741c                 je 0x627ea7
// 00627e8b  8b0e                 mov ecx, dword ptr [esi]
// 00627e8d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627e91  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 00627e98  8b16                 mov edx, dword ptr [esi]
// 00627e9a  894218               mov dword ptr [edx + 0x18], eax
// 00627e9d  8b0e                 mov ecx, dword ptr [esi]
// 00627e9f  8b11                 mov edx, dword ptr [ecx]
// 00627ea1  56                   push esi
// 00627ea2  ffd2                 call edx
// 00627ea4  83c404               add esp, 4
// 00627ea7  837c241000           cmp dword ptr [esp + 0x10], 0
// 00627eac  7e4c                 jle 0x627efa
// 00627eae  8b442410             mov eax, dword ptr [esp + 0x10]
// 00627eb2  83c304               add ebx, 4
// 00627eb5  89442418             mov dword ptr [esp + 0x18], eax
// 00627eb9  8da42400000000       lea esp, [esp]
// 00627ec0  8b03                 mov eax, dword ptr [ebx]
// 00627ec2  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 00627ec7  8d7c042c             lea edi, [esp + eax + 0x2c]
// 00627ecb  741c                 je 0x627ee9
// 00627ecd  8b0e                 mov ecx, dword ptr [esi]
// 00627ecf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627ed3  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 00627eda  8b16                 mov edx, dword ptr [esi]
// 00627edc  894218               mov dword ptr [edx + 0x18], eax
// 00627edf  8b0e                 mov ecx, dword ptr [esi]
// 00627ee1  8b11                 mov edx, dword ptr [ecx]
// 00627ee3  56                   push esi
// 00627ee4  ffd2                 call edx
// 00627ee6  83c404               add esp, 4
// 00627ee9  83c304               add ebx, 4
// 00627eec  836c241801           sub dword ptr [esp + 0x18], 1
// 00627ef1  c60701               mov byte ptr [edi], 1
// 00627ef4  75ca                 jne 0x627ec0
// 00627ef6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00627efa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00627efe  40                   inc eax
// 00627eff  83c324               add ebx, 0x24
// 00627f02  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 00627f08  895c2414             mov dword ptr [esp + 0x14], ebx
// 00627f0c  8944240c             mov dword ptr [esp + 0xc], eax
// 00627f10  0f8e4cfdffff         jle 0x627c62
// 00627f16  33ff                 xor edi, edi
// 00627f18  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00627f1f  7433                 je 0x627f54
// 00627f21  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00627f24  7e5a                 jle 0x627f80
// 00627f26  8d5c2438             lea ebx, [esp + 0x38]
// 00627f2a  833b00               cmp dword ptr [ebx], 0
// 00627f2d  7d13                 jge 0x627f42
// 00627f2f  8b06                 mov eax, dword ptr [esi]
// 00627f31  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 00627f38  8b0e                 mov ecx, dword ptr [esi]
// 00627f3a  8b11                 mov edx, dword ptr [ecx]
// 00627f3c  56                   push esi
// 00627f3d  ffd2                 call edx
// 00627f3f  83c404               add esp, 4
// 00627f42  47                   inc edi
// 00627f43  81c300010000         add ebx, 0x100
// 00627f49  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00627f4c  7cdc                 jl 0x627f2a
// 00627f4e  5f                   pop edi
// 00627f4f  5b                   pop ebx
// 00627f50  8be5                 mov esp, ebp
// 00627f52  5d                   pop ebp
// 00627f53  c3                   ret 
// 00627f54  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00627f58  7e26                 jle 0x627f80
// 00627f5a  8d9b00000000         lea ebx, [ebx]
// 00627f60  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 00627f65  7513                 jne 0x627f7a
// 00627f67  8b06                 mov eax, dword ptr [esi]
// 00627f69  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 00627f70  8b0e                 mov ecx, dword ptr [esi]
// 00627f72  8b11                 mov edx, dword ptr [ecx]
// 00627f74  56                   push esi
// 00627f75  ffd2                 call edx
// 00627f77  83c404               add esp, 4
// 00627f7a  47                   inc edi
// 00627f7b  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00627f7e  7ce0                 jl 0x627f60
// 00627f80  5f                   pop edi
// 00627f81  5b                   pop ebx
// 00627f82  8be5                 mov esp, ebp
// 00627f84  5d                   pop ebp
// 00627f85  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
