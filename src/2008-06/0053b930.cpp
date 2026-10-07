// roc 2008-06 0053b930  unit: seg_00530000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b930
//
// 0053b930  55                   push ebp
// 0053b931  8bec                 mov ebp, esp
// 0053b933  83e4f8               and esp, 0xfffffff8
// 0053b936  81ec300a0000         sub esp, 0xa30
// 0053b93c  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0053b943  53                   push ebx
// 0053b944  57                   push edi
// 0053b945  7f1c                 jg 0x53b963
// 0053b947  8b06                 mov eax, dword ptr [esi]
// 0053b949  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0053b950  8b0e                 mov ecx, dword ptr [esi]
// 0053b952  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 0053b959  8b16                 mov edx, dword ptr [esi]
// 0053b95b  8b02                 mov eax, dword ptr [edx]
// 0053b95d  56                   push esi
// 0053b95e  ffd0                 call eax
// 0053b960  83c404               add esp, 4
// 0053b963  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0053b969  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0053b96d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053b971  7528                 jne 0x53b99b
// 0053b973  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 0053b977  7522                 jne 0x53b99b
// 0053b979  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053b97d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 0053b984  7e37                 jle 0x53b9bd
// 0053b986  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0053b989  51                   push ecx
// 0053b98a  8d542430             lea edx, [esp + 0x30]
// 0053b98e  6a00                 push 0
// 0053b990  52                   push edx
// 0053b991  e86e5d1600           call 0x6a1704
// 0053b996  83c40c               add esp, 0xc
// 0053b999  eb22                 jmp 0x53b9bd
// 0053b99b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053b99f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 0053b9a6  7e15                 jle 0x53b9bd
// 0053b9a8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0053b9ab  81e1ffffff00         and ecx, 0xffffff
// 0053b9b1  c1e106               shl ecx, 6
// 0053b9b4  83c8ff               or eax, 0xffffffff
// 0053b9b7  8d7c2438             lea edi, [esp + 0x38]
// 0053b9bb  f3ab                 rep stosd dword ptr es:[edi], eax
// 0053b9bd  b801000000           mov eax, 1
// 0053b9c2  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 0053b9c8  8944240c             mov dword ptr [esp + 0xc], eax
// 0053b9cc  0f8cb4020000         jl 0x53bc86
// 0053b9d2  8b03                 mov eax, dword ptr [ebx]
// 0053b9d4  89442410             mov dword ptr [esp + 0x10], eax
// 0053b9d8  85c0                 test eax, eax
// 0053b9da  7e05                 jle 0x53b9e1
// 0053b9dc  83f804               cmp eax, 4
// 0053b9df  7e21                 jle 0x53ba02
// 0053b9e1  8b0e                 mov ecx, dword ptr [esi]
// 0053b9e3  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0053b9ea  8b16                 mov edx, dword ptr [esi]
// 0053b9ec  894218               mov dword ptr [edx + 0x18], eax
// 0053b9ef  8b06                 mov eax, dword ptr [esi]
// 0053b9f1  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0053b9f8  8b0e                 mov ecx, dword ptr [esi]
// 0053b9fa  8b11                 mov edx, dword ptr [ecx]
// 0053b9fc  56                   push esi
// 0053b9fd  ffd2                 call edx
// 0053b9ff  83c404               add esp, 4
// 0053ba02  33ff                 xor edi, edi
// 0053ba04  397c2410             cmp dword ptr [esp + 0x10], edi
// 0053ba08  7e63                 jle 0x53ba6d
// 0053ba0a  8d9b00000000         lea ebx, [ebx]
// 0053ba10  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 0053ba14  85db                 test ebx, ebx
// 0053ba16  7c05                 jl 0x53ba1d
// 0053ba18  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0053ba1b  7c1c                 jl 0x53ba39
// 0053ba1d  8b06                 mov eax, dword ptr [esi]
// 0053ba1f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053ba23  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0053ba2a  8b0e                 mov ecx, dword ptr [esi]
// 0053ba2c  895118               mov dword ptr [ecx + 0x18], edx
// 0053ba2f  8b06                 mov eax, dword ptr [esi]
// 0053ba31  8b08                 mov ecx, dword ptr [eax]
// 0053ba33  56                   push esi
// 0053ba34  ffd1                 call ecx
// 0053ba36  83c404               add esp, 4
// 0053ba39  85ff                 test edi, edi
// 0053ba3b  7e25                 jle 0x53ba62
// 0053ba3d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053ba41  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 0053ba44  7f1c                 jg 0x53ba62
// 0053ba46  8b06                 mov eax, dword ptr [esi]
// 0053ba48  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053ba4c  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0053ba53  8b0e                 mov ecx, dword ptr [esi]
// 0053ba55  895118               mov dword ptr [ecx + 0x18], edx
// 0053ba58  8b06                 mov eax, dword ptr [esi]
// 0053ba5a  8b08                 mov ecx, dword ptr [eax]
// 0053ba5c  56                   push esi
// 0053ba5d  ffd1                 call ecx
// 0053ba5f  83c404               add esp, 4
// 0053ba62  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053ba66  47                   inc edi
// 0053ba67  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0053ba6b  7ca3                 jl 0x53ba10
// 0053ba6d  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0053ba74  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 0053ba77  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0053ba7a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0053ba7d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0053ba80  897c2420             mov dword ptr [esp + 0x20], edi
// 0053ba84  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053ba88  894c2424             mov dword ptr [esp + 0x24], ecx
// 0053ba8c  89542428             mov dword ptr [esp + 0x28], edx
// 0053ba90  0f8454010000         je 0x53bbea
// 0053ba96  83ff3f               cmp edi, 0x3f
// 0053ba99  7717                 ja 0x53bab2
// 0053ba9b  3bc7                 cmp eax, edi
// 0053ba9d  7c13                 jl 0x53bab2
// 0053ba9f  83f840               cmp eax, 0x40
// 0053baa2  7d0e                 jge 0x53bab2
// 0053baa4  83f90a               cmp ecx, 0xa
// 0053baa7  7709                 ja 0x53bab2
// 0053baa9  85d2                 test edx, edx
// 0053baab  7c05                 jl 0x53bab2
// 0053baad  83fa0a               cmp edx, 0xa
// 0053bab0  7e20                 jle 0x53bad2
// 0053bab2  8b16                 mov edx, dword ptr [esi]
// 0053bab4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053bab8  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0053babf  8b06                 mov eax, dword ptr [esi]
// 0053bac1  894818               mov dword ptr [eax + 0x18], ecx
// 0053bac4  8b16                 mov edx, dword ptr [esi]
// 0053bac6  8b02                 mov eax, dword ptr [edx]
// 0053bac8  56                   push esi
// 0053bac9  ffd0                 call eax
// 0053bacb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053bacf  83c404               add esp, 4
// 0053bad2  85ff                 test edi, edi
// 0053bad4  751f                 jne 0x53baf5
// 0053bad6  85c0                 test eax, eax
// 0053bad8  743e                 je 0x53bb18
// 0053bada  8b0e                 mov ecx, dword ptr [esi]
// 0053badc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bae0  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0053bae7  8b16                 mov edx, dword ptr [esi]
// 0053bae9  894218               mov dword ptr [edx + 0x18], eax
// 0053baec  8b0e                 mov ecx, dword ptr [esi]
// 0053baee  8b11                 mov edx, dword ptr [ecx]
// 0053baf0  56                   push esi
// 0053baf1  ffd2                 call edx
// 0053baf3  eb20                 jmp 0x53bb15
// 0053baf5  837c241001           cmp dword ptr [esp + 0x10], 1
// 0053bafa  741c                 je 0x53bb18
// 0053bafc  8b06                 mov eax, dword ptr [esi]
// 0053bafe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053bb02  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 0053bb09  8b0e                 mov ecx, dword ptr [esi]
// 0053bb0b  895118               mov dword ptr [ecx + 0x18], edx
// 0053bb0e  8b06                 mov eax, dword ptr [esi]
// 0053bb10  8b08                 mov ecx, dword ptr [eax]
// 0053bb12  56                   push esi
// 0053bb13  ffd1                 call ecx
// 0053bb15  83c404               add esp, 4
// 0053bb18  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053bb1c  85c0                 test eax, eax
// 0053bb1e  0f8e46010000         jle 0x53bc6a
// 0053bb24  83c304               add ebx, 4
// 0053bb27  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053bb2b  89442418             mov dword ptr [esp + 0x18], eax
// 0053bb2f  eb04                 jmp 0x53bb35
// 0053bb31  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053bb35  8b1b                 mov ebx, dword ptr [ebx]
// 0053bb37  c1e308               shl ebx, 8
// 0053bb3a  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 0053bb3e  85ff                 test edi, edi
// 0053bb40  7421                 je 0x53bb63
// 0053bb42  833b00               cmp dword ptr [ebx], 0
// 0053bb45  7d1c                 jge 0x53bb63
// 0053bb47  8b16                 mov edx, dword ptr [esi]
// 0053bb49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053bb4d  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0053bb54  8b06                 mov eax, dword ptr [esi]
// 0053bb56  894818               mov dword ptr [eax + 0x18], ecx
// 0053bb59  8b16                 mov edx, dword ptr [esi]
// 0053bb5b  8b02                 mov eax, dword ptr [edx]
// 0053bb5d  56                   push esi
// 0053bb5e  ffd0                 call eax
// 0053bb60  83c404               add esp, 4
// 0053bb63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053bb67  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0053bb6b  7f65                 jg 0x53bbd2
// 0053bb6d  8d4900               lea ecx, [ecx]
// 0053bb70  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 0053bb73  85c0                 test eax, eax
// 0053bb75  7d22                 jge 0x53bb99
// 0053bb77  837c242400           cmp dword ptr [esp + 0x24], 0
// 0053bb7c  7446                 je 0x53bbc4
// 0053bb7e  8b16                 mov edx, dword ptr [esi]
// 0053bb80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053bb84  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0053bb8b  8b06                 mov eax, dword ptr [esi]
// 0053bb8d  894818               mov dword ptr [eax + 0x18], ecx
// 0053bb90  8b16                 mov edx, dword ptr [esi]
// 0053bb92  8b02                 mov eax, dword ptr [edx]
// 0053bb94  56                   push esi
// 0053bb95  ffd0                 call eax
// 0053bb97  eb28                 jmp 0x53bbc1
// 0053bb99  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053bb9d  3bc8                 cmp ecx, eax
// 0053bb9f  7507                 jne 0x53bba8
// 0053bba1  49                   dec ecx
// 0053bba2  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0053bba6  741c                 je 0x53bbc4
// 0053bba8  8b0e                 mov ecx, dword ptr [esi]
// 0053bbaa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bbae  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0053bbb5  8b16                 mov edx, dword ptr [esi]
// 0053bbb7  894218               mov dword ptr [edx + 0x18], eax
// 0053bbba  8b0e                 mov ecx, dword ptr [esi]
// 0053bbbc  8b11                 mov edx, dword ptr [ecx]
// 0053bbbe  56                   push esi
// 0053bbbf  ffd2                 call edx
// 0053bbc1  83c404               add esp, 4
// 0053bbc4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053bbc8  8904bb               mov dword ptr [ebx + edi*4], eax
// 0053bbcb  47                   inc edi
// 0053bbcc  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0053bbd0  7e9e                 jle 0x53bb70
// 0053bbd2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053bbd6  83c304               add ebx, 4
// 0053bbd9  836c241801           sub dword ptr [esp + 0x18], 1
// 0053bbde  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053bbe2  0f8549ffffff         jne 0x53bb31
// 0053bbe8  eb7c                 jmp 0x53bc66
// 0053bbea  85ff                 test edi, edi
// 0053bbec  750d                 jne 0x53bbfb
// 0053bbee  83f83f               cmp eax, 0x3f
// 0053bbf1  7508                 jne 0x53bbfb
// 0053bbf3  85c9                 test ecx, ecx
// 0053bbf5  7504                 jne 0x53bbfb
// 0053bbf7  85d2                 test edx, edx
// 0053bbf9  741c                 je 0x53bc17
// 0053bbfb  8b0e                 mov ecx, dword ptr [esi]
// 0053bbfd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bc01  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0053bc08  8b16                 mov edx, dword ptr [esi]
// 0053bc0a  894218               mov dword ptr [edx + 0x18], eax
// 0053bc0d  8b0e                 mov ecx, dword ptr [esi]
// 0053bc0f  8b11                 mov edx, dword ptr [ecx]
// 0053bc11  56                   push esi
// 0053bc12  ffd2                 call edx
// 0053bc14  83c404               add esp, 4
// 0053bc17  837c241000           cmp dword ptr [esp + 0x10], 0
// 0053bc1c  7e4c                 jle 0x53bc6a
// 0053bc1e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053bc22  83c304               add ebx, 4
// 0053bc25  89442418             mov dword ptr [esp + 0x18], eax
// 0053bc29  8da42400000000       lea esp, [esp]
// 0053bc30  8b03                 mov eax, dword ptr [ebx]
// 0053bc32  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 0053bc37  8d7c042c             lea edi, [esp + eax + 0x2c]
// 0053bc3b  741c                 je 0x53bc59
// 0053bc3d  8b0e                 mov ecx, dword ptr [esi]
// 0053bc3f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bc43  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 0053bc4a  8b16                 mov edx, dword ptr [esi]
// 0053bc4c  894218               mov dword ptr [edx + 0x18], eax
// 0053bc4f  8b0e                 mov ecx, dword ptr [esi]
// 0053bc51  8b11                 mov edx, dword ptr [ecx]
// 0053bc53  56                   push esi
// 0053bc54  ffd2                 call edx
// 0053bc56  83c404               add esp, 4
// 0053bc59  83c304               add ebx, 4
// 0053bc5c  836c241801           sub dword ptr [esp + 0x18], 1
// 0053bc61  c60701               mov byte ptr [edi], 1
// 0053bc64  75ca                 jne 0x53bc30
// 0053bc66  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053bc6a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bc6e  40                   inc eax
// 0053bc6f  83c324               add ebx, 0x24
// 0053bc72  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 0053bc78  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053bc7c  8944240c             mov dword ptr [esp + 0xc], eax
// 0053bc80  0f8e4cfdffff         jle 0x53b9d2
// 0053bc86  33ff                 xor edi, edi
// 0053bc88  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0053bc8f  7433                 je 0x53bcc4
// 0053bc91  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0053bc94  7e5a                 jle 0x53bcf0
// 0053bc96  8d5c2438             lea ebx, [esp + 0x38]
// 0053bc9a  833b00               cmp dword ptr [ebx], 0
// 0053bc9d  7d13                 jge 0x53bcb2
// 0053bc9f  8b06                 mov eax, dword ptr [esi]
// 0053bca1  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0053bca8  8b0e                 mov ecx, dword ptr [esi]
// 0053bcaa  8b11                 mov edx, dword ptr [ecx]
// 0053bcac  56                   push esi
// 0053bcad  ffd2                 call edx
// 0053bcaf  83c404               add esp, 4
// 0053bcb2  47                   inc edi
// 0053bcb3  81c300010000         add ebx, 0x100
// 0053bcb9  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0053bcbc  7cdc                 jl 0x53bc9a
// 0053bcbe  5f                   pop edi
// 0053bcbf  5b                   pop ebx
// 0053bcc0  8be5                 mov esp, ebp
// 0053bcc2  5d                   pop ebp
// 0053bcc3  c3                   ret 
// 0053bcc4  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053bcc8  7e26                 jle 0x53bcf0
// 0053bcca  8d9b00000000         lea ebx, [ebx]
// 0053bcd0  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 0053bcd5  7513                 jne 0x53bcea
// 0053bcd7  8b06                 mov eax, dword ptr [esi]
// 0053bcd9  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0053bce0  8b0e                 mov ecx, dword ptr [esi]
// 0053bce2  8b11                 mov edx, dword ptr [ecx]
// 0053bce4  56                   push esi
// 0053bce5  ffd2                 call edx
// 0053bce7  83c404               add esp, 4
// 0053bcea  47                   inc edi
// 0053bceb  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0053bcee  7ce0                 jl 0x53bcd0
// 0053bcf0  5f                   pop edi
// 0053bcf1  5b                   pop ebx
// 0053bcf2  8be5                 mov esp, ebp
// 0053bcf4  5d                   pop ebp
// 0053bcf5  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
