// roc 2009-12 00802d90  unit: CXTPPaintManager  size: 873 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00802d90
//
// 00802d90  83ec64               sub esp, 0x64
// 00802d93  53                   push ebx
// 00802d94  56                   push esi
// 00802d95  57                   push edi
// 00802d96  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00802d9a  8bf1                 mov esi, ecx
// 00802d9c  57                   push edi
// 00802d9d  8d4c2444             lea ecx, [esp + 0x44]
// 00802da1  e82a850400           call 0x84b2d0
// 00802da6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00802daa  2b442444             sub eax, dword ptr [esp + 0x44]
// 00802dae  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00802db4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00802db8  2b5c2440             sub ebx, dword ptr [esp + 0x40]
// 00802dbc  89442414             mov dword ptr [esp + 0x14], eax
// 00802dc0  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00802dc6  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 00802dcc  8944242c             mov dword ptr [esp + 0x2c], eax
// 00802dd0  33c0                 xor eax, eax
// 00802dd2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00802dd6  89742474             mov dword ptr [esp + 0x74], esi
// 00802dda  85c9                 test ecx, ecx
// 00802ddc  0f8e09030000         jle 0x8030eb
// 00802de2  db44241c             fild dword ptr [esp + 0x1c]
// 00802de6  55                   push ebp
// 00802de7  dd5c243c             fstp qword ptr [esp + 0x3c]
// 00802deb  eb03                 jmp 0x802df0
// 00802ded  8d4900               lea ecx, [ecx]
// 00802df0  40                   inc eax
// 00802df1  89442424             mov dword ptr [esp + 0x24], eax
// 00802df5  db442424             fild dword ptr [esp + 0x24]
// 00802df9  33ff                 xor edi, edi
// 00802dfb  897c2414             mov dword ptr [esp + 0x14], edi
// 00802dff  897c2410             mov dword ptr [esp + 0x10], edi
// 00802e03  dc74243c             fdiv qword ptr [esp + 0x3c]
// 00802e07  dd5c2434             fstp qword ptr [esp + 0x34]
// 00802e0b  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 00802e12  0f8457010000         je 0x802f6f
// 00802e18  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00802e1b  33ed                 xor ebp, ebp
// 00802e1d  3bc7                 cmp eax, edi
// 00802e1f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00802e23  0f8eff000000         jle 0x802f28
// 00802e29  8da42400000000       lea esp, [esp]
// 00802e30  85ed                 test ebp, ebp
// 00802e32  7c15                 jl 0x802e49
// 00802e34  3be8                 cmp ebp, eax
// 00802e36  7d11                 jge 0x802e49
// 00802e38  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00802e3b  0f8db3020000         jge 0x8030f4
// 00802e41  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00802e44  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00802e47  eb02                 jmp 0x802e4b
// 00802e49  33f6                 xor esi, esi
// 00802e4b  8b16                 mov edx, dword ptr [esi]
// 00802e4d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00802e53  6a00                 push 0
// 00802e55  8bce                 mov ecx, esi
// 00802e57  ffd0                 call eax
// 00802e59  85c0                 test eax, eax
// 00802e5b  0f84a4000000         je 0x802f05
// 00802e61  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00802e67  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00802e6b  89442428             mov dword ptr [esp + 0x28], eax
// 00802e6f  3bc1                 cmp eax, ecx
// 00802e71  0f848a000000         je 0x802f01
// 00802e77  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00802e7d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00802e83  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00802e89  89542454             mov dword ptr [esp + 0x54], edx
// 00802e8d  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00802e93  896c2458             mov dword ptr [esp + 0x58], ebp
// 00802e97  8944245c             mov dword ptr [esp + 0x5c], eax
// 00802e9b  89542460             mov dword ptr [esp + 0x60], edx
// 00802e9f  85c9                 test ecx, ecx
// 00802ea1  7406                 je 0x802ea9
// 00802ea3  dd442434             fld qword ptr [esp + 0x34]
// 00802ea7  eb02                 jmp 0x802eab
// 00802ea9  d9e8                 fld1 
// 00802eab  2bef                 sub ebp, edi
// 00802ead  896c2410             mov dword ptr [esp + 0x10], ebp
// 00802eb1  da4c2410             fimul dword ptr [esp + 0x10]
// 00802eb5  e8361effff           call 0x7f4cf0
// 00802eba  8bf0                 mov esi, eax
// 00802ebc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00802ec3  85c0                 test eax, eax
// 00802ec5  7403                 je 0x802eca
// 00802ec7  8b4004               mov eax, dword ptr [eax + 4]
// 00802eca  682000cc00           push 0xcc0020
// 00802ecf  55                   push ebp
// 00802ed0  53                   push ebx
// 00802ed1  57                   push edi
// 00802ed2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00802ed6  6a00                 push 0
// 00802ed8  50                   push eax
// 00802ed9  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00802ee0  8b4804               mov ecx, dword ptr [eax + 4]
// 00802ee3  56                   push esi
// 00802ee4  53                   push ebx
// 00802ee5  57                   push edi
// 00802ee6  6a00                 push 0
// 00802ee8  51                   push ecx
// 00802ee9  ff151cb19800         call dword ptr [0x98b11c]
// 00802eef  8b442428             mov eax, dword ptr [esp + 0x28]
// 00802ef3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00802ef7  03fe                 add edi, esi
// 00802ef9  897c2414             mov dword ptr [esp + 0x14], edi
// 00802efd  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00802f01  89442410             mov dword ptr [esp + 0x10], eax
// 00802f05  8b542478             mov edx, dword ptr [esp + 0x78]
// 00802f09  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00802f0c  45                   inc ebp
// 00802f0d  3be8                 cmp ebp, eax
// 00802f0f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00802f13  8bf2                 mov esi, edx
// 00802f15  0f8c15ffffff         jl 0x802e30
// 00802f1b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00802f20  7406                 je 0x802f28
// 00802f22  dd442434             fld qword ptr [esp + 0x34]
// 00802f26  eb02                 jmp 0x802f2a
// 00802f28  d9e8                 fld1 
// 00802f2a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00802f2e  2bef                 sub ebp, edi
// 00802f30  896c2410             mov dword ptr [esp + 0x10], ebp
// 00802f34  da4c2410             fimul dword ptr [esp + 0x10]
// 00802f38  e8b31dffff           call 0x7f4cf0
// 00802f3d  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00802f44  85c9                 test ecx, ecx
// 00802f46  7403                 je 0x802f4b
// 00802f48  8b4904               mov ecx, dword ptr [ecx + 4]
// 00802f4b  682000cc00           push 0xcc0020
// 00802f50  55                   push ebp
// 00802f51  53                   push ebx
// 00802f52  57                   push edi
// 00802f53  6a00                 push 0
// 00802f55  51                   push ecx
// 00802f56  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00802f5d  8b5104               mov edx, dword ptr [ecx + 4]
// 00802f60  50                   push eax
// 00802f61  8b442430             mov eax, dword ptr [esp + 0x30]
// 00802f65  53                   push ebx
// 00802f66  50                   push eax
// 00802f67  6a00                 push 0
// 00802f69  52                   push edx
// 00802f6a  e957010000           jmp 0x8030c6
// 00802f6f  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00802f72  83ed01               sub ebp, 1
// 00802f75  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00802f79  0f88fe000000         js 0x80307d
// 00802f7f  90                   nop 
// 00802f80  85ed                 test ebp, ebp
// 00802f82  7c0d                 jl 0x802f91
// 00802f84  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 00802f87  7d08                 jge 0x802f91
// 00802f89  8b4628               mov eax, dword ptr [esi + 0x28]
// 00802f8c  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00802f8f  eb02                 jmp 0x802f93
// 00802f91  33f6                 xor esi, esi
// 00802f93  8b16                 mov edx, dword ptr [esi]
// 00802f95  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00802f9b  6a00                 push 0
// 00802f9d  8bce                 mov ecx, esi
// 00802f9f  ffd0                 call eax
// 00802fa1  85c0                 test eax, eax
// 00802fa3  0f84b6000000         je 0x80305f
// 00802fa9  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00802faf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00802fb3  8944242c             mov dword ptr [esp + 0x2c], eax
// 00802fb7  3bc1                 cmp eax, ecx
// 00802fb9  0f849c000000         je 0x80305b
// 00802fbf  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00802fc5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00802fcb  89542464             mov dword ptr [esp + 0x64], edx
// 00802fcf  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00802fd5  89442468             mov dword ptr [esp + 0x68], eax
// 00802fd9  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00802fdf  8b742418             mov esi, dword ptr [esp + 0x18]
// 00802fe3  2bf0                 sub esi, eax
// 00802fe5  8954246c             mov dword ptr [esp + 0x6c], edx
// 00802fe9  85c9                 test ecx, ecx
// 00802feb  7406                 je 0x802ff3
// 00802fed  dd442434             fld qword ptr [esp + 0x34]
// 00802ff1  eb02                 jmp 0x802ff5
// 00802ff3  d9e8                 fld1 
// 00802ff5  8bee                 mov ebp, esi
// 00802ff7  2bef                 sub ebp, edi
// 00802ff9  896c2428             mov dword ptr [esp + 0x28], ebp
// 00802ffd  da4c2428             fimul dword ptr [esp + 0x28]
// 00803001  e8ea1cffff           call 0x7f4cf0
// 00803006  8bf8                 mov edi, eax
// 00803008  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0080300f  85c0                 test eax, eax
// 00803011  7504                 jne 0x803017
// 00803013  33c9                 xor ecx, ecx
// 00803015  eb03                 jmp 0x80301a
// 00803017  8b4804               mov ecx, dword ptr [eax + 4]
// 0080301a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080301e  682000cc00           push 0xcc0020
// 00803023  55                   push ebp
// 00803024  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00803028  53                   push ebx
// 00803029  8bd0                 mov edx, eax
// 0080302b  2bd6                 sub edx, esi
// 0080302d  52                   push edx
// 0080302e  6a00                 push 0
// 00803030  51                   push ecx
// 00803031  57                   push edi
// 00803032  2bc7                 sub eax, edi
// 00803034  53                   push ebx
// 00803035  2bc5                 sub eax, ebp
// 00803037  50                   push eax
// 00803038  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0080303f  8b4804               mov ecx, dword ptr [eax + 4]
// 00803042  6a00                 push 0
// 00803044  51                   push ecx
// 00803045  ff151cb19800         call dword ptr [0x98b11c]
// 0080304b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080304f  03ef                 add ebp, edi
// 00803051  896c2414             mov dword ptr [esp + 0x14], ebp
// 00803055  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00803059  8bfe                 mov edi, esi
// 0080305b  89442410             mov dword ptr [esp + 0x10], eax
// 0080305f  8b742478             mov esi, dword ptr [esp + 0x78]
// 00803063  83ed01               sub ebp, 1
// 00803066  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0080306a  0f8910ffffff         jns 0x802f80
// 00803070  837c241000           cmp dword ptr [esp + 0x10], 0
// 00803075  7406                 je 0x80307d
// 00803077  dd442434             fld qword ptr [esp + 0x34]
// 0080307b  eb02                 jmp 0x80307f
// 0080307d  d9e8                 fld1 
// 0080307f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00803083  2bef                 sub ebp, edi
// 00803085  896c2410             mov dword ptr [esp + 0x10], ebp
// 00803089  da4c2410             fimul dword ptr [esp + 0x10]
// 0080308d  e85e1cffff           call 0x7f4cf0
// 00803092  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00803099  85c9                 test ecx, ecx
// 0080309b  7403                 je 0x8030a0
// 0080309d  8b4904               mov ecx, dword ptr [ecx + 4]
// 008030a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 008030a4  682000cc00           push 0xcc0020
// 008030a9  55                   push ebp
// 008030aa  53                   push ebx
// 008030ab  6a00                 push 0
// 008030ad  6a00                 push 0
// 008030af  51                   push ecx
// 008030b0  50                   push eax
// 008030b1  2bd0                 sub edx, eax
// 008030b3  2b542430             sub edx, dword ptr [esp + 0x30]
// 008030b7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008030be  8b4804               mov ecx, dword ptr [eax + 4]
// 008030c1  53                   push ebx
// 008030c2  52                   push edx
// 008030c3  6a00                 push 0
// 008030c5  51                   push ecx
// 008030c6  ff151cb19800         call dword ptr [0x98b11c]
// 008030cc  8b442430             mov eax, dword ptr [esp + 0x30]
// 008030d0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008030d4  99                   cdq 
// 008030d5  f7ff                 idiv edi
// 008030d7  50                   push eax
// 008030d8  ff15ecb29800         call dword ptr [0x98b2ec]
// 008030de  8b442424             mov eax, dword ptr [esp + 0x24]
// 008030e2  3bc7                 cmp eax, edi
// 008030e4  0f8c06fdffff         jl 0x802df0
// 008030ea  5d                   pop ebp
// 008030eb  5f                   pop edi
// 008030ec  5e                   pop esi
// 008030ed  5b                   pop ebx
// 008030ee  83c464               add esp, 0x64
// 008030f1  c21000               ret 0x10
// 008030f4  e8130affff           call 0x7f3b0c
// copied from an identical function in another client (function ?AnimateExpanding@CXTPPaintManager@@UAEXPAVCXTPCommandBar@@PAVCDC@@1H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp