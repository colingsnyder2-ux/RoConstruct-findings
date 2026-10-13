// roc 2008-06 0050bb30  unit: G3D::Log  size: 1295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050bb30
//
// 0050bb30  64a100000000         mov eax, dword ptr fs:[0]
// 0050bb36  6aff                 push -1
// 0050bb38  68d4bf7c00           push 0x7cbfd4
// 0050bb3d  50                   push eax
// 0050bb3e  64892500000000       mov dword ptr fs:[0], esp
// 0050bb45  81ecc0000000         sub esp, 0xc0
// 0050bb4b  56                   push esi
// 0050bb4c  8bb424d4000000       mov esi, dword ptr [esp + 0xd4]
// 0050bb53  8b4638               mov eax, dword ptr [esi + 0x38]
// 0050bb56  57                   push edi
// 0050bb57  8bf9                 mov edi, ecx
// 0050bb59  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bb5c  2bc1                 sub eax, ecx
// 0050bb5e  83c0ee               add eax, -0x12
// 0050bb61  894644               mov dword ptr [esi + 0x44], eax
// 0050bb64  7805                 js 0x50bb6b
// 0050bb66  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050bb69  7e0c                 jle 0x50bb77
// 0050bb6b  03c1                 add eax, ecx
// 0050bb6d  6a00                 push 0
// 0050bb6f  50                   push eax
// 0050bb70  8bce                 mov ecx, esi
// 0050bb72  e8599c0000           call 0x5157d0
// 0050bb77  6a10                 push 0x10
// 0050bb79  8d442434             lea eax, [esp + 0x34]
// 0050bb7d  50                   push eax
// 0050bb7e  8bce                 mov ecx, esi
// 0050bb80  e8cba10000           call 0x515d50
// 0050bb85  8d4c2430             lea ecx, [esp + 0x30]
// 0050bb89  688c7f8200           push 0x827f8c
// 0050bb8e  51                   push ecx
// 0050bb8f  c78424d800000000000000 mov dword ptr [esp + 0xd8], 0
// 0050bb9a  ff15cc238000         call dword ptr [0x8023cc]
// 0050bba0  83c408               add esp, 8
// 0050bba3  84c0                 test al, al
// 0050bba5  7449                 je 0x50bbf0
// 0050bba7  687c7f8200           push 0x827f7c
// 0050bbac  8d4c2418             lea ecx, [esp + 0x18]
// 0050bbb0  ff1558248000         call dword ptr [0x802458]
// 0050bbb6  8d54244c             lea edx, [esp + 0x4c]
// 0050bbba  52                   push edx
// 0050bbbb  8bce                 mov ecx, esi
// 0050bbbd  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 0050bbc5  e866eeffff           call 0x50aa30
// 0050bbca  50                   push eax
// 0050bbcb  8d442418             lea eax, [esp + 0x18]
// 0050bbcf  50                   push eax
// 0050bbd0  8d4c2470             lea ecx, [esp + 0x70]
// 0050bbd4  c68424d800000002     mov byte ptr [esp + 0xd8], 2
// 0050bbdc  e8cf6cf6ff           call 0x4728b0
// 0050bbe1  6878c48d00           push 0x8dc478
// 0050bbe6  8d4c246c             lea ecx, [esp + 0x6c]
// 0050bbea  51                   push ecx
// 0050bbeb  e89c591900           call 0x6a158c
// 0050bbf0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bbf3  8bc1                 mov eax, ecx
// 0050bbf5  f7d8                 neg eax
// 0050bbf7  894644               mov dword ptr [esi + 0x44], eax
// 0050bbfa  7805                 js 0x50bc01
// 0050bbfc  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050bbff  7e0c                 jle 0x50bc0d
// 0050bc01  03c1                 add eax, ecx
// 0050bc03  6a00                 push 0
// 0050bc05  50                   push eax
// 0050bc06  8bce                 mov ecx, esi
// 0050bc08  e8c39b0000           call 0x5157d0
// 0050bc0d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bc10  8d5001               lea edx, [eax + 1]
// 0050bc13  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050bc16  7e0f                 jle 0x50bc27
// 0050bc18  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bc1b  03c8                 add ecx, eax
// 0050bc1d  6a01                 push 1
// 0050bc1f  51                   push ecx
// 0050bc20  8bce                 mov ecx, esi
// 0050bc22  e8a99b0000           call 0x5157d0
// 0050bc27  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bc2a  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050bc2d  8a0c10               mov cl, byte ptr [eax + edx]
// 0050bc30  40                   inc eax
// 0050bc31  55                   push ebp
// 0050bc32  0fb6e9               movzx ebp, cl
// 0050bc35  8d4801               lea ecx, [eax + 1]
// 0050bc38  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050bc3b  894644               mov dword ptr [esi + 0x44], eax
// 0050bc3e  7e0f                 jle 0x50bc4f
// 0050bc40  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050bc43  6a01                 push 1
// 0050bc45  03d0                 add edx, eax
// 0050bc47  52                   push edx
// 0050bc48  8bce                 mov ecx, esi
// 0050bc4a  e8819b0000           call 0x5157d0
// 0050bc4f  ff4644               inc dword ptr [esi + 0x44]
// 0050bc52  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bc55  8d4801               lea ecx, [eax + 1]
// 0050bc58  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050bc5b  7e0f                 jle 0x50bc6c
// 0050bc5d  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050bc60  6a01                 push 1
// 0050bc62  03d0                 add edx, eax
// 0050bc64  52                   push edx
// 0050bc65  8bce                 mov ecx, esi
// 0050bc67  e8649b0000           call 0x5157d0
// 0050bc6c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bc6f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050bc72  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050bc75  0fb6c9               movzx ecx, cl
// 0050bc78  40                   inc eax
// 0050bc79  894644               mov dword ptr [esi + 0x44], eax
// 0050bc7c  83f902               cmp ecx, 2
// 0050bc7f  7449                 je 0x50bcca
// 0050bc81  68487f8200           push 0x827f48
// 0050bc86  8d4c241c             lea ecx, [esp + 0x1c]
// 0050bc8a  ff1558248000         call dword ptr [0x802458]
// 0050bc90  8d542450             lea edx, [esp + 0x50]
// 0050bc94  52                   push edx
// 0050bc95  8bce                 mov ecx, esi
// 0050bc97  c68424d800000003     mov byte ptr [esp + 0xd8], 3
// 0050bc9f  e88cedffff           call 0x50aa30
// 0050bca4  50                   push eax
// 0050bca5  8d44241c             lea eax, [esp + 0x1c]
// 0050bca9  50                   push eax
// 0050bcaa  8d4c2474             lea ecx, [esp + 0x74]
// 0050bcae  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 0050bcb6  e8f56bf6ff           call 0x4728b0
// 0050bcbb  6878c48d00           push 0x8dc478
// 0050bcc0  8d4c2470             lea ecx, [esp + 0x70]
// 0050bcc4  51                   push ecx
// 0050bcc5  e8c2581900           call 0x6a158c
// 0050bcca  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bccd  8d440805             lea eax, [eax + ecx + 5]
// 0050bcd1  2bc1                 sub eax, ecx
// 0050bcd3  894644               mov dword ptr [esi + 0x44], eax
// 0050bcd6  7805                 js 0x50bcdd
// 0050bcd8  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050bcdb  7e0c                 jle 0x50bce9
// 0050bcdd  03c1                 add eax, ecx
// 0050bcdf  6a00                 push 0
// 0050bce1  50                   push eax
// 0050bce2  8bce                 mov ecx, esi
// 0050bce4  e8e79a0000           call 0x5157d0
// 0050bce9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bcec  8b5644               mov edx, dword ptr [esi + 0x44]
// 0050bcef  8d441104             lea eax, [ecx + edx + 4]
// 0050bcf3  2bc1                 sub eax, ecx
// 0050bcf5  894644               mov dword ptr [esi + 0x44], eax
// 0050bcf8  7805                 js 0x50bcff
// 0050bcfa  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050bcfd  7e0c                 jle 0x50bd0b
// 0050bcff  03c1                 add eax, ecx
// 0050bd01  6a00                 push 0
// 0050bd03  50                   push eax
// 0050bd04  8bce                 mov ecx, esi
// 0050bd06  e8c59a0000           call 0x5157d0
// 0050bd0b  8bce                 mov ecx, esi
// 0050bd0d  e89eedffff           call 0x50aab0
// 0050bd12  0fb7c0               movzx eax, ax
// 0050bd15  98                   cwde 
// 0050bd16  8bce                 mov ecx, esi
// 0050bd18  894708               mov dword ptr [edi + 8], eax
// 0050bd1b  e890edffff           call 0x50aab0
// 0050bd20  0fb7c0               movzx eax, ax
// 0050bd23  0fbfc8               movsx ecx, ax
// 0050bd26  894f0c               mov dword ptr [edi + 0xc], ecx
// 0050bd29  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bd2c  8d5001               lea edx, [eax + 1]
// 0050bd2f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050bd32  7e0f                 jle 0x50bd43
// 0050bd34  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bd37  03c8                 add ecx, eax
// 0050bd39  6a01                 push 1
// 0050bd3b  51                   push ecx
// 0050bd3c  8bce                 mov ecx, esi
// 0050bd3e  e88d9a0000           call 0x5157d0
// 0050bd43  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bd46  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050bd49  8a0c10               mov cl, byte ptr [eax + edx]
// 0050bd4c  40                   inc eax
// 0050bd4d  894644               mov dword ptr [esi + 0x44], eax
// 0050bd50  0fb6c1               movzx eax, cl
// 0050bd53  53                   push ebx
// 0050bd54  bb03000000           mov ebx, 3
// 0050bd59  83f818               cmp eax, 0x18
// 0050bd5c  7457                 je 0x50bdb5
// 0050bd5e  83f820               cmp eax, 0x20
// 0050bd61  7449                 je 0x50bdac
// 0050bd63  68287f8200           push 0x827f28
// 0050bd68  8d4c2420             lea ecx, [esp + 0x20]
// 0050bd6c  ff1558248000         call dword ptr [0x802458]
// 0050bd72  8d442454             lea eax, [esp + 0x54]
// 0050bd76  50                   push eax
// 0050bd77  8bce                 mov ecx, esi
// 0050bd79  c68424dc00000005     mov byte ptr [esp + 0xdc], 5
// 0050bd81  e8aaecffff           call 0x50aa30
// 0050bd86  50                   push eax
// 0050bd87  8d4c2420             lea ecx, [esp + 0x20]
// 0050bd8b  51                   push ecx
// 0050bd8c  8d4c2478             lea ecx, [esp + 0x78]
// 0050bd90  c68424e000000006     mov byte ptr [esp + 0xe0], 6
// 0050bd98  e8136bf6ff           call 0x4728b0
// 0050bd9d  6878c48d00           push 0x8dc478
// 0050bda2  8d542474             lea edx, [esp + 0x74]
// 0050bda6  52                   push edx
// 0050bda7  e8e0571900           call 0x6a158c
// 0050bdac  c7471004000000       mov dword ptr [edi + 0x10], 4
// 0050bdb3  eb03                 jmp 0x50bdb8
// 0050bdb5  895f10               mov dword ptr [edi + 0x10], ebx
// 0050bdb8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bdbb  8d4801               lea ecx, [eax + 1]
// 0050bdbe  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050bdc1  7e0f                 jle 0x50bdd2
// 0050bdc3  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050bdc6  6a01                 push 1
// 0050bdc8  03d0                 add edx, eax
// 0050bdca  52                   push edx
// 0050bdcb  8bce                 mov ecx, esi
// 0050bdcd  e8fe990000           call 0x5157d0
// 0050bdd2  ff4644               inc dword ptr [esi + 0x44]
// 0050bdd5  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bdd8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bddb  03c1                 add eax, ecx
// 0050bddd  03c5                 add eax, ebp
// 0050bddf  2bc1                 sub eax, ecx
// 0050bde1  894644               mov dword ptr [esi + 0x44], eax
// 0050bde4  7805                 js 0x50bdeb
// 0050bde6  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050bde9  7e0c                 jle 0x50bdf7
// 0050bdeb  03c1                 add eax, ecx
// 0050bded  6a00                 push 0
// 0050bdef  50                   push eax
// 0050bdf0  8bce                 mov ecx, esi
// 0050bdf2  e8d9990000           call 0x5157d0
// 0050bdf7  8b4708               mov eax, dword ptr [edi + 8]
// 0050bdfa  0faf470c             imul eax, dword ptr [edi + 0xc]
// 0050bdfe  0faf4710             imul eax, dword ptr [edi + 0x10]
// 0050be02  50                   push eax
// 0050be03  e828c7ffff           call 0x508530
// 0050be08  83c404               add esp, 4
// 0050be0b  894704               mov dword ptr [edi + 4], eax
// 0050be0e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0050be11  395f10               cmp dword ptr [edi + 0x10], ebx
// 0050be14  0f85e2000000         jne 0x50befc
// 0050be1a  83e801               sub eax, 1
// 0050be1d  89442410             mov dword ptr [esp + 0x10], eax
// 0050be21  0f88e8010000         js 0x50c00f
// 0050be27  eb07                 jmp 0x50be30
// 0050be29  8da42400000000       lea esp, [esp]
// 0050be30  33ed                 xor ebp, ebp
// 0050be32  396f08               cmp dword ptr [edi + 8], ebp
// 0050be35  0f8eb1000000         jle 0x50beec
// 0050be3b  eb03                 jmp 0x50be40
// 0050be3d  8d4900               lea ecx, [ecx]
// 0050be40  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050be43  8d4801               lea ecx, [eax + 1]
// 0050be46  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050be49  7e0f                 jle 0x50be5a
// 0050be4b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050be4e  6a01                 push 1
// 0050be50  03d0                 add edx, eax
// 0050be52  52                   push edx
// 0050be53  8bce                 mov ecx, esi
// 0050be55  e876990000           call 0x5157d0
// 0050be5a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050be5d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050be60  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050be63  40                   inc eax
// 0050be64  0fb6d1               movzx edx, cl
// 0050be67  8d4801               lea ecx, [eax + 1]
// 0050be6a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050be6d  894644               mov dword ptr [esi + 0x44], eax
// 0050be70  89542414             mov dword ptr [esp + 0x14], edx
// 0050be74  7e0f                 jle 0x50be85
// 0050be76  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050be79  6a01                 push 1
// 0050be7b  03d0                 add edx, eax
// 0050be7d  52                   push edx
// 0050be7e  8bce                 mov ecx, esi
// 0050be80  e84b990000           call 0x5157d0
// 0050be85  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050be88  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050be8b  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050be8e  40                   inc eax
// 0050be8f  8d5001               lea edx, [eax + 1]
// 0050be92  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050be95  894644               mov dword ptr [esi + 0x44], eax
// 0050be98  0fb6d9               movzx ebx, cl
// 0050be9b  7e0f                 jle 0x50beac
// 0050be9d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bea0  03c8                 add ecx, eax
// 0050bea2  6a01                 push 1
// 0050bea4  51                   push ecx
// 0050bea5  8bce                 mov ecx, esi
// 0050bea7  e824990000           call 0x5157d0
// 0050beac  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050beaf  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050beb2  8a0c10               mov cl, byte ptr [eax + edx]
// 0050beb5  40                   inc eax
// 0050beb6  894644               mov dword ptr [esi + 0x44], eax
// 0050beb9  8b4708               mov eax, dword ptr [edi + 8]
// 0050bebc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0050bec1  8b5704               mov edx, dword ptr [edi + 4]
// 0050bec4  0fb6c9               movzx ecx, cl
// 0050bec7  03c5                 add eax, ebp
// 0050bec9  8d0440               lea eax, [eax + eax*2]
// 0050becc  880c10               mov byte ptr [eax + edx], cl
// 0050becf  8b4f04               mov ecx, dword ptr [edi + 4]
// 0050bed2  885c0101             mov byte ptr [ecx + eax + 1], bl
// 0050bed6  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0050bedb  8b5704               mov edx, dword ptr [edi + 4]
// 0050bede  45                   inc ebp
// 0050bedf  884c0202             mov byte ptr [edx + eax + 2], cl
// 0050bee3  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0050bee6  0f8c54ffffff         jl 0x50be40
// 0050beec  836c241001           sub dword ptr [esp + 0x10], 1
// 0050bef1  0f8939ffffff         jns 0x50be30
// 0050bef7  e913010000           jmp 0x50c00f
// 0050befc  83e801               sub eax, 1
// 0050beff  89442410             mov dword ptr [esp + 0x10], eax
// 0050bf03  0f8806010000         js 0x50c00f
// 0050bf09  8da42400000000       lea esp, [esp]
// 0050bf10  33ed                 xor ebp, ebp
// 0050bf12  396f08               cmp dword ptr [edi + 8], ebp
// 0050bf15  0f8ee9000000         jle 0x50c004
// 0050bf1b  eb03                 jmp 0x50bf20
// 0050bf1d  8d4900               lea ecx, [ecx]
// 0050bf20  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bf23  8d5001               lea edx, [eax + 1]
// 0050bf26  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050bf29  7e0f                 jle 0x50bf3a
// 0050bf2b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bf2e  03c8                 add ecx, eax
// 0050bf30  6a01                 push 1
// 0050bf32  51                   push ecx
// 0050bf33  8bce                 mov ecx, esi
// 0050bf35  e896980000           call 0x5157d0
// 0050bf3a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bf3d  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050bf40  8a0c10               mov cl, byte ptr [eax + edx]
// 0050bf43  40                   inc eax
// 0050bf44  0fb6c9               movzx ecx, cl
// 0050bf47  8d5001               lea edx, [eax + 1]
// 0050bf4a  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050bf4d  894644               mov dword ptr [esi + 0x44], eax
// 0050bf50  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050bf54  7e0f                 jle 0x50bf65
// 0050bf56  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bf59  03c8                 add ecx, eax
// 0050bf5b  6a01                 push 1
// 0050bf5d  51                   push ecx
// 0050bf5e  8bce                 mov ecx, esi
// 0050bf60  e86b980000           call 0x5157d0
// 0050bf65  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bf68  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050bf6b  8a0c10               mov cl, byte ptr [eax + edx]
// 0050bf6e  40                   inc eax
// 0050bf6f  0fb6c9               movzx ecx, cl
// 0050bf72  8d5001               lea edx, [eax + 1]
// 0050bf75  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0050bf78  894644               mov dword ptr [esi + 0x44], eax
// 0050bf7b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050bf7f  7e0f                 jle 0x50bf90
// 0050bf81  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050bf84  03c8                 add ecx, eax
// 0050bf86  6a01                 push 1
// 0050bf88  51                   push ecx
// 0050bf89  8bce                 mov ecx, esi
// 0050bf8b  e840980000           call 0x5157d0
// 0050bf90  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bf93  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050bf96  8a0c10               mov cl, byte ptr [eax + edx]
// 0050bf99  40                   inc eax
// 0050bf9a  0fb6d9               movzx ebx, cl
// 0050bf9d  8d4801               lea ecx, [eax + 1]
// 0050bfa0  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050bfa3  894644               mov dword ptr [esi + 0x44], eax
// 0050bfa6  7e0f                 jle 0x50bfb7
// 0050bfa8  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050bfab  6a01                 push 1
// 0050bfad  03d0                 add edx, eax
// 0050bfaf  52                   push edx
// 0050bfb0  8bce                 mov ecx, esi
// 0050bfb2  e819980000           call 0x5157d0
// 0050bfb7  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bfba  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050bfbd  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050bfc0  40                   inc eax
// 0050bfc1  894644               mov dword ptr [esi + 0x44], eax
// 0050bfc4  8b4708               mov eax, dword ptr [edi + 8]
// 0050bfc7  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0050bfcc  8b5704               mov edx, dword ptr [edi + 4]
// 0050bfcf  03c5                 add eax, ebp
// 0050bfd1  03c0                 add eax, eax
// 0050bfd3  03c0                 add eax, eax
// 0050bfd5  881c10               mov byte ptr [eax + edx], bl
// 0050bfd8  8b5704               mov edx, dword ptr [edi + 4]
// 0050bfdb  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 0050bfe0  885c0201             mov byte ptr [edx + eax + 1], bl
// 0050bfe4  8b5704               mov edx, dword ptr [edi + 4]
// 0050bfe7  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 0050bfec  885c0202             mov byte ptr [edx + eax + 2], bl
// 0050bff0  8b5704               mov edx, dword ptr [edi + 4]
// 0050bff3  0fb6c9               movzx ecx, cl
// 0050bff6  45                   inc ebp
// 0050bff7  884c0203             mov byte ptr [edx + eax + 3], cl
// 0050bffb  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0050bffe  0f8c1cffffff         jl 0x50bf20
// 0050c004  836c241001           sub dword ptr [esp + 0x10], 1
// 0050c009  0f8901ffffff         jns 0x50bf10
// 0050c00f  8d4c2438             lea ecx, [esp + 0x38]
// 0050c013  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 0050c01e  ff1568248000         call dword ptr [0x802468]
// 0050c024  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0050c02b  5b                   pop ebx
// 0050c02c  5d                   pop ebp
// 0050c02d  5f                   pop edi
// 0050c02e  5e                   pop esi
// 0050c02f  64890d00000000       mov dword ptr fs:[0], ecx
// 0050c036  81c4cc000000         add esp, 0xcc
// 0050c03c  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_tga.cpp (function ?decodeTGA@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_tga.cpp
