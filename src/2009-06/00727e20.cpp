// roc 2009-06 00727e20  unit: CXTPPaintManager  size: 873 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00727e20
//
// 00727e20  83ec64               sub esp, 0x64
// 00727e23  53                   push ebx
// 00727e24  56                   push esi
// 00727e25  57                   push edi
// 00727e26  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00727e2a  8bf1                 mov esi, ecx
// 00727e2c  57                   push edi
// 00727e2d  8d4c2444             lea ecx, [esp + 0x44]
// 00727e31  e89a860400           call 0x7704d0
// 00727e36  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00727e3a  2b442444             sub eax, dword ptr [esp + 0x44]
// 00727e3e  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00727e44  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00727e48  2b5c2440             sub ebx, dword ptr [esp + 0x40]
// 00727e4c  89442414             mov dword ptr [esp + 0x14], eax
// 00727e50  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00727e56  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 00727e5c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00727e60  33c0                 xor eax, eax
// 00727e62  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00727e66  89742474             mov dword ptr [esp + 0x74], esi
// 00727e6a  85c9                 test ecx, ecx
// 00727e6c  0f8e09030000         jle 0x72817b
// 00727e72  db44241c             fild dword ptr [esp + 0x1c]
// 00727e76  55                   push ebp
// 00727e77  dd5c243c             fstp qword ptr [esp + 0x3c]
// 00727e7b  eb03                 jmp 0x727e80
// 00727e7d  8d4900               lea ecx, [ecx]
// 00727e80  40                   inc eax
// 00727e81  89442424             mov dword ptr [esp + 0x24], eax
// 00727e85  db442424             fild dword ptr [esp + 0x24]
// 00727e89  33ff                 xor edi, edi
// 00727e8b  897c2414             mov dword ptr [esp + 0x14], edi
// 00727e8f  897c2410             mov dword ptr [esp + 0x10], edi
// 00727e93  dc74243c             fdiv qword ptr [esp + 0x3c]
// 00727e97  dd5c2434             fstp qword ptr [esp + 0x34]
// 00727e9b  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 00727ea2  0f8457010000         je 0x727fff
// 00727ea8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00727eab  33ed                 xor ebp, ebp
// 00727ead  3bc7                 cmp eax, edi
// 00727eaf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00727eb3  0f8eff000000         jle 0x727fb8
// 00727eb9  8da42400000000       lea esp, [esp]
// 00727ec0  85ed                 test ebp, ebp
// 00727ec2  7c15                 jl 0x727ed9
// 00727ec4  3be8                 cmp ebp, eax
// 00727ec6  7d11                 jge 0x727ed9
// 00727ec8  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00727ecb  0f8db3020000         jge 0x728184
// 00727ed1  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00727ed4  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00727ed7  eb02                 jmp 0x727edb
// 00727ed9  33f6                 xor esi, esi
// 00727edb  8b16                 mov edx, dword ptr [esi]
// 00727edd  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00727ee3  6a00                 push 0
// 00727ee5  8bce                 mov ecx, esi
// 00727ee7  ffd0                 call eax
// 00727ee9  85c0                 test eax, eax
// 00727eeb  0f84a4000000         je 0x727f95
// 00727ef1  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00727ef7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00727efb  89442428             mov dword ptr [esp + 0x28], eax
// 00727eff  3bc1                 cmp eax, ecx
// 00727f01  0f848a000000         je 0x727f91
// 00727f07  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00727f0d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00727f13  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00727f19  89542454             mov dword ptr [esp + 0x54], edx
// 00727f1d  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00727f23  896c2458             mov dword ptr [esp + 0x58], ebp
// 00727f27  8944245c             mov dword ptr [esp + 0x5c], eax
// 00727f2b  89542460             mov dword ptr [esp + 0x60], edx
// 00727f2f  85c9                 test ecx, ecx
// 00727f31  7406                 je 0x727f39
// 00727f33  dd442434             fld qword ptr [esp + 0x34]
// 00727f37  eb02                 jmp 0x727f3b
// 00727f39  d9e8                 fld1 
// 00727f3b  2bef                 sub ebp, edi
// 00727f3d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00727f41  da4c2410             fimul dword ptr [esp + 0x10]
// 00727f45  e8761fffff           call 0x719ec0
// 00727f4a  8bf0                 mov esi, eax
// 00727f4c  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00727f53  85c0                 test eax, eax
// 00727f55  7403                 je 0x727f5a
// 00727f57  8b4004               mov eax, dword ptr [eax + 4]
// 00727f5a  682000cc00           push 0xcc0020
// 00727f5f  55                   push ebp
// 00727f60  53                   push ebx
// 00727f61  57                   push edi
// 00727f62  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00727f66  6a00                 push 0
// 00727f68  50                   push eax
// 00727f69  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00727f70  8b4804               mov ecx, dword ptr [eax + 4]
// 00727f73  56                   push esi
// 00727f74  53                   push ebx
// 00727f75  57                   push edi
// 00727f76  6a00                 push 0
// 00727f78  51                   push ecx
// 00727f79  ff15dce08900         call dword ptr [0x89e0dc]
// 00727f7f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00727f83  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00727f87  03fe                 add edi, esi
// 00727f89  897c2414             mov dword ptr [esp + 0x14], edi
// 00727f8d  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00727f91  89442410             mov dword ptr [esp + 0x10], eax
// 00727f95  8b542478             mov edx, dword ptr [esp + 0x78]
// 00727f99  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00727f9c  45                   inc ebp
// 00727f9d  3be8                 cmp ebp, eax
// 00727f9f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00727fa3  8bf2                 mov esi, edx
// 00727fa5  0f8c15ffffff         jl 0x727ec0
// 00727fab  837c241000           cmp dword ptr [esp + 0x10], 0
// 00727fb0  7406                 je 0x727fb8
// 00727fb2  dd442434             fld qword ptr [esp + 0x34]
// 00727fb6  eb02                 jmp 0x727fba
// 00727fb8  d9e8                 fld1 
// 00727fba  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00727fbe  2bef                 sub ebp, edi
// 00727fc0  896c2410             mov dword ptr [esp + 0x10], ebp
// 00727fc4  da4c2410             fimul dword ptr [esp + 0x10]
// 00727fc8  e8f31effff           call 0x719ec0
// 00727fcd  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00727fd4  85c9                 test ecx, ecx
// 00727fd6  7403                 je 0x727fdb
// 00727fd8  8b4904               mov ecx, dword ptr [ecx + 4]
// 00727fdb  682000cc00           push 0xcc0020
// 00727fe0  55                   push ebp
// 00727fe1  53                   push ebx
// 00727fe2  57                   push edi
// 00727fe3  6a00                 push 0
// 00727fe5  51                   push ecx
// 00727fe6  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00727fed  8b5104               mov edx, dword ptr [ecx + 4]
// 00727ff0  50                   push eax
// 00727ff1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00727ff5  53                   push ebx
// 00727ff6  50                   push eax
// 00727ff7  6a00                 push 0
// 00727ff9  52                   push edx
// 00727ffa  e957010000           jmp 0x728156
// 00727fff  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00728002  83ed01               sub ebp, 1
// 00728005  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00728009  0f88fe000000         js 0x72810d
// 0072800f  90                   nop 
// 00728010  85ed                 test ebp, ebp
// 00728012  7c0d                 jl 0x728021
// 00728014  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00728017  7d08                 jge 0x728021
// 00728019  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072801c  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0072801f  eb02                 jmp 0x728023
// 00728021  33f6                 xor esi, esi
// 00728023  8b16                 mov edx, dword ptr [esi]
// 00728025  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0072802b  6a00                 push 0
// 0072802d  8bce                 mov ecx, esi
// 0072802f  ffd0                 call eax
// 00728031  85c0                 test eax, eax
// 00728033  0f84b6000000         je 0x7280ef
// 00728039  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0072803f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00728043  8944242c             mov dword ptr [esp + 0x2c], eax
// 00728047  3bc1                 cmp eax, ecx
// 00728049  0f849c000000         je 0x7280eb
// 0072804f  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00728055  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0072805b  89542464             mov dword ptr [esp + 0x64], edx
// 0072805f  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00728065  89442468             mov dword ptr [esp + 0x68], eax
// 00728069  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0072806f  8b742418             mov esi, dword ptr [esp + 0x18]
// 00728073  2bf0                 sub esi, eax
// 00728075  8954246c             mov dword ptr [esp + 0x6c], edx
// 00728079  85c9                 test ecx, ecx
// 0072807b  7406                 je 0x728083
// 0072807d  dd442434             fld qword ptr [esp + 0x34]
// 00728081  eb02                 jmp 0x728085
// 00728083  d9e8                 fld1 
// 00728085  8bee                 mov ebp, esi
// 00728087  2bef                 sub ebp, edi
// 00728089  896c2428             mov dword ptr [esp + 0x28], ebp
// 0072808d  da4c2428             fimul dword ptr [esp + 0x28]
// 00728091  e82a1effff           call 0x719ec0
// 00728096  8bf8                 mov edi, eax
// 00728098  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0072809f  85c0                 test eax, eax
// 007280a1  7504                 jne 0x7280a7
// 007280a3  33c9                 xor ecx, ecx
// 007280a5  eb03                 jmp 0x7280aa
// 007280a7  8b4804               mov ecx, dword ptr [eax + 4]
// 007280aa  8b442418             mov eax, dword ptr [esp + 0x18]
// 007280ae  682000cc00           push 0xcc0020
// 007280b3  55                   push ebp
// 007280b4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007280b8  53                   push ebx
// 007280b9  8bd0                 mov edx, eax
// 007280bb  2bd6                 sub edx, esi
// 007280bd  52                   push edx
// 007280be  6a00                 push 0
// 007280c0  51                   push ecx
// 007280c1  57                   push edi
// 007280c2  2bc7                 sub eax, edi
// 007280c4  53                   push ebx
// 007280c5  2bc5                 sub eax, ebp
// 007280c7  50                   push eax
// 007280c8  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007280cf  8b4804               mov ecx, dword ptr [eax + 4]
// 007280d2  6a00                 push 0
// 007280d4  51                   push ecx
// 007280d5  ff15dce08900         call dword ptr [0x89e0dc]
// 007280db  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007280df  03ef                 add ebp, edi
// 007280e1  896c2414             mov dword ptr [esp + 0x14], ebp
// 007280e5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007280e9  8bfe                 mov edi, esi
// 007280eb  89442410             mov dword ptr [esp + 0x10], eax
// 007280ef  8b742478             mov esi, dword ptr [esp + 0x78]
// 007280f3  83ed01               sub ebp, 1
// 007280f6  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007280fa  0f8910ffffff         jns 0x728010
// 00728100  837c241000           cmp dword ptr [esp + 0x10], 0
// 00728105  7406                 je 0x72810d
// 00728107  dd442434             fld qword ptr [esp + 0x34]
// 0072810b  eb02                 jmp 0x72810f
// 0072810d  d9e8                 fld1 
// 0072810f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00728113  2bef                 sub ebp, edi
// 00728115  896c2410             mov dword ptr [esp + 0x10], ebp
// 00728119  da4c2410             fimul dword ptr [esp + 0x10]
// 0072811d  e89e1dffff           call 0x719ec0
// 00728122  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00728129  85c9                 test ecx, ecx
// 0072812b  7403                 je 0x728130
// 0072812d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00728130  8b542418             mov edx, dword ptr [esp + 0x18]
// 00728134  682000cc00           push 0xcc0020
// 00728139  55                   push ebp
// 0072813a  53                   push ebx
// 0072813b  6a00                 push 0
// 0072813d  6a00                 push 0
// 0072813f  51                   push ecx
// 00728140  50                   push eax
// 00728141  2bd0                 sub edx, eax
// 00728143  2b542430             sub edx, dword ptr [esp + 0x30]
// 00728147  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0072814e  8b4804               mov ecx, dword ptr [eax + 4]
// 00728151  53                   push ebx
// 00728152  52                   push edx
// 00728153  6a00                 push 0
// 00728155  51                   push ecx
// 00728156  ff15dce08900         call dword ptr [0x89e0dc]
// 0072815c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00728160  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00728164  99                   cdq 
// 00728165  f7ff                 idiv edi
// 00728167  50                   push eax
// 00728168  ff15b8e28900         call dword ptr [0x89e2b8]
// 0072816e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00728172  3bc7                 cmp eax, edi
// 00728174  0f8c06fdffff         jl 0x727e80
// 0072817a  5d                   pop ebp
// 0072817b  5f                   pop edi
// 0072817c  5e                   pop esi
// 0072817d  5b                   pop ebx
// 0072817e  83c464               add esp, 0x64
// 00728181  c21000               ret 0x10
// 00728184  e85b0bffff           call 0x718ce4
// copied from an identical function in another client (function ?AnimateExpanding@CXTPPaintManager@@UAEXPAVCXTPCommandBar@@PAVCDC@@1H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp