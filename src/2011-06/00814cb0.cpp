// roc 2011-06 00814cb0  unit: CXTPPaintManager  size: 873 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00814cb0
//
// 00814cb0  83ec64               sub esp, 0x64
// 00814cb3  53                   push ebx
// 00814cb4  56                   push esi
// 00814cb5  57                   push edi
// 00814cb6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00814cba  8bf1                 mov esi, ecx
// 00814cbc  57                   push edi
// 00814cbd  8d4c2444             lea ecx, [esp + 0x44]
// 00814cc1  e8ca800400           call 0x85cd90
// 00814cc6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00814cca  2b442444             sub eax, dword ptr [esp + 0x44]
// 00814cce  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00814cd4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00814cd8  2b5c2440             sub ebx, dword ptr [esp + 0x40]
// 00814cdc  89442414             mov dword ptr [esp + 0x14], eax
// 00814ce0  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00814ce6  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 00814cec  8944242c             mov dword ptr [esp + 0x2c], eax
// 00814cf0  33c0                 xor eax, eax
// 00814cf2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00814cf6  89742474             mov dword ptr [esp + 0x74], esi
// 00814cfa  85c9                 test ecx, ecx
// 00814cfc  0f8e09030000         jle 0x81500b
// 00814d02  db44241c             fild dword ptr [esp + 0x1c]
// 00814d06  55                   push ebp
// 00814d07  dd5c243c             fstp qword ptr [esp + 0x3c]
// 00814d0b  eb03                 jmp 0x814d10
// 00814d0d  8d4900               lea ecx, [ecx]
// 00814d10  40                   inc eax
// 00814d11  89442424             mov dword ptr [esp + 0x24], eax
// 00814d15  db442424             fild dword ptr [esp + 0x24]
// 00814d19  33ff                 xor edi, edi
// 00814d1b  897c2414             mov dword ptr [esp + 0x14], edi
// 00814d1f  897c2410             mov dword ptr [esp + 0x10], edi
// 00814d23  dc74243c             fdiv qword ptr [esp + 0x3c]
// 00814d27  dd5c2434             fstp qword ptr [esp + 0x34]
// 00814d2b  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 00814d32  0f8457010000         je 0x814e8f
// 00814d38  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00814d3b  33ed                 xor ebp, ebp
// 00814d3d  3bc7                 cmp eax, edi
// 00814d3f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00814d43  0f8eff000000         jle 0x814e48
// 00814d49  8da42400000000       lea esp, [esp]
// 00814d50  85ed                 test ebp, ebp
// 00814d52  7c15                 jl 0x814d69
// 00814d54  3be8                 cmp ebp, eax
// 00814d56  7d11                 jge 0x814d69
// 00814d58  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00814d5b  0f8db3020000         jge 0x815014
// 00814d61  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00814d64  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00814d67  eb02                 jmp 0x814d6b
// 00814d69  33f6                 xor esi, esi
// 00814d6b  8b16                 mov edx, dword ptr [esi]
// 00814d6d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00814d73  6a00                 push 0
// 00814d75  8bce                 mov ecx, esi
// 00814d77  ffd0                 call eax
// 00814d79  85c0                 test eax, eax
// 00814d7b  0f84a4000000         je 0x814e25
// 00814d81  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00814d87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00814d8b  89442428             mov dword ptr [esp + 0x28], eax
// 00814d8f  3bc1                 cmp eax, ecx
// 00814d91  0f848a000000         je 0x814e21
// 00814d97  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00814d9d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00814da3  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00814da9  89542454             mov dword ptr [esp + 0x54], edx
// 00814dad  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00814db3  896c2458             mov dword ptr [esp + 0x58], ebp
// 00814db7  8944245c             mov dword ptr [esp + 0x5c], eax
// 00814dbb  89542460             mov dword ptr [esp + 0x60], edx
// 00814dbf  85c9                 test ecx, ecx
// 00814dc1  7406                 je 0x814dc9
// 00814dc3  dd442434             fld qword ptr [esp + 0x34]
// 00814dc7  eb02                 jmp 0x814dcb
// 00814dc9  d9e8                 fld1 
// 00814dcb  2bef                 sub ebp, edi
// 00814dcd  896c2410             mov dword ptr [esp + 0x10], ebp
// 00814dd1  da4c2410             fimul dword ptr [esp + 0x10]
// 00814dd5  e85667ffff           call 0x80b530
// 00814dda  8bf0                 mov esi, eax
// 00814ddc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00814de3  85c0                 test eax, eax
// 00814de5  7403                 je 0x814dea
// 00814de7  8b4004               mov eax, dword ptr [eax + 4]
// 00814dea  682000cc00           push 0xcc0020
// 00814def  55                   push ebp
// 00814df0  53                   push ebx
// 00814df1  57                   push edi
// 00814df2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00814df6  6a00                 push 0
// 00814df8  50                   push eax
// 00814df9  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00814e00  8b4804               mov ecx, dword ptr [eax + 4]
// 00814e03  56                   push esi
// 00814e04  53                   push ebx
// 00814e05  57                   push edi
// 00814e06  6a00                 push 0
// 00814e08  51                   push ecx
// 00814e09  ff151401a400         call dword ptr [0xa40114]
// 00814e0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00814e13  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00814e17  03fe                 add edi, esi
// 00814e19  897c2414             mov dword ptr [esp + 0x14], edi
// 00814e1d  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00814e21  89442410             mov dword ptr [esp + 0x10], eax
// 00814e25  8b542478             mov edx, dword ptr [esp + 0x78]
// 00814e29  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00814e2c  45                   inc ebp
// 00814e2d  3be8                 cmp ebp, eax
// 00814e2f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00814e33  8bf2                 mov esi, edx
// 00814e35  0f8c15ffffff         jl 0x814d50
// 00814e3b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00814e40  7406                 je 0x814e48
// 00814e42  dd442434             fld qword ptr [esp + 0x34]
// 00814e46  eb02                 jmp 0x814e4a
// 00814e48  d9e8                 fld1 
// 00814e4a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00814e4e  2bef                 sub ebp, edi
// 00814e50  896c2410             mov dword ptr [esp + 0x10], ebp
// 00814e54  da4c2410             fimul dword ptr [esp + 0x10]
// 00814e58  e8d366ffff           call 0x80b530
// 00814e5d  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00814e64  85c9                 test ecx, ecx
// 00814e66  7403                 je 0x814e6b
// 00814e68  8b4904               mov ecx, dword ptr [ecx + 4]
// 00814e6b  682000cc00           push 0xcc0020
// 00814e70  55                   push ebp
// 00814e71  53                   push ebx
// 00814e72  57                   push edi
// 00814e73  6a00                 push 0
// 00814e75  51                   push ecx
// 00814e76  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00814e7d  8b5104               mov edx, dword ptr [ecx + 4]
// 00814e80  50                   push eax
// 00814e81  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814e85  53                   push ebx
// 00814e86  50                   push eax
// 00814e87  6a00                 push 0
// 00814e89  52                   push edx
// 00814e8a  e957010000           jmp 0x814fe6
// 00814e8f  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00814e92  83ed01               sub ebp, 1
// 00814e95  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00814e99  0f88fe000000         js 0x814f9d
// 00814e9f  90                   nop 
// 00814ea0  85ed                 test ebp, ebp
// 00814ea2  7c0d                 jl 0x814eb1
// 00814ea4  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00814ea7  7d08                 jge 0x814eb1
// 00814ea9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00814eac  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00814eaf  eb02                 jmp 0x814eb3
// 00814eb1  33f6                 xor esi, esi
// 00814eb3  8b16                 mov edx, dword ptr [esi]
// 00814eb5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00814ebb  6a00                 push 0
// 00814ebd  8bce                 mov ecx, esi
// 00814ebf  ffd0                 call eax
// 00814ec1  85c0                 test eax, eax
// 00814ec3  0f84b6000000         je 0x814f7f
// 00814ec9  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00814ecf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00814ed3  8944242c             mov dword ptr [esp + 0x2c], eax
// 00814ed7  3bc1                 cmp eax, ecx
// 00814ed9  0f849c000000         je 0x814f7b
// 00814edf  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00814ee5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00814eeb  89542464             mov dword ptr [esp + 0x64], edx
// 00814eef  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00814ef5  89442468             mov dword ptr [esp + 0x68], eax
// 00814ef9  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00814eff  8b742418             mov esi, dword ptr [esp + 0x18]
// 00814f03  2bf0                 sub esi, eax
// 00814f05  8954246c             mov dword ptr [esp + 0x6c], edx
// 00814f09  85c9                 test ecx, ecx
// 00814f0b  7406                 je 0x814f13
// 00814f0d  dd442434             fld qword ptr [esp + 0x34]
// 00814f11  eb02                 jmp 0x814f15
// 00814f13  d9e8                 fld1 
// 00814f15  8bee                 mov ebp, esi
// 00814f17  2bef                 sub ebp, edi
// 00814f19  896c2428             mov dword ptr [esp + 0x28], ebp
// 00814f1d  da4c2428             fimul dword ptr [esp + 0x28]
// 00814f21  e80a66ffff           call 0x80b530
// 00814f26  8bf8                 mov edi, eax
// 00814f28  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00814f2f  85c0                 test eax, eax
// 00814f31  7504                 jne 0x814f37
// 00814f33  33c9                 xor ecx, ecx
// 00814f35  eb03                 jmp 0x814f3a
// 00814f37  8b4804               mov ecx, dword ptr [eax + 4]
// 00814f3a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00814f3e  682000cc00           push 0xcc0020
// 00814f43  55                   push ebp
// 00814f44  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00814f48  53                   push ebx
// 00814f49  8bd0                 mov edx, eax
// 00814f4b  2bd6                 sub edx, esi
// 00814f4d  52                   push edx
// 00814f4e  6a00                 push 0
// 00814f50  51                   push ecx
// 00814f51  57                   push edi
// 00814f52  2bc7                 sub eax, edi
// 00814f54  53                   push ebx
// 00814f55  2bc5                 sub eax, ebp
// 00814f57  50                   push eax
// 00814f58  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00814f5f  8b4804               mov ecx, dword ptr [eax + 4]
// 00814f62  6a00                 push 0
// 00814f64  51                   push ecx
// 00814f65  ff151401a400         call dword ptr [0xa40114]
// 00814f6b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00814f6f  03ef                 add ebp, edi
// 00814f71  896c2414             mov dword ptr [esp + 0x14], ebp
// 00814f75  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00814f79  8bfe                 mov edi, esi
// 00814f7b  89442410             mov dword ptr [esp + 0x10], eax
// 00814f7f  8b742478             mov esi, dword ptr [esp + 0x78]
// 00814f83  83ed01               sub ebp, 1
// 00814f86  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00814f8a  0f8910ffffff         jns 0x814ea0
// 00814f90  837c241000           cmp dword ptr [esp + 0x10], 0
// 00814f95  7406                 je 0x814f9d
// 00814f97  dd442434             fld qword ptr [esp + 0x34]
// 00814f9b  eb02                 jmp 0x814f9f
// 00814f9d  d9e8                 fld1 
// 00814f9f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00814fa3  2bef                 sub ebp, edi
// 00814fa5  896c2410             mov dword ptr [esp + 0x10], ebp
// 00814fa9  da4c2410             fimul dword ptr [esp + 0x10]
// 00814fad  e87e65ffff           call 0x80b530
// 00814fb2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00814fb9  85c9                 test ecx, ecx
// 00814fbb  7403                 je 0x814fc0
// 00814fbd  8b4904               mov ecx, dword ptr [ecx + 4]
// 00814fc0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00814fc4  682000cc00           push 0xcc0020
// 00814fc9  55                   push ebp
// 00814fca  53                   push ebx
// 00814fcb  6a00                 push 0
// 00814fcd  6a00                 push 0
// 00814fcf  51                   push ecx
// 00814fd0  50                   push eax
// 00814fd1  2bd0                 sub edx, eax
// 00814fd3  2b542430             sub edx, dword ptr [esp + 0x30]
// 00814fd7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00814fde  8b4804               mov ecx, dword ptr [eax + 4]
// 00814fe1  53                   push ebx
// 00814fe2  52                   push edx
// 00814fe3  6a00                 push 0
// 00814fe5  51                   push ecx
// 00814fe6  ff151401a400         call dword ptr [0xa40114]
// 00814fec  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814ff0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00814ff4  99                   cdq 
// 00814ff5  f7ff                 idiv edi
// 00814ff7  50                   push eax
// 00814ff8  ff15f002a400         call dword ptr [0xa402f0]
// 00814ffe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00815002  3bc7                 cmp eax, edi
// 00815004  0f8c06fdffff         jl 0x814d10
// 0081500a  5d                   pop ebp
// 0081500b  5f                   pop edi
// 0081500c  5e                   pop esi
// 0081500d  5b                   pop ebx
// 0081500e  83c464               add esp, 0x64
// 00815011  c21000               ret 0x10
// 00815014  e8f152ffff           call 0x80a30a
// copied from an identical function in another client (function ?AnimateExpanding@CXTPPaintManager@@UAEXPAVCXTPCommandBar@@PAVCDC@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp