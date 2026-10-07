// roc 2011-06 0057f9d0  unit: seg_00570000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f9d0
//
// 0057f9d0  55                   push ebp
// 0057f9d1  8bec                 mov ebp, esp
// 0057f9d3  83e4f8               and esp, 0xfffffff8
// 0057f9d6  81ec300a0000         sub esp, 0xa30
// 0057f9dc  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0057f9e3  53                   push ebx
// 0057f9e4  57                   push edi
// 0057f9e5  7f1c                 jg 0x57fa03
// 0057f9e7  8b06                 mov eax, dword ptr [esi]
// 0057f9e9  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0057f9f0  8b0e                 mov ecx, dword ptr [esi]
// 0057f9f2  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 0057f9f9  8b16                 mov edx, dword ptr [esi]
// 0057f9fb  8b02                 mov eax, dword ptr [edx]
// 0057f9fd  56                   push esi
// 0057f9fe  ffd0                 call eax
// 0057fa00  83c404               add esp, 4
// 0057fa03  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0057fa09  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0057fa0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057fa11  7528                 jne 0x57fa3b
// 0057fa13  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 0057fa17  7522                 jne 0x57fa3b
// 0057fa19  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057fa1d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 0057fa24  7e37                 jle 0x57fa5d
// 0057fa26  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057fa29  51                   push ecx
// 0057fa2a  8d542430             lea edx, [esp + 0x30]
// 0057fa2e  6a00                 push 0
// 0057fa30  52                   push edx
// 0057fa31  e8aeb82800           call 0x80b2e4
// 0057fa36  83c40c               add esp, 0xc
// 0057fa39  eb22                 jmp 0x57fa5d
// 0057fa3b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057fa3f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 0057fa46  7e15                 jle 0x57fa5d
// 0057fa48  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057fa4b  81e1ffffff00         and ecx, 0xffffff
// 0057fa51  c1e106               shl ecx, 6
// 0057fa54  83c8ff               or eax, 0xffffffff
// 0057fa57  8d7c2438             lea edi, [esp + 0x38]
// 0057fa5b  f3ab                 rep stosd dword ptr es:[edi], eax
// 0057fa5d  b801000000           mov eax, 1
// 0057fa62  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 0057fa68  8944240c             mov dword ptr [esp + 0xc], eax
// 0057fa6c  0f8cb4020000         jl 0x57fd26
// 0057fa72  8b03                 mov eax, dword ptr [ebx]
// 0057fa74  89442410             mov dword ptr [esp + 0x10], eax
// 0057fa78  85c0                 test eax, eax
// 0057fa7a  7e05                 jle 0x57fa81
// 0057fa7c  83f804               cmp eax, 4
// 0057fa7f  7e21                 jle 0x57faa2
// 0057fa81  8b0e                 mov ecx, dword ptr [esi]
// 0057fa83  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0057fa8a  8b16                 mov edx, dword ptr [esi]
// 0057fa8c  894218               mov dword ptr [edx + 0x18], eax
// 0057fa8f  8b06                 mov eax, dword ptr [esi]
// 0057fa91  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0057fa98  8b0e                 mov ecx, dword ptr [esi]
// 0057fa9a  8b11                 mov edx, dword ptr [ecx]
// 0057fa9c  56                   push esi
// 0057fa9d  ffd2                 call edx
// 0057fa9f  83c404               add esp, 4
// 0057faa2  33ff                 xor edi, edi
// 0057faa4  397c2410             cmp dword ptr [esp + 0x10], edi
// 0057faa8  7e63                 jle 0x57fb0d
// 0057faaa  8d9b00000000         lea ebx, [ebx]
// 0057fab0  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 0057fab4  85db                 test ebx, ebx
// 0057fab6  7c05                 jl 0x57fabd
// 0057fab8  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0057fabb  7c1c                 jl 0x57fad9
// 0057fabd  8b06                 mov eax, dword ptr [esi]
// 0057fabf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057fac3  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0057faca  8b0e                 mov ecx, dword ptr [esi]
// 0057facc  895118               mov dword ptr [ecx + 0x18], edx
// 0057facf  8b06                 mov eax, dword ptr [esi]
// 0057fad1  8b08                 mov ecx, dword ptr [eax]
// 0057fad3  56                   push esi
// 0057fad4  ffd1                 call ecx
// 0057fad6  83c404               add esp, 4
// 0057fad9  85ff                 test edi, edi
// 0057fadb  7e25                 jle 0x57fb02
// 0057fadd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057fae1  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 0057fae4  7f1c                 jg 0x57fb02
// 0057fae6  8b06                 mov eax, dword ptr [esi]
// 0057fae8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057faec  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0057faf3  8b0e                 mov ecx, dword ptr [esi]
// 0057faf5  895118               mov dword ptr [ecx + 0x18], edx
// 0057faf8  8b06                 mov eax, dword ptr [esi]
// 0057fafa  8b08                 mov ecx, dword ptr [eax]
// 0057fafc  56                   push esi
// 0057fafd  ffd1                 call ecx
// 0057faff  83c404               add esp, 4
// 0057fb02  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057fb06  47                   inc edi
// 0057fb07  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0057fb0b  7ca3                 jl 0x57fab0
// 0057fb0d  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057fb14  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 0057fb17  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0057fb1a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0057fb1d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0057fb20  897c2420             mov dword ptr [esp + 0x20], edi
// 0057fb24  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057fb28  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057fb2c  89542428             mov dword ptr [esp + 0x28], edx
// 0057fb30  0f8454010000         je 0x57fc8a
// 0057fb36  83ff3f               cmp edi, 0x3f
// 0057fb39  7717                 ja 0x57fb52
// 0057fb3b  3bc7                 cmp eax, edi
// 0057fb3d  7c13                 jl 0x57fb52
// 0057fb3f  83f840               cmp eax, 0x40
// 0057fb42  7d0e                 jge 0x57fb52
// 0057fb44  83f90a               cmp ecx, 0xa
// 0057fb47  7709                 ja 0x57fb52
// 0057fb49  85d2                 test edx, edx
// 0057fb4b  7c05                 jl 0x57fb52
// 0057fb4d  83fa0a               cmp edx, 0xa
// 0057fb50  7e20                 jle 0x57fb72
// 0057fb52  8b16                 mov edx, dword ptr [esi]
// 0057fb54  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fb58  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0057fb5f  8b06                 mov eax, dword ptr [esi]
// 0057fb61  894818               mov dword ptr [eax + 0x18], ecx
// 0057fb64  8b16                 mov edx, dword ptr [esi]
// 0057fb66  8b02                 mov eax, dword ptr [edx]
// 0057fb68  56                   push esi
// 0057fb69  ffd0                 call eax
// 0057fb6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057fb6f  83c404               add esp, 4
// 0057fb72  85ff                 test edi, edi
// 0057fb74  751f                 jne 0x57fb95
// 0057fb76  85c0                 test eax, eax
// 0057fb78  743e                 je 0x57fbb8
// 0057fb7a  8b0e                 mov ecx, dword ptr [esi]
// 0057fb7c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057fb80  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0057fb87  8b16                 mov edx, dword ptr [esi]
// 0057fb89  894218               mov dword ptr [edx + 0x18], eax
// 0057fb8c  8b0e                 mov ecx, dword ptr [esi]
// 0057fb8e  8b11                 mov edx, dword ptr [ecx]
// 0057fb90  56                   push esi
// 0057fb91  ffd2                 call edx
// 0057fb93  eb20                 jmp 0x57fbb5
// 0057fb95  837c241001           cmp dword ptr [esp + 0x10], 1
// 0057fb9a  741c                 je 0x57fbb8
// 0057fb9c  8b06                 mov eax, dword ptr [esi]
// 0057fb9e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057fba2  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 0057fba9  8b0e                 mov ecx, dword ptr [esi]
// 0057fbab  895118               mov dword ptr [ecx + 0x18], edx
// 0057fbae  8b06                 mov eax, dword ptr [esi]
// 0057fbb0  8b08                 mov ecx, dword ptr [eax]
// 0057fbb2  56                   push esi
// 0057fbb3  ffd1                 call ecx
// 0057fbb5  83c404               add esp, 4
// 0057fbb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057fbbc  85c0                 test eax, eax
// 0057fbbe  0f8e46010000         jle 0x57fd0a
// 0057fbc4  83c304               add ebx, 4
// 0057fbc7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057fbcb  89442418             mov dword ptr [esp + 0x18], eax
// 0057fbcf  eb04                 jmp 0x57fbd5
// 0057fbd1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057fbd5  8b1b                 mov ebx, dword ptr [ebx]
// 0057fbd7  c1e308               shl ebx, 8
// 0057fbda  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 0057fbde  85ff                 test edi, edi
// 0057fbe0  7421                 je 0x57fc03
// 0057fbe2  833b00               cmp dword ptr [ebx], 0
// 0057fbe5  7d1c                 jge 0x57fc03
// 0057fbe7  8b16                 mov edx, dword ptr [esi]
// 0057fbe9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fbed  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0057fbf4  8b06                 mov eax, dword ptr [esi]
// 0057fbf6  894818               mov dword ptr [eax + 0x18], ecx
// 0057fbf9  8b16                 mov edx, dword ptr [esi]
// 0057fbfb  8b02                 mov eax, dword ptr [edx]
// 0057fbfd  56                   push esi
// 0057fbfe  ffd0                 call eax
// 0057fc00  83c404               add esp, 4
// 0057fc03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057fc07  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0057fc0b  7f65                 jg 0x57fc72
// 0057fc0d  8d4900               lea ecx, [ecx]
// 0057fc10  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 0057fc13  85c0                 test eax, eax
// 0057fc15  7d22                 jge 0x57fc39
// 0057fc17  837c242400           cmp dword ptr [esp + 0x24], 0
// 0057fc1c  7446                 je 0x57fc64
// 0057fc1e  8b16                 mov edx, dword ptr [esi]
// 0057fc20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057fc24  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0057fc2b  8b06                 mov eax, dword ptr [esi]
// 0057fc2d  894818               mov dword ptr [eax + 0x18], ecx
// 0057fc30  8b16                 mov edx, dword ptr [esi]
// 0057fc32  8b02                 mov eax, dword ptr [edx]
// 0057fc34  56                   push esi
// 0057fc35  ffd0                 call eax
// 0057fc37  eb28                 jmp 0x57fc61
// 0057fc39  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057fc3d  3bc8                 cmp ecx, eax
// 0057fc3f  7507                 jne 0x57fc48
// 0057fc41  49                   dec ecx
// 0057fc42  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0057fc46  741c                 je 0x57fc64
// 0057fc48  8b0e                 mov ecx, dword ptr [esi]
// 0057fc4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057fc4e  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0057fc55  8b16                 mov edx, dword ptr [esi]
// 0057fc57  894218               mov dword ptr [edx + 0x18], eax
// 0057fc5a  8b0e                 mov ecx, dword ptr [esi]
// 0057fc5c  8b11                 mov edx, dword ptr [ecx]
// 0057fc5e  56                   push esi
// 0057fc5f  ffd2                 call edx
// 0057fc61  83c404               add esp, 4
// 0057fc64  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057fc68  8904bb               mov dword ptr [ebx + edi*4], eax
// 0057fc6b  47                   inc edi
// 0057fc6c  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0057fc70  7e9e                 jle 0x57fc10
// 0057fc72  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057fc76  83c304               add ebx, 4
// 0057fc79  836c241801           sub dword ptr [esp + 0x18], 1
// 0057fc7e  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057fc82  0f8549ffffff         jne 0x57fbd1
// 0057fc88  eb7c                 jmp 0x57fd06
// 0057fc8a  85ff                 test edi, edi
// 0057fc8c  750d                 jne 0x57fc9b
// 0057fc8e  83f83f               cmp eax, 0x3f
// 0057fc91  7508                 jne 0x57fc9b
// 0057fc93  85c9                 test ecx, ecx
// 0057fc95  7504                 jne 0x57fc9b
// 0057fc97  85d2                 test edx, edx
// 0057fc99  741c                 je 0x57fcb7
// 0057fc9b  8b0e                 mov ecx, dword ptr [esi]
// 0057fc9d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057fca1  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0057fca8  8b16                 mov edx, dword ptr [esi]
// 0057fcaa  894218               mov dword ptr [edx + 0x18], eax
// 0057fcad  8b0e                 mov ecx, dword ptr [esi]
// 0057fcaf  8b11                 mov edx, dword ptr [ecx]
// 0057fcb1  56                   push esi
// 0057fcb2  ffd2                 call edx
// 0057fcb4  83c404               add esp, 4
// 0057fcb7  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057fcbc  7e4c                 jle 0x57fd0a
// 0057fcbe  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057fcc2  83c304               add ebx, 4
// 0057fcc5  89442418             mov dword ptr [esp + 0x18], eax
// 0057fcc9  8da42400000000       lea esp, [esp]
// 0057fcd0  8b03                 mov eax, dword ptr [ebx]
// 0057fcd2  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 0057fcd7  8d7c042c             lea edi, [esp + eax + 0x2c]
// 0057fcdb  741c                 je 0x57fcf9
// 0057fcdd  8b0e                 mov ecx, dword ptr [esi]
// 0057fcdf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057fce3  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 0057fcea  8b16                 mov edx, dword ptr [esi]
// 0057fcec  894218               mov dword ptr [edx + 0x18], eax
// 0057fcef  8b0e                 mov ecx, dword ptr [esi]
// 0057fcf1  8b11                 mov edx, dword ptr [ecx]
// 0057fcf3  56                   push esi
// 0057fcf4  ffd2                 call edx
// 0057fcf6  83c404               add esp, 4
// 0057fcf9  83c304               add ebx, 4
// 0057fcfc  836c241801           sub dword ptr [esp + 0x18], 1
// 0057fd01  c60701               mov byte ptr [edi], 1
// 0057fd04  75ca                 jne 0x57fcd0
// 0057fd06  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057fd0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057fd0e  40                   inc eax
// 0057fd0f  83c324               add ebx, 0x24
// 0057fd12  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 0057fd18  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057fd1c  8944240c             mov dword ptr [esp + 0xc], eax
// 0057fd20  0f8e4cfdffff         jle 0x57fa72
// 0057fd26  33ff                 xor edi, edi
// 0057fd28  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057fd2f  7433                 je 0x57fd64
// 0057fd31  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0057fd34  7e5a                 jle 0x57fd90
// 0057fd36  8d5c2438             lea ebx, [esp + 0x38]
// 0057fd3a  833b00               cmp dword ptr [ebx], 0
// 0057fd3d  7d13                 jge 0x57fd52
// 0057fd3f  8b06                 mov eax, dword ptr [esi]
// 0057fd41  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0057fd48  8b0e                 mov ecx, dword ptr [esi]
// 0057fd4a  8b11                 mov edx, dword ptr [ecx]
// 0057fd4c  56                   push esi
// 0057fd4d  ffd2                 call edx
// 0057fd4f  83c404               add esp, 4
// 0057fd52  47                   inc edi
// 0057fd53  81c300010000         add ebx, 0x100
// 0057fd59  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0057fd5c  7cdc                 jl 0x57fd3a
// 0057fd5e  5f                   pop edi
// 0057fd5f  5b                   pop ebx
// 0057fd60  8be5                 mov esp, ebp
// 0057fd62  5d                   pop ebp
// 0057fd63  c3                   ret 
// 0057fd64  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057fd68  7e26                 jle 0x57fd90
// 0057fd6a  8d9b00000000         lea ebx, [ebx]
// 0057fd70  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 0057fd75  7513                 jne 0x57fd8a
// 0057fd77  8b06                 mov eax, dword ptr [esi]
// 0057fd79  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0057fd80  8b0e                 mov ecx, dword ptr [esi]
// 0057fd82  8b11                 mov edx, dword ptr [ecx]
// 0057fd84  56                   push esi
// 0057fd85  ffd2                 call edx
// 0057fd87  83c404               add esp, 4
// 0057fd8a  47                   inc edi
// 0057fd8b  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0057fd8e  7ce0                 jl 0x57fd70
// 0057fd90  5f                   pop edi
// 0057fd91  5b                   pop ebx
// 0057fd92  8be5                 mov esp, ebp
// 0057fd94  5d                   pop ebp
// 0057fd95  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
