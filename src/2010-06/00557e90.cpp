// from server: 100% by auto
// roc 2010-06 00557e90  unit: seg_00550000  size: 845 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557e90
//
// 00557e90  6aff                 push -1
// 00557e92  64a100000000         mov eax, dword ptr fs:[0]
// 00557e98  68e8829a00           push 0x9a82e8
// 00557e9d  50                   push eax
// 00557e9e  64892500000000       mov dword ptr fs:[0], esp
// 00557ea5  83ec18               sub esp, 0x18
// 00557ea8  53                   push ebx
// 00557ea9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00557ead  55                   push ebp
// 00557eae  56                   push esi
// 00557eaf  8bf1                 mov esi, ecx
// 00557eb1  837e3400             cmp dword ptr [esi + 0x34], 0
// 00557eb5  57                   push edi
// 00557eb6  0f84d5020000         je 0x558191
// 00557ebc  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00557ebf  8b5604               mov edx, dword ptr [esi + 4]
// 00557ec2  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00557ec5  03d0                 add edx, eax
// 00557ec7  3bd1                 cmp edx, ecx
// 00557ec9  0f8ec2020000         jle 0x558191
// 00557ecf  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 00557ed2  33ff                 xor edi, edi
// 00557ed4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00557ed8  897c2414             mov dword ptr [esp + 0x14], edi
// 00557edc  85c0                 test eax, eax
// 00557ede  0f86e4020000         jbe 0x5581c8
// 00557ee4  3bf8                 cmp edi, eax
// 00557ee6  7606                 jbe 0x557eee
// 00557ee8  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557eee  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557ef2  8d6b04               lea ebp, [ebx + 4]
// 00557ef5  7205                 jb 0x557efc
// 00557ef7  8b4500               mov eax, dword ptr [ebp]
// 00557efa  eb02                 jmp 0x557efe
// 00557efc  8bc5                 mov eax, ebp
// 00557efe  0fb60438             movzx eax, byte ptr [eax + edi]
// 00557f02  50                   push eax
// 00557f03  8bce                 mov ecx, esi
// 00557f05  e8c6fcffff           call 0x557bd0
// 00557f0a  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00557f0d  7606                 jbe 0x557f15
// 00557f0f  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557f15  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557f19  7205                 jb 0x557f20
// 00557f1b  8b4500               mov eax, dword ptr [ebp]
// 00557f1e  eb02                 jmp 0x557f22
// 00557f20  8bc5                 mov eax, ebp
// 00557f22  803c380d             cmp byte ptr [eax + edi], 0xd
// 00557f26  754b                 jne 0x557f73
// 00557f28  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00557f2b  47                   inc edi
// 00557f2c  3bf8                 cmp edi, eax
// 00557f2e  7343                 jae 0x557f73
// 00557f30  7606                 jbe 0x557f38
// 00557f32  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557f38  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557f3c  7205                 jb 0x557f43
// 00557f3e  8b4500               mov eax, dword ptr [ebp]
// 00557f41  eb02                 jmp 0x557f45
// 00557f43  8bc5                 mov eax, ebp
// 00557f45  803c380a             cmp byte ptr [eax + edi], 0xa
// 00557f49  7528                 jne 0x557f73
// 00557f4b  897c2414             mov dword ptr [esp + 0x14], edi
// 00557f4f  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00557f52  7606                 jbe 0x557f5a
// 00557f54  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557f5a  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557f5e  7205                 jb 0x557f65
// 00557f60  8b4500               mov eax, dword ptr [ebp]
// 00557f63  eb02                 jmp 0x557f67
// 00557f65  8bc5                 mov eax, ebp
// 00557f67  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00557f6b  51                   push ecx
// 00557f6c  8bce                 mov ecx, esi
// 00557f6e  e85dfcffff           call 0x557bd0
// 00557f73  8b5604               mov edx, dword ptr [esi + 4]
// 00557f76  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00557f7a  0f8ce8010000         jl 0x558168
// 00557f80  807e3800             cmp byte ptr [esi + 0x38], 0
// 00557f84  750b                 jne 0x557f91
// 00557f86  807e0800             cmp byte ptr [esi + 8], 0
// 00557f8a  c644241300           mov byte ptr [esp + 0x13], 0
// 00557f8f  7505                 jne 0x557f96
// 00557f91  c644241301           mov byte ptr [esp + 0x13], 1
// 00557f96  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00557f99  48                   dec eax
// 00557f9a  33c9                 xor ecx, ecx
// 00557f9c  2b5650               sub edx, dword ptr [esi + 0x50]
// 00557f9f  743a                 je 0x557fdb
// 00557fa1  85c0                 test eax, eax
// 00557fa3  7636                 jbe 0x557fdb
// 00557fa5  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00557fa8  803c0720             cmp byte ptr [edi + eax], 0x20
// 00557fac  750b                 jne 0x557fb9
// 00557fae  807c241300           cmp byte ptr [esp + 0x13], 0
// 00557fb3  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00557fb7  7522                 jne 0x557fdb
// 00557fb9  48                   dec eax
// 00557fba  41                   inc ecx
// 00557fbb  803c0722             cmp byte ptr [edi + eax], 0x22
// 00557fbf  7516                 jne 0x557fd7
// 00557fc1  807e3800             cmp byte ptr [esi + 0x38], 0
// 00557fc5  750c                 jne 0x557fd3
// 00557fc7  807c241300           cmp byte ptr [esp + 0x13], 0
// 00557fcc  0f94c3               sete bl
// 00557fcf  885c2413             mov byte ptr [esp + 0x13], bl
// 00557fd3  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00557fd7  3bca                 cmp ecx, edx
// 00557fd9  72c6                 jb 0x557fa1
// 00557fdb  3bca                 cmp ecx, edx
// 00557fdd  755d                 jne 0x55803c
// 00557fdf  837e3402             cmp dword ptr [esi + 0x34], 2
// 00557fe3  0f857f010000         jne 0x558168
// 00557fe9  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00557fec  8d4e28               lea ecx, [esi + 0x28]
// 00557fef  6a00                 push 0
// 00557ff1  4a                   dec edx
// 00557ff2  52                   push edx
// 00557ff3  e878faffff           call 0x557a70
// 00557ff8  8bce                 mov ecx, esi
// 00557ffa  e851feffff           call 0x557e50
// 00557fff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00558003  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00558006  7606                 jbe 0x55800e
// 00558008  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055800e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00558012  7214                 jb 0x558028
// 00558014  8b4304               mov eax, dword ptr [ebx + 4]
// 00558017  0fb60438             movzx eax, byte ptr [eax + edi]
// 0055801b  50                   push eax
// 0055801c  8bce                 mov ecx, esi
// 0055801e  e8adfbffff           call 0x557bd0
// 00558023  e940010000           jmp 0x558168
// 00558028  8d4304               lea eax, [ebx + 4]
// 0055802b  0fb60438             movzx eax, byte ptr [eax + edi]
// 0055802f  50                   push eax
// 00558030  8bce                 mov ecx, esi
// 00558032  e899fbffff           call 0x557bd0
// 00558037  e92c010000           jmp 0x558168
// 0055803c  8be8                 mov ebp, eax
// 0055803e  3bca                 cmp ecx, edx
// 00558040  7315                 jae 0x558057
// 00558042  85ed                 test ebp, ebp
// 00558044  760f                 jbe 0x558055
// 00558046  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00558049  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 0055804d  7506                 jne 0x558055
// 0055804f  41                   inc ecx
// 00558050  4d                   dec ebp
// 00558051  3bca                 cmp ecx, edx
// 00558053  72ed                 jb 0x558042
// 00558055  3bca                 cmp ecx, edx
// 00558057  7501                 jne 0x55805a
// 00558059  45                   inc ebp
// 0055805a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055805d  8d51ff               lea edx, [ecx - 1]
// 00558060  3bc2                 cmp eax, edx
// 00558062  7567                 jne 0x5580cb
// 00558064  6a01                 push 1
// 00558066  45                   inc ebp
// 00558067  55                   push ebp
// 00558068  8d4e28               lea ecx, [esi + 0x28]
// 0055806b  e800faffff           call 0x557a70
// 00558070  8bce                 mov ecx, esi
// 00558072  e8d9fdffff           call 0x557e50
// 00558077  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0055807a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055807e  8d48ff               lea ecx, [eax - 1]
// 00558081  3bf9                 cmp edi, ecx
// 00558083  0f83df000000         jae 0x558168
// 00558089  47                   inc edi
// 0055808a  8d9b00000000         lea ebx, [ebx]
// 00558090  3bf8                 cmp edi, eax
// 00558092  7606                 jbe 0x55809a
// 00558094  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055809a  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0055809e  7205                 jb 0x5580a5
// 005580a0  8b4304               mov eax, dword ptr [ebx + 4]
// 005580a3  eb03                 jmp 0x5580a8
// 005580a5  8d4304               lea eax, [ebx + 4]
// 005580a8  803c0720             cmp byte ptr [edi + eax], 0x20
// 005580ac  0f85b6000000         jne 0x558168
// 005580b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005580b6  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005580b9  41                   inc ecx
// 005580ba  8d50ff               lea edx, [eax - 1]
// 005580bd  47                   inc edi
// 005580be  894c2414             mov dword ptr [esp + 0x14], ecx
// 005580c2  3bca                 cmp ecx, edx
// 005580c4  72ca                 jb 0x558090
// 005580c6  e99d000000           jmp 0x558168
// 005580cb  33d2                 xor edx, edx
// 005580cd  89542420             mov dword ptr [esp + 0x20], edx
// 005580d1  89542424             mov dword ptr [esp + 0x24], edx
// 005580d5  8954241c             mov dword ptr [esp + 0x1c], edx
// 005580d9  8d7801               lea edi, [eax + 1]
// 005580dc  89542430             mov dword ptr [esp + 0x30], edx
// 005580e0  3bf9                 cmp edi, ecx
// 005580e2  732c                 jae 0x558110
// 005580e4  8b4628               mov eax, dword ptr [esi + 0x28]
// 005580e7  8a0407               mov al, byte ptr [edi + eax]
// 005580ea  88442413             mov byte ptr [esp + 0x13], al
// 005580ee  3c22                 cmp al, 0x22
// 005580f0  750a                 jne 0x5580fc
// 005580f2  807e0800             cmp byte ptr [esi + 8], 0
// 005580f6  0f94c1               sete cl
// 005580f9  884e08               mov byte ptr [esi + 8], cl
// 005580fc  8d542413             lea edx, [esp + 0x13]
// 00558100  52                   push edx
// 00558101  8d4c2420             lea ecx, [esp + 0x20]
// 00558105  e856faffff           call 0x557b60
// 0055810a  47                   inc edi
// 0055810b  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0055810e  72d4                 jb 0x5580e4
// 00558110  6a01                 push 1
// 00558112  45                   inc ebp
// 00558113  55                   push ebp
// 00558114  8d4e28               lea ecx, [esi + 0x28]
// 00558117  e854f9ffff           call 0x557a70
// 0055811c  8bce                 mov ecx, esi
// 0055811e  e82dfdffff           call 0x557e50
// 00558123  33ed                 xor ebp, ebp
// 00558125  33ff                 xor edi, edi
// 00558127  396c2420             cmp dword ptr [esp + 0x20], ebp
// 0055812b  761a                 jbe 0x558147
// 0055812d  8d4900               lea ecx, [ecx]
// 00558130  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00558134  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00558138  51                   push ecx
// 00558139  8bce                 mov ecx, esi
// 0055813b  e890faffff           call 0x557bd0
// 00558140  47                   inc edi
// 00558141  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00558145  72e9                 jb 0x558130
// 00558147  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0055814b  52                   push edx
// 0055814c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00558154  e86758ffff           call 0x54d9c0
// 00558159  83c404               add esp, 4
// 0055815c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00558160  896c2420             mov dword ptr [esp + 0x20], ebp
// 00558164  896c2424             mov dword ptr [esp + 0x24], ebp
// 00558168  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055816c  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0055816f  47                   inc edi
// 00558170  897c2414             mov dword ptr [esp + 0x14], edi
// 00558174  3bf8                 cmp edi, eax
// 00558176  0f8272fdffff         jb 0x557eee
// 0055817c  5f                   pop edi
// 0055817d  5e                   pop esi
// 0055817e  5d                   pop ebp
// 0055817f  5b                   pop ebx
// 00558180  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558184  64890d00000000       mov dword ptr fs:[0], ecx
// 0055818b  83c424               add esp, 0x24
// 0055818e  c20400               ret 4
// 00558191  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00558194  33ff                 xor edi, edi
// 00558196  85c0                 test eax, eax
// 00558198  762e                 jbe 0x5581c8
// 0055819a  8d6b04               lea ebp, [ebx + 4]
// 0055819d  3bf8                 cmp edi, eax
// 0055819f  7606                 jbe 0x5581a7
// 005581a1  ff150ca99e00         call dword ptr [0x9ea90c]
// 005581a7  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005581ab  7205                 jb 0x5581b2
// 005581ad  8b4500               mov eax, dword ptr [ebp]
// 005581b0  eb02                 jmp 0x5581b4
// 005581b2  8bc5                 mov eax, ebp
// 005581b4  0fb60438             movzx eax, byte ptr [eax + edi]
// 005581b8  50                   push eax
// 005581b9  8bce                 mov ecx, esi
// 005581bb  e810faffff           call 0x557bd0
// 005581c0  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005581c3  47                   inc edi
// 005581c4  3bf8                 cmp edi, eax
// 005581c6  72df                 jb 0x5581a7
// 005581c8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005581cc  5f                   pop edi
// 005581cd  5e                   pop esi
// 005581ce  5d                   pop ebp
// 005581cf  5b                   pop ebx
// 005581d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005581d7  83c424               add esp, 0x24
// 005581da  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
