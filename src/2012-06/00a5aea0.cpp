// roc 2012-06 00a5aea0  unit: CXTPPropertyGridPaintManager  size: 1472 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5aea0
//
// 00a5aea0  6aff                 push -1
// 00a5aea2  682178ae00           push 0xae7821
// 00a5aea7  64a100000000         mov eax, dword ptr fs:[0]
// 00a5aead  50                   push eax
// 00a5aeae  83ec38               sub esp, 0x38
// 00a5aeb1  53                   push ebx
// 00a5aeb2  55                   push ebp
// 00a5aeb3  56                   push esi
// 00a5aeb4  57                   push edi
// 00a5aeb5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5aeba  33c4                 xor eax, esp
// 00a5aebc  50                   push eax
// 00a5aebd  8d44244c             lea eax, [esp + 0x4c]
// 00a5aec1  64a300000000         mov dword ptr fs:[0], eax
// 00a5aec7  8be9                 mov ebp, ecx
// 00a5aec9  896c2414             mov dword ptr [esp + 0x14], ebp
// 00a5aecd  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00a5aed1  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a5aed4  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a5aed7  8b5f3c               mov ebx, dword ptr [edi + 0x3c]
// 00a5aeda  8b7734               mov esi, dword ptr [edi + 0x34]
// 00a5aedd  89442430             mov dword ptr [esp + 0x30], eax
// 00a5aee1  03c1                 add eax, ecx
// 00a5aee3  99                   cdq 
// 00a5aee4  2bc2                 sub eax, edx
// 00a5aee6  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a5aeea  8bc8                 mov ecx, eax
// 00a5aeec  8d0433               lea eax, [ebx + esi]
// 00a5aeef  99                   cdq 
// 00a5aef0  d1f9                 sar ecx, 1
// 00a5aef2  895c2434             mov dword ptr [esp + 0x34], ebx
// 00a5aef6  2bc2                 sub eax, edx
// 00a5aef8  83c103               add ecx, 3
// 00a5aefb  8bd8                 mov ebx, eax
// 00a5aefd  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a5af01  d1fb                 sar ebx, 1
// 00a5af03  8bcf                 mov ecx, edi
// 00a5af05  8974242c             mov dword ptr [esp + 0x2c], esi
// 00a5af09  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a5af0d  e89eb0cdff           call 0x735fb0
// 00a5af12  8bf0                 mov esi, eax
// 00a5af14  f7de                 neg esi
// 00a5af16  1bf6                 sbb esi, esi
// 00a5af18  f7de                 neg esi
// 00a5af1a  83c611               add esi, 0x11
// 00a5af1d  e83e29f6ff           call 0x9bd860
// 00a5af22  56                   push esi
// 00a5af23  8bc8                 mov ecx, eax
// 00a5af25  e8b620f6ff           call 0x9bcfe0
// 00a5af2a  837d0401             cmp dword ptr [ebp + 4], 1
// 00a5af2e  89442460             mov dword ptr [esp + 0x60], eax
// 00a5af32  0f851f010000         jne 0xa5b057
// 00a5af38  8d4d14               lea ecx, [ebp + 0x14]
// 00a5af3b  e830a9f9ff           call 0x9f5870
// 00a5af40  85c0                 test eax, eax
// 00a5af42  0f840f010000         je 0xa5b057
// 00a5af48  8d4d20               lea ecx, [ebp + 0x20]
// 00a5af4b  e820a9f9ff           call 0x9f5870
// 00a5af50  85c0                 test eax, eax
// 00a5af52  0f84ff000000         je 0xa5b057
// 00a5af58  8b4574               mov eax, dword ptr [ebp + 0x74]
// 00a5af5b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a5af5e  83c070               add eax, 0x70
// 00a5af61  83f9ff               cmp ecx, -1
// 00a5af64  7505                 jne 0xa5af6b
// 00a5af66  8b4004               mov eax, dword ptr [eax + 4]
// 00a5af69  eb02                 jmp 0xa5af6d
// 00a5af6b  8bc1                 mov eax, ecx
// 00a5af6d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a5af71  50                   push eax
// 00a5af72  8d442430             lea eax, [esp + 0x30]
// 00a5af76  50                   push eax
// 00a5af77  8bce                 mov ecx, esi
// 00a5af79  e82e7ff2ff           call 0x982eac
// 00a5af7e  8b4730               mov eax, dword ptr [edi + 0x30]
// 00a5af81  8bcf                 mov ecx, edi
// 00a5af83  83f865               cmp eax, 0x65
// 00a5af86  7471                 je 0xa5aff9
// 00a5af88  e823b0cdff           call 0x735fb0
// 00a5af8d  85c0                 test eax, eax
// 00a5af8f  7507                 jne 0xa5af98
// 00a5af91  b804000000           mov eax, 4
// 00a5af96  eb3e                 jmp 0xa5afd6
// 00a5af98  8bcf                 mov ecx, edi
// 00a5af9a  e881dcb4ff           call 0x5a8c20
// 00a5af9f  85c0                 test eax, eax
// 00a5afa1  7412                 je 0xa5afb5
// 00a5afa3  8bcf                 mov ecx, edi
// 00a5afa5  e886b4ffff           call 0xa56430
// 00a5afaa  85c0                 test eax, eax
// 00a5afac  7407                 je 0xa5afb5
// 00a5afae  b803000000           mov eax, 3
// 00a5afb3  eb21                 jmp 0xa5afd6
// 00a5afb5  8bcf                 mov ecx, edi
// 00a5afb7  e874b4ffff           call 0xa56430
// 00a5afbc  85c0                 test eax, eax
// 00a5afbe  7407                 je 0xa5afc7
// 00a5afc0  b802000000           mov eax, 2
// 00a5afc5  eb0f                 jmp 0xa5afd6
// 00a5afc7  8bcf                 mov ecx, edi
// 00a5afc9  e842b4ffff           call 0xa56410
// 00a5afce  f7d8                 neg eax
// 00a5afd0  1bc0                 sbb eax, eax
// 00a5afd2  83e004               and eax, 4
// 00a5afd5  40                   inc eax
// 00a5afd6  85f6                 test esi, esi
// 00a5afd8  7504                 jne 0xa5afde
// 00a5afda  33c9                 xor ecx, ecx
// 00a5afdc  eb03                 jmp 0xa5afe1
// 00a5afde  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a5afe1  6a00                 push 0
// 00a5afe3  8d542430             lea edx, [esp + 0x30]
// 00a5afe7  52                   push edx
// 00a5afe8  50                   push eax
// 00a5afe9  6a01                 push 1
// 00a5afeb  51                   push ecx
// 00a5afec  8d4d14               lea ecx, [ebp + 0x14]
// 00a5afef  e8aca5f9ff           call 0x9f55a0
// 00a5aff4  e9b2020000           jmp 0xa5b2ab
// 00a5aff9  e8b2afcdff           call 0x735fb0
// 00a5affe  85c0                 test eax, eax
// 00a5b000  7507                 jne 0xa5b009
// 00a5b002  b804000000           mov eax, 4
// 00a5b007  eb2b                 jmp 0xa5b034
// 00a5b009  8bcf                 mov ecx, edi
// 00a5b00b  e810dcb4ff           call 0x5a8c20
// 00a5b010  85c0                 test eax, eax
// 00a5b012  7412                 je 0xa5b026
// 00a5b014  8bcf                 mov ecx, edi
// 00a5b016  e815b4ffff           call 0xa56430
// 00a5b01b  85c0                 test eax, eax
// 00a5b01d  7407                 je 0xa5b026
// 00a5b01f  b803000000           mov eax, 3
// 00a5b024  eb0e                 jmp 0xa5b034
// 00a5b026  8bcf                 mov ecx, edi
// 00a5b028  e803b4ffff           call 0xa56430
// 00a5b02d  f7d8                 neg eax
// 00a5b02f  1bc0                 sbb eax, eax
// 00a5b031  f7d8                 neg eax
// 00a5b033  40                   inc eax
// 00a5b034  85f6                 test esi, esi
// 00a5b036  7504                 jne 0xa5b03c
// 00a5b038  33c9                 xor ecx, ecx
// 00a5b03a  eb03                 jmp 0xa5b03f
// 00a5b03c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a5b03f  6a00                 push 0
// 00a5b041  8d542430             lea edx, [esp + 0x30]
// 00a5b045  52                   push edx
// 00a5b046  50                   push eax
// 00a5b047  6a01                 push 1
// 00a5b049  51                   push ecx
// 00a5b04a  8d4d20               lea ecx, [ebp + 0x20]
// 00a5b04d  e84ea5f9ff           call 0x9f55a0
// 00a5b052  e954020000           jmp 0xa5b2ab
// 00a5b057  8b4504               mov eax, dword ptr [ebp + 4]
// 00a5b05a  83f803               cmp eax, 3
// 00a5b05d  0f859e000000         jne 0xa5b101
// 00a5b063  8bcf                 mov ecx, edi
// 00a5b065  e8b6dbb4ff           call 0x5a8c20
// 00a5b06a  85c0                 test eax, eax
// 00a5b06c  7412                 je 0xa5b080
// 00a5b06e  8bcf                 mov ecx, edi
// 00a5b070  e8bbb3ffff           call 0xa56430
// 00a5b075  85c0                 test eax, eax
// 00a5b077  7407                 je 0xa5b080
// 00a5b079  b8ffab3f00           mov eax, 0x3fabff
// 00a5b07e  eb1d                 jmp 0xa5b09d
// 00a5b080  8bcf                 mov ecx, edi
// 00a5b082  e8a9b3ffff           call 0xa56430
// 00a5b087  85c0                 test eax, eax
// 00a5b089  7407                 je 0xa5b092
// 00a5b08b  b8ffe7a200           mov eax, 0xa2e7ff
// 00a5b090  eb0b                 jmp 0xa5b09d
// 00a5b092  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00a5b095  83f8ff               cmp eax, -1
// 00a5b098  7503                 jne 0xa5b09d
// 00a5b09a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00a5b09d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a5b0a1  50                   push eax
// 00a5b0a2  8d442430             lea eax, [esp + 0x30]
// 00a5b0a6  50                   push eax
// 00a5b0a7  8bce                 mov ecx, esi
// 00a5b0a9  e8fe7df2ff           call 0x982eac
// 00a5b0ae  8bcf                 mov ecx, edi
// 00a5b0b0  e86bdbb4ff           call 0x5a8c20
// 00a5b0b5  85c0                 test eax, eax
// 00a5b0b7  7412                 je 0xa5b0cb
// 00a5b0b9  8bcf                 mov ecx, edi
// 00a5b0bb  e870b3ffff           call 0xa56430
// 00a5b0c0  85c0                 test eax, eax
// 00a5b0c2  7407                 je 0xa5b0cb
// 00a5b0c4  bbfb8c3c00           mov ebx, 0x3c8cfb
// 00a5b0c9  eb1d                 jmp 0xa5b0e8
// 00a5b0cb  8bcf                 mov ecx, edi
// 00a5b0cd  e85eb3ffff           call 0xa56430
// 00a5b0d2  85c0                 test eax, eax
// 00a5b0d4  7407                 je 0xa5b0dd
// 00a5b0d6  bbffbd6900           mov ebx, 0x69bdff
// 00a5b0db  eb0b                 jmp 0xa5b0e8
// 00a5b0dd  8b5d44               mov ebx, dword ptr [ebp + 0x44]
// 00a5b0e0  83fbff               cmp ebx, -1
// 00a5b0e3  7503                 jne 0xa5b0e8
// 00a5b0e5  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 00a5b0e8  e87327f6ff           call 0x9bd860
// 00a5b0ed  53                   push ebx
// 00a5b0ee  8bc8                 mov ecx, eax
// 00a5b0f0  e8eb1ef6ff           call 0x9bcfe0
// 00a5b0f5  50                   push eax
// 00a5b0f6  50                   push eax
// 00a5b0f7  8d4c2434             lea ecx, [esp + 0x34]
// 00a5b0fb  51                   push ecx
// 00a5b0fc  e94d010000           jmp 0xa5b24e
// 00a5b101  83f802               cmp eax, 2
// 00a5b104  0f8596000000         jne 0xa5b1a0
// 00a5b10a  8bcf                 mov ecx, edi
// 00a5b10c  e80fdbb4ff           call 0x5a8c20
// 00a5b111  85c0                 test eax, eax
// 00a5b113  7412                 je 0xa5b127
// 00a5b115  8bcf                 mov ecx, edi
// 00a5b117  e814b3ffff           call 0xa56430
// 00a5b11c  85c0                 test eax, eax
// 00a5b11e  7407                 je 0xa5b127
// 00a5b120  be21000000           mov esi, 0x21
// 00a5b125  eb12                 jmp 0xa5b139
// 00a5b127  8bcf                 mov ecx, edi
// 00a5b129  e802b3ffff           call 0xa56430
// 00a5b12e  8bf0                 mov esi, eax
// 00a5b130  f7de                 neg esi
// 00a5b132  1bf6                 sbb esi, esi
// 00a5b134  f7de                 neg esi
// 00a5b136  83c61e               add esi, 0x1e
// 00a5b139  e82227f6ff           call 0x9bd860
// 00a5b13e  56                   push esi
// 00a5b13f  8bc8                 mov ecx, eax
// 00a5b141  e89a1ef6ff           call 0x9bcfe0
// 00a5b146  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a5b14a  50                   push eax
// 00a5b14b  8d542430             lea edx, [esp + 0x30]
// 00a5b14f  52                   push edx
// 00a5b150  8bce                 mov ecx, esi
// 00a5b152  e8557df2ff           call 0x982eac
// 00a5b157  8bcf                 mov ecx, edi
// 00a5b159  e8c2dab4ff           call 0x5a8c20
// 00a5b15e  85c0                 test eax, eax
// 00a5b160  7412                 je 0xa5b174
// 00a5b162  8bcf                 mov ecx, edi
// 00a5b164  e8c7b2ffff           call 0xa56430
// 00a5b169  85c0                 test eax, eax
// 00a5b16b  7407                 je 0xa5b174
// 00a5b16d  bb32000000           mov ebx, 0x32
// 00a5b172  eb13                 jmp 0xa5b187
// 00a5b174  8bcf                 mov ecx, edi
// 00a5b176  e8b5b2ffff           call 0xa56430
// 00a5b17b  8bd8                 mov ebx, eax
// 00a5b17d  f7db                 neg ebx
// 00a5b17f  1bdb                 sbb ebx, ebx
// 00a5b181  83e310               and ebx, 0x10
// 00a5b184  83c310               add ebx, 0x10
// 00a5b187  e8d426f6ff           call 0x9bd860
// 00a5b18c  53                   push ebx
// 00a5b18d  8bc8                 mov ecx, eax
// 00a5b18f  e84c1ef6ff           call 0x9bcfe0
// 00a5b194  50                   push eax
// 00a5b195  50                   push eax
// 00a5b196  8d442434             lea eax, [esp + 0x34]
// 00a5b19a  50                   push eax
// 00a5b19b  e9ae000000           jmp 0xa5b24e
// 00a5b1a0  e8bb26f6ff           call 0x9bd860
// 00a5b1a5  6a0f                 push 0xf
// 00a5b1a7  8bc8                 mov ecx, eax
// 00a5b1a9  e8321ef6ff           call 0x9bcfe0
// 00a5b1ae  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a5b1b2  50                   push eax
// 00a5b1b3  8d4c2430             lea ecx, [esp + 0x30]
// 00a5b1b7  51                   push ecx
// 00a5b1b8  8bce                 mov ecx, esi
// 00a5b1ba  e8ed7cf2ff           call 0x982eac
// 00a5b1bf  8bcf                 mov ecx, edi
// 00a5b1c1  e85adab4ff           call 0x5a8c20
// 00a5b1c6  85c0                 test eax, eax
// 00a5b1c8  7424                 je 0xa5b1ee
// 00a5b1ca  8bcf                 mov ecx, edi
// 00a5b1cc  e85fb2ffff           call 0xa56430
// 00a5b1d1  85c0                 test eax, eax
// 00a5b1d3  7419                 je 0xa5b1ee
// 00a5b1d5  e88626f6ff           call 0x9bd860
// 00a5b1da  6a10                 push 0x10
// 00a5b1dc  8bc8                 mov ecx, eax
// 00a5b1de  e8fd1df6ff           call 0x9bcfe0
// 00a5b1e3  8bd8                 mov ebx, eax
// 00a5b1e5  e87626f6ff           call 0x9bd860
// 00a5b1ea  6a10                 push 0x10
// 00a5b1ec  eb52                 jmp 0xa5b240
// 00a5b1ee  e86d26f6ff           call 0x9bd860
// 00a5b1f3  6a15                 push 0x15
// 00a5b1f5  8bc8                 mov ecx, eax
// 00a5b1f7  e8e41df6ff           call 0x9bcfe0
// 00a5b1fc  8bd8                 mov ebx, eax
// 00a5b1fe  e85d26f6ff           call 0x9bd860
// 00a5b203  6a0f                 push 0xf
// 00a5b205  8bc8                 mov ecx, eax
// 00a5b207  e8d41df6ff           call 0x9bcfe0
// 00a5b20c  53                   push ebx
// 00a5b20d  50                   push eax
// 00a5b20e  8d442434             lea eax, [esp + 0x34]
// 00a5b212  50                   push eax
// 00a5b213  8bce                 mov ecx, esi
// 00a5b215  e88c7cf2ff           call 0x982ea6
// 00a5b21a  6aff                 push -1
// 00a5b21c  6aff                 push -1
// 00a5b21e  8d4c2434             lea ecx, [esp + 0x34]
// 00a5b222  51                   push ecx
// 00a5b223  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a5b229  e83226f6ff           call 0x9bd860
// 00a5b22e  6a10                 push 0x10
// 00a5b230  8bc8                 mov ecx, eax
// 00a5b232  e8a91df6ff           call 0x9bcfe0
// 00a5b237  8bd8                 mov ebx, eax
// 00a5b239  e82226f6ff           call 0x9bd860
// 00a5b23e  6a05                 push 5
// 00a5b240  8bc8                 mov ecx, eax
// 00a5b242  e8991df6ff           call 0x9bcfe0
// 00a5b247  53                   push ebx
// 00a5b248  50                   push eax
// 00a5b249  8d542434             lea edx, [esp + 0x34]
// 00a5b24d  52                   push edx
// 00a5b24e  8bce                 mov ecx, esi
// 00a5b250  e8517cf2ff           call 0x982ea6
// 00a5b255  8b4730               mov eax, dword ptr [edi + 0x30]
// 00a5b258  83f865               cmp eax, 0x65
// 00a5b25b  754a                 jne 0xa5b2a7
// 00a5b25d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5b261  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5b265  03c1                 add eax, ecx
// 00a5b267  99                   cdq 
// 00a5b268  2bc2                 sub eax, edx
// 00a5b26a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a5b26e  8bc8                 mov ecx, eax
// 00a5b270  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5b274  03c2                 add eax, edx
// 00a5b276  99                   cdq 
// 00a5b277  2bc2                 sub eax, edx
// 00a5b279  d1f8                 sar eax, 1
// 00a5b27b  8d68fd               lea ebp, [eax - 3]
// 00a5b27e  d1f9                 sar ecx, 1
// 00a5b280  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a5b284  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00a5b288  55                   push ebp
// 00a5b289  8d5102               lea edx, [ecx + 2]
// 00a5b28c  52                   push edx
// 00a5b28d  50                   push eax
// 00a5b28e  49                   dec ecx
// 00a5b28f  51                   push ecx
// 00a5b290  8d5803               lea ebx, [eax + 3]
// 00a5b293  53                   push ebx
// 00a5b294  51                   push ecx
// 00a5b295  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5b299  51                   push ecx
// 00a5b29a  56                   push esi
// 00a5b29b  e800d6f2ff           call 0x9888a0
// 00a5b2a0  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a5b2a4  83c420               add esp, 0x20
// 00a5b2a7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a5b2ab  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 00a5b2af  0f84f6000000         je 0xa5b3ab
// 00a5b2b5  8b17                 mov edx, dword ptr [edi]
// 00a5b2b7  8b4258               mov eax, dword ptr [edx + 0x58]
// 00a5b2ba  8bcf                 mov ecx, edi
// 00a5b2bc  ffd0                 call eax
// 00a5b2be  8bd8                 mov ebx, eax
// 00a5b2c0  85db                 test ebx, ebx
// 00a5b2c2  744b                 je 0xa5b30f
// 00a5b2c4  8bcb                 mov ecx, ebx
// 00a5b2c6  e855c7f3ff           call 0x997a20
// 00a5b2cb  8bcb                 mov ecx, ebx
// 00a5b2cd  8be8                 mov ebp, eax
// 00a5b2cf  e88c03fdff           call 0xa2b660
// 00a5b2d4  8bc8                 mov ecx, eax
// 00a5b2d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5b2da  2bc1                 sub eax, ecx
// 00a5b2dc  0344242c             add eax, dword ptr [esp + 0x2c]
// 00a5b2e0  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a5b2e4  99                   cdq 
// 00a5b2e5  2bc2                 sub eax, edx
// 00a5b2e7  8bc8                 mov ecx, eax
// 00a5b2e9  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a5b2ed  2bc5                 sub eax, ebp
// 00a5b2ef  03442430             add eax, dword ptr [esp + 0x30]
// 00a5b2f3  55                   push ebp
// 00a5b2f4  99                   cdq 
// 00a5b2f5  2bc2                 sub eax, edx
// 00a5b2f7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5b2fb  52                   push edx
// 00a5b2fc  d1f8                 sar eax, 1
// 00a5b2fe  d1f9                 sar ecx, 1
// 00a5b300  50                   push eax
// 00a5b301  51                   push ecx
// 00a5b302  56                   push esi
// 00a5b303  8bcb                 mov ecx, ebx
// 00a5b305  e8763ff4ff           call 0x99f280
// 00a5b30a  e9e2000000           jmp 0xa5b3f1
// 00a5b30f  8d44245c             lea eax, [esp + 0x5c]
// 00a5b313  50                   push eax
// 00a5b314  8bcf                 mov ecx, edi
// 00a5b316  e815e4ffff           call 0xa59730
// 00a5b31b  8bc8                 mov ecx, eax
// 00a5b31d  ff156046b200         call dword ptr [0xb24660]
// 00a5b323  84c0                 test al, al
// 00a5b325  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5b329  0f94c3               sete bl
// 00a5b32c  ff15d047b200         call dword ptr [0xb247d0]
// 00a5b332  84db                 test bl, bl
// 00a5b334  7471                 je 0xa5b3a7
// 00a5b336  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a5b339  8b5500               mov edx, dword ptr [ebp]
// 00a5b33c  6a01                 push 1
// 00a5b33e  50                   push eax
// 00a5b33f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5b342  8bcd                 mov ecx, ebp
// 00a5b344  ffd0                 call eax
// 00a5b346  50                   push eax
// 00a5b347  56                   push esi
// 00a5b348  8d4c2444             lea ecx, [esp + 0x44]
// 00a5b34c  e8dfa1f7ff           call 0x9d5530
// 00a5b351  8b16                 mov edx, dword ptr [esi]
// 00a5b353  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a5b357  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a5b35a  50                   push eax
// 00a5b35b  8bce                 mov ecx, esi
// 00a5b35d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00a5b365  ffd2                 call edx
// 00a5b367  8d442460             lea eax, [esp + 0x60]
// 00a5b36b  50                   push eax
// 00a5b36c  8bcf                 mov ecx, edi
// 00a5b36e  e8bde3ffff           call 0xa59730
// 00a5b373  6825080000           push 0x825
// 00a5b378  8d4c2430             lea ecx, [esp + 0x30]
// 00a5b37c  51                   push ecx
// 00a5b37d  50                   push eax
// 00a5b37e  8bce                 mov ecx, esi
// 00a5b380  c644246001           mov byte ptr [esp + 0x60], 1
// 00a5b385  e846d0f2ff           call 0x9883d0
// 00a5b38a  8d4c2460             lea ecx, [esp + 0x60]
// 00a5b38e  ff15d047b200         call dword ptr [0xb247d0]
// 00a5b394  8d4c243c             lea ecx, [esp + 0x3c]
// 00a5b398  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00a5b3a0  e80ba2f7ff           call 0x9d55b0
// 00a5b3a5  eb4a                 jmp 0xa5b3f1
// 00a5b3a7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a5b3ab  837f3064             cmp dword ptr [edi + 0x30], 0x64
// 00a5b3af  7540                 jne 0xa5b3f1
// 00a5b3b1  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a5b3b5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a5b3b9  52                   push edx
// 00a5b3ba  6a02                 push 2
// 00a5b3bc  6a02                 push 2
// 00a5b3be  55                   push ebp
// 00a5b3bf  8d43fc               lea eax, [ebx - 4]
// 00a5b3c2  50                   push eax
// 00a5b3c3  8bce                 mov ecx, esi
// 00a5b3c5  e8c6e10300           call 0xa99590
// 00a5b3ca  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a5b3ce  51                   push ecx
// 00a5b3cf  6a02                 push 2
// 00a5b3d1  6a02                 push 2
// 00a5b3d3  55                   push ebp
// 00a5b3d4  53                   push ebx
// 00a5b3d5  8bce                 mov ecx, esi
// 00a5b3d7  e8b4e10300           call 0xa99590
// 00a5b3dc  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a5b3e0  52                   push edx
// 00a5b3e1  6a02                 push 2
// 00a5b3e3  6a02                 push 2
// 00a5b3e5  55                   push ebp
// 00a5b3e6  83c304               add ebx, 4
// 00a5b3e9  53                   push ebx
// 00a5b3ea  8bce                 mov ecx, esi
// 00a5b3ec  e89fe10300           call 0xa99590
// 00a5b3f1  8bcf                 mov ecx, edi
// 00a5b3f3  e818b0ffff           call 0xa56410
// 00a5b3f8  85c0                 test eax, eax
// 00a5b3fa  744e                 je 0xa5b44a
// 00a5b3fc  e85f24f6ff           call 0x9bd860
// 00a5b401  6a12                 push 0x12
// 00a5b403  8bc8                 mov ecx, eax
// 00a5b405  e8d61bf6ff           call 0x9bcfe0
// 00a5b40a  8b16                 mov edx, dword ptr [esi]
// 00a5b40c  50                   push eax
// 00a5b40d  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a5b410  8bce                 mov ecx, esi
// 00a5b412  ffd0                 call eax
// 00a5b414  e84724f6ff           call 0x9bd860
// 00a5b419  6a0f                 push 0xf
// 00a5b41b  8bc8                 mov ecx, eax
// 00a5b41d  e8be1bf6ff           call 0x9bcfe0
// 00a5b422  8b16                 mov edx, dword ptr [esi]
// 00a5b424  50                   push eax
// 00a5b425  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a5b428  8bce                 mov ecx, esi
// 00a5b42a  ffd0                 call eax
// 00a5b42c  6afe                 push -2
// 00a5b42e  6afe                 push -2
// 00a5b430  8d4c2434             lea ecx, [esp + 0x34]
// 00a5b434  51                   push ecx
// 00a5b435  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a5b43b  8b4604               mov eax, dword ptr [esi + 4]
// 00a5b43e  8d54242c             lea edx, [esp + 0x2c]
// 00a5b442  52                   push edx
// 00a5b443  50                   push eax
// 00a5b444  ff15d43cb200         call dword ptr [0xb23cd4]
// 00a5b44a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5b44e  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5b455  59                   pop ecx
// 00a5b456  5f                   pop edi
// 00a5b457  5e                   pop esi
// 00a5b458  5d                   pop ebp
// 00a5b459  5b                   pop ebx
// 00a5b45a  83c444               add esp, 0x44
// 00a5b45d  c20800               ret 8
// copied from an identical function in another client (function ?FillInplaceButton@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp