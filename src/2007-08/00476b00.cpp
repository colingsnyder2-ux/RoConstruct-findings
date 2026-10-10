// from server: 100% by tester
// roc 2007-03 00476c60  unit: seg_00470000  size: 1410 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00476c60
//
// 00476c60  6aff                 push -1
// 00476c62  68ac747400           push 0x7474ac
// 00476c67  64a100000000         mov eax, dword ptr fs:[0]
// 00476c6d  50                   push eax
// 00476c6e  83ec50               sub esp, 0x50
// 00476c71  53                   push ebx
// 00476c72  55                   push ebp
// 00476c73  56                   push esi
// 00476c74  57                   push edi
// 00476c75  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00476c7a  33c4                 xor eax, esp
// 00476c7c  50                   push eax
// 00476c7d  8d442464             lea eax, [esp + 0x64]
// 00476c81  64a300000000         mov dword ptr fs:[0], eax
// 00476c87  8be9                 mov ebp, ecx
// 00476c89  896c2414             mov dword ptr [esp + 0x14], ebp
// 00476c8d  8bf5                 mov esi, ebp
// 00476c8f  bf07000000           mov edi, 7
// 00476c94  8bce                 mov ecx, esi
// 00476c96  e8a5940800           call 0x500140
// 00476c9b  83c650               add esi, 0x50
// 00476c9e  83ef01               sub edi, 1
// 00476ca1  79f1                 jns 0x476c94
// 00476ca3  db442478             fild dword ptr [esp + 0x78]
// 00476ca7  83ec10               sub esp, 0x10
// 00476caa  d9ee                 fldz 
// 00476cac  8d85a0020000         lea eax, [ebp + 0x2a0]
// 00476cb2  dcc1                 fadd st(1), st(0)
// 00476cb4  c6859d02000001       mov byte ptr [ebp + 0x29d], 1
// 00476cbb  d9c9                 fxch st(1)
// 00476cbd  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00476cc4  d9842488000000       fld dword ptr [esp + 0x88]
// 00476ccb  d95c240c             fstp dword ptr [esp + 0xc]
// 00476ccf  da842484000000       fiadd dword ptr [esp + 0x84]
// 00476cd6  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00476cdd  d9842488000000       fld dword ptr [esp + 0x88]
// 00476ce4  d95c2408             fstp dword ptr [esp + 8]
// 00476ce8  d9ee                 fldz 
// 00476cea  d9542404             fst dword ptr [esp + 4]
// 00476cee  d91c24               fstp dword ptr [esp]
// 00476cf1  50                   push eax
// 00476cf2  e889f0fdff           call 0x455d80
// 00476cf7  d9ee                 fldz 
// 00476cf9  d995b0020000         fst dword ptr [ebp + 0x2b0]
// 00476cff  33f6                 xor esi, esi
// 00476d01  d995b4020000         fst dword ptr [ebp + 0x2b4]
// 00476d07  83c414               add esp, 0x14
// 00476d0a  d995b8020000         fst dword ptr [ebp + 0x2b8]
// 00476d10  d995bc020000         fst dword ptr [ebp + 0x2bc]
// 00476d16  c685c002000000       mov byte ptr [ebp + 0x2c0], 0
// 00476d1d  c685c102000001       mov byte ptr [ebp + 0x2c1], 1
// 00476d24  c685c202000001       mov byte ptr [ebp + 0x2c2], 1
// 00476d2b  c685c302000000       mov byte ptr [ebp + 0x2c3], 0
// 00476d32  89b5c8020000         mov dword ptr [ebp + 0x2c8], esi
// 00476d38  d9ee                 fldz 
// 00476d3a  bf06000000           mov edi, 6
// 00476d3f  dd9dd8020000         fstp qword ptr [ebp + 0x2d8]
// 00476d45  c785cc02000003000000 mov dword ptr [ebp + 0x2cc], 3
// 00476d4f  89bdd0020000         mov dword ptr [ebp + 0x2d0], edi
// 00476d55  8974246c             mov dword ptr [esp + 0x6c], esi
// 00476d59  89b560030000         mov dword ptr [ebp + 0x360], esi
// 00476d5f  89b564030000         mov dword ptr [ebp + 0x364], esi
// 00476d65  89b568030000         mov dword ptr [ebp + 0x368], esi
// 00476d6b  89b56c030000         mov dword ptr [ebp + 0x36c], esi
// 00476d71  89b570030000         mov dword ptr [ebp + 0x370], esi
// 00476d77  d99598030000         fst dword ptr [ebp + 0x398]
// 00476d7d  68a0234c00           push 0x4c23a0
// 00476d82  d9959c030000         fst dword ptr [ebp + 0x39c]
// 00476d88  68305b4700           push 0x475b30
// 00476d8d  d99da0030000         fstp dword ptr [ebp + 0x3a0]
// 00476d93  6a08                 push 8
// 00476d95  6a5c                 push 0x5c
// 00476d97  8d85a8030000         lea eax, [ebp + 0x3a8]
// 00476d9d  50                   push eax
// 00476d9e  c684248000000005     mov byte ptr [esp + 0x80], 5
// 00476da6  e8c1821a00           call 0x61f06c
// 00476dab  8d9d88060000         lea ebx, [ebp + 0x688]
// 00476db1  8bcb                 mov ecx, ebx
// 00476db3  c644246c06           mov byte ptr [esp + 0x6c], 6
// 00476db8  e8b3e3ffff           call 0x475170
// 00476dbd  8d4b30               lea ecx, [ebx + 0x30]
// 00476dc0  e8abe3ffff           call 0x475170
// 00476dc5  8d4b60               lea ecx, [ebx + 0x60]
// 00476dc8  e8a3e3ffff           call 0x475170
// 00476dcd  8d8b90000000         lea ecx, [ebx + 0x90]
// 00476dd3  e848960800           call 0x500420
// 00476dd8  c683d000000001       mov byte ptr [ebx + 0xd0], 1
// 00476ddf  8b85c8020000         mov eax, dword ptr [ebp + 0x2c8]
// 00476de5  3bc6                 cmp eax, esi
// 00476de7  7431                 je 0x476e1a
// 00476de9  83c004               add eax, 4
// 00476dec  50                   push eax
// 00476ded  ff15a8d27700         call dword ptr [0x77d2a8]
// 00476df3  85c0                 test eax, eax
// 00476df5  751d                 jne 0x476e14
// 00476df7  8b8dc8020000         mov ecx, dword ptr [ebp + 0x2c8]
// 00476dfd  e8bec5feff           call 0x4633c0
// 00476e02  8b8dc8020000         mov ecx, dword ptr [ebp + 0x2c8]
// 00476e08  3bce                 cmp ecx, esi
// 00476e0a  7408                 je 0x476e14
// 00476e0c  8b11                 mov edx, dword ptr [ecx]
// 00476e0e  8b02                 mov eax, dword ptr [edx]
// 00476e10  6a01                 push 1
// 00476e12  ffd0                 call eax
// 00476e14  89b5c8020000         mov dword ptr [ebp + 0x2c8], esi
// 00476e1a  d9ee                 fldz 
// 00476e1c  b802000000           mov eax, 2
// 00476e21  dd9d30030000         fstp qword ptr [ebp + 0x330]
// 00476e27  c6858802000000       mov byte ptr [ebp + 0x288], 0
// 00476e2e  d9e8                 fld1 
// 00476e30  898520030000         mov dword ptr [ebp + 0x320], eax
// 00476e36  dd9578030000         fst qword ptr [ebp + 0x378]
// 00476e3c  c7852403000003000000 mov dword ptr [ebp + 0x324], 3
// 00476e46  dd9d80030000         fstp qword ptr [ebp + 0x380]
// 00476e4c  898528030000         mov dword ptr [ebp + 0x328], eax
// 00476e52  dd05a8727900         fld qword ptr [0x7972a8]
// 00476e58  89bdc4020000         mov dword ptr [ebp + 0x2c4], edi
// 00476e5e  dd9d48030000         fstp qword ptr [ebp + 0x348]
// 00476e64  89bdfc020000         mov dword ptr [ebp + 0x2fc], edi
// 00476e6a  89b500030000         mov dword ptr [ebp + 0x300], esi
// 00476e70  898508030000         mov dword ptr [ebp + 0x308], eax
// 00476e76  89850c030000         mov dword ptr [ebp + 0x30c], eax
// 00476e7c  898510030000         mov dword ptr [ebp + 0x310], eax
// 00476e82  898514030000         mov dword ptr [ebp + 0x314], eax
// 00476e88  898518030000         mov dword ptr [ebp + 0x318], eax
// 00476e8e  89851c030000         mov dword ptr [ebp + 0x31c], eax
// 00476e94  89b538030000         mov dword ptr [ebp + 0x338], esi
// 00476e9a  e8819a0800           call 0x500920
// 00476e9f  d900                 fld dword ptr [eax]
// 00476ea1  dd05c8237900         fld qword ptr [0x7923c8]
// 00476ea7  8d4c2424             lea ecx, [esp + 0x24]
// 00476eab  dcc9                 fmul st(1), st(0)
// 00476ead  d9c9                 fxch st(1)
// 00476eaf  d95c2418             fstp dword ptr [esp + 0x18]
// 00476eb3  d94004               fld dword ptr [eax + 4]
// 00476eb6  d8c9                 fmul st(1)
// 00476eb8  d95c241c             fstp dword ptr [esp + 0x1c]
// 00476ebc  d84808               fmul dword ptr [eax + 8]
// 00476ebf  d95c2420             fstp dword ptr [esp + 0x20]
// 00476ec3  d9442418             fld dword ptr [esp + 0x18]
// 00476ec7  d99d3c030000         fstp dword ptr [ebp + 0x33c]
// 00476ecd  d944241c             fld dword ptr [esp + 0x1c]
// 00476ed1  d99d40030000         fstp dword ptr [ebp + 0x340]
// 00476ed7  d9442420             fld dword ptr [esp + 0x20]
// 00476edb  d99d44030000         fstp dword ptr [ebp + 0x344]
// 00476ee1  d90500617800         fld dword ptr [0x786100]
// 00476ee7  d9958c020000         fst dword ptr [ebp + 0x28c]
// 00476eed  d99590020000         fst dword ptr [ebp + 0x290]
// 00476ef3  d99d94020000         fstp dword ptr [ebp + 0x294]
// 00476ef9  d9e8                 fld1 
// 00476efb  d99598020000         fst dword ptr [ebp + 0x298]
// 00476f01  c6859c02000000       mov byte ptr [ebp + 0x29c], 0
// 00476f08  d99588030000         fst dword ptr [ebp + 0x388]
// 00476f0e  d9958c030000         fst dword ptr [ebp + 0x38c]
// 00476f14  d99590030000         fst dword ptr [ebp + 0x390]
// 00476f1a  d99d94030000         fstp dword ptr [ebp + 0x394]
// 00476f20  d9ee                 fldz 
// 00476f22  d99598030000         fst dword ptr [ebp + 0x398]
// 00476f28  d9959c030000         fst dword ptr [ebp + 0x39c]
// 00476f2e  d99da0030000         fstp dword ptr [ebp + 0x3a0]
// 00476f34  e837e2ffff           call 0x475170
// 00476f39  8bf0                 mov esi, eax
// 00476f3b  b909000000           mov ecx, 9
// 00476f40  8bfb                 mov edi, ebx
// 00476f42  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476f44  d94024               fld dword ptr [eax + 0x24]
// 00476f47  d95b24               fstp dword ptr [ebx + 0x24]
// 00476f4a  d94028               fld dword ptr [eax + 0x28]
// 00476f4d  d95b28               fstp dword ptr [ebx + 0x28]
// 00476f50  d9402c               fld dword ptr [eax + 0x2c]
// 00476f53  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00476f56  8d4c2424             lea ecx, [esp + 0x24]
// 00476f5a  e811e2ffff           call 0x475170
// 00476f5f  8d95b8060000         lea edx, [ebp + 0x6b8]
// 00476f65  8bf0                 mov esi, eax
// 00476f67  8bfa                 mov edi, edx
// 00476f69  b909000000           mov ecx, 9
// 00476f6e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476f70  d94024               fld dword ptr [eax + 0x24]
// 00476f73  d95a24               fstp dword ptr [edx + 0x24]
// 00476f76  d94028               fld dword ptr [eax + 0x28]
// 00476f79  d95a28               fstp dword ptr [edx + 0x28]
// 00476f7c  d9402c               fld dword ptr [eax + 0x2c]
// 00476f7f  d95a2c               fstp dword ptr [edx + 0x2c]
// 00476f82  8d4c2424             lea ecx, [esp + 0x24]
// 00476f86  e8e5e1ffff           call 0x475170
// 00476f8b  8d95e8060000         lea edx, [ebp + 0x6e8]
// 00476f91  8bf0                 mov esi, eax
// 00476f93  b909000000           mov ecx, 9
// 00476f98  8bfa                 mov edi, edx
// 00476f9a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476f9c  d94024               fld dword ptr [eax + 0x24]
// 00476f9f  d95a24               fstp dword ptr [edx + 0x24]
// 00476fa2  d94028               fld dword ptr [eax + 0x28]
// 00476fa5  d95a28               fstp dword ptr [edx + 0x28]
// 00476fa8  d9402c               fld dword ptr [eax + 0x2c]
// 00476fab  d95a2c               fstp dword ptr [edx + 0x2c]
// 00476fae  d9e8                 fld1 
// 00476fb0  dd9de0020000         fstp qword ptr [ebp + 0x2e0]
// 00476fb6  d9ee                 fldz 
// 00476fb8  8b3da8d27700         mov edi, dword ptr [0x77d2a8]
// 00476fbe  33f6                 xor esi, esi
// 00476fc0  89b504030000         mov dword ptr [ebp + 0x304], esi
// 00476fc6  d995e8020000         fst dword ptr [ebp + 0x2e8]
// 00476fcc  d995ec020000         fst dword ptr [ebp + 0x2ec]
// 00476fd2  d99df0020000         fstp dword ptr [ebp + 0x2f0]
// 00476fd8  d9e8                 fld1 
// 00476fda  d99df4020000         fstp dword ptr [ebp + 0x2f4]
// 00476fe0  89b52c030000         mov dword ptr [ebp + 0x32c], esi
// 00476fe6  8b8560030000         mov eax, dword ptr [ebp + 0x360]
// 00476fec  3bc6                 cmp eax, esi
// 00476fee  742d                 je 0x47701d
// 00476ff0  83c004               add eax, 4
// 00476ff3  50                   push eax
// 00476ff4  ffd7                 call edi
// 00476ff6  85c0                 test eax, eax
// 00476ff8  751d                 jne 0x477017
// 00476ffa  8b8d60030000         mov ecx, dword ptr [ebp + 0x360]
// 00477000  e8bbc3feff           call 0x4633c0
// 00477005  8b8d60030000         mov ecx, dword ptr [ebp + 0x360]
// 0047700b  3bce                 cmp ecx, esi
// 0047700d  7408                 je 0x477017
// 0047700f  8b11                 mov edx, dword ptr [ecx]
// 00477011  8b02                 mov eax, dword ptr [edx]
// 00477013  6a01                 push 1
// 00477015  ffd0                 call eax
// 00477017  89b560030000         mov dword ptr [ebp + 0x360], esi
// 0047701d  8b8564030000         mov eax, dword ptr [ebp + 0x364]
// 00477023  3bc6                 cmp eax, esi
// 00477025  742d                 je 0x477054
// 00477027  83c004               add eax, 4
// 0047702a  50                   push eax
// 0047702b  ffd7                 call edi
// 0047702d  85c0                 test eax, eax
// 0047702f  751d                 jne 0x47704e
// 00477031  8b8d64030000         mov ecx, dword ptr [ebp + 0x364]
// 00477037  e884c3feff           call 0x4633c0
// 0047703c  8b8d64030000         mov ecx, dword ptr [ebp + 0x364]
// 00477042  3bce                 cmp ecx, esi
// 00477044  7408                 je 0x47704e
// 00477046  8b11                 mov edx, dword ptr [ecx]
// 00477048  8b02                 mov eax, dword ptr [edx]
// 0047704a  6a01                 push 1
// 0047704c  ffd0                 call eax
// 0047704e  89b564030000         mov dword ptr [ebp + 0x364], esi
// 00477054  8b8568030000         mov eax, dword ptr [ebp + 0x368]
// 0047705a  3bc6                 cmp eax, esi
// 0047705c  742d                 je 0x47708b
// 0047705e  83c004               add eax, 4
// 00477061  50                   push eax
// 00477062  ffd7                 call edi
// 00477064  85c0                 test eax, eax
// 00477066  751d                 jne 0x477085
// 00477068  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 0047706e  e84dc3feff           call 0x4633c0
// 00477073  8b8d68030000         mov ecx, dword ptr [ebp + 0x368]
// 00477079  3bce                 cmp ecx, esi
// 0047707b  7408                 je 0x477085
// 0047707d  8b11                 mov edx, dword ptr [ecx]
// 0047707f  8b02                 mov eax, dword ptr [edx]
// 00477081  6a01                 push 1
// 00477083  ffd0                 call eax
// 00477085  89b568030000         mov dword ptr [ebp + 0x368], esi
// 0047708b  8b856c030000         mov eax, dword ptr [ebp + 0x36c]
// 00477091  3bc6                 cmp eax, esi
// 00477093  742d                 je 0x4770c2
// 00477095  83c004               add eax, 4
// 00477098  50                   push eax
// 00477099  ffd7                 call edi
// 0047709b  85c0                 test eax, eax
// 0047709d  751d                 jne 0x4770bc
// 0047709f  8b8d6c030000         mov ecx, dword ptr [ebp + 0x36c]
// 004770a5  e816c3feff           call 0x4633c0
// 004770aa  8b8d6c030000         mov ecx, dword ptr [ebp + 0x36c]
// 004770b0  3bce                 cmp ecx, esi
// 004770b2  7408                 je 0x4770bc
// 004770b4  8b11                 mov edx, dword ptr [ecx]
// 004770b6  8b02                 mov eax, dword ptr [edx]
// 004770b8  6a01                 push 1
// 004770ba  ffd0                 call eax
// 004770bc  89b56c030000         mov dword ptr [ebp + 0x36c], esi
// 004770c2  8b8570030000         mov eax, dword ptr [ebp + 0x370]
// 004770c8  3bc6                 cmp eax, esi
// 004770ca  742d                 je 0x4770f9
// 004770cc  83c004               add eax, 4
// 004770cf  50                   push eax
// 004770d0  ffd7                 call edi
// 004770d2  85c0                 test eax, eax
// 004770d4  751d                 jne 0x4770f3
// 004770d6  8b8d70030000         mov ecx, dword ptr [ebp + 0x370]
// 004770dc  e8dfc2feff           call 0x4633c0
// 004770e1  8b8d70030000         mov ecx, dword ptr [ebp + 0x370]
// 004770e7  3bce                 cmp ecx, esi
// 004770e9  7408                 je 0x4770f3
// 004770eb  8b11                 mov edx, dword ptr [ecx]
// 004770ed  8b02                 mov eax, dword ptr [edx]
// 004770ef  6a01                 push 1
// 004770f1  ffd0                 call eax
// 004770f3  89b570030000         mov dword ptr [ebp + 0x370], esi
// 004770f9  33c0                 xor eax, eax
// 004770fb  898580020000         mov dword ptr [ebp + 0x280], eax
// 00477101  898584020000         mov dword ptr [ebp + 0x284], eax
// 00477107  d985a8020000         fld dword ptr [ebp + 0x2a8]
// 0047710d  d8a5a0020000         fsub dword ptr [ebp + 0x2a0]
// 00477113  83ec18               sub esp, 0x18
// 00477116  8d4c243c             lea ecx, [esp + 0x3c]
// 0047711a  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00477121  d9842490000000       fld dword ptr [esp + 0x90]
// 00477128  d985ac020000         fld dword ptr [ebp + 0x2ac]
// 0047712e  d8a5a4020000         fsub dword ptr [ebp + 0x2a4]
// 00477134  d99c2490000000       fstp dword ptr [esp + 0x90]
// 0047713b  d8b42490000000       fdiv dword ptr [esp + 0x90]
// 00477142  d90570ef7800         fld dword ptr [0x78ef70]
// 00477148  d95c2414             fstp dword ptr [esp + 0x14]
// 0047714c  d905a0727900         fld dword ptr [0x7972a0]
// 00477152  d95c2410             fstp dword ptr [esp + 0x10]
// 00477156  d9e8                 fld1 
// 00477158  d95c240c             fstp dword ptr [esp + 0xc]
// 0047715c  d90578587900         fld dword ptr [0x795878]
// 00477162  d95c2408             fstp dword ptr [esp + 8]
// 00477166  d9942490000000       fst dword ptr [esp + 0x90]
// 0047716d  d9842490000000       fld dword ptr [esp + 0x90]
// 00477174  d95c2404             fstp dword ptr [esp + 4]
// 00477178  d9e0                 fchs 
// 0047717a  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00477181  d9842490000000       fld dword ptr [esp + 0x90]
// 00477188  d91c24               fstp dword ptr [esp]
// 0047718b  51                   push ecx
// 0047718c  e83f940800           call 0x5005d0
// 00477191  d9ee                 fldz 
// 00477193  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0047719a  8bf0                 mov esi, eax
// 0047719c  8dbd18070000         lea edi, [ebp + 0x718]
// 004771a2  b910000000           mov ecx, 0x10
// 004771a7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004771a9  dd9d50030000         fstp qword ptr [ebp + 0x350]
// 004771af  d9e8                 fld1 
// 004771b1  dd9d58030000         fstp qword ptr [ebp + 0x358]
// 004771b7  83c41c               add esp, 0x1c
// 004771ba  c785f802000001000000 mov dword ptr [ebp + 0x2f8], 1
// 004771c4  8995a4030000         mov dword ptr [ebp + 0x3a4], edx
// 004771ca  8bc5                 mov eax, ebp
// 004771cc  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004771d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004771d7  59                   pop ecx
// 004771d8  5f                   pop edi
// 004771d9  5e                   pop esi
// 004771da  5d                   pop ebp
// 004771db  5b                   pop ebx
// 004771dc  83c45c               add esp, 0x5c
// 004771df  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0RenderState@RenderDevice@G3D@@QAE@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
