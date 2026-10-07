// roc 2007-08 00476b00  unit: CInstanceRecord::CNameItem  size: 1410 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476b00
//
// 00476b00  6aff                 push -1
// 00476b02  68fc4f7400           push 0x744ffc
// 00476b07  64a100000000         mov eax, dword ptr fs:[0]
// 00476b0d  50                   push eax
// 00476b0e  83ec50               sub esp, 0x50
// 00476b11  53                   push ebx
// 00476b12  55                   push ebp
// 00476b13  56                   push esi
// 00476b14  57                   push edi
// 00476b15  a188518b00           mov eax, dword ptr [0x8b5188]
// 00476b1a  33c4                 xor eax, esp
// 00476b1c  50                   push eax
// 00476b1d  8d442464             lea eax, [esp + 0x64]
// 00476b21  64a300000000         mov dword ptr fs:[0], eax
// 00476b27  8be9                 mov ebp, ecx
// 00476b29  896c2414             mov dword ptr [esp + 0x14], ebp
// 00476b2d  8bf5                 mov esi, ebp
// 00476b2f  bf07000000           mov edi, 7
// 00476b34  8bce                 mov ecx, esi
// 00476b36  e8c53e0900           call 0x50aa00
// 00476b3b  83c650               add esi, 0x50
// 00476b3e  83ef01               sub edi, 1
// 00476b41  79f1                 jns 0x476b34
// 00476b43  db442478             fild dword ptr [esp + 0x78]
// 00476b47  83ec10               sub esp, 0x10
// 00476b4a  d9ee                 fldz 
// 00476b4c  8d85a0020000         lea eax, [ebp + 0x2a0]
// 00476b52  dcc1                 fadd st(1), st(0)
// 00476b54  c6859d02000001       mov byte ptr [ebp + 0x29d], 1
// 00476b5b  d9c9                 fxch st(1)
// 00476b5d  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00476b64  d9842488000000       fld dword ptr [esp + 0x88]
// 00476b6b  d95c240c             fstp dword ptr [esp + 0xc]
// 00476b6f  da842484000000       fiadd dword ptr [esp + 0x84]
// 00476b76  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00476b7d  d9842488000000       fld dword ptr [esp + 0x88]
// 00476b84  d95c2408             fstp dword ptr [esp + 8]
// 00476b88  d9ee                 fldz 
// 00476b8a  d9542404             fst dword ptr [esp + 4]
// 00476b8e  d91c24               fstp dword ptr [esp]
// 00476b91  50                   push eax
// 00476b92  e87917feff           call 0x458310
// 00476b97  d9ee                 fldz 
// 00476b99  d995b0020000         fst dword ptr [ebp + 0x2b0]
// 00476b9f  33f6                 xor esi, esi
// 00476ba1  d995b4020000         fst dword ptr [ebp + 0x2b4]
// 00476ba7  83c414               add esp, 0x14
// 00476baa  d995b8020000         fst dword ptr [ebp + 0x2b8]
// 00476bb0  d995bc020000         fst dword ptr [ebp + 0x2bc]
// 00476bb6  c685c002000000       mov byte ptr [ebp + 0x2c0], 0
// 00476bbd  c685c102000001       mov byte ptr [ebp + 0x2c1], 1
// 00476bc4  c685c202000001       mov byte ptr [ebp + 0x2c2], 1
// 00476bcb  c685c302000000       mov byte ptr [ebp + 0x2c3], 0
// 00476bd2  89b5c8020000         mov dword ptr [ebp + 0x2c8], esi
// 00476bd8  d9ee                 fldz 
// 00476bda  bf06000000           mov edi, 6
// 00476bdf  dd9dd8020000         fstp qword ptr [ebp + 0x2d8]
// 00476be5  c785cc02000003000000 mov dword ptr [ebp + 0x2cc], 3
// 00476bef  89bdd0020000         mov dword ptr [ebp + 0x2d0], edi
// 00476bf5  8974246c             mov dword ptr [esp + 0x6c], esi
// 00476bf9  89b560030000         mov dword ptr [ebp + 0x360], esi
// 00476bff  89b564030000         mov dword ptr [ebp + 0x364], esi
// 00476c05  89b568030000         mov dword ptr [ebp + 0x368], esi
// 00476c0b  89b56c030000         mov dword ptr [ebp + 0x36c], esi
// 00476c11  89b570030000         mov dword ptr [ebp + 0x370], esi
// 00476c17  d99598030000         fst dword ptr [ebp + 0x398]
// 00476c1d  68d0d64c00           push 0x4cd6d0
// 00476c22  d9959c030000         fst dword ptr [ebp + 0x39c]
// 00476c28  68d0594700           push 0x4759d0
// 00476c2d  d99da0030000         fstp dword ptr [ebp + 0x3a0]
// 00476c33  6a08                 push 8
// 00476c35  6a5c                 push 0x5c
// 00476c37  8d85a8030000         lea eax, [ebp + 0x3a8]
// 00476c3d  50                   push eax
// 00476c3e  c684248000000005     mov byte ptr [esp + 0x80], 5
// 00476c46  e8919f1b00           call 0x630bdc
// 00476c4b  8d9d88060000         lea ebx, [ebp + 0x688]
// 00476c51  8bcb                 mov ecx, ebx
// 00476c53  c644246c06           mov byte ptr [esp + 0x6c], 6
// 00476c58  e8f3e3ffff           call 0x475050
// 00476c5d  8d4b30               lea ecx, [ebx + 0x30]
// 00476c60  e8ebe3ffff           call 0x475050
// 00476c65  8d4b60               lea ecx, [ebx + 0x60]
// 00476c68  e8e3e3ffff           call 0x475050
// 00476c6d  8d8b90000000         lea ecx, [ebx + 0x90]
// 00476c73  e868400900           call 0x50ace0
// 00476c78  c683d000000001       mov byte ptr [ebx + 0xd0], 1
// 00476c7f  8b85c8020000         mov eax, dword ptr [ebp + 0x2c8]
// 00476c85  3bc6                 cmp eax, esi
// 00476c87  7431                 je 0x476cba
// 00476c89  83c004               add eax, 4
// 00476c8c  50                   push eax
// 00476c8d  ff15e8d27700         call dword ptr [0x77d2e8]
// 00476c93  85c0                 test eax, eax
// 00476c95  751d                 jne 0x476cb4
// 00476c97  8b8dc8020000         mov ecx, dword ptr [ebp + 0x2c8]
// 00476c9d  e82e11feff           call 0x457dd0
// 00476ca2  8b8dc8020000         mov ecx, dword ptr [ebp + 0x2c8]
// 00476ca8  3bce                 cmp ecx, esi
// 00476caa  7408                 je 0x476cb4
// 00476cac  8b11                 mov edx, dword ptr [ecx]
// 00476cae  8b02                 mov eax, dword ptr [edx]
// 00476cb0  6a01                 push 1
// 00476cb2  ffd0                 call eax
// 00476cb4  89b5c8020000         mov dword ptr [ebp + 0x2c8], esi
// 00476cba  d9ee                 fldz 
// 00476cbc  b802000000           mov eax, 2
// 00476cc1  dd9d30030000         fstp qword ptr [ebp + 0x330]
// 00476cc7  c6858802000000       mov byte ptr [ebp + 0x288], 0
// 00476cce  d9e8                 fld1 
// 00476cd0  898520030000         mov dword ptr [ebp + 0x320], eax
// 00476cd6  dd9578030000         fst qword ptr [ebp + 0x378]
// 00476cdc  c7852403000003000000 mov dword ptr [ebp + 0x324], 3
// 00476ce6  dd9d80030000         fstp qword ptr [ebp + 0x380]
// 00476cec  898528030000         mov dword ptr [ebp + 0x328], eax
// 00476cf2  dd05b87e7900         fld qword ptr [0x797eb8]
// 00476cf8  89bdc4020000         mov dword ptr [ebp + 0x2c4], edi
// 00476cfe  dd9d48030000         fstp qword ptr [ebp + 0x348]
// 00476d04  89bdfc020000         mov dword ptr [ebp + 0x2fc], edi
// 00476d0a  89b500030000         mov dword ptr [ebp + 0x300], esi
// 00476d10  898508030000         mov dword ptr [ebp + 0x308], eax
// 00476d16  89850c030000         mov dword ptr [ebp + 0x30c], eax
// 00476d1c  898510030000         mov dword ptr [ebp + 0x310], eax
// 00476d22  898514030000         mov dword ptr [ebp + 0x314], eax
// 00476d28  898518030000         mov dword ptr [ebp + 0x318], eax
// 00476d2e  89851c030000         mov dword ptr [ebp + 0x31c], eax
// 00476d34  89b538030000         mov dword ptr [ebp + 0x338], esi
// 00476d3a  e8c1440900           call 0x50b200
// 00476d3f  d900                 fld dword ptr [eax]
// 00476d41  dd0510367900         fld qword ptr [0x793610]
// 00476d47  8d4c2424             lea ecx, [esp + 0x24]
// 00476d4b  dcc9                 fmul st(1), st(0)
// 00476d4d  d9c9                 fxch st(1)
// 00476d4f  d95c2418             fstp dword ptr [esp + 0x18]
// 00476d53  d94004               fld dword ptr [eax + 4]
// 00476d56  d8c9                 fmul st(1)
// 00476d58  d95c241c             fstp dword ptr [esp + 0x1c]
// 00476d5c  d84808               fmul dword ptr [eax + 8]
// 00476d5f  d95c2420             fstp dword ptr [esp + 0x20]
// 00476d63  d9442418             fld dword ptr [esp + 0x18]
// 00476d67  d99d3c030000         fstp dword ptr [ebp + 0x33c]
// 00476d6d  d944241c             fld dword ptr [esp + 0x1c]
// 00476d71  d99d40030000         fstp dword ptr [ebp + 0x340]
// 00476d77  d9442420             fld dword ptr [esp + 0x20]
// 00476d7b  d99d44030000         fstp dword ptr [ebp + 0x344]
// 00476d81  d90550707800         fld dword ptr [0x787050]
// 00476d87  d9958c020000         fst dword ptr [ebp + 0x28c]
// 00476d8d  d99590020000         fst dword ptr [ebp + 0x290]
// 00476d93  d99d94020000         fstp dword ptr [ebp + 0x294]
// 00476d99  d9e8                 fld1 
// 00476d9b  d99598020000         fst dword ptr [ebp + 0x298]
// 00476da1  c6859c02000000       mov byte ptr [ebp + 0x29c], 0
// 00476da8  d99588030000         fst dword ptr [ebp + 0x388]
// 00476dae  d9958c030000         fst dword ptr [ebp + 0x38c]
// 00476db4  d99590030000         fst dword ptr [ebp + 0x390]
// 00476dba  d99d94030000         fstp dword ptr [ebp + 0x394]
// 00476dc0  d9ee                 fldz 
// 00476dc2  d99598030000         fst dword ptr [ebp + 0x398]
// 00476dc8  d9959c030000         fst dword ptr [ebp + 0x39c]
// 00476dce  d99da0030000         fstp dword ptr [ebp + 0x3a0]
// 00476dd4  e877e2ffff           call 0x475050
// 00476dd9  8bf0                 mov esi, eax
// 00476ddb  b909000000           mov ecx, 9
// 00476de0  8bfb                 mov edi, ebx
// 00476de2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476de4  d94024               fld dword ptr [eax + 0x24]
// 00476de7  d95b24               fstp dword ptr [ebx + 0x24]
// 00476dea  d94028               fld dword ptr [eax + 0x28]
// 00476ded  d95b28               fstp dword ptr [ebx + 0x28]
// 00476df0  d9402c               fld dword ptr [eax + 0x2c]
// 00476df3  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00476df6  8d4c2424             lea ecx, [esp + 0x24]
// 00476dfa  e851e2ffff           call 0x475050
// 00476dff  8d95b8060000         lea edx, [ebp + 0x6b8]
// 00476e05  8bf0                 mov esi, eax
// 00476e07  8bfa                 mov edi, edx
// 00476e09  b909000000           mov ecx, 9
// 00476e0e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476e10  d94024               fld dword ptr [eax + 0x24]
// 00476e13  d95a24               fstp dword ptr [edx + 0x24]
// 00476e16  d94028               fld dword ptr [eax + 0x28]
// 00476e19  d95a28               fstp dword ptr [edx + 0x28]
// 00476e1c  d9402c               fld dword ptr [eax + 0x2c]
// 00476e1f  d95a2c               fstp dword ptr [edx + 0x2c]
// 00476e22  8d4c2424             lea ecx, [esp + 0x24]
// 00476e26  e825e2ffff           call 0x475050
// 00476e2b  8d95e8060000         lea edx, [ebp + 0x6e8]
// 00476e31  8bf0                 mov esi, eax
// 00476e33  b909000000           mov ecx, 9
// 00476e38  8bfa                 mov edi, edx
// 00476e3a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476e3c  d94024               fld dword ptr [eax + 0x24]
// 00476e3f  d95a24               fstp dword ptr [edx + 0x24]
// 00476e42  d94028               fld dword ptr [eax + 0x28]
// 00476e45  d95a28               fstp dword ptr [edx + 0x28]
// 00476e48  d9402c               fld dword ptr [eax + 0x2c]
// 00476e4b  d95a2c               fstp dword ptr [edx + 0x2c]
// 00476e4e  d9e8                 fld1 
// 00476e50  dd9de0020000         fstp qword ptr [ebp + 0x2e0]
// 00476e56  d9ee                 fldz 
// 00476e58  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 00476e5e  33f6                 xor esi, esi
// 00476e60  89b504030000         mov dword ptr [ebp + 0x304], esi
// 00476e66  d995e8020000         fst dword ptr [ebp + 0x2e8]
// 00476e6c  d995ec020000         fst dword ptr [ebp + 0x2ec]
// 00476e72  d99df0020000         fstp dword ptr [ebp + 0x2f0]
// 00476e78  d9e8                 fld1 
// 00476e7a  d99df4020000         fstp dword ptr [ebp + 0x2f4]
// 00476e80  89b52c030000         mov dword ptr [ebp + 0x32c], esi
// 00476e86  8b8560030000         mov eax, dword ptr [ebp + 0x360]
// 00476e8c  3bc6                 cmp eax, esi
// 00476e8e  742d                 je 0x476ebd
// 00476e90  83c004               add eax, 4
// 00476e93  50                   push eax
// 00476e94  ffd7                 call edi
// 00476e96  85c0                 test eax, eax
// 00476e98  751d                 jne 0x476eb7
// 00476e9a  8b8d60030000         mov ecx, dword ptr [ebp + 0x360]
// 00476ea0  e82b0ffeff           call 0x457dd0
// 00476ea5  8b8d60030000         mov ecx, dword ptr [ebp + 0x360]
// 00476eab  3bce                 cmp ecx, esi
// 00476ead  7408                 je 0x476eb7
// 00476eaf  8b11                 mov edx, dword ptr [ecx]
// 00476eb1  8b02                 mov eax, dword ptr [edx]
// 00476eb3  6a01                 push 1
// 00476eb5  ffd0                 call eax
// 00476eb7  89b560030000         mov dword ptr [ebp + 0x360], esi
// 00476ebd  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 00476ec3  3bc6                 cmp eax, esi
// 00476ec5  742d                 je 0x476ef4
// 00476ec7  83c004               add eax, 4
// 00476eca  50                   push eax
// 00476ecb  ffd7                 call edi
// 00476ecd  85c0                 test eax, eax
// 00476ecf  751d                 jne 0x476eee
// 00476ed1  8b8d64030000         mov ecx, dword ptr [ebp + 0x364]
// 00476ed7  e8f40efeff           call 0x457dd0
// 00476edc  8b8d64030000         mov ecx, dword ptr [ebp + 0x364]
// 00476ee2  3bce                 cmp ecx, esi
// 00476ee4  7408                 je 0x476eee
// 00476ee6  8b11                 mov edx, dword ptr [ecx]
// 00476ee8  8b02                 mov eax, dword ptr [edx]
// 00476eea  6a01                 push 1
// 00476eec  ffd0                 call eax
// 00476eee  89b564030000         mov dword ptr [ebp + 0x364], esi
// 00476ef4  8b8568030000         mov eax, dword ptr [ebp + 0x368]
// 00476efa  3bc6                 cmp eax, esi
// 00476efc  742d                 je 0x476f2b
// 00476efe  83c004               add eax, 4
// 00476f01  50                   push eax
// 00476f02  ffd7                 call edi
// 00476f04  85c0                 test eax, eax
// 00476f06  751d                 jne 0x476f25
// 00476f08  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 00476f0e  e8bd0efeff           call 0x457dd0
// 00476f13  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 00476f19  3bce                 cmp ecx, esi
// 00476f1b  7408                 je 0x476f25
// 00476f1d  8b11                 mov edx, dword ptr [ecx]
// 00476f1f  8b02                 mov eax, dword ptr [edx]
// 00476f21  6a01                 push 1
// 00476f23  ffd0                 call eax
// 00476f25  89b568030000         mov dword ptr [ebp + 0x368], esi
// 00476f2b  8b856c030000         mov eax, dword ptr [ebp + 0x36c]
// 00476f31  3bc6                 cmp eax, esi
// 00476f33  742d                 je 0x476f62
// 00476f35  83c004               add eax, 4
// 00476f38  50                   push eax
// 00476f39  ffd7                 call edi
// 00476f3b  85c0                 test eax, eax
// 00476f3d  751d                 jne 0x476f5c
// 00476f3f  8b8d6c030000         mov ecx, dword ptr [ebp + 0x36c]
// 00476f45  e8860efeff           call 0x457dd0
// 00476f4a  8b8d6c030000         mov ecx, dword ptr [ebp + 0x36c]
// 00476f50  3bce                 cmp ecx, esi
// 00476f52  7408                 je 0x476f5c
// 00476f54  8b11                 mov edx, dword ptr [ecx]
// 00476f56  8b02                 mov eax, dword ptr [edx]
// 00476f58  6a01                 push 1
// 00476f5a  ffd0                 call eax
// 00476f5c  89b56c030000         mov dword ptr [ebp + 0x36c], esi
// 00476f62  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 00476f68  3bc6                 cmp eax, esi
// 00476f6a  742d                 je 0x476f99
// 00476f6c  83c004               add eax, 4
// 00476f6f  50                   push eax
// 00476f70  ffd7                 call edi
// 00476f72  85c0                 test eax, eax
// 00476f74  751d                 jne 0x476f93
// 00476f76  8b8d70030000         mov ecx, dword ptr [ebp + 0x370]
// 00476f7c  e84f0efeff           call 0x457dd0
// 00476f81  8b8d70030000         mov ecx, dword ptr [ebp + 0x370]
// 00476f87  3bce                 cmp ecx, esi
// 00476f89  7408                 je 0x476f93
// 00476f8b  8b11                 mov edx, dword ptr [ecx]
// 00476f8d  8b02                 mov eax, dword ptr [edx]
// 00476f8f  6a01                 push 1
// 00476f91  ffd0                 call eax
// 00476f93  89b570030000         mov dword ptr [ebp + 0x370], esi
// 00476f99  33c0                 xor eax, eax
// 00476f9b  898580020000         mov dword ptr [ebp + 0x280], eax
// 00476fa1  898584020000         mov dword ptr [ebp + 0x284], eax
// 00476fa7  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 00476fad  d8a5a0020000         fsub dword ptr [ebp + 0x2a0]
// 00476fb3  83ec18               sub esp, 0x18
// 00476fb6  8d4c243c             lea ecx, [esp + 0x3c]
// 00476fba  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00476fc1  d9842490000000       fld dword ptr [esp + 0x90]
// 00476fc8  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 00476fce  d8a5a4020000         fsub dword ptr [ebp + 0x2a4]
// 00476fd4  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00476fdb  d8b42490000000       fdiv dword ptr [esp + 0x90]
// 00476fe2  d905f0fe7800         fld dword ptr [0x78fef0]
// 00476fe8  d95c2414             fstp dword ptr [esp + 0x14]
// 00476fec  d905b07e7900         fld dword ptr [0x797eb0]
// 00476ff2  d95c2410             fstp dword ptr [esp + 0x10]
// 00476ff6  d9e8                 fld1 
// 00476ff8  d95c240c             fstp dword ptr [esp + 0xc]
// 00476ffc  d9056c647900         fld dword ptr [0x79646c]
// 00477002  d95c2408             fstp dword ptr [esp + 8]
// 00477006  d9942490000000       fst dword ptr [esp + 0x90]
// 0047700d  d9842490000000       fld dword ptr [esp + 0x90]
// 00477014  d95c2404             fstp dword ptr [esp + 4]
// 00477018  d9e0                 fchs 
// 0047701a  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00477021  d9842490000000       fld dword ptr [esp + 0x90]
// 00477028  d91c24               fstp dword ptr [esp]
// 0047702b  51                   push ecx
// 0047702c  e85f3e0900           call 0x50ae90
// 00477031  d9ee                 fldz 
// 00477033  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0047703a  8bf0                 mov esi, eax
// 0047703c  8dbd18070000         lea edi, [ebp + 0x718]
// 00477042  b910000000           mov ecx, 0x10
// 00477047  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00477049  dd9d50030000         fstp qword ptr [ebp + 0x350]
// 0047704f  d9e8                 fld1 
// 00477051  dd9d58030000         fstp qword ptr [ebp + 0x358]
// 00477057  83c41c               add esp, 0x1c
// 0047705a  c785f802000001000000 mov dword ptr [ebp + 0x2f8], 1
// 00477064  8995a4030000         mov dword ptr [ebp + 0x3a4], edx
// 0047706a  8bc5                 mov eax, ebp
// 0047706c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00477070  64890d00000000       mov dword ptr fs:[0], ecx
// 00477077  59                   pop ecx
// 00477078  5f                   pop edi
// 00477079  5e                   pop esi
// 0047707a  5d                   pop ebp
// 0047707b  5b                   pop ebx
// 0047707c  83c45c               add esp, 0x5c
// 0047707f  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
