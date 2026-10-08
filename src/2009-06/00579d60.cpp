// from server: 100% by auto
// roc 2009-06 00579d60  unit: G3D::LineSegment  size: 845 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579d60
//
// 00579d60  6aff                 push -1
// 00579d62  64a100000000         mov eax, dword ptr fs:[0]
// 00579d68  6848098600           push 0x860948
// 00579d6d  50                   push eax
// 00579d6e  64892500000000       mov dword ptr fs:[0], esp
// 00579d75  83ec18               sub esp, 0x18
// 00579d78  53                   push ebx
// 00579d79  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00579d7d  55                   push ebp
// 00579d7e  56                   push esi
// 00579d7f  8bf1                 mov esi, ecx
// 00579d81  837e3400             cmp dword ptr [esi + 0x34], 0
// 00579d85  57                   push edi
// 00579d86  0f84d5020000         je 0x57a061
// 00579d8c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00579d8f  8b5604               mov edx, dword ptr [esi + 4]
// 00579d92  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00579d95  03d0                 add edx, eax
// 00579d97  3bd1                 cmp edx, ecx
// 00579d99  0f8ec2020000         jle 0x57a061
// 00579d9f  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 00579da2  33ff                 xor edi, edi
// 00579da4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00579da8  897c2414             mov dword ptr [esp + 0x14], edi
// 00579dac  85c0                 test eax, eax
// 00579dae  0f86e4020000         jbe 0x57a098
// 00579db4  3bf8                 cmp edi, eax
// 00579db6  7606                 jbe 0x579dbe
// 00579db8  ff15ace98900         call dword ptr [0x89e9ac]
// 00579dbe  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579dc2  8d6b04               lea ebp, [ebx + 4]
// 00579dc5  7205                 jb 0x579dcc
// 00579dc7  8b4500               mov eax, dword ptr [ebp]
// 00579dca  eb02                 jmp 0x579dce
// 00579dcc  8bc5                 mov eax, ebp
// 00579dce  0fb60438             movzx eax, byte ptr [eax + edi]
// 00579dd2  50                   push eax
// 00579dd3  8bce                 mov ecx, esi
// 00579dd5  e8c6fcffff           call 0x579aa0
// 00579dda  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00579ddd  7606                 jbe 0x579de5
// 00579ddf  ff15ace98900         call dword ptr [0x89e9ac]
// 00579de5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579de9  7205                 jb 0x579df0
// 00579deb  8b4500               mov eax, dword ptr [ebp]
// 00579dee  eb02                 jmp 0x579df2
// 00579df0  8bc5                 mov eax, ebp
// 00579df2  803c380d             cmp byte ptr [eax + edi], 0xd
// 00579df6  754b                 jne 0x579e43
// 00579df8  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00579dfb  47                   inc edi
// 00579dfc  3bf8                 cmp edi, eax
// 00579dfe  7343                 jae 0x579e43
// 00579e00  7606                 jbe 0x579e08
// 00579e02  ff15ace98900         call dword ptr [0x89e9ac]
// 00579e08  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579e0c  7205                 jb 0x579e13
// 00579e0e  8b4500               mov eax, dword ptr [ebp]
// 00579e11  eb02                 jmp 0x579e15
// 00579e13  8bc5                 mov eax, ebp
// 00579e15  803c380a             cmp byte ptr [eax + edi], 0xa
// 00579e19  7528                 jne 0x579e43
// 00579e1b  897c2414             mov dword ptr [esp + 0x14], edi
// 00579e1f  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00579e22  7606                 jbe 0x579e2a
// 00579e24  ff15ace98900         call dword ptr [0x89e9ac]
// 00579e2a  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579e2e  7205                 jb 0x579e35
// 00579e30  8b4500               mov eax, dword ptr [ebp]
// 00579e33  eb02                 jmp 0x579e37
// 00579e35  8bc5                 mov eax, ebp
// 00579e37  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00579e3b  51                   push ecx
// 00579e3c  8bce                 mov ecx, esi
// 00579e3e  e85dfcffff           call 0x579aa0
// 00579e43  8b5604               mov edx, dword ptr [esi + 4]
// 00579e46  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00579e4a  0f8ce8010000         jl 0x57a038
// 00579e50  807e3800             cmp byte ptr [esi + 0x38], 0
// 00579e54  750b                 jne 0x579e61
// 00579e56  807e0800             cmp byte ptr [esi + 8], 0
// 00579e5a  c644241300           mov byte ptr [esp + 0x13], 0
// 00579e5f  7505                 jne 0x579e66
// 00579e61  c644241301           mov byte ptr [esp + 0x13], 1
// 00579e66  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00579e69  48                   dec eax
// 00579e6a  33c9                 xor ecx, ecx
// 00579e6c  2b5650               sub edx, dword ptr [esi + 0x50]
// 00579e6f  743a                 je 0x579eab
// 00579e71  85c0                 test eax, eax
// 00579e73  7636                 jbe 0x579eab
// 00579e75  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00579e78  803c0720             cmp byte ptr [edi + eax], 0x20
// 00579e7c  750b                 jne 0x579e89
// 00579e7e  807c241300           cmp byte ptr [esp + 0x13], 0
// 00579e83  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00579e87  7522                 jne 0x579eab
// 00579e89  48                   dec eax
// 00579e8a  41                   inc ecx
// 00579e8b  803c0722             cmp byte ptr [edi + eax], 0x22
// 00579e8f  7516                 jne 0x579ea7
// 00579e91  807e3800             cmp byte ptr [esi + 0x38], 0
// 00579e95  750c                 jne 0x579ea3
// 00579e97  807c241300           cmp byte ptr [esp + 0x13], 0
// 00579e9c  0f94c3               sete bl
// 00579e9f  885c2413             mov byte ptr [esp + 0x13], bl
// 00579ea3  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00579ea7  3bca                 cmp ecx, edx
// 00579ea9  72c6                 jb 0x579e71
// 00579eab  3bca                 cmp ecx, edx
// 00579ead  755d                 jne 0x579f0c
// 00579eaf  837e3402             cmp dword ptr [esi + 0x34], 2
// 00579eb3  0f857f010000         jne 0x57a038
// 00579eb9  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00579ebc  8d4e28               lea ecx, [esi + 0x28]
// 00579ebf  6a00                 push 0
// 00579ec1  4a                   dec edx
// 00579ec2  52                   push edx
// 00579ec3  e868faffff           call 0x579930
// 00579ec8  8bce                 mov ecx, esi
// 00579eca  e851feffff           call 0x579d20
// 00579ecf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00579ed3  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00579ed6  7606                 jbe 0x579ede
// 00579ed8  ff15ace98900         call dword ptr [0x89e9ac]
// 00579ede  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579ee2  7214                 jb 0x579ef8
// 00579ee4  8b4304               mov eax, dword ptr [ebx + 4]
// 00579ee7  0fb60438             movzx eax, byte ptr [eax + edi]
// 00579eeb  50                   push eax
// 00579eec  8bce                 mov ecx, esi
// 00579eee  e8adfbffff           call 0x579aa0
// 00579ef3  e940010000           jmp 0x57a038
// 00579ef8  8d4304               lea eax, [ebx + 4]
// 00579efb  0fb60438             movzx eax, byte ptr [eax + edi]
// 00579eff  50                   push eax
// 00579f00  8bce                 mov ecx, esi
// 00579f02  e899fbffff           call 0x579aa0
// 00579f07  e92c010000           jmp 0x57a038
// 00579f0c  8be8                 mov ebp, eax
// 00579f0e  3bca                 cmp ecx, edx
// 00579f10  7315                 jae 0x579f27
// 00579f12  85ed                 test ebp, ebp
// 00579f14  760f                 jbe 0x579f25
// 00579f16  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00579f19  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 00579f1d  7506                 jne 0x579f25
// 00579f1f  41                   inc ecx
// 00579f20  4d                   dec ebp
// 00579f21  3bca                 cmp ecx, edx
// 00579f23  72ed                 jb 0x579f12
// 00579f25  3bca                 cmp ecx, edx
// 00579f27  7501                 jne 0x579f2a
// 00579f29  45                   inc ebp
// 00579f2a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00579f2d  8d51ff               lea edx, [ecx - 1]
// 00579f30  3bc2                 cmp eax, edx
// 00579f32  7567                 jne 0x579f9b
// 00579f34  6a01                 push 1
// 00579f36  45                   inc ebp
// 00579f37  55                   push ebp
// 00579f38  8d4e28               lea ecx, [esi + 0x28]
// 00579f3b  e8f0f9ffff           call 0x579930
// 00579f40  8bce                 mov ecx, esi
// 00579f42  e8d9fdffff           call 0x579d20
// 00579f47  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00579f4a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00579f4e  8d48ff               lea ecx, [eax - 1]
// 00579f51  3bf9                 cmp edi, ecx
// 00579f53  0f83df000000         jae 0x57a038
// 00579f59  47                   inc edi
// 00579f5a  8d9b00000000         lea ebx, [ebx]
// 00579f60  3bf8                 cmp edi, eax
// 00579f62  7606                 jbe 0x579f6a
// 00579f64  ff15ace98900         call dword ptr [0x89e9ac]
// 00579f6a  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00579f6e  7205                 jb 0x579f75
// 00579f70  8b4304               mov eax, dword ptr [ebx + 4]
// 00579f73  eb03                 jmp 0x579f78
// 00579f75  8d4304               lea eax, [ebx + 4]
// 00579f78  803c0720             cmp byte ptr [edi + eax], 0x20
// 00579f7c  0f85b6000000         jne 0x57a038
// 00579f82  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579f86  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00579f89  41                   inc ecx
// 00579f8a  8d50ff               lea edx, [eax - 1]
// 00579f8d  47                   inc edi
// 00579f8e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00579f92  3bca                 cmp ecx, edx
// 00579f94  72ca                 jb 0x579f60
// 00579f96  e99d000000           jmp 0x57a038
// 00579f9b  33d2                 xor edx, edx
// 00579f9d  89542420             mov dword ptr [esp + 0x20], edx
// 00579fa1  89542424             mov dword ptr [esp + 0x24], edx
// 00579fa5  8954241c             mov dword ptr [esp + 0x1c], edx
// 00579fa9  8d7801               lea edi, [eax + 1]
// 00579fac  89542430             mov dword ptr [esp + 0x30], edx
// 00579fb0  3bf9                 cmp edi, ecx
// 00579fb2  732c                 jae 0x579fe0
// 00579fb4  8b4628               mov eax, dword ptr [esi + 0x28]
// 00579fb7  8a0407               mov al, byte ptr [edi + eax]
// 00579fba  88442413             mov byte ptr [esp + 0x13], al
// 00579fbe  3c22                 cmp al, 0x22
// 00579fc0  750a                 jne 0x579fcc
// 00579fc2  807e0800             cmp byte ptr [esi + 8], 0
// 00579fc6  0f94c1               sete cl
// 00579fc9  884e08               mov byte ptr [esi + 8], cl
// 00579fcc  8d542413             lea edx, [esp + 0x13]
// 00579fd0  52                   push edx
// 00579fd1  8d4c2420             lea ecx, [esp + 0x20]
// 00579fd5  e856faffff           call 0x579a30
// 00579fda  47                   inc edi
// 00579fdb  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00579fde  72d4                 jb 0x579fb4
// 00579fe0  6a01                 push 1
// 00579fe2  45                   inc ebp
// 00579fe3  55                   push ebp
// 00579fe4  8d4e28               lea ecx, [esi + 0x28]
// 00579fe7  e844f9ffff           call 0x579930
// 00579fec  8bce                 mov ecx, esi
// 00579fee  e82dfdffff           call 0x579d20
// 00579ff3  33ed                 xor ebp, ebp
// 00579ff5  33ff                 xor edi, edi
// 00579ff7  396c2420             cmp dword ptr [esp + 0x20], ebp
// 00579ffb  761a                 jbe 0x57a017
// 00579ffd  8d4900               lea ecx, [ecx]
// 0057a000  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057a004  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 0057a008  51                   push ecx
// 0057a009  8bce                 mov ecx, esi
// 0057a00b  e890faffff           call 0x579aa0
// 0057a010  47                   inc edi
// 0057a011  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0057a015  72e9                 jb 0x57a000
// 0057a017  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057a01b  52                   push edx
// 0057a01c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0057a024  e86712ffff           call 0x56b290
// 0057a029  83c404               add esp, 4
// 0057a02c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057a030  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057a034  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057a038  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057a03c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057a03f  47                   inc edi
// 0057a040  897c2414             mov dword ptr [esp + 0x14], edi
// 0057a044  3bf8                 cmp edi, eax
// 0057a046  0f8272fdffff         jb 0x579dbe
// 0057a04c  5f                   pop edi
// 0057a04d  5e                   pop esi
// 0057a04e  5d                   pop ebp
// 0057a04f  5b                   pop ebx
// 0057a050  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057a054  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a05b  83c424               add esp, 0x24
// 0057a05e  c20400               ret 4
// 0057a061  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057a064  33ff                 xor edi, edi
// 0057a066  85c0                 test eax, eax
// 0057a068  762e                 jbe 0x57a098
// 0057a06a  8d6b04               lea ebp, [ebx + 4]
// 0057a06d  3bf8                 cmp edi, eax
// 0057a06f  7606                 jbe 0x57a077
// 0057a071  ff15ace98900         call dword ptr [0x89e9ac]
// 0057a077  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0057a07b  7205                 jb 0x57a082
// 0057a07d  8b4500               mov eax, dword ptr [ebp]
// 0057a080  eb02                 jmp 0x57a084
// 0057a082  8bc5                 mov eax, ebp
// 0057a084  0fb60438             movzx eax, byte ptr [eax + edi]
// 0057a088  50                   push eax
// 0057a089  8bce                 mov ecx, esi
// 0057a08b  e810faffff           call 0x579aa0
// 0057a090  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057a093  47                   inc edi
// 0057a094  3bf8                 cmp edi, eax
// 0057a096  72df                 jb 0x57a077
// 0057a098  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057a09c  5f                   pop edi
// 0057a09d  5e                   pop esi
// 0057a09e  5d                   pop ebp
// 0057a09f  5b                   pop ebx
// 0057a0a0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a0a7  83c424               add esp, 0x24
// 0057a0aa  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
