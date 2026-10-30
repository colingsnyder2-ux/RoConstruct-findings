// roc 2007-03 0052a6d0  unit: seg_00520000  size: 1019 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052a6d0
//
// 0052a6d0  55                   push ebp
// 0052a6d1  8bec                 mov ebp, esp
// 0052a6d3  83e4f8               and esp, 0xfffffff8
// 0052a6d6  81ec300a0000         sub esp, 0xa30
// 0052a6dc  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0052a6e1  33c4                 xor eax, esp
// 0052a6e3  8984242c0a0000       mov dword ptr [esp + 0xa2c], eax
// 0052a6ea  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0052a6f1  53                   push ebx
// 0052a6f2  57                   push edi
// 0052a6f3  7f1c                 jg 0x52a711
// 0052a6f5  8b06                 mov eax, dword ptr [esi]
// 0052a6f7  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0052a6fe  8b0e                 mov ecx, dword ptr [esi]
// 0052a700  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 0052a707  8b16                 mov edx, dword ptr [esi]
// 0052a709  8b02                 mov eax, dword ptr [edx]
// 0052a70b  56                   push esi
// 0052a70c  ffd0                 call eax
// 0052a70e  83c404               add esp, 4
// 0052a711  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0052a717  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0052a71b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052a71f  752b                 jne 0x52a74c
// 0052a721  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 0052a725  7525                 jne 0x52a74c
// 0052a727  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0052a72b  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 0052a732  7e3a                 jle 0x52a76e
// 0052a734  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0052a737  51                   push ecx
// 0052a738  8d94242c0a0000       lea edx, [esp + 0xa2c]
// 0052a73f  6a00                 push 0
// 0052a741  52                   push edx
// 0052a742  e8d5480f00           call 0x61f01c
// 0052a747  83c40c               add esp, 0xc
// 0052a74a  eb22                 jmp 0x52a76e
// 0052a74c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0052a750  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 0052a757  7e15                 jle 0x52a76e
// 0052a759  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0052a75c  81e1ffffff00         and ecx, 0xffffff
// 0052a762  c1e106               shl ecx, 6
// 0052a765  83c8ff               or eax, 0xffffffff
// 0052a768  8d7c2428             lea edi, [esp + 0x28]
// 0052a76c  f3ab                 rep stosd dword ptr es:[edi], eax
// 0052a76e  b801000000           mov eax, 1
// 0052a773  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 0052a779  89442408             mov dword ptr [esp + 8], eax
// 0052a77d  0f8cbb020000         jl 0x52aa3e
// 0052a783  8b03                 mov eax, dword ptr [ebx]
// 0052a785  85c0                 test eax, eax
// 0052a787  8944240c             mov dword ptr [esp + 0xc], eax
// 0052a78b  7e05                 jle 0x52a792
// 0052a78d  83f804               cmp eax, 4
// 0052a790  7e21                 jle 0x52a7b3
// 0052a792  8b0e                 mov ecx, dword ptr [esi]
// 0052a794  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0052a79b  8b16                 mov edx, dword ptr [esi]
// 0052a79d  894218               mov dword ptr [edx + 0x18], eax
// 0052a7a0  8b06                 mov eax, dword ptr [esi]
// 0052a7a2  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0052a7a9  8b0e                 mov ecx, dword ptr [esi]
// 0052a7ab  8b11                 mov edx, dword ptr [ecx]
// 0052a7ad  56                   push esi
// 0052a7ae  ffd2                 call edx
// 0052a7b0  83c404               add esp, 4
// 0052a7b3  33ff                 xor edi, edi
// 0052a7b5  397c240c             cmp dword ptr [esp + 0xc], edi
// 0052a7b9  7e64                 jle 0x52a81f
// 0052a7bb  eb03                 jmp 0x52a7c0
// 0052a7bd  8d4900               lea ecx, [ecx]
// 0052a7c0  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 0052a7c4  85db                 test ebx, ebx
// 0052a7c6  7c05                 jl 0x52a7cd
// 0052a7c8  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0052a7cb  7c1c                 jl 0x52a7e9
// 0052a7cd  8b06                 mov eax, dword ptr [esi]
// 0052a7cf  8b542408             mov edx, dword ptr [esp + 8]
// 0052a7d3  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0052a7da  8b0e                 mov ecx, dword ptr [esi]
// 0052a7dc  895118               mov dword ptr [ecx + 0x18], edx
// 0052a7df  8b06                 mov eax, dword ptr [esi]
// 0052a7e1  8b08                 mov ecx, dword ptr [eax]
// 0052a7e3  56                   push esi
// 0052a7e4  ffd1                 call ecx
// 0052a7e6  83c404               add esp, 4
// 0052a7e9  85ff                 test edi, edi
// 0052a7eb  7e25                 jle 0x52a812
// 0052a7ed  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052a7f1  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 0052a7f4  7f1c                 jg 0x52a812
// 0052a7f6  8b06                 mov eax, dword ptr [esi]
// 0052a7f8  8b542408             mov edx, dword ptr [esp + 8]
// 0052a7fc  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0052a803  8b0e                 mov ecx, dword ptr [esi]
// 0052a805  895118               mov dword ptr [ecx + 0x18], edx
// 0052a808  8b06                 mov eax, dword ptr [esi]
// 0052a80a  8b08                 mov ecx, dword ptr [eax]
// 0052a80c  56                   push esi
// 0052a80d  ffd1                 call ecx
// 0052a80f  83c404               add esp, 4
// 0052a812  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052a816  83c701               add edi, 1
// 0052a819  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 0052a81d  7ca1                 jl 0x52a7c0
// 0052a81f  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0052a826  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 0052a829  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0052a82c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0052a82f  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0052a832  897c241c             mov dword ptr [esp + 0x1c], edi
// 0052a836  89442418             mov dword ptr [esp + 0x18], eax
// 0052a83a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052a83e  89542424             mov dword ptr [esp + 0x24], edx
// 0052a842  0f8456010000         je 0x52a99e
// 0052a848  83ff3f               cmp edi, 0x3f
// 0052a84b  7717                 ja 0x52a864
// 0052a84d  3bc7                 cmp eax, edi
// 0052a84f  7c13                 jl 0x52a864
// 0052a851  83f840               cmp eax, 0x40
// 0052a854  7d0e                 jge 0x52a864
// 0052a856  83f90a               cmp ecx, 0xa
// 0052a859  7709                 ja 0x52a864
// 0052a85b  85d2                 test edx, edx
// 0052a85d  7c05                 jl 0x52a864
// 0052a85f  83fa0a               cmp edx, 0xa
// 0052a862  7e20                 jle 0x52a884
// 0052a864  8b16                 mov edx, dword ptr [esi]
// 0052a866  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052a86a  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0052a871  8b06                 mov eax, dword ptr [esi]
// 0052a873  894818               mov dword ptr [eax + 0x18], ecx
// 0052a876  8b16                 mov edx, dword ptr [esi]
// 0052a878  8b02                 mov eax, dword ptr [edx]
// 0052a87a  56                   push esi
// 0052a87b  ffd0                 call eax
// 0052a87d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052a881  83c404               add esp, 4
// 0052a884  85ff                 test edi, edi
// 0052a886  751f                 jne 0x52a8a7
// 0052a888  85c0                 test eax, eax
// 0052a88a  743e                 je 0x52a8ca
// 0052a88c  8b0e                 mov ecx, dword ptr [esi]
// 0052a88e  8b442408             mov eax, dword ptr [esp + 8]
// 0052a892  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0052a899  8b16                 mov edx, dword ptr [esi]
// 0052a89b  894218               mov dword ptr [edx + 0x18], eax
// 0052a89e  8b0e                 mov ecx, dword ptr [esi]
// 0052a8a0  8b11                 mov edx, dword ptr [ecx]
// 0052a8a2  56                   push esi
// 0052a8a3  ffd2                 call edx
// 0052a8a5  eb20                 jmp 0x52a8c7
// 0052a8a7  837c240c01           cmp dword ptr [esp + 0xc], 1
// 0052a8ac  741c                 je 0x52a8ca
// 0052a8ae  8b06                 mov eax, dword ptr [esi]
// 0052a8b0  8b542408             mov edx, dword ptr [esp + 8]
// 0052a8b4  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 0052a8bb  8b0e                 mov ecx, dword ptr [esi]
// 0052a8bd  895118               mov dword ptr [ecx + 0x18], edx
// 0052a8c0  8b06                 mov eax, dword ptr [esi]
// 0052a8c2  8b08                 mov ecx, dword ptr [eax]
// 0052a8c4  56                   push esi
// 0052a8c5  ffd1                 call ecx
// 0052a8c7  83c404               add esp, 4
// 0052a8ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a8ce  85c0                 test eax, eax
// 0052a8d0  0f8e4a010000         jle 0x52aa20
// 0052a8d6  83c304               add ebx, 4
// 0052a8d9  895c240c             mov dword ptr [esp + 0xc], ebx
// 0052a8dd  89442414             mov dword ptr [esp + 0x14], eax
// 0052a8e1  eb04                 jmp 0x52a8e7
// 0052a8e3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052a8e7  8b1b                 mov ebx, dword ptr [ebx]
// 0052a8e9  c1e308               shl ebx, 8
// 0052a8ec  85ff                 test edi, edi
// 0052a8ee  8d5c1c28             lea ebx, [esp + ebx + 0x28]
// 0052a8f2  7421                 je 0x52a915
// 0052a8f4  833b00               cmp dword ptr [ebx], 0
// 0052a8f7  7d1c                 jge 0x52a915
// 0052a8f9  8b16                 mov edx, dword ptr [esi]
// 0052a8fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052a8ff  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0052a906  8b06                 mov eax, dword ptr [esi]
// 0052a908  894818               mov dword ptr [eax + 0x18], ecx
// 0052a90b  8b16                 mov edx, dword ptr [esi]
// 0052a90d  8b02                 mov eax, dword ptr [edx]
// 0052a90f  56                   push esi
// 0052a910  ffd0                 call eax
// 0052a912  83c404               add esp, 4
// 0052a915  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052a919  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0052a91d  7f67                 jg 0x52a986
// 0052a91f  90                   nop 
// 0052a920  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 0052a923  85c0                 test eax, eax
// 0052a925  7d22                 jge 0x52a949
// 0052a927  837c242000           cmp dword ptr [esp + 0x20], 0
// 0052a92c  7448                 je 0x52a976
// 0052a92e  8b16                 mov edx, dword ptr [esi]
// 0052a930  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052a934  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0052a93b  8b06                 mov eax, dword ptr [esi]
// 0052a93d  894818               mov dword ptr [eax + 0x18], ecx
// 0052a940  8b16                 mov edx, dword ptr [esi]
// 0052a942  8b02                 mov eax, dword ptr [edx]
// 0052a944  56                   push esi
// 0052a945  ffd0                 call eax
// 0052a947  eb2a                 jmp 0x52a973
// 0052a949  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052a94d  3bc8                 cmp ecx, eax
// 0052a94f  7509                 jne 0x52a95a
// 0052a951  83c1ff               add ecx, -1
// 0052a954  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0052a958  741c                 je 0x52a976
// 0052a95a  8b0e                 mov ecx, dword ptr [esi]
// 0052a95c  8b442408             mov eax, dword ptr [esp + 8]
// 0052a960  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0052a967  8b16                 mov edx, dword ptr [esi]
// 0052a969  894218               mov dword ptr [edx + 0x18], eax
// 0052a96c  8b0e                 mov ecx, dword ptr [esi]
// 0052a96e  8b11                 mov edx, dword ptr [ecx]
// 0052a970  56                   push esi
// 0052a971  ffd2                 call edx
// 0052a973  83c404               add esp, 4
// 0052a976  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052a97a  8904bb               mov dword ptr [ebx + edi*4], eax
// 0052a97d  83c701               add edi, 1
// 0052a980  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0052a984  7e9a                 jle 0x52a920
// 0052a986  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0052a98a  83c304               add ebx, 4
// 0052a98d  836c241401           sub dword ptr [esp + 0x14], 1
// 0052a992  895c240c             mov dword ptr [esp + 0xc], ebx
// 0052a996  0f8547ffffff         jne 0x52a8e3
// 0052a99c  eb7e                 jmp 0x52aa1c
// 0052a99e  85ff                 test edi, edi
// 0052a9a0  750d                 jne 0x52a9af
// 0052a9a2  83f83f               cmp eax, 0x3f
// 0052a9a5  7508                 jne 0x52a9af
// 0052a9a7  85c9                 test ecx, ecx
// 0052a9a9  7504                 jne 0x52a9af
// 0052a9ab  85d2                 test edx, edx
// 0052a9ad  741c                 je 0x52a9cb
// 0052a9af  8b0e                 mov ecx, dword ptr [esi]
// 0052a9b1  8b442408             mov eax, dword ptr [esp + 8]
// 0052a9b5  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0052a9bc  8b16                 mov edx, dword ptr [esi]
// 0052a9be  894218               mov dword ptr [edx + 0x18], eax
// 0052a9c1  8b0e                 mov ecx, dword ptr [esi]
// 0052a9c3  8b11                 mov edx, dword ptr [ecx]
// 0052a9c5  56                   push esi
// 0052a9c6  ffd2                 call edx
// 0052a9c8  83c404               add esp, 4
// 0052a9cb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0052a9d0  7e4e                 jle 0x52aa20
// 0052a9d2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a9d6  83c304               add ebx, 4
// 0052a9d9  89442414             mov dword ptr [esp + 0x14], eax
// 0052a9dd  8d4900               lea ecx, [ecx]
// 0052a9e0  8b03                 mov eax, dword ptr [ebx]
// 0052a9e2  80bc04280a000000     cmp byte ptr [esp + eax + 0xa28], 0
// 0052a9ea  8dbc04280a0000       lea edi, [esp + eax + 0xa28]
// 0052a9f1  741c                 je 0x52aa0f
// 0052a9f3  8b0e                 mov ecx, dword ptr [esi]
// 0052a9f5  8b442408             mov eax, dword ptr [esp + 8]
// 0052a9f9  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 0052aa00  8b16                 mov edx, dword ptr [esi]
// 0052aa02  894218               mov dword ptr [edx + 0x18], eax
// 0052aa05  8b0e                 mov ecx, dword ptr [esi]
// 0052aa07  8b11                 mov edx, dword ptr [ecx]
// 0052aa09  56                   push esi
// 0052aa0a  ffd2                 call edx
// 0052aa0c  83c404               add esp, 4
// 0052aa0f  83c304               add ebx, 4
// 0052aa12  836c241401           sub dword ptr [esp + 0x14], 1
// 0052aa17  c60701               mov byte ptr [edi], 1
// 0052aa1a  75c4                 jne 0x52a9e0
// 0052aa1c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052aa20  8b442408             mov eax, dword ptr [esp + 8]
// 0052aa24  83c001               add eax, 1
// 0052aa27  83c324               add ebx, 0x24
// 0052aa2a  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 0052aa30  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052aa34  89442408             mov dword ptr [esp + 8], eax
// 0052aa38  0f8e45fdffff         jle 0x52a783
// 0052aa3e  33ff                 xor edi, edi
// 0052aa40  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0052aa47  7443                 je 0x52aa8c
// 0052aa49  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0052aa4c  7e69                 jle 0x52aab7
// 0052aa4e  8d5c2428             lea ebx, [esp + 0x28]
// 0052aa52  833b00               cmp dword ptr [ebx], 0
// 0052aa55  7d13                 jge 0x52aa6a
// 0052aa57  8b06                 mov eax, dword ptr [esi]
// 0052aa59  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0052aa60  8b0e                 mov ecx, dword ptr [esi]
// 0052aa62  8b11                 mov edx, dword ptr [ecx]
// 0052aa64  56                   push esi
// 0052aa65  ffd2                 call edx
// 0052aa67  83c404               add esp, 4
// 0052aa6a  83c701               add edi, 1
// 0052aa6d  81c300010000         add ebx, 0x100
// 0052aa73  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0052aa76  7cda                 jl 0x52aa52
// 0052aa78  5f                   pop edi
// 0052aa79  5b                   pop ebx
// 0052aa7a  8b8c242c0a0000       mov ecx, dword ptr [esp + 0xa2c]
// 0052aa81  33cc                 xor ecx, esp
// 0052aa83  e81e440f00           call 0x61eea6
// 0052aa88  8be5                 mov esp, ebp
// 0052aa8a  5d                   pop ebp
// 0052aa8b  c3                   ret 
// 0052aa8c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0052aa90  7e25                 jle 0x52aab7
// 0052aa92  80bc3c280a000000     cmp byte ptr [esp + edi + 0xa28], 0
// 0052aa9a  7513                 jne 0x52aaaf
// 0052aa9c  8b06                 mov eax, dword ptr [esi]
// 0052aa9e  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0052aaa5  8b0e                 mov ecx, dword ptr [esi]
// 0052aaa7  8b11                 mov edx, dword ptr [ecx]
// 0052aaa9  56                   push esi
// 0052aaaa  ffd2                 call edx
// 0052aaac  83c404               add esp, 4
// 0052aaaf  83c701               add edi, 1
// 0052aab2  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0052aab5  7cdb                 jl 0x52aa92
// 0052aab7  8b8c24340a0000       mov ecx, dword ptr [esp + 0xa34]
// 0052aabe  5f                   pop edi
// 0052aabf  5b                   pop ebx
// 0052aac0  33cc                 xor ecx, esp
// 0052aac2  e8df430f00           call 0x61eea6
// 0052aac7  8be5                 mov esp, ebp
// 0052aac9  5d                   pop ebp
// 0052aaca  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jcmaster.c
