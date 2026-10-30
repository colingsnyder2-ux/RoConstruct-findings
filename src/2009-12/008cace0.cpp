// roc 2009-12 008cace0  unit: CXTPPropertyGridPaintManager  size: 1472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cace0
//
// 008cace0  6aff                 push -1
// 008cace2  68e14a9600           push 0x964ae1
// 008cace7  64a100000000         mov eax, dword ptr fs:[0]
// 008caced  50                   push eax
// 008cacee  83ec38               sub esp, 0x38
// 008cacf1  53                   push ebx
// 008cacf2  55                   push ebp
// 008cacf3  56                   push esi
// 008cacf4  57                   push edi
// 008cacf5  a10052b600           mov eax, dword ptr [0xb65200]
// 008cacfa  33c4                 xor eax, esp
// 008cacfc  50                   push eax
// 008cacfd  8d44244c             lea eax, [esp + 0x4c]
// 008cad01  64a300000000         mov dword ptr fs:[0], eax
// 008cad07  8be9                 mov ebp, ecx
// 008cad09  896c2414             mov dword ptr [esp + 0x14], ebp
// 008cad0d  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008cad11  8b4738               mov eax, dword ptr [edi + 0x38]
// 008cad14  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008cad17  8b5f3c               mov ebx, dword ptr [edi + 0x3c]
// 008cad1a  8b7734               mov esi, dword ptr [edi + 0x34]
// 008cad1d  89442430             mov dword ptr [esp + 0x30], eax
// 008cad21  03c1                 add eax, ecx
// 008cad23  99                   cdq 
// 008cad24  2bc2                 sub eax, edx
// 008cad26  894c2438             mov dword ptr [esp + 0x38], ecx
// 008cad2a  8bc8                 mov ecx, eax
// 008cad2c  8d0433               lea eax, [ebx + esi]
// 008cad2f  99                   cdq 
// 008cad30  d1f9                 sar ecx, 1
// 008cad32  895c2434             mov dword ptr [esp + 0x34], ebx
// 008cad36  2bc2                 sub eax, edx
// 008cad38  83c103               add ecx, 3
// 008cad3b  8bd8                 mov ebx, eax
// 008cad3d  894c2418             mov dword ptr [esp + 0x18], ecx
// 008cad41  d1fb                 sar ebx, 1
// 008cad43  8bcf                 mov ecx, edi
// 008cad45  8974242c             mov dword ptr [esp + 0x2c], esi
// 008cad49  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008cad4d  e87eb5ffff           call 0x8c62d0
// 008cad52  8bf0                 mov esi, eax
// 008cad54  f7de                 neg esi
// 008cad56  1bf6                 sbb esi, esi
// 008cad58  f7de                 neg esi
// 008cad5a  83c611               add esi, 0x11
// 008cad5d  e86e4cf6ff           call 0x82f9d0
// 008cad62  56                   push esi
// 008cad63  8bc8                 mov ecx, eax
// 008cad65  e89643f6ff           call 0x82f100
// 008cad6a  837d0401             cmp dword ptr [ebp + 4], 1
// 008cad6e  89442460             mov dword ptr [esp + 0x60], eax
// 008cad72  0f851f010000         jne 0x8cae97
// 008cad78  8d4d14               lea ecx, [ebp + 0x14]
// 008cad7b  e8400efaff           call 0x86bbc0
// 008cad80  85c0                 test eax, eax
// 008cad82  0f840f010000         je 0x8cae97
// 008cad88  8d4d20               lea ecx, [ebp + 0x20]
// 008cad8b  e8300efaff           call 0x86bbc0
// 008cad90  85c0                 test eax, eax
// 008cad92  0f84ff000000         je 0x8cae97
// 008cad98  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008cad9b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008cad9e  83c070               add eax, 0x70
// 008cada1  83f9ff               cmp ecx, -1
// 008cada4  7505                 jne 0x8cadab
// 008cada6  8b4004               mov eax, dword ptr [eax + 4]
// 008cada9  eb02                 jmp 0x8cadad
// 008cadab  8bc1                 mov eax, ecx
// 008cadad  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008cadb1  50                   push eax
// 008cadb2  8d442430             lea eax, [esp + 0x30]
// 008cadb6  50                   push eax
// 008cadb7  8bce                 mov ecx, esi
// 008cadb9  e84098f2ff           call 0x7f45fe
// 008cadbe  8b4730               mov eax, dword ptr [edi + 0x30]
// 008cadc1  8bcf                 mov ecx, edi
// 008cadc3  83f865               cmp eax, 0x65
// 008cadc6  7471                 je 0x8cae39
// 008cadc8  e803b5ffff           call 0x8c62d0
// 008cadcd  85c0                 test eax, eax
// 008cadcf  7507                 jne 0x8cadd8
// 008cadd1  b804000000           mov eax, 4
// 008cadd6  eb3e                 jmp 0x8cae16
// 008cadd8  8bcf                 mov ecx, edi
// 008cadda  e8e1b4ffff           call 0x8c62c0
// 008caddf  85c0                 test eax, eax
// 008cade1  7412                 je 0x8cadf5
// 008cade3  8bcf                 mov ecx, edi
// 008cade5  e8b6b4ffff           call 0x8c62a0
// 008cadea  85c0                 test eax, eax
// 008cadec  7407                 je 0x8cadf5
// 008cadee  b803000000           mov eax, 3
// 008cadf3  eb21                 jmp 0x8cae16
// 008cadf5  8bcf                 mov ecx, edi
// 008cadf7  e8a4b4ffff           call 0x8c62a0
// 008cadfc  85c0                 test eax, eax
// 008cadfe  7407                 je 0x8cae07
// 008cae00  b802000000           mov eax, 2
// 008cae05  eb0f                 jmp 0x8cae16
// 008cae07  8bcf                 mov ecx, edi
// 008cae09  e872b4ffff           call 0x8c6280
// 008cae0e  f7d8                 neg eax
// 008cae10  1bc0                 sbb eax, eax
// 008cae12  83e004               and eax, 4
// 008cae15  40                   inc eax
// 008cae16  85f6                 test esi, esi
// 008cae18  7504                 jne 0x8cae1e
// 008cae1a  33c9                 xor ecx, ecx
// 008cae1c  eb03                 jmp 0x8cae21
// 008cae1e  8b4e04               mov ecx, dword ptr [esi + 4]
// 008cae21  6a00                 push 0
// 008cae23  8d542430             lea edx, [esp + 0x30]
// 008cae27  52                   push edx
// 008cae28  50                   push eax
// 008cae29  6a01                 push 1
// 008cae2b  51                   push ecx
// 008cae2c  8d4d14               lea ecx, [ebp + 0x14]
// 008cae2f  e80c0afaff           call 0x86b840
// 008cae34  e9b2020000           jmp 0x8cb0eb
// 008cae39  e892b4ffff           call 0x8c62d0
// 008cae3e  85c0                 test eax, eax
// 008cae40  7507                 jne 0x8cae49
// 008cae42  b804000000           mov eax, 4
// 008cae47  eb2b                 jmp 0x8cae74
// 008cae49  8bcf                 mov ecx, edi
// 008cae4b  e870b4ffff           call 0x8c62c0
// 008cae50  85c0                 test eax, eax
// 008cae52  7412                 je 0x8cae66
// 008cae54  8bcf                 mov ecx, edi
// 008cae56  e845b4ffff           call 0x8c62a0
// 008cae5b  85c0                 test eax, eax
// 008cae5d  7407                 je 0x8cae66
// 008cae5f  b803000000           mov eax, 3
// 008cae64  eb0e                 jmp 0x8cae74
// 008cae66  8bcf                 mov ecx, edi
// 008cae68  e833b4ffff           call 0x8c62a0
// 008cae6d  f7d8                 neg eax
// 008cae6f  1bc0                 sbb eax, eax
// 008cae71  f7d8                 neg eax
// 008cae73  40                   inc eax
// 008cae74  85f6                 test esi, esi
// 008cae76  7504                 jne 0x8cae7c
// 008cae78  33c9                 xor ecx, ecx
// 008cae7a  eb03                 jmp 0x8cae7f
// 008cae7c  8b4e04               mov ecx, dword ptr [esi + 4]
// 008cae7f  6a00                 push 0
// 008cae81  8d542430             lea edx, [esp + 0x30]
// 008cae85  52                   push edx
// 008cae86  50                   push eax
// 008cae87  6a01                 push 1
// 008cae89  51                   push ecx
// 008cae8a  8d4d20               lea ecx, [ebp + 0x20]
// 008cae8d  e8ae09faff           call 0x86b840
// 008cae92  e954020000           jmp 0x8cb0eb
// 008cae97  8b4504               mov eax, dword ptr [ebp + 4]
// 008cae9a  83f803               cmp eax, 3
// 008cae9d  0f859e000000         jne 0x8caf41
// 008caea3  8bcf                 mov ecx, edi
// 008caea5  e816b4ffff           call 0x8c62c0
// 008caeaa  85c0                 test eax, eax
// 008caeac  7412                 je 0x8caec0
// 008caeae  8bcf                 mov ecx, edi
// 008caeb0  e8ebb3ffff           call 0x8c62a0
// 008caeb5  85c0                 test eax, eax
// 008caeb7  7407                 je 0x8caec0
// 008caeb9  b8ffab3f00           mov eax, 0x3fabff
// 008caebe  eb1d                 jmp 0x8caedd
// 008caec0  8bcf                 mov ecx, edi
// 008caec2  e8d9b3ffff           call 0x8c62a0
// 008caec7  85c0                 test eax, eax
// 008caec9  7407                 je 0x8caed2
// 008caecb  b8ffe7a200           mov eax, 0xa2e7ff
// 008caed0  eb0b                 jmp 0x8caedd
// 008caed2  8b4538               mov eax, dword ptr [ebp + 0x38]
// 008caed5  83f8ff               cmp eax, -1
// 008caed8  7503                 jne 0x8caedd
// 008caeda  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008caedd  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008caee1  50                   push eax
// 008caee2  8d442430             lea eax, [esp + 0x30]
// 008caee6  50                   push eax
// 008caee7  8bce                 mov ecx, esi
// 008caee9  e81097f2ff           call 0x7f45fe
// 008caeee  8bcf                 mov ecx, edi
// 008caef0  e8cbb3ffff           call 0x8c62c0
// 008caef5  85c0                 test eax, eax
// 008caef7  7412                 je 0x8caf0b
// 008caef9  8bcf                 mov ecx, edi
// 008caefb  e8a0b3ffff           call 0x8c62a0
// 008caf00  85c0                 test eax, eax
// 008caf02  7407                 je 0x8caf0b
// 008caf04  bbfb8c3c00           mov ebx, 0x3c8cfb
// 008caf09  eb1d                 jmp 0x8caf28
// 008caf0b  8bcf                 mov ecx, edi
// 008caf0d  e88eb3ffff           call 0x8c62a0
// 008caf12  85c0                 test eax, eax
// 008caf14  7407                 je 0x8caf1d
// 008caf16  bbffbd6900           mov ebx, 0x69bdff
// 008caf1b  eb0b                 jmp 0x8caf28
// 008caf1d  8b5d44               mov ebx, dword ptr [ebp + 0x44]
// 008caf20  83fbff               cmp ebx, -1
// 008caf23  7503                 jne 0x8caf28
// 008caf25  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 008caf28  e8a34af6ff           call 0x82f9d0
// 008caf2d  53                   push ebx
// 008caf2e  8bc8                 mov ecx, eax
// 008caf30  e8cb41f6ff           call 0x82f100
// 008caf35  50                   push eax
// 008caf36  50                   push eax
// 008caf37  8d4c2434             lea ecx, [esp + 0x34]
// 008caf3b  51                   push ecx
// 008caf3c  e94d010000           jmp 0x8cb08e
// 008caf41  83f802               cmp eax, 2
// 008caf44  0f8596000000         jne 0x8cafe0
// 008caf4a  8bcf                 mov ecx, edi
// 008caf4c  e86fb3ffff           call 0x8c62c0
// 008caf51  85c0                 test eax, eax
// 008caf53  7412                 je 0x8caf67
// 008caf55  8bcf                 mov ecx, edi
// 008caf57  e844b3ffff           call 0x8c62a0
// 008caf5c  85c0                 test eax, eax
// 008caf5e  7407                 je 0x8caf67
// 008caf60  be21000000           mov esi, 0x21
// 008caf65  eb12                 jmp 0x8caf79
// 008caf67  8bcf                 mov ecx, edi
// 008caf69  e832b3ffff           call 0x8c62a0
// 008caf6e  8bf0                 mov esi, eax
// 008caf70  f7de                 neg esi
// 008caf72  1bf6                 sbb esi, esi
// 008caf74  f7de                 neg esi
// 008caf76  83c61e               add esi, 0x1e
// 008caf79  e8524af6ff           call 0x82f9d0
// 008caf7e  56                   push esi
// 008caf7f  8bc8                 mov ecx, eax
// 008caf81  e87a41f6ff           call 0x82f100
// 008caf86  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008caf8a  50                   push eax
// 008caf8b  8d542430             lea edx, [esp + 0x30]
// 008caf8f  52                   push edx
// 008caf90  8bce                 mov ecx, esi
// 008caf92  e86796f2ff           call 0x7f45fe
// 008caf97  8bcf                 mov ecx, edi
// 008caf99  e822b3ffff           call 0x8c62c0
// 008caf9e  85c0                 test eax, eax
// 008cafa0  7412                 je 0x8cafb4
// 008cafa2  8bcf                 mov ecx, edi
// 008cafa4  e8f7b2ffff           call 0x8c62a0
// 008cafa9  85c0                 test eax, eax
// 008cafab  7407                 je 0x8cafb4
// 008cafad  bb32000000           mov ebx, 0x32
// 008cafb2  eb13                 jmp 0x8cafc7
// 008cafb4  8bcf                 mov ecx, edi
// 008cafb6  e8e5b2ffff           call 0x8c62a0
// 008cafbb  8bd8                 mov ebx, eax
// 008cafbd  f7db                 neg ebx
// 008cafbf  1bdb                 sbb ebx, ebx
// 008cafc1  83e310               and ebx, 0x10
// 008cafc4  83c310               add ebx, 0x10
// 008cafc7  e8044af6ff           call 0x82f9d0
// 008cafcc  53                   push ebx
// 008cafcd  8bc8                 mov ecx, eax
// 008cafcf  e82c41f6ff           call 0x82f100
// 008cafd4  50                   push eax
// 008cafd5  50                   push eax
// 008cafd6  8d442434             lea eax, [esp + 0x34]
// 008cafda  50                   push eax
// 008cafdb  e9ae000000           jmp 0x8cb08e
// 008cafe0  e8eb49f6ff           call 0x82f9d0
// 008cafe5  6a0f                 push 0xf
// 008cafe7  8bc8                 mov ecx, eax
// 008cafe9  e81241f6ff           call 0x82f100
// 008cafee  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008caff2  50                   push eax
// 008caff3  8d4c2430             lea ecx, [esp + 0x30]
// 008caff7  51                   push ecx
// 008caff8  8bce                 mov ecx, esi
// 008caffa  e8ff95f2ff           call 0x7f45fe
// 008cafff  8bcf                 mov ecx, edi
// 008cb001  e8bab2ffff           call 0x8c62c0
// 008cb006  85c0                 test eax, eax
// 008cb008  7424                 je 0x8cb02e
// 008cb00a  8bcf                 mov ecx, edi
// 008cb00c  e88fb2ffff           call 0x8c62a0
// 008cb011  85c0                 test eax, eax
// 008cb013  7419                 je 0x8cb02e
// 008cb015  e8b649f6ff           call 0x82f9d0
// 008cb01a  6a10                 push 0x10
// 008cb01c  8bc8                 mov ecx, eax
// 008cb01e  e8dd40f6ff           call 0x82f100
// 008cb023  8bd8                 mov ebx, eax
// 008cb025  e8a649f6ff           call 0x82f9d0
// 008cb02a  6a10                 push 0x10
// 008cb02c  eb52                 jmp 0x8cb080
// 008cb02e  e89d49f6ff           call 0x82f9d0
// 008cb033  6a15                 push 0x15
// 008cb035  8bc8                 mov ecx, eax
// 008cb037  e8c440f6ff           call 0x82f100
// 008cb03c  8bd8                 mov ebx, eax
// 008cb03e  e88d49f6ff           call 0x82f9d0
// 008cb043  6a0f                 push 0xf
// 008cb045  8bc8                 mov ecx, eax
// 008cb047  e8b440f6ff           call 0x82f100
// 008cb04c  53                   push ebx
// 008cb04d  50                   push eax
// 008cb04e  8d442434             lea eax, [esp + 0x34]
// 008cb052  50                   push eax
// 008cb053  8bce                 mov ecx, esi
// 008cb055  e89e95f2ff           call 0x7f45f8
// 008cb05a  6aff                 push -1
// 008cb05c  6aff                 push -1
// 008cb05e  8d4c2434             lea ecx, [esp + 0x34]
// 008cb062  51                   push ecx
// 008cb063  ff1558ca9800         call dword ptr [0x98ca58]
// 008cb069  e86249f6ff           call 0x82f9d0
// 008cb06e  6a10                 push 0x10
// 008cb070  8bc8                 mov ecx, eax
// 008cb072  e88940f6ff           call 0x82f100
// 008cb077  8bd8                 mov ebx, eax
// 008cb079  e85249f6ff           call 0x82f9d0
// 008cb07e  6a05                 push 5
// 008cb080  8bc8                 mov ecx, eax
// 008cb082  e87940f6ff           call 0x82f100
// 008cb087  53                   push ebx
// 008cb088  50                   push eax
// 008cb089  8d542434             lea edx, [esp + 0x34]
// 008cb08d  52                   push edx
// 008cb08e  8bce                 mov ecx, esi
// 008cb090  e86395f2ff           call 0x7f45f8
// 008cb095  8b4730               mov eax, dword ptr [edi + 0x30]
// 008cb098  83f865               cmp eax, 0x65
// 008cb09b  754a                 jne 0x8cb0e7
// 008cb09d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008cb0a1  8b442430             mov eax, dword ptr [esp + 0x30]
// 008cb0a5  03c1                 add eax, ecx
// 008cb0a7  99                   cdq 
// 008cb0a8  2bc2                 sub eax, edx
// 008cb0aa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008cb0ae  8bc8                 mov ecx, eax
// 008cb0b0  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cb0b4  03c2                 add eax, edx
// 008cb0b6  99                   cdq 
// 008cb0b7  2bc2                 sub eax, edx
// 008cb0b9  d1f8                 sar eax, 1
// 008cb0bb  8d68fd               lea ebp, [eax - 3]
// 008cb0be  d1f9                 sar ecx, 1
// 008cb0c0  896c2424             mov dword ptr [esp + 0x24], ebp
// 008cb0c4  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008cb0c8  55                   push ebp
// 008cb0c9  8d5102               lea edx, [ecx + 2]
// 008cb0cc  52                   push edx
// 008cb0cd  50                   push eax
// 008cb0ce  49                   dec ecx
// 008cb0cf  51                   push ecx
// 008cb0d0  8d5803               lea ebx, [eax + 3]
// 008cb0d3  53                   push ebx
// 008cb0d4  51                   push ecx
// 008cb0d5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008cb0d9  51                   push ecx
// 008cb0da  56                   push esi
// 008cb0db  e8b035f3ff           call 0x7fe690
// 008cb0e0  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008cb0e4  83c420               add esp, 0x20
// 008cb0e7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008cb0eb  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 008cb0ef  0f84f6000000         je 0x8cb1eb
// 008cb0f5  8b17                 mov edx, dword ptr [edi]
// 008cb0f7  8b4258               mov eax, dword ptr [edx + 0x58]
// 008cb0fa  8bcf                 mov ecx, edi
// 008cb0fc  ffd0                 call eax
// 008cb0fe  8bd8                 mov ebx, eax
// 008cb100  85db                 test ebx, ebx
// 008cb102  744b                 je 0x8cb14f
// 008cb104  8bcb                 mov ecx, ebx
// 008cb106  e865a7c0ff           call 0x4d5870
// 008cb10b  8bcb                 mov ecx, ebx
// 008cb10d  8be8                 mov ebp, eax
// 008cb10f  e86c2bf8ff           call 0x84dc80
// 008cb114  8bc8                 mov ecx, eax
// 008cb116  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cb11a  2bc1                 sub eax, ecx
// 008cb11c  0344242c             add eax, dword ptr [esp + 0x2c]
// 008cb120  894c2424             mov dword ptr [esp + 0x24], ecx
// 008cb124  99                   cdq 
// 008cb125  2bc2                 sub eax, edx
// 008cb127  8bc8                 mov ecx, eax
// 008cb129  8b442438             mov eax, dword ptr [esp + 0x38]
// 008cb12d  2bc5                 sub eax, ebp
// 008cb12f  03442430             add eax, dword ptr [esp + 0x30]
// 008cb133  55                   push ebp
// 008cb134  99                   cdq 
// 008cb135  2bc2                 sub eax, edx
// 008cb137  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cb13b  52                   push edx
// 008cb13c  d1f8                 sar eax, 1
// 008cb13e  d1f9                 sar ecx, 1
// 008cb140  50                   push eax
// 008cb141  51                   push ecx
// 008cb142  56                   push esi
// 008cb143  8bcb                 mov ecx, ebx
// 008cb145  e8465ff4ff           call 0x811090
// 008cb14a  e9e2000000           jmp 0x8cb231
// 008cb14f  8d44245c             lea eax, [esp + 0x5c]
// 008cb153  50                   push eax
// 008cb154  8bcf                 mov ecx, edi
// 008cb156  e845cfb5ff           call 0x4280a0
// 008cb15b  8bc8                 mov ecx, eax
// 008cb15d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008cb163  84c0                 test al, al
// 008cb165  8d4c245c             lea ecx, [esp + 0x5c]
// 008cb169  0f94c3               sete bl
// 008cb16c  ff15c0de9800         call dword ptr [0x98dec0]
// 008cb172  84db                 test bl, bl
// 008cb174  7471                 je 0x8cb1e7
// 008cb176  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008cb179  8b5500               mov edx, dword ptr [ebp]
// 008cb17c  6a01                 push 1
// 008cb17e  50                   push eax
// 008cb17f  8b420c               mov eax, dword ptr [edx + 0xc]
// 008cb182  8bcd                 mov ecx, ebp
// 008cb184  ffd0                 call eax
// 008cb186  50                   push eax
// 008cb187  56                   push esi
// 008cb188  8d4c2444             lea ecx, [esp + 0x44]
// 008cb18c  e8cf04f8ff           call 0x84b660
// 008cb191  8b16                 mov edx, dword ptr [esi]
// 008cb193  8b442460             mov eax, dword ptr [esp + 0x60]
// 008cb197  8b5238               mov edx, dword ptr [edx + 0x38]
// 008cb19a  50                   push eax
// 008cb19b  8bce                 mov ecx, esi
// 008cb19d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 008cb1a5  ffd2                 call edx
// 008cb1a7  8d442460             lea eax, [esp + 0x60]
// 008cb1ab  50                   push eax
// 008cb1ac  8bcf                 mov ecx, edi
// 008cb1ae  e8edceb5ff           call 0x4280a0
// 008cb1b3  6825080000           push 0x825
// 008cb1b8  8d4c2430             lea ecx, [esp + 0x30]
// 008cb1bc  51                   push ecx
// 008cb1bd  50                   push eax
// 008cb1be  8bce                 mov ecx, esi
// 008cb1c0  c644246001           mov byte ptr [esp + 0x60], 1
// 008cb1c5  e856e9f2ff           call 0x7f9b20
// 008cb1ca  8d4c2460             lea ecx, [esp + 0x60]
// 008cb1ce  ff15c0de9800         call dword ptr [0x98dec0]
// 008cb1d4  8d4c243c             lea ecx, [esp + 0x3c]
// 008cb1d8  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008cb1e0  e8fb04f8ff           call 0x84b6e0
// 008cb1e5  eb4a                 jmp 0x8cb231
// 008cb1e7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008cb1eb  837f3064             cmp dword ptr [edi + 0x30], 0x64
// 008cb1ef  7540                 jne 0x8cb231
// 008cb1f1  8b542460             mov edx, dword ptr [esp + 0x60]
// 008cb1f5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008cb1f9  52                   push edx
// 008cb1fa  6a02                 push 2
// 008cb1fc  6a02                 push 2
// 008cb1fe  55                   push ebp
// 008cb1ff  8d43fc               lea eax, [ebx - 4]
// 008cb202  50                   push eax
// 008cb203  8bce                 mov ecx, esi
// 008cb205  e88cb20500           call 0x926496
// 008cb20a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008cb20e  51                   push ecx
// 008cb20f  6a02                 push 2
// 008cb211  6a02                 push 2
// 008cb213  55                   push ebp
// 008cb214  53                   push ebx
// 008cb215  8bce                 mov ecx, esi
// 008cb217  e87ab20500           call 0x926496
// 008cb21c  8b542460             mov edx, dword ptr [esp + 0x60]
// 008cb220  52                   push edx
// 008cb221  6a02                 push 2
// 008cb223  6a02                 push 2
// 008cb225  55                   push ebp
// 008cb226  83c304               add ebx, 4
// 008cb229  53                   push ebx
// 008cb22a  8bce                 mov ecx, esi
// 008cb22c  e865b20500           call 0x926496
// 008cb231  8bcf                 mov ecx, edi
// 008cb233  e848b0ffff           call 0x8c6280
// 008cb238  85c0                 test eax, eax
// 008cb23a  744e                 je 0x8cb28a
// 008cb23c  e88f47f6ff           call 0x82f9d0
// 008cb241  6a12                 push 0x12
// 008cb243  8bc8                 mov ecx, eax
// 008cb245  e8b63ef6ff           call 0x82f100
// 008cb24a  8b16                 mov edx, dword ptr [esi]
// 008cb24c  50                   push eax
// 008cb24d  8b4238               mov eax, dword ptr [edx + 0x38]
// 008cb250  8bce                 mov ecx, esi
// 008cb252  ffd0                 call eax
// 008cb254  e87747f6ff           call 0x82f9d0
// 008cb259  6a0f                 push 0xf
// 008cb25b  8bc8                 mov ecx, eax
// 008cb25d  e89e3ef6ff           call 0x82f100
// 008cb262  8b16                 mov edx, dword ptr [esi]
// 008cb264  50                   push eax
// 008cb265  8b4234               mov eax, dword ptr [edx + 0x34]
// 008cb268  8bce                 mov ecx, esi
// 008cb26a  ffd0                 call eax
// 008cb26c  6afe                 push -2
// 008cb26e  6afe                 push -2
// 008cb270  8d4c2434             lea ecx, [esp + 0x34]
// 008cb274  51                   push ecx
// 008cb275  ff1558ca9800         call dword ptr [0x98ca58]
// 008cb27b  8b4604               mov eax, dword ptr [esi + 4]
// 008cb27e  8d54242c             lea edx, [esp + 0x2c]
// 008cb282  52                   push edx
// 008cb283  50                   push eax
// 008cb284  ff15d4ca9800         call dword ptr [0x98cad4]
// 008cb28a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008cb28e  64890d00000000       mov dword ptr fs:[0], ecx
// 008cb295  59                   pop ecx
// 008cb296  5f                   pop edi
// 008cb297  5e                   pop esi
// 008cb298  5d                   pop ebp
// 008cb299  5b                   pop ebx
// 008cb29a  83c444               add esp, 0x44
// 008cb29d  c20800               ret 8
// copied from an identical function in another client (function ?FillInplaceButton@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp