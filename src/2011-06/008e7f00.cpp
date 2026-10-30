// roc 2011-06 008e7f00  unit: CXTColorHex  size: 1240 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7f00
//
// 008e7f00  6aff                 push -1
// 008e7f02  68d8dfa000           push 0xa0dfd8
// 008e7f07  64a100000000         mov eax, dword ptr fs:[0]
// 008e7f0d  50                   push eax
// 008e7f0e  83ec20               sub esp, 0x20
// 008e7f11  53                   push ebx
// 008e7f12  55                   push ebp
// 008e7f13  56                   push esi
// 008e7f14  57                   push edi
// 008e7f15  a12058c900           mov eax, dword ptr [0xc95820]
// 008e7f1a  33c4                 xor eax, esp
// 008e7f1c  50                   push eax
// 008e7f1d  8d442434             lea eax, [esp + 0x34]
// 008e7f21  64a300000000         mov dword ptr fs:[0], eax
// 008e7f27  8bf1                 mov esi, ecx
// 008e7f29  6a1c                 push 0x1c
// 008e7f2b  e82e21f2ff           call 0x80a05e
// 008e7f30  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008e7f34  83c404               add esp, 4
// 008e7f37  53                   push ebx
// 008e7f38  6a01                 push 1
// 008e7f3a  6a00                 push 0
// 008e7f3c  8d4c2438             lea ecx, [esp + 0x38]
// 008e7f40  8bf8                 mov edi, eax
// 008e7f42  e8ad4c0e00           call 0x9ccbf4
// 008e7f47  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008e7f4b  8d44242c             lea eax, [esp + 0x2c]
// 008e7f4f  50                   push eax
// 008e7f50  8bcd                 mov ecx, ebp
// 008e7f52  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008e7f5a  e88f4c0e00           call 0x9ccbee
// 008e7f5f  6840050000           push 0x540
// 008e7f64  89442448             mov dword ptr [esp + 0x48], eax
// 008e7f68  895f18               mov dword ptr [edi + 0x18], ebx
// 008e7f6b  c7471001000000       mov dword ptr [edi + 0x10], 1
// 008e7f72  e8c923f2ff           call 0x80a340
// 008e7f77  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e7f7b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008e7f7f  890f                 mov dword ptr [edi], ecx
// 008e7f81  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e7f85  83c404               add esp, 4
// 008e7f88  894714               mov dword ptr [edi + 0x14], eax
// 008e7f8b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e7f8f  894f0c               mov dword ptr [edi + 0xc], ecx
// 008e7f92  57                   push edi
// 008e7f93  8d4e74               lea ecx, [esi + 0x74]
// 008e7f96  895704               mov dword ptr [edi + 4], edx
// 008e7f99  894708               mov dword ptr [edi + 8], eax
// 008e7f9c  e8cf850000           call 0x8f0570
// 008e7fa1  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e7fa5  3b5e70               cmp ebx, dword ptr [esi + 0x70]
// 008e7fa8  750a                 jne 0x8e7fb4
// 008e7faa  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e7fae  894668               mov dword ptr [esi + 0x68], eax
// 008e7fb1  89566c               mov dword ptr [esi + 0x6c], edx
// 008e7fb4  33f6                 xor esi, esi
// 008e7fb6  89742450             mov dword ptr [esp + 0x50], esi
// 008e7fba  eb08                 jmp 0x8e7fc4
// 008e7fbc  8d642400             lea esp, [esp]
// 008e7fc0  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e7fc4  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e7fc8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008e7fcc  53                   push ebx
// 008e7fcd  03ca                 add ecx, edx
// 008e7fcf  51                   push ecx
// 008e7fd0  50                   push eax
// 008e7fd1  89442420             mov dword ptr [esp + 0x20], eax
// 008e7fd5  8b4504               mov eax, dword ptr [ebp + 4]
// 008e7fd8  50                   push eax
// 008e7fd9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e7fdd  ff150c01a400         call dword ptr [0xa4010c]
// 008e7fe3  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e7fe6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7fea  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e7fee  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e7ff1  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e7ff5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e7ff9  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e7ffd  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8001  53                   push ebx
// 008e8002  03ca                 add ecx, edx
// 008e8004  40                   inc eax
// 008e8005  51                   push ecx
// 008e8006  50                   push eax
// 008e8007  89442428             mov dword ptr [esp + 0x28], eax
// 008e800b  8b4504               mov eax, dword ptr [ebp + 4]
// 008e800e  50                   push eax
// 008e800f  46                   inc esi
// 008e8010  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8014  ff150c01a400         call dword ptr [0xa4010c]
// 008e801a  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e801d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8021  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8025  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8028  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e802c  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8030  40                   inc eax
// 008e8031  46                   inc esi
// 008e8032  83f809               cmp eax, 9
// 008e8035  89442450             mov dword ptr [esp + 0x50], eax
// 008e8039  7c85                 jl 0x8e7fc0
// 008e803b  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8043  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8047  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e804b  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e804f  53                   push ebx
// 008e8050  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e8054  83c002               add eax, 2
// 008e8057  51                   push ecx
// 008e8058  50                   push eax
// 008e8059  89442428             mov dword ptr [esp + 0x28], eax
// 008e805d  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8060  50                   push eax
// 008e8061  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8065  ff150c01a400         call dword ptr [0xa4010c]
// 008e806b  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e806e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8072  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8076  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8079  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e807d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8081  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8085  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8089  53                   push ebx
// 008e808a  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e808e  83c003               add eax, 3
// 008e8091  51                   push ecx
// 008e8092  50                   push eax
// 008e8093  89442420             mov dword ptr [esp + 0x20], eax
// 008e8097  8b4504               mov eax, dword ptr [ebp + 4]
// 008e809a  50                   push eax
// 008e809b  46                   inc esi
// 008e809c  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e80a0  ff150c01a400         call dword ptr [0xa4010c]
// 008e80a6  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e80a9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e80ad  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e80b1  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e80b4  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e80b8  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e80bc  40                   inc eax
// 008e80bd  46                   inc esi
// 008e80be  83f80b               cmp eax, 0xb
// 008e80c1  89442450             mov dword ptr [esp + 0x50], eax
// 008e80c5  0f8c78ffffff         jl 0x8e8043
// 008e80cb  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e80d3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e80d7  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e80db  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e80df  53                   push ebx
// 008e80e0  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e80e4  83c004               add eax, 4
// 008e80e7  51                   push ecx
// 008e80e8  50                   push eax
// 008e80e9  89442428             mov dword ptr [esp + 0x28], eax
// 008e80ed  8b4504               mov eax, dword ptr [ebp + 4]
// 008e80f0  50                   push eax
// 008e80f1  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e80f5  ff150c01a400         call dword ptr [0xa4010c]
// 008e80fb  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e80fe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8102  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8106  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8109  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e810d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8111  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8115  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8119  53                   push ebx
// 008e811a  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e811e  83c005               add eax, 5
// 008e8121  51                   push ecx
// 008e8122  50                   push eax
// 008e8123  89442420             mov dword ptr [esp + 0x20], eax
// 008e8127  8b4504               mov eax, dword ptr [ebp + 4]
// 008e812a  50                   push eax
// 008e812b  46                   inc esi
// 008e812c  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e8130  ff150c01a400         call dword ptr [0xa4010c]
// 008e8136  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8139  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e813d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8141  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8144  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8148  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e814c  40                   inc eax
// 008e814d  46                   inc esi
// 008e814e  83f80d               cmp eax, 0xd
// 008e8151  89442450             mov dword ptr [esp + 0x50], eax
// 008e8155  0f8c78ffffff         jl 0x8e80d3
// 008e815b  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8163  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8167  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e816b  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e816f  53                   push ebx
// 008e8170  8d4c0afd             lea ecx, [edx + ecx - 3]
// 008e8174  83c006               add eax, 6
// 008e8177  51                   push ecx
// 008e8178  50                   push eax
// 008e8179  89442428             mov dword ptr [esp + 0x28], eax
// 008e817d  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8180  50                   push eax
// 008e8181  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8185  ff150c01a400         call dword ptr [0xa4010c]
// 008e818b  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e818e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8192  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8196  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8199  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e819d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e81a1  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e81a5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e81a9  53                   push ebx
// 008e81aa  8d4c0afd             lea ecx, [edx + ecx - 3]
// 008e81ae  83c007               add eax, 7
// 008e81b1  51                   push ecx
// 008e81b2  50                   push eax
// 008e81b3  89442420             mov dword ptr [esp + 0x20], eax
// 008e81b7  8b4504               mov eax, dword ptr [ebp + 4]
// 008e81ba  50                   push eax
// 008e81bb  46                   inc esi
// 008e81bc  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e81c0  ff150c01a400         call dword ptr [0xa4010c]
// 008e81c6  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e81c9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e81cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e81d1  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e81d4  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e81d8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e81dc  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e81e0  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e81e4  53                   push ebx
// 008e81e5  8d4c0afd             lea ecx, [edx + ecx - 3]
// 008e81e9  83c008               add eax, 8
// 008e81ec  51                   push ecx
// 008e81ed  50                   push eax
// 008e81ee  89442430             mov dword ptr [esp + 0x30], eax
// 008e81f2  8b4504               mov eax, dword ptr [ebp + 4]
// 008e81f5  50                   push eax
// 008e81f6  46                   inc esi
// 008e81f7  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e81fb  ff150c01a400         call dword ptr [0xa4010c]
// 008e8201  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8204  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8208  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e820c  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e820f  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8213  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8217  40                   inc eax
// 008e8218  46                   inc esi
// 008e8219  83f80f               cmp eax, 0xf
// 008e821c  89442450             mov dword ptr [esp + 0x50], eax
// 008e8220  0f8c3dffffff         jl 0x8e8163
// 008e8226  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e822e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8232  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8236  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e823a  53                   push ebx
// 008e823b  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e823f  83c009               add eax, 9
// 008e8242  51                   push ecx
// 008e8243  50                   push eax
// 008e8244  89442430             mov dword ptr [esp + 0x30], eax
// 008e8248  8b4504               mov eax, dword ptr [ebp + 4]
// 008e824b  50                   push eax
// 008e824c  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8250  ff150c01a400         call dword ptr [0xa4010c]
// 008e8256  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8259  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e825d  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8261  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8264  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8268  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e826c  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8270  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8274  53                   push ebx
// 008e8275  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e8279  83c00a               add eax, 0xa
// 008e827c  51                   push ecx
// 008e827d  50                   push eax
// 008e827e  89442428             mov dword ptr [esp + 0x28], eax
// 008e8282  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8285  50                   push eax
// 008e8286  46                   inc esi
// 008e8287  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e828b  ff150c01a400         call dword ptr [0xa4010c]
// 008e8291  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8294  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8298  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e829c  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e829f  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e82a3  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e82a7  40                   inc eax
// 008e82a8  46                   inc esi
// 008e82a9  83f80d               cmp eax, 0xd
// 008e82ac  89442450             mov dword ptr [esp + 0x50], eax
// 008e82b0  0f8c78ffffff         jl 0x8e822e
// 008e82b6  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e82be  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e82c2  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e82c6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e82ca  53                   push ebx
// 008e82cb  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e82cf  83c00b               add eax, 0xb
// 008e82d2  51                   push ecx
// 008e82d3  50                   push eax
// 008e82d4  89442430             mov dword ptr [esp + 0x30], eax
// 008e82d8  8b4504               mov eax, dword ptr [ebp + 4]
// 008e82db  50                   push eax
// 008e82dc  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e82e0  ff150c01a400         call dword ptr [0xa4010c]
// 008e82e6  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e82e9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e82ed  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e82f1  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e82f4  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e82f8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e82fc  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8300  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8304  53                   push ebx
// 008e8305  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e8309  83c00c               add eax, 0xc
// 008e830c  51                   push ecx
// 008e830d  50                   push eax
// 008e830e  89442428             mov dword ptr [esp + 0x28], eax
// 008e8312  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8315  50                   push eax
// 008e8316  46                   inc esi
// 008e8317  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e831b  ff150c01a400         call dword ptr [0xa4010c]
// 008e8321  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8324  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8328  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e832c  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e832f  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8333  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8337  40                   inc eax
// 008e8338  46                   inc esi
// 008e8339  83f80b               cmp eax, 0xb
// 008e833c  89442450             mov dword ptr [esp + 0x50], eax
// 008e8340  0f8c78ffffff         jl 0x8e82be
// 008e8346  03f6                 add esi, esi
// 008e8348  03f6                 add esi, esi
// 008e834a  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8352  03f6                 add esi, esi
// 008e8354  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8358  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e835c  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8360  53                   push ebx
// 008e8361  03ca                 add ecx, edx
// 008e8363  83c00d               add eax, 0xd
// 008e8366  51                   push ecx
// 008e8367  50                   push eax
// 008e8368  89442430             mov dword ptr [esp + 0x30], eax
// 008e836c  8b4504               mov eax, dword ptr [ebp + 4]
// 008e836f  50                   push eax
// 008e8370  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8374  ff150c01a400         call dword ptr [0xa4010c]
// 008e837a  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e837d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8381  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8385  890c06               mov dword ptr [esi + eax], ecx
// 008e8388  89540604             mov dword ptr [esi + eax + 4], edx
// 008e838c  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8390  40                   inc eax
// 008e8391  83c608               add esi, 8
// 008e8394  83f809               cmp eax, 9
// 008e8397  89442450             mov dword ptr [esp + 0x50], eax
// 008e839b  7cb7                 jl 0x8e8354
// 008e839d  8b442444             mov eax, dword ptr [esp + 0x44]
// 008e83a1  50                   push eax
// 008e83a2  8bcd                 mov ecx, ebp
// 008e83a4  e845480e00           call 0x9ccbee
// 008e83a9  8d4c242c             lea ecx, [esp + 0x2c]
// 008e83ad  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008e83b5  c744242cb8a6ac00     mov dword ptr [esp + 0x2c], 0xaca6b8
// 008e83bd  e86eb5b2ff           call 0x413930
// 008e83c2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e83c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008e83cd  59                   pop ecx
// 008e83ce  5f                   pop edi
// 008e83cf  5e                   pop esi
// 008e83d0  5d                   pop ebp
// 008e83d1  5b                   pop ebx
// 008e83d2  83c42c               add esp, 0x2c
// 008e83d5  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCell@CXTColorHex@@IAEXPAVCDC@@VCPoint@@KHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp