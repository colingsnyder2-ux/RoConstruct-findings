// from server: 100% by auto
// roc 2008-06 00512ac0  unit: G3D::GCamera  size: 845 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512ac0
//
// 00512ac0  6aff                 push -1
// 00512ac2  64a100000000         mov eax, dword ptr fs:[0]
// 00512ac8  68a88d7d00           push 0x7d8da8
// 00512acd  50                   push eax
// 00512ace  64892500000000       mov dword ptr fs:[0], esp
// 00512ad5  83ec18               sub esp, 0x18
// 00512ad8  53                   push ebx
// 00512ad9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00512add  55                   push ebp
// 00512ade  56                   push esi
// 00512adf  8bf1                 mov esi, ecx
// 00512ae1  837e3400             cmp dword ptr [esi + 0x34], 0
// 00512ae5  57                   push edi
// 00512ae6  0f84d5020000         je 0x512dc1
// 00512aec  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512aef  8b5604               mov edx, dword ptr [esi + 4]
// 00512af2  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00512af5  03d0                 add edx, eax
// 00512af7  3bd1                 cmp edx, ecx
// 00512af9  0f8ec2020000         jle 0x512dc1
// 00512aff  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 00512b02  33ff                 xor edi, edi
// 00512b04  894c2418             mov dword ptr [esp + 0x18], ecx
// 00512b08  897c2414             mov dword ptr [esp + 0x14], edi
// 00512b0c  85c0                 test eax, eax
// 00512b0e  0f86e4020000         jbe 0x512df8
// 00512b14  3bf8                 cmp edi, eax
// 00512b16  7606                 jbe 0x512b1e
// 00512b18  ff1590288000         call dword ptr [0x802890]
// 00512b1e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512b22  8d6b04               lea ebp, [ebx + 4]
// 00512b25  7205                 jb 0x512b2c
// 00512b27  8b4500               mov eax, dword ptr [ebp]
// 00512b2a  eb02                 jmp 0x512b2e
// 00512b2c  8bc5                 mov eax, ebp
// 00512b2e  0fb60438             movzx eax, byte ptr [eax + edi]
// 00512b32  50                   push eax
// 00512b33  8bce                 mov ecx, esi
// 00512b35  e8c6fcffff           call 0x512800
// 00512b3a  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00512b3d  7606                 jbe 0x512b45
// 00512b3f  ff1590288000         call dword ptr [0x802890]
// 00512b45  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512b49  7205                 jb 0x512b50
// 00512b4b  8b4500               mov eax, dword ptr [ebp]
// 00512b4e  eb02                 jmp 0x512b52
// 00512b50  8bc5                 mov eax, ebp
// 00512b52  803c380d             cmp byte ptr [eax + edi], 0xd
// 00512b56  754b                 jne 0x512ba3
// 00512b58  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512b5b  47                   inc edi
// 00512b5c  3bf8                 cmp edi, eax
// 00512b5e  7343                 jae 0x512ba3
// 00512b60  7606                 jbe 0x512b68
// 00512b62  ff1590288000         call dword ptr [0x802890]
// 00512b68  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512b6c  7205                 jb 0x512b73
// 00512b6e  8b4500               mov eax, dword ptr [ebp]
// 00512b71  eb02                 jmp 0x512b75
// 00512b73  8bc5                 mov eax, ebp
// 00512b75  803c380a             cmp byte ptr [eax + edi], 0xa
// 00512b79  7528                 jne 0x512ba3
// 00512b7b  897c2414             mov dword ptr [esp + 0x14], edi
// 00512b7f  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00512b82  7606                 jbe 0x512b8a
// 00512b84  ff1590288000         call dword ptr [0x802890]
// 00512b8a  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512b8e  7205                 jb 0x512b95
// 00512b90  8b4500               mov eax, dword ptr [ebp]
// 00512b93  eb02                 jmp 0x512b97
// 00512b95  8bc5                 mov eax, ebp
// 00512b97  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00512b9b  51                   push ecx
// 00512b9c  8bce                 mov ecx, esi
// 00512b9e  e85dfcffff           call 0x512800
// 00512ba3  8b5604               mov edx, dword ptr [esi + 4]
// 00512ba6  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00512baa  0f8ce8010000         jl 0x512d98
// 00512bb0  807e3800             cmp byte ptr [esi + 0x38], 0
// 00512bb4  750b                 jne 0x512bc1
// 00512bb6  807e0800             cmp byte ptr [esi + 8], 0
// 00512bba  c644241300           mov byte ptr [esp + 0x13], 0
// 00512bbf  7505                 jne 0x512bc6
// 00512bc1  c644241301           mov byte ptr [esp + 0x13], 1
// 00512bc6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00512bc9  48                   dec eax
// 00512bca  33c9                 xor ecx, ecx
// 00512bcc  2b5650               sub edx, dword ptr [esi + 0x50]
// 00512bcf  743a                 je 0x512c0b
// 00512bd1  85c0                 test eax, eax
// 00512bd3  7636                 jbe 0x512c0b
// 00512bd5  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00512bd8  803c0720             cmp byte ptr [edi + eax], 0x20
// 00512bdc  750b                 jne 0x512be9
// 00512bde  807c241300           cmp byte ptr [esp + 0x13], 0
// 00512be3  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00512be7  7522                 jne 0x512c0b
// 00512be9  48                   dec eax
// 00512bea  41                   inc ecx
// 00512beb  803c0722             cmp byte ptr [edi + eax], 0x22
// 00512bef  7516                 jne 0x512c07
// 00512bf1  807e3800             cmp byte ptr [esi + 0x38], 0
// 00512bf5  750c                 jne 0x512c03
// 00512bf7  807c241300           cmp byte ptr [esp + 0x13], 0
// 00512bfc  0f94c3               sete bl
// 00512bff  885c2413             mov byte ptr [esp + 0x13], bl
// 00512c03  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00512c07  3bca                 cmp ecx, edx
// 00512c09  72c6                 jb 0x512bd1
// 00512c0b  3bca                 cmp ecx, edx
// 00512c0d  755d                 jne 0x512c6c
// 00512c0f  837e3402             cmp dword ptr [esi + 0x34], 2
// 00512c13  0f857f010000         jne 0x512d98
// 00512c19  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00512c1c  8d4e28               lea ecx, [esi + 0x28]
// 00512c1f  6a00                 push 0
// 00512c21  4a                   dec edx
// 00512c22  52                   push edx
// 00512c23  e868faffff           call 0x512690
// 00512c28  8bce                 mov ecx, esi
// 00512c2a  e851feffff           call 0x512a80
// 00512c2f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00512c33  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00512c36  7606                 jbe 0x512c3e
// 00512c38  ff1590288000         call dword ptr [0x802890]
// 00512c3e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512c42  7214                 jb 0x512c58
// 00512c44  8b4304               mov eax, dword ptr [ebx + 4]
// 00512c47  0fb60438             movzx eax, byte ptr [eax + edi]
// 00512c4b  50                   push eax
// 00512c4c  8bce                 mov ecx, esi
// 00512c4e  e8adfbffff           call 0x512800
// 00512c53  e940010000           jmp 0x512d98
// 00512c58  8d4304               lea eax, [ebx + 4]
// 00512c5b  0fb60438             movzx eax, byte ptr [eax + edi]
// 00512c5f  50                   push eax
// 00512c60  8bce                 mov ecx, esi
// 00512c62  e899fbffff           call 0x512800
// 00512c67  e92c010000           jmp 0x512d98
// 00512c6c  8be8                 mov ebp, eax
// 00512c6e  3bca                 cmp ecx, edx
// 00512c70  7315                 jae 0x512c87
// 00512c72  85ed                 test ebp, ebp
// 00512c74  760f                 jbe 0x512c85
// 00512c76  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00512c79  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 00512c7d  7506                 jne 0x512c85
// 00512c7f  41                   inc ecx
// 00512c80  4d                   dec ebp
// 00512c81  3bca                 cmp ecx, edx
// 00512c83  72ed                 jb 0x512c72
// 00512c85  3bca                 cmp ecx, edx
// 00512c87  7501                 jne 0x512c8a
// 00512c89  45                   inc ebp
// 00512c8a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00512c8d  8d51ff               lea edx, [ecx - 1]
// 00512c90  3bc2                 cmp eax, edx
// 00512c92  7567                 jne 0x512cfb
// 00512c94  6a01                 push 1
// 00512c96  45                   inc ebp
// 00512c97  55                   push ebp
// 00512c98  8d4e28               lea ecx, [esi + 0x28]
// 00512c9b  e8f0f9ffff           call 0x512690
// 00512ca0  8bce                 mov ecx, esi
// 00512ca2  e8d9fdffff           call 0x512a80
// 00512ca7  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512caa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00512cae  8d48ff               lea ecx, [eax - 1]
// 00512cb1  3bf9                 cmp edi, ecx
// 00512cb3  0f83df000000         jae 0x512d98
// 00512cb9  47                   inc edi
// 00512cba  8d9b00000000         lea ebx, [ebx]
// 00512cc0  3bf8                 cmp edi, eax
// 00512cc2  7606                 jbe 0x512cca
// 00512cc4  ff1590288000         call dword ptr [0x802890]
// 00512cca  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512cce  7205                 jb 0x512cd5
// 00512cd0  8b4304               mov eax, dword ptr [ebx + 4]
// 00512cd3  eb03                 jmp 0x512cd8
// 00512cd5  8d4304               lea eax, [ebx + 4]
// 00512cd8  803c0720             cmp byte ptr [edi + eax], 0x20
// 00512cdc  0f85b6000000         jne 0x512d98
// 00512ce2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00512ce6  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512ce9  41                   inc ecx
// 00512cea  8d50ff               lea edx, [eax - 1]
// 00512ced  47                   inc edi
// 00512cee  894c2414             mov dword ptr [esp + 0x14], ecx
// 00512cf2  3bca                 cmp ecx, edx
// 00512cf4  72ca                 jb 0x512cc0
// 00512cf6  e99d000000           jmp 0x512d98
// 00512cfb  33d2                 xor edx, edx
// 00512cfd  89542420             mov dword ptr [esp + 0x20], edx
// 00512d01  89542424             mov dword ptr [esp + 0x24], edx
// 00512d05  8954241c             mov dword ptr [esp + 0x1c], edx
// 00512d09  8d7801               lea edi, [eax + 1]
// 00512d0c  89542430             mov dword ptr [esp + 0x30], edx
// 00512d10  3bf9                 cmp edi, ecx
// 00512d12  732c                 jae 0x512d40
// 00512d14  8b4628               mov eax, dword ptr [esi + 0x28]
// 00512d17  8a0407               mov al, byte ptr [edi + eax]
// 00512d1a  88442413             mov byte ptr [esp + 0x13], al
// 00512d1e  3c22                 cmp al, 0x22
// 00512d20  750a                 jne 0x512d2c
// 00512d22  807e0800             cmp byte ptr [esi + 8], 0
// 00512d26  0f94c1               sete cl
// 00512d29  884e08               mov byte ptr [esi + 8], cl
// 00512d2c  8d542413             lea edx, [esp + 0x13]
// 00512d30  52                   push edx
// 00512d31  8d4c2420             lea ecx, [esp + 0x20]
// 00512d35  e856faffff           call 0x512790
// 00512d3a  47                   inc edi
// 00512d3b  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00512d3e  72d4                 jb 0x512d14
// 00512d40  6a01                 push 1
// 00512d42  45                   inc ebp
// 00512d43  55                   push ebp
// 00512d44  8d4e28               lea ecx, [esi + 0x28]
// 00512d47  e844f9ffff           call 0x512690
// 00512d4c  8bce                 mov ecx, esi
// 00512d4e  e82dfdffff           call 0x512a80
// 00512d53  33ed                 xor ebp, ebp
// 00512d55  33ff                 xor edi, edi
// 00512d57  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00512d5b  761a                 jbe 0x512d77
// 00512d5d  8d4900               lea ecx, [ecx]
// 00512d60  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00512d64  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00512d68  51                   push ecx
// 00512d69  8bce                 mov ecx, esi
// 00512d6b  e890faffff           call 0x512800
// 00512d70  47                   inc edi
// 00512d71  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00512d75  72e9                 jb 0x512d60
// 00512d77  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00512d7b  52                   push edx
// 00512d7c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00512d84  e8974fffff           call 0x507d20
// 00512d89  83c404               add esp, 4
// 00512d8c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00512d90  896c2420             mov dword ptr [esp + 0x20], ebp
// 00512d94  896c2424             mov dword ptr [esp + 0x24], ebp
// 00512d98  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00512d9c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512d9f  47                   inc edi
// 00512da0  897c2414             mov dword ptr [esp + 0x14], edi
// 00512da4  3bf8                 cmp edi, eax
// 00512da6  0f8272fdffff         jb 0x512b1e
// 00512dac  5f                   pop edi
// 00512dad  5e                   pop esi
// 00512dae  5d                   pop ebp
// 00512daf  5b                   pop ebx
// 00512db0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00512db4  64890d00000000       mov dword ptr fs:[0], ecx
// 00512dbb  83c424               add esp, 0x24
// 00512dbe  c20400               ret 4
// 00512dc1  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512dc4  33ff                 xor edi, edi
// 00512dc6  85c0                 test eax, eax
// 00512dc8  762e                 jbe 0x512df8
// 00512dca  8d6b04               lea ebp, [ebx + 4]
// 00512dcd  3bf8                 cmp edi, eax
// 00512dcf  7606                 jbe 0x512dd7
// 00512dd1  ff1590288000         call dword ptr [0x802890]
// 00512dd7  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512ddb  7205                 jb 0x512de2
// 00512ddd  8b4500               mov eax, dword ptr [ebp]
// 00512de0  eb02                 jmp 0x512de4
// 00512de2  8bc5                 mov eax, ebp
// 00512de4  0fb60438             movzx eax, byte ptr [eax + edi]
// 00512de8  50                   push eax
// 00512de9  8bce                 mov ecx, esi
// 00512deb  e810faffff           call 0x512800
// 00512df0  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512df3  47                   inc edi
// 00512df4  3bf8                 cmp edi, eax
// 00512df6  72df                 jb 0x512dd7
// 00512df8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00512dfc  5f                   pop edi
// 00512dfd  5e                   pop esi
// 00512dfe  5d                   pop ebp
// 00512dff  5b                   pop ebx
// 00512e00  64890d00000000       mov dword ptr fs:[0], ecx
// 00512e07  83c424               add esp, 0x24
// 00512e0a  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
