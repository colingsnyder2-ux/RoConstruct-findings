// roc 2012-06 0098a590  unit: CXTPPaintManager  size: 1248 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098a590
//
// 0098a590  6aff                 push -1
// 0098a592  6819c1ad00           push 0xadc119
// 0098a597  64a100000000         mov eax, dword ptr fs:[0]
// 0098a59d  50                   push eax
// 0098a59e  83ec48               sub esp, 0x48
// 0098a5a1  53                   push ebx
// 0098a5a2  55                   push ebp
// 0098a5a3  56                   push esi
// 0098a5a4  57                   push edi
// 0098a5a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098a5aa  33c4                 xor eax, esp
// 0098a5ac  50                   push eax
// 0098a5ad  8d44245c             lea eax, [esp + 0x5c]
// 0098a5b1  64a300000000         mov dword ptr fs:[0], eax
// 0098a5b7  8bf9                 mov edi, ecx
// 0098a5b9  837c247800           cmp dword ptr [esp + 0x78], 0
// 0098a5be  8b742474             mov esi, dword ptr [esp + 0x74]
// 0098a5c2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a5c8  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0098a5ce  0f841c020000         je 0x98a7f0
// 0098a5d4  83f802               cmp eax, 2
// 0098a5d7  751b                 jne 0x98a5f4
// 0098a5d9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098a5dd  8b07                 mov eax, dword ptr [edi]
// 0098a5df  8b4058               mov eax, dword ptr [eax + 0x58]
// 0098a5e2  6a01                 push 1
// 0098a5e4  56                   push esi
// 0098a5e5  51                   push ecx
// 0098a5e6  8d542430             lea edx, [esp + 0x30]
// 0098a5ea  52                   push edx
// 0098a5eb  8bcf                 mov ecx, edi
// 0098a5ed  ffd0                 call eax
// 0098a5ef  e9e6010000           jmp 0x98a7da
// 0098a5f4  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098a5fa  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0098a600  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0098a606  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0098a60c  89442444             mov dword ptr [esp + 0x44], eax
// 0098a610  89442434             mov dword ptr [esp + 0x34], eax
// 0098a614  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0098a61a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0098a61e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0098a624  83c302               add ebx, 2
// 0098a627  89542440             mov dword ptr [esp + 0x40], edx
// 0098a62b  894c2448             mov dword ptr [esp + 0x48], ecx
// 0098a62f  89542430             mov dword ptr [esp + 0x30], edx
// 0098a633  894c2438             mov dword ptr [esp + 0x38], ecx
// 0098a637  83f8ff               cmp eax, -1
// 0098a63a  750f                 jne 0x98a64b
// 0098a63c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0098a642  85c9                 test ecx, ecx
// 0098a644  7405                 je 0x98a64b
// 0098a646  e8d5a8ffff           call 0x984f20
// 0098a64b  8bce                 mov ecx, esi
// 0098a64d  89442478             mov dword ptr [esp + 0x78], eax
// 0098a651  e8da980800           call 0xa13f30
// 0098a656  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0098a65a  85c0                 test eax, eax
// 0098a65c  0f84ab000000         je 0x98a70d
// 0098a662  8b16                 mov edx, dword ptr [esi]
// 0098a664  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0098a66a  8d442414             lea eax, [esp + 0x14]
// 0098a66e  50                   push eax
// 0098a66f  8bce                 mov ecx, esi
// 0098a671  ffd2                 call edx
// 0098a673  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0098a677  8b06                 mov eax, dword ptr [esi]
// 0098a679  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0098a67f  51                   push ecx
// 0098a680  8bce                 mov ecx, esi
// 0098a682  ffd2                 call edx
// 0098a684  8bd8                 mov ebx, eax
// 0098a686  8bcb                 mov ecx, ebx
// 0098a688  e893d30000           call 0x997a20
// 0098a68d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 0098a692  8bcb                 mov ecx, ebx
// 0098a694  89442470             mov dword ptr [esp + 0x70], eax
// 0098a698  e8c30f0a00           call 0xa2b660
// 0098a69d  8bc8                 mov ecx, eax
// 0098a69f  8b442470             mov eax, dword ptr [esp + 0x70]
// 0098a6a3  99                   cdq 
// 0098a6a4  f7f9                 idiv ecx
// 0098a6a6  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098a6aa  6a01                 push 1
// 0098a6ac  6a00                 push 0
// 0098a6ae  6a00                 push 0
// 0098a6b0  89442424             mov dword ptr [esp + 0x24], eax
// 0098a6b4  8b442454             mov eax, dword ptr [esp + 0x54]
// 0098a6b8  03c2                 add eax, edx
// 0098a6ba  99                   cdq 
// 0098a6bb  2bc2                 sub eax, edx
// 0098a6bd  8bc8                 mov ecx, eax
// 0098a6bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098a6c3  99                   cdq 
// 0098a6c4  2bc2                 sub eax, edx
// 0098a6c6  8b542448             mov edx, dword ptr [esp + 0x48]
// 0098a6ca  83c203               add edx, 3
// 0098a6cd  89542430             mov dword ptr [esp + 0x30], edx
// 0098a6d1  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0098a6d8  52                   push edx
// 0098a6d9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098a6dd  6a00                 push 0
// 0098a6df  6a00                 push 0
// 0098a6e1  53                   push ebx
// 0098a6e2  52                   push edx
// 0098a6e3  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098a6e7  d1f9                 sar ecx, 1
// 0098a6e9  d1f8                 sar eax, 1
// 0098a6eb  2bc8                 sub ecx, eax
// 0098a6ed  8b07                 mov eax, dword ptr [edi]
// 0098a6ef  52                   push edx
// 0098a6f0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0098a6f6  51                   push ecx
// 0098a6f7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0098a6fb  51                   push ecx
// 0098a6fc  55                   push ebp
// 0098a6fd  8bcf                 mov ecx, edi
// 0098a6ff  ffd2                 call edx
// 0098a701  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098a705  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098a709  8d5c0106             lea ebx, [ecx + eax + 6]
// 0098a70d  8b16                 mov edx, dword ptr [esi]
// 0098a70f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0098a715  8bce                 mov ecx, esi
// 0098a717  ffd0                 call eax
// 0098a719  85c0                 test eax, eax
// 0098a71b  0f84b9000000         je 0x98a7da
// 0098a721  85ff                 test edi, edi
// 0098a723  7510                 jne 0x98a735
// 0098a725  6a11                 push 0x11
// 0098a727  ff153021b200         call dword ptr [0xb22130]
// 0098a72d  50                   push eax
// 0098a72e  e8bb84ffff           call 0x982bee
// 0098a733  eb06                 jmp 0x98a73b
// 0098a735  8d87f0000000         lea eax, [edi + 0xf0]
// 0098a73b  50                   push eax
// 0098a73c  55                   push ebp
// 0098a73d  8d4c241c             lea ecx, [esp + 0x1c]
// 0098a741  e8eaad0400           call 0x9d5530
// 0098a746  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a74c  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0098a752  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0098a758  8b5500               mov edx, dword ptr [ebp]
// 0098a75b  51                   push ecx
// 0098a75c  50                   push eax
// 0098a75d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098a764  6a00                 push 0
// 0098a766  6a00                 push 0
// 0098a768  50                   push eax
// 0098a769  89942484000000       mov dword ptr [esp + 0x84], edx
// 0098a770  8b17                 mov edx, dword ptr [edi]
// 0098a772  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0098a778  6a00                 push 0
// 0098a77a  6a00                 push 0
// 0098a77c  8bcf                 mov ecx, edi
// 0098a77e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0098a789  ffd2                 call edx
// 0098a78b  50                   push eax
// 0098a78c  8b442474             mov eax, dword ptr [esp + 0x74]
// 0098a790  8b5038               mov edx, dword ptr [eax + 0x38]
// 0098a793  8bcd                 mov ecx, ebp
// 0098a795  ffd2                 call edx
// 0098a797  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098a79b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098a79f  6a00                 push 0
// 0098a7a1  6a00                 push 0
// 0098a7a3  6a00                 push 0
// 0098a7a5  6a01                 push 1
// 0098a7a7  83ec10               sub esp, 0x10
// 0098a7aa  8bc4                 mov eax, esp
// 0098a7ac  8918                 mov dword ptr [eax], ebx
// 0098a7ae  894804               mov dword ptr [eax + 4], ecx
// 0098a7b1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0098a7b5  56                   push esi
// 0098a7b6  895008               mov dword ptr [eax + 8], edx
// 0098a7b9  55                   push ebp
// 0098a7ba  8d54244c             lea edx, [esp + 0x4c]
// 0098a7be  89480c               mov dword ptr [eax + 0xc], ecx
// 0098a7c1  52                   push edx
// 0098a7c2  8bcf                 mov ecx, edi
// 0098a7c4  e8a7f1ffff           call 0x989970
// 0098a7c9  8d4c2414             lea ecx, [esp + 0x14]
// 0098a7cd  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0098a7d5  e8d6ad0400           call 0x9d55b0
// 0098a7da  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098a7de  c70000000000         mov dword ptr [eax], 0
// 0098a7e4  c7400400000000       mov dword ptr [eax + 4], 0
// 0098a7eb  e96a020000           jmp 0x98aa5a
// 0098a7f0  8b16                 mov edx, dword ptr [esi]
// 0098a7f2  8b5258               mov edx, dword ptr [edx + 0x58]
// 0098a7f5  33c9                 xor ecx, ecx
// 0098a7f7  83f802               cmp eax, 2
// 0098a7fa  0f94c1               sete cl
// 0098a7fd  8d442474             lea eax, [esp + 0x74]
// 0098a801  50                   push eax
// 0098a802  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0098a806  8bce                 mov ecx, esi
// 0098a808  ffd2                 call edx
// 0098a80a  8d442474             lea eax, [esp + 0x74]
// 0098a80e  50                   push eax
// 0098a80f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0098a817  e804d3ffff           call 0x987b20
// 0098a81c  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0098a820  83c404               add esp, 4
// 0098a823  8d8fa4000000         lea ecx, [edi + 0xa4]
// 0098a829  51                   push ecx
// 0098a82a  53                   push ebx
// 0098a82b  8d4c2454             lea ecx, [esp + 0x54]
// 0098a82f  e8fcac0400           call 0x9d5530
// 0098a834  8baf14010000         mov ebp, dword ptr [edi + 0x114]
// 0098a83a  c644246402           mov byte ptr [esp + 0x64], 2
// 0098a83f  85ed                 test ebp, ebp
// 0098a841  7f44                 jg 0x98a887
// 0098a843  8b4308               mov eax, dword ptr [ebx + 8]
// 0098a846  8b2d4021b200         mov ebp, dword ptr [0xb22140]
// 0098a84c  8d542424             lea edx, [esp + 0x24]
// 0098a850  52                   push edx
// 0098a851  6a01                 push 1
// 0098a853  68ecf3b400           push 0xb4f3ec
// 0098a858  50                   push eax
// 0098a859  ffd5                 call ebp
// 0098a85b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098a85f  83c107               add ecx, 7
// 0098a862  83f914               cmp ecx, 0x14
// 0098a865  7d07                 jge 0x98a86e
// 0098a867  bd14000000           mov ebp, 0x14
// 0098a86c  eb19                 jmp 0x98a887
// 0098a86e  8b4308               mov eax, dword ptr [ebx + 8]
// 0098a871  8d542424             lea edx, [esp + 0x24]
// 0098a875  52                   push edx
// 0098a876  6a01                 push 1
// 0098a878  68ecf3b400           push 0xb4f3ec
// 0098a87d  50                   push eax
// 0098a87e  ffd5                 call ebp
// 0098a880  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0098a884  83c507               add ebp, 7
// 0098a887  8b1d0423b200         mov ebx, dword ptr [0xb22304]
// 0098a88d  6a0e                 push 0xe
// 0098a88f  6a09                 push 9
// 0098a891  55                   push ebp
// 0098a892  ffd3                 call ebx
// 0098a894  40                   inc eax
// 0098a895  83f80f               cmp eax, 0xf
// 0098a898  7d07                 jge 0x98a8a1
// 0098a89a  b80f000000           mov eax, 0xf
// 0098a89f  eb08                 jmp 0x98a8a9
// 0098a8a1  6a0e                 push 0xe
// 0098a8a3  6a09                 push 9
// 0098a8a5  55                   push ebp
// 0098a8a6  ffd3                 call ebx
// 0098a8a8  40                   inc eax
// 0098a8a9  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 0098a8af  7410                 je 0x98a8c1
// 0098a8b1  8986a4010000         mov dword ptr [esi + 0x1a4], eax
// 0098a8b7  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0098a8c1  8d87f0000000         lea eax, [edi + 0xf0]
// 0098a8c7  50                   push eax
// 0098a8c8  8d4c2450             lea ecx, [esp + 0x50]
// 0098a8cc  e83f970400           call 0x9d4010
// 0098a8d1  8b16                 mov edx, dword ptr [esi]
// 0098a8d3  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 0098a8d9  8bce                 mov ecx, esi
// 0098a8db  ffd0                 call eax
// 0098a8dd  8bd8                 mov ebx, eax
// 0098a8df  85db                 test ebx, ebx
// 0098a8e1  7449                 je 0x98a92c
// 0098a8e3  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 0098a8ea  7540                 jne 0x98a92c
// 0098a8ec  8b542470             mov edx, dword ptr [esp + 0x70]
// 0098a8f0  8b4208               mov eax, dword ptr [edx + 8]
// 0098a8f3  8d4c2424             lea ecx, [esp + 0x24]
// 0098a8f7  51                   push ecx
// 0098a8f8  6a01                 push 1
// 0098a8fa  68ecf3b400           push 0xb4f3ec
// 0098a8ff  50                   push eax
// 0098a900  ff154021b200         call dword ptr [0xb22140]
// 0098a906  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098a90a  83c107               add ecx, 7
// 0098a90d  3be9                 cmp ebp, ecx
// 0098a90f  7f1b                 jg 0x98a92c
// 0098a911  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098a915  6a01                 push 1
// 0098a917  68ecf3b400           push 0xb4f3ec
// 0098a91c  8d54241c             lea edx, [esp + 0x1c]
// 0098a920  52                   push edx
// 0098a921  e8eadaffff           call 0x988410
// 0098a926  8b6804               mov ebp, dword ptr [eax + 4]
// 0098a929  83c507               add ebp, 7
// 0098a92c  8d442424             lea eax, [esp + 0x24]
// 0098a930  50                   push eax
// 0098a931  8d4c2478             lea ecx, [esp + 0x78]
// 0098a935  ff155846b200         call dword ptr [0xb24658]
// 0098a93b  50                   push eax
// 0098a93c  8d4c247c             lea ecx, [esp + 0x7c]
// 0098a940  ff159847b200         call dword ptr [0xb24798]
// 0098a946  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0098a94a  8b5108               mov edx, dword ptr [ecx + 8]
// 0098a94d  50                   push eax
// 0098a94e  52                   push edx
// 0098a94f  ff154021b200         call dword ptr [0xb22140]
// 0098a955  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098a959  83c005               add eax, 5
// 0098a95c  837c247800           cmp dword ptr [esp + 0x78], 0
// 0098a961  89442470             mov dword ptr [esp + 0x70], eax
// 0098a965  744b                 je 0x98a9b2
// 0098a967  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098a96d  8b17                 mov edx, dword ptr [edi]
// 0098a96f  50                   push eax
// 0098a970  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0098a976  8bcf                 mov ecx, edi
// 0098a978  ffd0                 call eax
// 0098a97a  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 0098a980  03f8                 add edi, eax
// 0098a982  037c2470             add edi, dword ptr [esp + 0x70]
// 0098a986  39bea0010000         cmp dword ptr [esi + 0x1a0], edi
// 0098a98c  7410                 je 0x98a99e
// 0098a98e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 0098a994  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0098a99e  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 0098a9a4  8d0c06               lea ecx, [esi + eax]
// 0098a9a7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0098a9ab  890e                 mov dword ptr [esi], ecx
// 0098a9ad  e98b000000           jmp 0x98aa3d
// 0098a9b2  8bce                 mov ecx, esi
// 0098a9b4  e877950800           call 0xa13f30
// 0098a9b9  8bf8                 mov edi, eax
// 0098a9bb  85ff                 test edi, edi
// 0098a9bd  7418                 je 0x98a9d7
// 0098a9bf  8b16                 mov edx, dword ptr [esi]
// 0098a9c1  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0098a9c7  8d442424             lea eax, [esp + 0x24]
// 0098a9cb  50                   push eax
// 0098a9cc  8bce                 mov ecx, esi
// 0098a9ce  ffd2                 call edx
// 0098a9d0  8b00                 mov eax, dword ptr [eax]
// 0098a9d2  83c004               add eax, 4
// 0098a9d5  eb02                 jmp 0x98a9d9
// 0098a9d7  33c0                 xor eax, eax
// 0098a9d9  f7db                 neg ebx
// 0098a9db  1bdb                 sbb ebx, ebx
// 0098a9dd  235c2470             and ebx, dword ptr [esp + 0x70]
// 0098a9e1  03d8                 add ebx, eax
// 0098a9e3  85ff                 test edi, edi
// 0098a9e5  7432                 je 0x98aa19
// 0098a9e7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0098a9ed  8b01                 mov eax, dword ptr [ecx]
// 0098a9ef  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 0098a9f5  8d54242c             lea edx, [esp + 0x2c]
// 0098a9f9  52                   push edx
// 0098a9fa  ffd0                 call eax
// 0098a9fc  3b6804               cmp ebp, dword ptr [eax + 4]
// 0098a9ff  7f18                 jg 0x98aa19
// 0098aa01  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0098aa07  8b11                 mov edx, dword ptr [ecx]
// 0098aa09  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 0098aa0f  8d44243c             lea eax, [esp + 0x3c]
// 0098aa13  50                   push eax
// 0098aa14  ffd2                 call edx
// 0098aa16  8b6804               mov ebp, dword ptr [eax + 4]
// 0098aa19  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 0098aa1f  7410                 je 0x98aa31
// 0098aa21  899ea0010000         mov dword ptr [esi + 0x1a0], ebx
// 0098aa27  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 0098aa31  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 0098aa37  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0098aa3b  8906                 mov dword ptr [esi], eax
// 0098aa3d  8d4c244c             lea ecx, [esp + 0x4c]
// 0098aa41  896e04               mov dword ptr [esi + 4], ebp
// 0098aa44  c644246401           mov byte ptr [esp + 0x64], 1
// 0098aa49  e862ab0400           call 0x9d55b0
// 0098aa4e  8d4c2474             lea ecx, [esp + 0x74]
// 0098aa52  ff15d047b200         call dword ptr [0xb247d0]
// 0098aa58  8bc6                 mov eax, esi
// 0098aa5a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0098aa5e  64890d00000000       mov dword ptr fs:[0], ecx
// 0098aa65  59                   pop ecx
// 0098aa66  5f                   pop edi
// 0098aa67  5e                   pop esi
// 0098aa68  5d                   pop ebp
// 0098aa69  5b                   pop ebx
// 0098aa6a  83c454               add esp, 0x54
// 0098aa6d  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp