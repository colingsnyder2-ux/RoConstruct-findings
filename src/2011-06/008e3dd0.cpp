// roc 2011-06 008e3dd0  unit: CXTPPropertyGridPaintManager  size: 1645 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3dd0
//
// 008e3dd0  6aff                 push -1
// 008e3dd2  684edda000           push 0xa0dd4e
// 008e3dd7  64a100000000         mov eax, dword ptr fs:[0]
// 008e3ddd  50                   push eax
// 008e3dde  81ecb8000000         sub esp, 0xb8
// 008e3de4  53                   push ebx
// 008e3de5  55                   push ebp
// 008e3de6  56                   push esi
// 008e3de7  57                   push edi
// 008e3de8  a12058c900           mov eax, dword ptr [0xc95820]
// 008e3ded  33c4                 xor eax, esp
// 008e3def  50                   push eax
// 008e3df0  8d8424cc000000       lea eax, [esp + 0xcc]
// 008e3df7  64a300000000         mov dword ptr fs:[0], eax
// 008e3dfd  8bf1                 mov esi, ecx
// 008e3dff  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e3e02  e8a953f8ff           call 0x8691b0
// 008e3e07  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 008e3e0e  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 008e3e11  50                   push eax
// 008e3e12  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 008e3e19  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e3e1d  e80e8ff7ff           call 0x85cd30
// 008e3e22  8d451c               lea eax, [ebp + 0x1c]
// 008e3e25  50                   push eax
// 008e3e26  8d4c2420             lea ecx, [esp + 0x20]
// 008e3e2a  51                   push ecx
// 008e3e2b  ff15681ca400         call dword ptr [0xa41c68]
// 008e3e31  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008e3e34  8d54241c             lea edx, [esp + 0x1c]
// 008e3e38  52                   push edx
// 008e3e39  50                   push eax
// 008e3e3a  8d4c245c             lea ecx, [esp + 0x5c]
// 008e3e3e  e8ad8ff7ff           call 0x85cdf0
// 008e3e43  8b16                 mov edx, dword ptr [esi]
// 008e3e45  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e3e48  6a01                 push 1
// 008e3e4a  57                   push edi
// 008e3e4b  8bce                 mov ecx, esi
// 008e3e4d  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 008e3e58  ffd0                 call eax
// 008e3e5a  50                   push eax
// 008e3e5b  8d4c2458             lea ecx, [esp + 0x58]
// 008e3e5f  51                   push ecx
// 008e3e60  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008e3e67  e8b492f7ff           call 0x85d120
// 008e3e6c  8b16                 mov edx, dword ptr [esi]
// 008e3e6e  8b4208               mov eax, dword ptr [edx + 8]
// 008e3e71  6a00                 push 0
// 008e3e73  57                   push edi
// 008e3e74  8bce                 mov ecx, esi
// 008e3e76  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 008e3e7e  ffd0                 call eax
// 008e3e80  50                   push eax
// 008e3e81  8d4c2420             lea ecx, [esp + 0x20]
// 008e3e85  51                   push ecx
// 008e3e86  8d4c245c             lea ecx, [esp + 0x5c]
// 008e3e8a  e8916ff2ff           call 0x80ae20
// 008e3e8f  6a01                 push 1
// 008e3e91  8d4c2458             lea ecx, [esp + 0x58]
// 008e3e95  e854870e00           call 0x9cc5ee
// 008e3e9a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e3e9e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008e3ea2  e8f92df9ff           call 0x876ca0
// 008e3ea7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e3eab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e3eaf  03c2                 add eax, edx
// 008e3eb1  895c2438             mov dword ptr [esp + 0x38], ebx
// 008e3eb5  8b1e                 mov ebx, dword ptr [esi]
// 008e3eb7  89442414             mov dword ptr [esp + 0x14], eax
// 008e3ebb  8954242c             mov dword ptr [esp + 0x2c], edx
// 008e3ebf  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e3ec3  89442434             mov dword ptr [esp + 0x34], eax
// 008e3ec7  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 008e3ecd  83ec10               sub esp, 0x10
// 008e3ed0  85c0                 test eax, eax
// 008e3ed2  0f8481010000         je 0x8e4059
// 008e3ed8  8bc4                 mov eax, esp
// 008e3eda  8910                 mov dword ptr [eax], edx
// 008e3edc  8b542434             mov edx, dword ptr [esp + 0x34]
// 008e3ee0  894804               mov dword ptr [eax + 4], ecx
// 008e3ee3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e3ee7  895008               mov dword ptr [eax + 8], edx
// 008e3eea  89480c               mov dword ptr [eax + 0xc], ecx
// 008e3eed  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 008e3ef0  8d542464             lea edx, [esp + 0x64]
// 008e3ef4  52                   push edx
// 008e3ef5  8bce                 mov ecx, esi
// 008e3ef7  ffd0                 call eax
// 008e3ef9  8b16                 mov edx, dword ptr [esi]
// 008e3efb  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e3efe  6a00                 push 0
// 008e3f00  57                   push edi
// 008e3f01  8bce                 mov ecx, esi
// 008e3f03  ffd0                 call eax
// 008e3f05  50                   push eax
// 008e3f06  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008e3f0d  e81e7df7ff           call 0x85bc30
// 008e3f12  8b16                 mov edx, dword ptr [esi]
// 008e3f14  8b4204               mov eax, dword ptr [edx + 4]
// 008e3f17  6a00                 push 0
// 008e3f19  57                   push edi
// 008e3f1a  8bce                 mov ecx, esi
// 008e3f1c  ffd0                 call eax
// 008e3f1e  50                   push eax
// 008e3f1f  8d4c2458             lea ecx, [esp + 0x58]
// 008e3f23  e86e870e00           call 0x9cc696
// 008e3f28  8d4c2444             lea ecx, [esp + 0x44]
// 008e3f2c  e8bf8df7ff           call 0x85ccf0
// 008e3f31  8d4c2414             lea ecx, [esp + 0x14]
// 008e3f35  51                   push ecx
// 008e3f36  8bcf                 mov ecx, edi
// 008e3f38  e883f1b5ff           call 0x4430c0
// 008e3f3d  8be8                 mov ebp, eax
// 008e3f3f  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008e3f43  68240c0000           push 0xc24
// 008e3f48  8d542448             lea edx, [esp + 0x48]
// 008e3f4c  52                   push edx
// 008e3f4d  8bcd                 mov ecx, ebp
// 008e3f4f  c68424dc00000002     mov byte ptr [esp + 0xdc], 2
// 008e3f57  83c370               add ebx, 0x70
// 008e3f5a  ff15a826a400         call dword ptr [0xa426a8]
// 008e3f60  50                   push eax
// 008e3f61  8bcd                 mov ecx, ebp
// 008e3f63  ff15c82da400         call dword ptr [0xa42dc8]
// 008e3f69  50                   push eax
// 008e3f6a  8b03                 mov eax, dword ptr [ebx]
// 008e3f6c  8d4c2464             lea ecx, [esp + 0x64]
// 008e3f70  ffd0                 call eax
// 008e3f72  8d4c2414             lea ecx, [esp + 0x14]
// 008e3f76  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008e3f7e  ff15082ea400         call dword ptr [0xa42e08]
// 008e3f84  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 008e3f8a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008e3f8e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e3f92  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e3f96  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 008e3f9a  8d1cd500000000       lea ebx, [edx*8]
// 008e3fa1  2bda                 sub ebx, edx
// 008e3fa3  2bc5                 sub eax, ebp
// 008e3fa5  8d541b0d             lea edx, [ebx + ebx + 0xd]
// 008e3fa9  8d4c0a04             lea ecx, [edx + ecx + 4]
// 008e3fad  45                   inc ebp
// 008e3fae  89942488000000       mov dword ptr [esp + 0x88], edx
// 008e3fb5  8d5428fd             lea edx, [eax + ebp - 3]
// 008e3fb9  8d442414             lea eax, [esp + 0x14]
// 008e3fbd  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 008e3fc4  50                   push eax
// 008e3fc5  8bcf                 mov ecx, edi
// 008e3fc7  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 008e3fce  89942498000000       mov dword ptr [esp + 0x98], edx
// 008e3fd5  e8e6f0b5ff           call 0x4430c0
// 008e3fda  8bd8                 mov ebx, eax
// 008e3fdc  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 008e3fe0  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 008e3fe8  83c570               add ebp, 0x70
// 008e3feb  6826080000           push 0x826
// 008e3ff0  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008e3ff7  51                   push ecx
// 008e3ff8  8bcb                 mov ecx, ebx
// 008e3ffa  ff15a826a400         call dword ptr [0xa426a8]
// 008e4000  50                   push eax
// 008e4001  8bcb                 mov ecx, ebx
// 008e4003  ff15c82da400         call dword ptr [0xa42dc8]
// 008e4009  8b5500               mov edx, dword ptr [ebp]
// 008e400c  50                   push eax
// 008e400d  8d4c2464             lea ecx, [esp + 0x64]
// 008e4011  ffd2                 call edx
// 008e4013  8d4c2414             lea ecx, [esp + 0x14]
// 008e4017  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008e401f  ff15082ea400         call dword ptr [0xa42e08]
// 008e4025  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 008e402c  f6451010             test byte ptr [ebp + 0x10], 0x10
// 008e4030  0f84c4020000         je 0x8e42fa
// 008e4036  6a00                 push 0
// 008e4038  8d4c2458             lea ecx, [esp + 0x58]
// 008e403c  e855860e00           call 0x9cc696
// 008e4041  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e4045  8d842488000000       lea eax, [esp + 0x88]
// 008e404c  50                   push eax
// 008e404d  51                   push ecx
// 008e404e  ff151c1ba400         call dword ptr [0xa41b1c]
// 008e4054  e9a1020000           jmp 0x8e42fa
// 008e4059  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e405d  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e4061  894c2458             mov dword ptr [esp + 0x58], ecx
// 008e4065  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e4069  8944245c             mov dword ptr [esp + 0x5c], eax
// 008e406d  8bc4                 mov eax, esp
// 008e406f  8908                 mov dword ptr [eax], ecx
// 008e4071  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e4075  894804               mov dword ptr [eax + 4], ecx
// 008e4078  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e407c  4a                   dec edx
// 008e407d  894808               mov dword ptr [eax + 8], ecx
// 008e4080  89500c               mov dword ptr [eax + 0xc], edx
// 008e4083  8b4340               mov eax, dword ptr [ebx + 0x40]
// 008e4086  8954244c             mov dword ptr [esp + 0x4c], edx
// 008e408a  57                   push edi
// 008e408b  8d542468             lea edx, [esp + 0x68]
// 008e408f  52                   push edx
// 008e4090  8bce                 mov ecx, esi
// 008e4092  ffd0                 call eax
// 008e4094  8b16                 mov edx, dword ptr [esi]
// 008e4096  8b4204               mov eax, dword ptr [edx + 4]
// 008e4099  6a00                 push 0
// 008e409b  57                   push edi
// 008e409c  8bce                 mov ecx, esi
// 008e409e  ffd0                 call eax
// 008e40a0  50                   push eax
// 008e40a1  8d4c2458             lea ecx, [esp + 0x58]
// 008e40a5  e8ec850e00           call 0x9cc696
// 008e40aa  8b16                 mov edx, dword ptr [esi]
// 008e40ac  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e40af  6a00                 push 0
// 008e40b1  57                   push edi
// 008e40b2  8bce                 mov ecx, esi
// 008e40b4  ffd0                 call eax
// 008e40b6  50                   push eax
// 008e40b7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008e40be  e86d7bf7ff           call 0x85bc30
// 008e40c3  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008e40c6  83e001               and eax, 1
// 008e40c9  89842484000000       mov dword ptr [esp + 0x84], eax
// 008e40d0  0f84a8000000         je 0x8e417e
// 008e40d6  8b1df819a400         mov ebx, dword ptr [0xa419f8]
// 008e40dc  ffd3                 call ebx
// 008e40de  50                   push eax
// 008e40df  e84462f2ff           call 0x80a328
// 008e40e4  85c0                 test eax, eax
// 008e40e6  7469                 je 0x8e4151
// 008e40e8  ffd3                 call ebx
// 008e40ea  50                   push eax
// 008e40eb  e83862f2ff           call 0x80a328
// 008e40f0  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008e40f4  7433                 je 0x8e4129
// 008e40f6  ffd3                 call ebx
// 008e40f8  50                   push eax
// 008e40f9  e82a62f2ff           call 0x80a328
// 008e40fe  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e4101  51                   push ecx
// 008e4102  ff15b819a400         call dword ptr [0xa419b8]
// 008e4108  50                   push eax
// 008e4109  e81a62f2ff           call 0x80a328
// 008e410e  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008e4112  7415                 je 0x8e4129
// 008e4114  ffd3                 call ebx
// 008e4116  50                   push eax
// 008e4117  e80c62f2ff           call 0x80a328
// 008e411c  8bc8                 mov ecx, eax
// 008e411e  e89d87f3ff           call 0x81c8c0
// 008e4123  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008e4127  7528                 jne 0x8e4151
// 008e4129  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008e412c  83f8ff               cmp eax, -1
// 008e412f  7503                 jne 0x8e4134
// 008e4131  8b4658               mov eax, dword ptr [esi + 0x58]
// 008e4134  50                   push eax
// 008e4135  8d4c2458             lea ecx, [esp + 0x58]
// 008e4139  e858850e00           call 0x9cc696
// 008e413e  8b4650               mov eax, dword ptr [esi + 0x50]
// 008e4141  83f8ff               cmp eax, -1
// 008e4144  7503                 jne 0x8e4149
// 008e4146  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e4149  50                   push eax
// 008e414a  8d542430             lea edx, [esp + 0x30]
// 008e414e  52                   push edx
// 008e414f  eb24                 jmp 0x8e4175
// 008e4151  8b4660               mov eax, dword ptr [esi + 0x60]
// 008e4154  83785c00             cmp dword ptr [eax + 0x5c], 0
// 008e4158  7524                 jne 0x8e417e
// 008e415a  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e415d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008e4160  83c04c               add eax, 0x4c
// 008e4163  83f9ff               cmp ecx, -1
// 008e4166  7505                 jne 0x8e416d
// 008e4168  8b4004               mov eax, dword ptr [eax + 4]
// 008e416b  eb02                 jmp 0x8e416f
// 008e416d  8bc1                 mov eax, ecx
// 008e416f  50                   push eax
// 008e4170  8d4c2430             lea ecx, [esp + 0x30]
// 008e4174  51                   push ecx
// 008e4175  8d4c245c             lea ecx, [esp + 0x5c]
// 008e4179  e8a26cf2ff           call 0x80ae20
// 008e417e  8b9fb8000000         mov ebx, dword ptr [edi + 0xb8]
// 008e4184  85db                 test ebx, ebx
// 008e4186  745f                 je 0x8e41e7
// 008e4188  eb06                 jmp 0x8e4190
// 008e418a  8d9b00000000         lea ebx, [ebx]
// 008e4190  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 008e4197  7444                 je 0x8e41dd
// 008e4199  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e419c  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008e419f  83c04c               add eax, 0x4c
// 008e41a2  83f9ff               cmp ecx, -1
// 008e41a5  7505                 jne 0x8e41ac
// 008e41a7  8b4004               mov eax, dword ptr [eax + 4]
// 008e41aa  eb02                 jmp 0x8e41ae
// 008e41ac  8bc1                 mov eax, ecx
// 008e41ae  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e41b2  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 008e41b8  50                   push eax
// 008e41b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e41bd  2bd0                 sub edx, eax
// 008e41bf  52                   push edx
// 008e41c0  6a0e                 push 0xe
// 008e41c2  50                   push eax
// 008e41c3  8d04cd00000000       lea eax, [ecx*8]
// 008e41ca  2bc1                 sub eax, ecx
// 008e41cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e41d0  8d1441               lea edx, [ecx + eax*2]
// 008e41d3  52                   push edx
// 008e41d4  8d4c2468             lea ecx, [esp + 0x68]
// 008e41d8  e8f9830e00           call 0x9cc5d6
// 008e41dd  8b9bb8000000         mov ebx, dword ptr [ebx + 0xb8]
// 008e41e3  85db                 test ebx, ebx
// 008e41e5  75a9                 jne 0x8e4190
// 008e41e7  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e41ea  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008e41ed  83c04c               add eax, 0x4c
// 008e41f0  83f9ff               cmp ecx, -1
// 008e41f3  7505                 jne 0x8e41fa
// 008e41f5  8b4004               mov eax, dword ptr [eax + 4]
// 008e41f8  eb02                 jmp 0x8e41fc
// 008e41fa  8bc1                 mov eax, ecx
// 008e41fc  50                   push eax
// 008e41fd  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e4201  50                   push eax
// 008e4202  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008e4209  e8b28ff7ff           call 0x85d1c0
// 008e420e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e4212  49                   dec ecx
// 008e4213  51                   push ecx
// 008e4214  6a00                 push 0
// 008e4216  8d942490000000       lea edx, [esp + 0x90]
// 008e421d  52                   push edx
// 008e421e  8d4c2460             lea ecx, [esp + 0x60]
// 008e4222  c68424e000000004     mov byte ptr [esp + 0xe0], 4
// 008e422a  e8416df2ff           call 0x80af70
// 008e422f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e4233  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e4237  48                   dec eax
// 008e4238  50                   push eax
// 008e4239  51                   push ecx
// 008e423a  8d4c245c             lea ecx, [esp + 0x5c]
// 008e423e  e8276df2ff           call 0x80af6a
// 008e4243  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e4247  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e424b  52                   push edx
// 008e424c  50                   push eax
// 008e424d  8d8c2490000000       lea ecx, [esp + 0x90]
// 008e4254  51                   push ecx
// 008e4255  8d4c2460             lea ecx, [esp + 0x60]
// 008e4259  e8126df2ff           call 0x80af70
// 008e425e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e4262  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e4266  4a                   dec edx
// 008e4267  52                   push edx
// 008e4268  50                   push eax
// 008e4269  8d4c245c             lea ecx, [esp + 0x5c]
// 008e426d  e8f86cf2ff           call 0x80af6a
// 008e4272  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e4276  8b16                 mov edx, dword ptr [esi]
// 008e4278  8b5244               mov edx, dword ptr [edx + 0x44]
// 008e427b  83ec10               sub esp, 0x10
// 008e427e  8bc4                 mov eax, esp
// 008e4280  8908                 mov dword ptr [eax], ecx
// 008e4282  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e4286  894804               mov dword ptr [eax + 4], ecx
// 008e4289  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e428d  894808               mov dword ptr [eax + 8], ecx
// 008e4290  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008e4294  89480c               mov dword ptr [eax + 0xc], ecx
// 008e4297  57                   push edi
// 008e4298  8d442468             lea eax, [esp + 0x68]
// 008e429c  50                   push eax
// 008e429d  8bce                 mov ecx, esi
// 008e429f  ffd2                 call edx
// 008e42a1  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 008e42a9  750c                 jne 0x8e42b7
// 008e42ab  8b4660               mov eax, dword ptr [esi + 0x60]
// 008e42ae  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 008e42b5  742f                 je 0x8e42e6
// 008e42b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e42bb  8b16                 mov edx, dword ptr [esi]
// 008e42bd  8b5248               mov edx, dword ptr [edx + 0x48]
// 008e42c0  83ec10               sub esp, 0x10
// 008e42c3  8bc4                 mov eax, esp
// 008e42c5  8908                 mov dword ptr [eax], ecx
// 008e42c7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e42cb  894804               mov dword ptr [eax + 4], ecx
// 008e42ce  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e42d2  894808               mov dword ptr [eax + 8], ecx
// 008e42d5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e42d9  89480c               mov dword ptr [eax + 0xc], ecx
// 008e42dc  57                   push edi
// 008e42dd  8d442468             lea eax, [esp + 0x68]
// 008e42e1  50                   push eax
// 008e42e2  8bce                 mov ecx, esi
// 008e42e4  ffd2                 call edx
// 008e42e6  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 008e42ed  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008e42f5  e8568ff7ff           call 0x85d250
// 008e42fa  8b4508               mov eax, dword ptr [ebp + 8]
// 008e42fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e4301  40                   inc eax
// 008e4302  50                   push eax
// 008e4303  e8382cf9ff           call 0x876f40
// 008e4308  85c0                 test eax, eax
// 008e430a  744a                 je 0x8e4356
// 008e430c  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 008e4313  7441                 je 0x8e4356
// 008e4315  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008e431c  7438                 je 0x8e4356
// 008e431e  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 008e4321  83f9ff               cmp ecx, -1
// 008e4324  7503                 jne 0x8e4329
// 008e4326  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008e4329  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008e432f  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e4333  51                   push ecx
// 008e4334  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008e4338  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008e433c  6a01                 push 1
// 008e433e  51                   push ecx
// 008e433f  8d0cc500000000       lea ecx, [eax*8]
// 008e4346  2bc8                 sub ecx, eax
// 008e4348  4a                   dec edx
// 008e4349  03c9                 add ecx, ecx
// 008e434b  52                   push edx
// 008e434c  51                   push ecx
// 008e434d  8d4c2468             lea ecx, [esp + 0x68]
// 008e4351  e880820e00           call 0x9cc5d6
// 008e4356  8bcf                 mov ecx, edi
// 008e4358  e8a366f9ff           call 0x87aa00
// 008e435d  85c0                 test eax, eax
// 008e435f  0f8494000000         je 0x8e43f9
// 008e4365  bb402aac00           mov ebx, 0xac2a40
// 008e436a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008e4372  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008e4376  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 008e437d  c68424d400000005     mov byte ptr [esp + 0xd4], 5
// 008e4385  7523                 jne 0x8e43aa
// 008e4387  8d54242c             lea edx, [esp + 0x2c]
// 008e438b  52                   push edx
// 008e438c  ff154c01a400         call dword ptr [0xa4014c]
// 008e4392  50                   push eax
// 008e4393  8d4c2440             lea ecx, [esp + 0x40]
// 008e4397  e88c62f2ff           call 0x80a628
// 008e439c  8d44243c             lea eax, [esp + 0x3c]
// 008e43a0  50                   push eax
// 008e43a1  8d4c2458             lea ecx, [esp + 0x58]
// 008e43a5  e88a840e00           call 0x9cc834
// 008e43aa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e43ae  8b16                 mov edx, dword ptr [esi]
// 008e43b0  8b5238               mov edx, dword ptr [edx + 0x38]
// 008e43b3  83ec10               sub esp, 0x10
// 008e43b6  8bc4                 mov eax, esp
// 008e43b8  8908                 mov dword ptr [eax], ecx
// 008e43ba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e43be  894804               mov dword ptr [eax + 4], ecx
// 008e43c1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e43c5  894808               mov dword ptr [eax + 8], ecx
// 008e43c8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008e43cc  89480c               mov dword ptr [eax + 0xc], ecx
// 008e43cf  57                   push edi
// 008e43d0  8d442468             lea eax, [esp + 0x68]
// 008e43d4  50                   push eax
// 008e43d5  8bce                 mov ecx, esi
// 008e43d7  ffd2                 call edx
// 008e43d9  6a00                 push 0
// 008e43db  8d4c2458             lea ecx, [esp + 0x58]
// 008e43df  e850840e00           call 0x9cc834
// 008e43e4  8d4c243c             lea ecx, [esp + 0x3c]
// 008e43e8  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008e43f0  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008e43f4  e837f5b2ff           call 0x413930
// 008e43f9  8d8c2498000000       lea ecx, [esp + 0x98]
// 008e4400  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 008e4408  e8938df7ff           call 0x85d1a0
// 008e440d  8d4c2454             lea ecx, [esp + 0x54]
// 008e4411  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 008e441c  e8df8bf7ff           call 0x85d000
// 008e4421  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008e4428  64890d00000000       mov dword ptr fs:[0], ecx
// 008e442f  59                   pop ecx
// 008e4430  5f                   pop edi
// 008e4431  5e                   pop esi
// 008e4432  5d                   pop ebp
// 008e4433  5b                   pop ebx
// 008e4434  81c4c4000000         add esp, 0xc4
// 008e443a  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridPaintManager@@UAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp