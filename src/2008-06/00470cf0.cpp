// from server: 100% by auto
// roc 2008-06 00470cf0  unit: RBX::LDraw2Lua::LuaWriter  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470cf0
//
// 00470cf0  6aff                 push -1
// 00470cf2  68da417c00           push 0x7c41da
// 00470cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00470cfd  50                   push eax
// 00470cfe  64892500000000       mov dword ptr fs:[0], esp
// 00470d05  81ec7c040000         sub esp, 0x47c
// 00470d0b  56                   push esi
// 00470d0c  c744240800000000     mov dword ptr [esp + 8], 0
// 00470d14  e8d7feffff           call 0x470bf0
// 00470d19  83f802               cmp eax, 2
// 00470d1c  0f85cb000000         jne 0x470ded
// 00470d22  f6051cef960001       test byte ptr [0x96ef1c], 1
// 00470d29  753e                 jne 0x470d69
// 00470d2b  b801000000           mov eax, 1
// 00470d30  09051cef9600         or dword ptr [0x96ef1c], eax
// 00470d36  68021f0000           push 0x1f02
// 00470d3b  8984248c040000       mov dword ptr [esp + 0x48c], eax
// 00470d42  ff1594298000         call dword ptr [0x802994]
// 00470d48  50                   push eax
// 00470d49  b900ef9600           mov ecx, 0x96ef00
// 00470d4e  ff1558248000         call dword ptr [0x802458]
// 00470d54  6810b07f00           push 0x7fb010
// 00470d59  e8510a2300           call 0x6a17af
// 00470d5e  83c404               add esp, 4
// 00470d61  c684248804000000     mov byte ptr [esp + 0x488], 0
// 00470d69  a1e8238000           mov eax, dword ptr [0x8023e8]
// 00470d6e  8b00                 mov eax, dword ptr [eax]
// 00470d70  6a01                 push 1
// 00470d72  50                   push eax
// 00470d73  8d4c240c             lea ecx, [esp + 0xc]
// 00470d77  51                   push ecx
// 00470d78  b900ef9600           mov ecx, 0x96ef00
// 00470d7d  c644241020           mov byte ptr [esp + 0x10], 0x20
// 00470d82  ff159c248000         call dword ptr [0x80249c]
// 00470d88  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 00470d8e  8bb42490040000       mov esi, dword ptr [esp + 0x490]
// 00470d95  3b02                 cmp eax, dword ptr [edx]
// 00470d97  7525                 jne 0x470dbe
// 00470d99  68e0cf8100           push 0x81cfe0
// 00470d9e  8bce                 mov ecx, esi
// 00470da0  ff1558248000         call dword ptr [0x802458]
// 00470da6  8bc6                 mov eax, esi
// 00470da8  5e                   pop esi
// 00470da9  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 00470db0  64890d00000000       mov dword ptr fs:[0], ecx
// 00470db7  81c488040000         add esp, 0x488
// 00470dbd  c3                   ret 
// 00470dbe  8b0d14ef9600         mov ecx, dword ptr [0x96ef14]
// 00470dc4  2bc8                 sub ecx, eax
// 00470dc6  51                   push ecx
// 00470dc7  40                   inc eax
// 00470dc8  50                   push eax
// 00470dc9  56                   push esi
// 00470dca  b900ef9600           mov ecx, 0x96ef00
// 00470dcf  ff15e0238000         call dword ptr [0x8023e0]
// 00470dd5  8bc6                 mov eax, esi
// 00470dd7  5e                   pop esi
// 00470dd8  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 00470ddf  64890d00000000       mov dword ptr fs:[0], ecx
// 00470de6  81c488040000         add esp, 0x488
// 00470dec  c3                   ret 
// 00470ded  8d4c240c             lea ecx, [esp + 0xc]
// 00470df1  ff1560248000         call dword ptr [0x802460]
// 00470df7  6800040000           push 0x400
// 00470dfc  8d942484000000       lea edx, [esp + 0x84]
// 00470e03  52                   push edx
// 00470e04  c784249004000002000000 mov dword ptr [esp + 0x490], 2
// 00470e0f  ff152c228000         call dword ptr [0x80222c]
// 00470e15  85c0                 test eax, eax
// 00470e17  7546                 jne 0x470e5f
// 00470e19  68b8cf8100           push 0x81cfb8
// 00470e1e  8bb42494040000       mov esi, dword ptr [esp + 0x494]
// 00470e25  8bce                 mov ecx, esi
// 00470e27  ff1558248000         call dword ptr [0x802458]
// 00470e2d  8d4c240c             lea ecx, [esp + 0xc]
// 00470e31  c744240801000000     mov dword ptr [esp + 8], 1
// 00470e39  c684248804000000     mov byte ptr [esp + 0x488], 0
// 00470e41  ff1568248000         call dword ptr [0x802468]
// 00470e47  8bc6                 mov eax, esi
// 00470e49  5e                   pop esi
// 00470e4a  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 00470e51  64890d00000000       mov dword ptr fs:[0], ecx
// 00470e58  81c488040000         add esp, 0x488
// 00470e5e  c3                   ret 
// 00470e5f  8d842480000000       lea eax, [esp + 0x80]
// 00470e66  50                   push eax
// 00470e67  8d4c2410             lea ecx, [esp + 0x10]
// 00470e6b  ff154c248000         call dword ptr [0x80244c]
// 00470e71  e87afdffff           call 0x470bf0
// 00470e76  83e800               sub eax, 0
// 00470e79  743d                 je 0x470eb8
// 00470e7b  83e801               sub eax, 1
// 00470e7e  7407                 je 0x470e87
// 00470e80  689ccf8100           push 0x81cf9c
// 00470e85  eb97                 jmp 0x470e1e
// 00470e87  688ccf8100           push 0x81cf8c
// 00470e8c  8d4c2410             lea ecx, [esp + 0x10]
// 00470e90  51                   push ecx
// 00470e91  8d54246c             lea edx, [esp + 0x6c]
// 00470e95  52                   push edx
// 00470e96  ff15e4238000         call dword ptr [0x8023e4]
// 00470e9c  83c40c               add esp, 0xc
// 00470e9f  50                   push eax
// 00470ea0  8d4c2410             lea ecx, [esp + 0x10]
// 00470ea4  c684248c04000004     mov byte ptr [esp + 0x48c], 4
// 00470eac  ff150c248000         call dword ptr [0x80240c]
// 00470eb2  8d4c2464             lea ecx, [esp + 0x64]
// 00470eb6  eb2f                 jmp 0x470ee7
// 00470eb8  687ccf8100           push 0x81cf7c
// 00470ebd  8d442410             lea eax, [esp + 0x10]
// 00470ec1  50                   push eax
// 00470ec2  8d4c2450             lea ecx, [esp + 0x50]
// 00470ec6  51                   push ecx
// 00470ec7  ff15e4238000         call dword ptr [0x8023e4]
// 00470ecd  83c40c               add esp, 0xc
// 00470ed0  50                   push eax
// 00470ed1  8d4c2410             lea ecx, [esp + 0x10]
// 00470ed5  c684248c04000003     mov byte ptr [esp + 0x48c], 3
// 00470edd  ff150c248000         call dword ptr [0x80240c]
// 00470ee3  8d4c2448             lea ecx, [esp + 0x48]
// 00470ee7  c684248804000002     mov byte ptr [esp + 0x488], 2
// 00470eef  ff1568248000         call dword ptr [0x802468]
// 00470ef5  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 00470efa  55                   push ebp
// 00470efb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00470eff  7304                 jae 0x470f05
// 00470f01  8d6c2414             lea ebp, [esp + 0x14]
// 00470f05  57                   push edi
// 00470f06  8d542430             lea edx, [esp + 0x30]
// 00470f0a  52                   push edx
// 00470f0b  55                   push ebp
// 00470f0c  e863543300           call 0x7a6374
// 00470f11  8bf8                 mov edi, eax
// 00470f13  85ff                 test edi, edi
// 00470f15  7521                 jne 0x470f38
// 00470f17  6860cf8100           push 0x81cf60
// 00470f1c  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 00470f23  8bce                 mov ecx, esi
// 00470f25  ff1558248000         call dword ptr [0x802458]
// 00470f2b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00470f33  e9f0000000           jmp 0x471028
// 00470f38  57                   push edi
// 00470f39  e818fa2200           call 0x6a0956
// 00470f3e  83c404               add esp, 4
// 00470f41  8bf0                 mov esi, eax
// 00470f43  56                   push esi
// 00470f44  57                   push edi
// 00470f45  6a00                 push 0
// 00470f47  55                   push ebp
// 00470f48  e821543300           call 0x7a636e
// 00470f4d  85c0                 test eax, eax
// 00470f4f  7510                 jne 0x470f61
// 00470f51  56                   push esi
// 00470f52  e8f3f92200           call 0x6a094a
// 00470f57  83c404               add esp, 4
// 00470f5a  6858cf8100           push 0x81cf58
// 00470f5f  ebbb                 jmp 0x470f1c
// 00470f61  8d4606               lea eax, [esi + 6]
// 00470f64  8d5002               lea edx, [eax + 2]
// 00470f67  668b08               mov cx, word ptr [eax]
// 00470f6a  83c002               add eax, 2
// 00470f6d  6685c9               test cx, cx
// 00470f70  75f5                 jne 0x470f67
// 00470f72  2bc2                 sub eax, edx
// 00470f74  d1f8                 sar eax, 1
// 00470f76  8d444608             lea eax, [esi + eax*2 + 8]
// 00470f7a  2bc6                 sub eax, esi
// 00470f7c  83c003               add eax, 3
// 00470f7f  83e0fc               and eax, 0xfffffffc
// 00470f82  03c6                 add eax, esi
// 00470f84  683ccf8100           push 0x81cf3c
// 00470f89  8d4c2438             lea ecx, [esp + 0x38]
// 00470f8d  8bf8                 mov edi, eax
// 00470f8f  ff1558248000         call dword ptr [0x802458]
// 00470f95  66837e0200           cmp word ptr [esi + 2], 0
// 00470f9a  c684249004000005     mov byte ptr [esp + 0x490], 5
// 00470fa2  744d                 je 0x470ff1
// 00470fa4  8b4714               mov eax, dword ptr [edi + 0x14]
// 00470fa7  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00470faa  0fb7d0               movzx edx, ax
// 00470fad  52                   push edx
// 00470fae  c1e810               shr eax, 0x10
// 00470fb1  50                   push eax
// 00470fb2  0fb7c1               movzx eax, cx
// 00470fb5  50                   push eax
// 00470fb6  c1e910               shr ecx, 0x10
// 00470fb9  51                   push ecx
// 00470fba  8d4c2460             lea ecx, [esp + 0x60]
// 00470fbe  6830cf8100           push 0x81cf30
// 00470fc3  51                   push ecx
// 00470fc4  e8478b0900           call 0x509b10
// 00470fc9  83c418               add esp, 0x18
// 00470fcc  50                   push eax
// 00470fcd  8d4c2438             lea ecx, [esp + 0x38]
// 00470fd1  c684249404000006     mov byte ptr [esp + 0x494], 6
// 00470fd9  ff150c248000         call dword ptr [0x80240c]
// 00470fdf  8d4c2450             lea ecx, [esp + 0x50]
// 00470fe3  c684249004000005     mov byte ptr [esp + 0x490], 5
// 00470feb  ff1568248000         call dword ptr [0x802468]
// 00470ff1  56                   push esi
// 00470ff2  e853f92200           call 0x6a094a
// 00470ff7  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 00470ffe  83c404               add esp, 4
// 00471001  8d542434             lea edx, [esp + 0x34]
// 00471005  52                   push edx
// 00471006  8bce                 mov ecx, esi
// 00471008  ff155c248000         call dword ptr [0x80245c]
// 0047100e  8d4c2434             lea ecx, [esp + 0x34]
// 00471012  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0047101a  c684249004000002     mov byte ptr [esp + 0x490], 2
// 00471022  ff1568248000         call dword ptr [0x802468]
// 00471028  8d4c2414             lea ecx, [esp + 0x14]
// 0047102c  c684249004000000     mov byte ptr [esp + 0x490], 0
// 00471034  ff1568248000         call dword ptr [0x802468]
// 0047103a  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 00471041  5f                   pop edi
// 00471042  5d                   pop ebp
// 00471043  8bc6                 mov eax, esi
// 00471045  5e                   pop esi
// 00471046  64890d00000000       mov dword ptr fs:[0], ecx
// 0047104d  81c488040000         add esp, 0x488
// 00471053  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
