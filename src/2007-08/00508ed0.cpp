// roc 2007-08 00508ed0  unit: G3D::GCamera  size: 870 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508ed0
//
// 00508ed0  6aff                 push -1
// 00508ed2  68d8fa7400           push 0x74fad8
// 00508ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00508edd  50                   push eax
// 00508ede  83ec18               sub esp, 0x18
// 00508ee1  53                   push ebx
// 00508ee2  55                   push ebp
// 00508ee3  56                   push esi
// 00508ee4  57                   push edi
// 00508ee5  a188518b00           mov eax, dword ptr [0x8b5188]
// 00508eea  33c4                 xor eax, esp
// 00508eec  50                   push eax
// 00508eed  8d44242c             lea eax, [esp + 0x2c]
// 00508ef1  64a300000000         mov dword ptr fs:[0], eax
// 00508ef7  8bf1                 mov esi, ecx
// 00508ef9  837e3400             cmp dword ptr [esi + 0x34], 0
// 00508efd  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00508f01  0f84e0020000         je 0x5091e7
// 00508f07  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00508f0a  8b5604               mov edx, dword ptr [esi + 4]
// 00508f0d  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00508f10  03d0                 add edx, eax
// 00508f12  3bd1                 cmp edx, ecx
// 00508f14  0f8ecd020000         jle 0x5091e7
// 00508f1a  2b4e50               sub ecx, dword ptr [esi + 0x50]
// 00508f1d  33ff                 xor edi, edi
// 00508f1f  85c0                 test eax, eax
// 00508f21  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00508f25  897c2418             mov dword ptr [esp + 0x18], edi
// 00508f29  0f86f1020000         jbe 0x509220
// 00508f2f  3bf8                 cmp edi, eax
// 00508f31  7606                 jbe 0x508f39
// 00508f33  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508f39  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00508f3d  8d6b04               lea ebp, [ebx + 4]
// 00508f40  7205                 jb 0x508f47
// 00508f42  8b4500               mov eax, dword ptr [ebp]
// 00508f45  eb02                 jmp 0x508f49
// 00508f47  8bc5                 mov eax, ebp
// 00508f49  0fb60438             movzx eax, byte ptr [eax + edi]
// 00508f4d  50                   push eax
// 00508f4e  8bce                 mov ecx, esi
// 00508f50  e82bfdffff           call 0x508c80
// 00508f55  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00508f58  7606                 jbe 0x508f60
// 00508f5a  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508f60  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00508f64  7205                 jb 0x508f6b
// 00508f66  8b4500               mov eax, dword ptr [ebp]
// 00508f69  eb02                 jmp 0x508f6d
// 00508f6b  8bc5                 mov eax, ebp
// 00508f6d  803c380d             cmp byte ptr [eax + edi], 0xd
// 00508f71  754d                 jne 0x508fc0
// 00508f73  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00508f76  83c701               add edi, 1
// 00508f79  3bf8                 cmp edi, eax
// 00508f7b  7343                 jae 0x508fc0
// 00508f7d  7606                 jbe 0x508f85
// 00508f7f  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508f85  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00508f89  7205                 jb 0x508f90
// 00508f8b  8b4500               mov eax, dword ptr [ebp]
// 00508f8e  eb02                 jmp 0x508f92
// 00508f90  8bc5                 mov eax, ebp
// 00508f92  803c380a             cmp byte ptr [eax + edi], 0xa
// 00508f96  7528                 jne 0x508fc0
// 00508f98  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 00508f9b  897c2418             mov dword ptr [esp + 0x18], edi
// 00508f9f  7606                 jbe 0x508fa7
// 00508fa1  ff15d8e67700         call dword ptr [0x77e6d8]
// 00508fa7  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00508fab  7205                 jb 0x508fb2
// 00508fad  8b4500               mov eax, dword ptr [ebp]
// 00508fb0  eb02                 jmp 0x508fb4
// 00508fb2  8bc5                 mov eax, ebp
// 00508fb4  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 00508fb8  51                   push ecx
// 00508fb9  8bce                 mov ecx, esi
// 00508fbb  e8c0fcffff           call 0x508c80
// 00508fc0  8b5604               mov edx, dword ptr [esi + 4]
// 00508fc3  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00508fc7  0f8c02020000         jl 0x5091cf
// 00508fcd  807e3800             cmp byte ptr [esi + 0x38], 0
// 00508fd1  750b                 jne 0x508fde
// 00508fd3  807e0800             cmp byte ptr [esi + 8], 0
// 00508fd7  c644241700           mov byte ptr [esp + 0x17], 0
// 00508fdc  7505                 jne 0x508fe3
// 00508fde  c644241701           mov byte ptr [esp + 0x17], 1
// 00508fe3  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00508fe6  83c0ff               add eax, -1
// 00508fe9  33c9                 xor ecx, ecx
// 00508feb  2b5650               sub edx, dword ptr [esi + 0x50]
// 00508fee  743e                 je 0x50902e
// 00508ff0  85c0                 test eax, eax
// 00508ff2  763a                 jbe 0x50902e
// 00508ff4  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00508ff7  803c0720             cmp byte ptr [edi + eax], 0x20
// 00508ffb  750b                 jne 0x509008
// 00508ffd  807c241700           cmp byte ptr [esp + 0x17], 0
// 00509002  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00509006  7526                 jne 0x50902e
// 00509008  83e801               sub eax, 1
// 0050900b  83c101               add ecx, 1
// 0050900e  803c0722             cmp byte ptr [edi + eax], 0x22
// 00509012  7516                 jne 0x50902a
// 00509014  807e3800             cmp byte ptr [esi + 0x38], 0
// 00509018  750c                 jne 0x509026
// 0050901a  807c241700           cmp byte ptr [esp + 0x17], 0
// 0050901f  0f94c3               sete bl
// 00509022  885c2417             mov byte ptr [esp + 0x17], bl
// 00509026  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0050902a  3bca                 cmp ecx, edx
// 0050902c  72c2                 jb 0x508ff0
// 0050902e  3bca                 cmp ecx, edx
// 00509030  755f                 jne 0x509091
// 00509032  837e3402             cmp dword ptr [esi + 0x34], 2
// 00509036  0f8593010000         jne 0x5091cf
// 0050903c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0050903f  8d4e28               lea ecx, [esi + 0x28]
// 00509042  6a00                 push 0
// 00509044  83ea01               sub edx, 1
// 00509047  52                   push edx
// 00509048  e8b3faffff           call 0x508b00
// 0050904d  8bce                 mov ecx, esi
// 0050904f  e83cfeffff           call 0x508e90
// 00509054  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00509058  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 0050905b  7606                 jbe 0x509063
// 0050905d  ff15d8e67700         call dword ptr [0x77e6d8]
// 00509063  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00509067  7214                 jb 0x50907d
// 00509069  8b4304               mov eax, dword ptr [ebx + 4]
// 0050906c  0fb60438             movzx eax, byte ptr [eax + edi]
// 00509070  50                   push eax
// 00509071  8bce                 mov ecx, esi
// 00509073  e808fcffff           call 0x508c80
// 00509078  e952010000           jmp 0x5091cf
// 0050907d  8d4304               lea eax, [ebx + 4]
// 00509080  0fb60438             movzx eax, byte ptr [eax + edi]
// 00509084  50                   push eax
// 00509085  8bce                 mov ecx, esi
// 00509087  e8f4fbffff           call 0x508c80
// 0050908c  e93e010000           jmp 0x5091cf
// 00509091  3bca                 cmp ecx, edx
// 00509093  8be8                 mov ebp, eax
// 00509095  7319                 jae 0x5090b0
// 00509097  85ed                 test ebp, ebp
// 00509099  7613                 jbe 0x5090ae
// 0050909b  8b7e28               mov edi, dword ptr [esi + 0x28]
// 0050909e  803c2f20             cmp byte ptr [edi + ebp], 0x20
// 005090a2  750a                 jne 0x5090ae
// 005090a4  83c101               add ecx, 1
// 005090a7  83ed01               sub ebp, 1
// 005090aa  3bca                 cmp ecx, edx
// 005090ac  72e9                 jb 0x509097
// 005090ae  3bca                 cmp ecx, edx
// 005090b0  7503                 jne 0x5090b5
// 005090b2  83c501               add ebp, 1
// 005090b5  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005090b8  8d51ff               lea edx, [ecx - 1]
// 005090bb  3bc2                 cmp eax, edx
// 005090bd  7570                 jne 0x50912f
// 005090bf  6a01                 push 1
// 005090c1  83c501               add ebp, 1
// 005090c4  55                   push ebp
// 005090c5  8d4e28               lea ecx, [esi + 0x28]
// 005090c8  e833faffff           call 0x508b00
// 005090cd  8bce                 mov ecx, esi
// 005090cf  e8bcfdffff           call 0x508e90
// 005090d4  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005090d7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005090db  8d48ff               lea ecx, [eax - 1]
// 005090de  3bf9                 cmp edi, ecx
// 005090e0  0f83e9000000         jae 0x5091cf
// 005090e6  83c701               add edi, 1
// 005090e9  8da42400000000       lea esp, [esp]
// 005090f0  3bf8                 cmp edi, eax
// 005090f2  7606                 jbe 0x5090fa
// 005090f4  ff15d8e67700         call dword ptr [0x77e6d8]
// 005090fa  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005090fe  7205                 jb 0x509105
// 00509100  8b4304               mov eax, dword ptr [ebx + 4]
// 00509103  eb03                 jmp 0x509108
// 00509105  8d4304               lea eax, [ebx + 4]
// 00509108  803c0720             cmp byte ptr [edi + eax], 0x20
// 0050910c  0f85bd000000         jne 0x5091cf
// 00509112  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00509116  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00509119  83c101               add ecx, 1
// 0050911c  8d50ff               lea edx, [eax - 1]
// 0050911f  83c701               add edi, 1
// 00509122  3bca                 cmp ecx, edx
// 00509124  894c2418             mov dword ptr [esp + 0x18], ecx
// 00509128  72c6                 jb 0x5090f0
// 0050912a  e9a0000000           jmp 0x5091cf
// 0050912f  33d2                 xor edx, edx
// 00509131  89542424             mov dword ptr [esp + 0x24], edx
// 00509135  89542428             mov dword ptr [esp + 0x28], edx
// 00509139  89542420             mov dword ptr [esp + 0x20], edx
// 0050913d  8d7801               lea edi, [eax + 1]
// 00509140  3bf9                 cmp edi, ecx
// 00509142  89542434             mov dword ptr [esp + 0x34], edx
// 00509146  732e                 jae 0x509176
// 00509148  8b4628               mov eax, dword ptr [esi + 0x28]
// 0050914b  8a0407               mov al, byte ptr [edi + eax]
// 0050914e  3c22                 cmp al, 0x22
// 00509150  88442417             mov byte ptr [esp + 0x17], al
// 00509154  750a                 jne 0x509160
// 00509156  807e0800             cmp byte ptr [esi + 8], 0
// 0050915a  0f94c1               sete cl
// 0050915d  884e08               mov byte ptr [esi + 8], cl
// 00509160  8d542417             lea edx, [esp + 0x17]
// 00509164  52                   push edx
// 00509165  8d4c2424             lea ecx, [esp + 0x24]
// 00509169  e8a2faffff           call 0x508c10
// 0050916e  83c701               add edi, 1
// 00509171  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00509174  72d2                 jb 0x509148
// 00509176  6a01                 push 1
// 00509178  83c501               add ebp, 1
// 0050917b  55                   push ebp
// 0050917c  8d4e28               lea ecx, [esi + 0x28]
// 0050917f  e87cf9ffff           call 0x508b00
// 00509184  8bce                 mov ecx, esi
// 00509186  e805fdffff           call 0x508e90
// 0050918b  33ed                 xor ebp, ebp
// 0050918d  33ff                 xor edi, edi
// 0050918f  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00509193  7619                 jbe 0x5091ae
// 00509195  8b442420             mov eax, dword ptr [esp + 0x20]
// 00509199  0fb60c38             movzx ecx, byte ptr [eax + edi]
// 0050919d  51                   push ecx
// 0050919e  8bce                 mov ecx, esi
// 005091a0  e8dbfaffff           call 0x508c80
// 005091a5  83c701               add edi, 1
// 005091a8  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 005091ac  72e7                 jb 0x509195
// 005091ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005091b2  52                   push edx
// 005091b3  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005091bb  e85066ffff           call 0x4ff810
// 005091c0  83c404               add esp, 4
// 005091c3  896c2420             mov dword ptr [esp + 0x20], ebp
// 005091c7  896c2424             mov dword ptr [esp + 0x24], ebp
// 005091cb  896c2428             mov dword ptr [esp + 0x28], ebp
// 005091cf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005091d3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005091d6  83c701               add edi, 1
// 005091d9  3bf8                 cmp edi, eax
// 005091db  897c2418             mov dword ptr [esp + 0x18], edi
// 005091df  0f8254fdffff         jb 0x508f39
// 005091e5  eb39                 jmp 0x509220
// 005091e7  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005091ea  33ff                 xor edi, edi
// 005091ec  85c0                 test eax, eax
// 005091ee  7630                 jbe 0x509220
// 005091f0  3bf8                 cmp edi, eax
// 005091f2  8d6b04               lea ebp, [ebx + 4]
// 005091f5  7606                 jbe 0x5091fd
// 005091f7  ff15d8e67700         call dword ptr [0x77e6d8]
// 005091fd  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00509201  7205                 jb 0x509208
// 00509203  8b4500               mov eax, dword ptr [ebp]
// 00509206  eb02                 jmp 0x50920a
// 00509208  8bc5                 mov eax, ebp
// 0050920a  0fb60438             movzx eax, byte ptr [eax + edi]
// 0050920e  50                   push eax
// 0050920f  8bce                 mov ecx, esi
// 00509211  e86afaffff           call 0x508c80
// 00509216  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00509219  83c701               add edi, 1
// 0050921c  3bf8                 cmp edi, eax
// 0050921e  72dd                 jb 0x5091fd
// 00509220  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00509224  64890d00000000       mov dword ptr fs:[0], ecx
// 0050922b  59                   pop ecx
// 0050922c  5f                   pop edi
// 0050922d  5e                   pop esi
// 0050922e  5d                   pop ebp
// 0050922f  5b                   pop ebx
// 00509230  83c424               add esp, 0x24
// 00509233  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?wordWrapIndentAppend@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
