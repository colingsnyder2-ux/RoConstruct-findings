// roc 2008-06 00508c00  unit: G3D::Shader  size: 2731 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508c00
//
// 00508c00  6aff                 push -1
// 00508c02  6898bc7c00           push 0x7cbc98
// 00508c07  64a100000000         mov eax, dword ptr fs:[0]
// 00508c0d  50                   push eax
// 00508c0e  64892500000000       mov dword ptr fs:[0], esp
// 00508c15  81ec50010000         sub esp, 0x150
// 00508c1b  53                   push ebx
// 00508c1c  56                   push esi
// 00508c1d  57                   push edi
// 00508c1e  6816b78000           push 0x80b716
// 00508c23  8d4c2410             lea ecx, [esp + 0x10]
// 00508c27  ff1558248000         call dword ptr [0x802458]
// 00508c2d  6816b78000           push 0x80b716
// 00508c32  8d4c2464             lea ecx, [esp + 0x64]
// 00508c36  c784246801000000000000 mov dword ptr [esp + 0x168], 0
// 00508c41  ff1558248000         call dword ptr [0x802458]
// 00508c47  6816b78000           push 0x80b716
// 00508c4c  8d4c242c             lea ecx, [esp + 0x2c]
// 00508c50  c684246801000001     mov byte ptr [esp + 0x168], 1
// 00508c58  ff1558248000         call dword ptr [0x802458]
// 00508c5e  6816b78000           push 0x80b716
// 00508c63  8d8c2480000000       lea ecx, [esp + 0x80]
// 00508c6a  c684246801000002     mov byte ptr [esp + 0x168], 2
// 00508c72  ff1558248000         call dword ptr [0x802458]
// 00508c78  6828e58100           push 0x81e528
// 00508c7d  8d4c2448             lea ecx, [esp + 0x48]
// 00508c81  c684246801000003     mov byte ptr [esp + 0x168], 3
// 00508c89  ff1558248000         call dword ptr [0x802458]
// 00508c8f  b304                 mov bl, 4
// 00508c91  68007a8200           push 0x827a00
// 00508c96  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00508c9d  889c2468010000       mov byte ptr [esp + 0x168], bl
// 00508ca4  ff1558248000         call dword ptr [0x802458]
// 00508caa  8bb4246c010000       mov esi, dword ptr [esp + 0x16c]
// 00508cb1  8d44240c             lea eax, [esp + 0xc]
// 00508cb5  50                   push eax
// 00508cb6  8d4c2464             lea ecx, [esp + 0x64]
// 00508cba  51                   push ecx
// 00508cbb  8d542430             lea edx, [esp + 0x30]
// 00508cbf  52                   push edx
// 00508cc0  8d842488000000       lea eax, [esp + 0x88]
// 00508cc7  50                   push eax
// 00508cc8  8d4c2454             lea ecx, [esp + 0x54]
// 00508ccc  51                   push ecx
// 00508ccd  8d9424ac000000       lea edx, [esp + 0xac]
// 00508cd4  52                   push edx
// 00508cd5  8bce                 mov ecx, esi
// 00508cd7  c684247c01000005     mov byte ptr [esp + 0x17c], 5
// 00508cdf  e88ca20000           call 0x512f70
// 00508ce4  8d8c2498000000       lea ecx, [esp + 0x98]
// 00508ceb  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00508cf2  ff1568248000         call dword ptr [0x802468]
// 00508cf8  8d4c2444             lea ecx, [esp + 0x44]
// 00508cfc  c684246401000003     mov byte ptr [esp + 0x164], 3
// 00508d04  ff1568248000         call dword ptr [0x802468]
// 00508d0a  8d4c247c             lea ecx, [esp + 0x7c]
// 00508d0e  c684246401000002     mov byte ptr [esp + 0x164], 2
// 00508d16  ff1568248000         call dword ptr [0x802468]
// 00508d1c  8d4c2428             lea ecx, [esp + 0x28]
// 00508d20  c684246401000001     mov byte ptr [esp + 0x164], 1
// 00508d28  ff1568248000         call dword ptr [0x802468]
// 00508d2e  8d4c2460             lea ecx, [esp + 0x60]
// 00508d32  c684246401000000     mov byte ptr [esp + 0x164], 0
// 00508d3a  ff1568248000         call dword ptr [0x802468]
// 00508d40  83cfff               or edi, 0xffffffff
// 00508d43  8d4c240c             lea ecx, [esp + 0xc]
// 00508d47  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00508d4e  ff1568248000         call dword ptr [0x802468]
// 00508d54  8bce                 mov ecx, esi
// 00508d56  e8259d0000           call 0x512a80
// 00508d5b  8bce                 mov ecx, esi
// 00508d5d  e85e960000           call 0x5123c0
// 00508d62  68ccf78000           push 0x80f7cc
// 00508d67  8d4c2410             lea ecx, [esp + 0x10]
// 00508d6b  ff1558248000         call dword ptr [0x802458]
// 00508d71  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 00508d7c  e80ffbffff           call 0x508890
// 00508d81  50                   push eax
// 00508d82  8d442410             lea eax, [esp + 0x10]
// 00508d86  50                   push eax
// 00508d87  e8b4efffff           call 0x507d40
// 00508d8c  83c408               add esp, 8
// 00508d8f  8d4c240c             lea ecx, [esp + 0xc]
// 00508d93  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00508d9a  ff1568248000         call dword ptr [0x802468]
// 00508da0  8bce                 mov ecx, esi
// 00508da2  e849960000           call 0x5123f0
// 00508da7  6816b78000           push 0x80b716
// 00508dac  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00508db3  ff1558248000         call dword ptr [0x802458]
// 00508db9  6816b78000           push 0x80b716
// 00508dbe  8d4c2448             lea ecx, [esp + 0x48]
// 00508dc2  c784246801000007000000 mov dword ptr [esp + 0x168], 7
// 00508dcd  ff1558248000         call dword ptr [0x802458]
// 00508dd3  6816b78000           push 0x80b716
// 00508dd8  8d8c2480000000       lea ecx, [esp + 0x80]
// 00508ddf  c684246801000008     mov byte ptr [esp + 0x168], 8
// 00508de7  ff1558248000         call dword ptr [0x802458]
// 00508ded  6816b78000           push 0x80b716
// 00508df2  8d4c242c             lea ecx, [esp + 0x2c]
// 00508df6  c684246801000009     mov byte ptr [esp + 0x168], 9
// 00508dfe  ff1558248000         call dword ptr [0x802458]
// 00508e04  6816b78000           push 0x80b716
// 00508e09  8d4c2464             lea ecx, [esp + 0x64]
// 00508e0d  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 00508e15  ff1558248000         call dword ptr [0x802458]
// 00508e1b  b30b                 mov bl, 0xb
// 00508e1d  681ce58100           push 0x81e51c
// 00508e22  8d4c2410             lea ecx, [esp + 0x10]
// 00508e26  889c2468010000       mov byte ptr [esp + 0x168], bl
// 00508e2d  ff1558248000         call dword ptr [0x802458]
// 00508e33  8d8c2498000000       lea ecx, [esp + 0x98]
// 00508e3a  51                   push ecx
// 00508e3b  8d542448             lea edx, [esp + 0x48]
// 00508e3f  52                   push edx
// 00508e40  8d842484000000       lea eax, [esp + 0x84]
// 00508e47  50                   push eax
// 00508e48  8d4c2434             lea ecx, [esp + 0x34]
// 00508e4c  51                   push ecx
// 00508e4d  8d542470             lea edx, [esp + 0x70]
// 00508e51  52                   push edx
// 00508e52  8d442420             lea eax, [esp + 0x20]
// 00508e56  50                   push eax
// 00508e57  8bce                 mov ecx, esi
// 00508e59  c684247c0100000c     mov byte ptr [esp + 0x17c], 0xc
// 00508e61  e80aa10000           call 0x512f70
// 00508e66  8d4c240c             lea ecx, [esp + 0xc]
// 00508e6a  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00508e71  ff1568248000         call dword ptr [0x802468]
// 00508e77  8d4c2460             lea ecx, [esp + 0x60]
// 00508e7b  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 00508e83  ff1568248000         call dword ptr [0x802468]
// 00508e89  8d4c2428             lea ecx, [esp + 0x28]
// 00508e8d  c684246401000009     mov byte ptr [esp + 0x164], 9
// 00508e95  ff1568248000         call dword ptr [0x802468]
// 00508e9b  8d4c247c             lea ecx, [esp + 0x7c]
// 00508e9f  c684246401000008     mov byte ptr [esp + 0x164], 8
// 00508ea7  ff1568248000         call dword ptr [0x802468]
// 00508ead  8d4c2444             lea ecx, [esp + 0x44]
// 00508eb1  c684246401000007     mov byte ptr [esp + 0x164], 7
// 00508eb9  ff1568248000         call dword ptr [0x802468]
// 00508ebf  8d8c2498000000       lea ecx, [esp + 0x98]
// 00508ec6  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00508ecd  ff1568248000         call dword ptr [0x802468]
// 00508ed3  8bce                 mov ecx, esi
// 00508ed5  e8a69b0000           call 0x512a80
// 00508eda  8bce                 mov ecx, esi
// 00508edc  e89f9b0000           call 0x512a80
// 00508ee1  6816b78000           push 0x80b716
// 00508ee6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00508eed  ff1558248000         call dword ptr [0x802458]
// 00508ef3  c78424640100000d000000 mov dword ptr [esp + 0x164], 0xd
// 00508efe  6816b78000           push 0x80b716
// 00508f03  8d4c2448             lea ecx, [esp + 0x48]
// 00508f07  ff1558248000         call dword ptr [0x802458]
// 00508f0d  6816b78000           push 0x80b716
// 00508f12  8d8c2480000000       lea ecx, [esp + 0x80]
// 00508f19  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 00508f21  ff1558248000         call dword ptr [0x802458]
// 00508f27  6816b78000           push 0x80b716
// 00508f2c  8d4c242c             lea ecx, [esp + 0x2c]
// 00508f30  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 00508f38  ff1558248000         call dword ptr [0x802458]
// 00508f3e  6828e58100           push 0x81e528
// 00508f43  8d4c2464             lea ecx, [esp + 0x64]
// 00508f47  c684246801000010     mov byte ptr [esp + 0x168], 0x10
// 00508f4f  ff1558248000         call dword ptr [0x802458]
// 00508f55  b311                 mov bl, 0x11
// 00508f57  68fc798200           push 0x8279fc
// 00508f5c  8d4c2410             lea ecx, [esp + 0x10]
// 00508f60  889c2468010000       mov byte ptr [esp + 0x168], bl
// 00508f67  ff1558248000         call dword ptr [0x802458]
// 00508f6d  8d8c2498000000       lea ecx, [esp + 0x98]
// 00508f74  51                   push ecx
// 00508f75  8d542448             lea edx, [esp + 0x48]
// 00508f79  52                   push edx
// 00508f7a  8d842484000000       lea eax, [esp + 0x84]
// 00508f81  50                   push eax
// 00508f82  8d4c2434             lea ecx, [esp + 0x34]
// 00508f86  51                   push ecx
// 00508f87  8d542470             lea edx, [esp + 0x70]
// 00508f8b  52                   push edx
// 00508f8c  8d442420             lea eax, [esp + 0x20]
// 00508f90  50                   push eax
// 00508f91  8bce                 mov ecx, esi
// 00508f93  c684247c01000012     mov byte ptr [esp + 0x17c], 0x12
// 00508f9b  e8d09f0000           call 0x512f70
// 00508fa0  8d4c240c             lea ecx, [esp + 0xc]
// 00508fa4  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00508fab  ff1568248000         call dword ptr [0x802468]
// 00508fb1  8d4c2460             lea ecx, [esp + 0x60]
// 00508fb5  c684246401000010     mov byte ptr [esp + 0x164], 0x10
// 00508fbd  ff1568248000         call dword ptr [0x802468]
// 00508fc3  8d4c2428             lea ecx, [esp + 0x28]
// 00508fc7  c68424640100000f     mov byte ptr [esp + 0x164], 0xf
// 00508fcf  ff1568248000         call dword ptr [0x802468]
// 00508fd5  8d4c247c             lea ecx, [esp + 0x7c]
// 00508fd9  c68424640100000e     mov byte ptr [esp + 0x164], 0xe
// 00508fe1  ff1568248000         call dword ptr [0x802468]
// 00508fe7  8d4c2444             lea ecx, [esp + 0x44]
// 00508feb  c68424640100000d     mov byte ptr [esp + 0x164], 0xd
// 00508ff3  ff1568248000         call dword ptr [0x802468]
// 00508ff9  8d8c2498000000       lea ecx, [esp + 0x98]
// 00509000  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509007  ff1568248000         call dword ptr [0x802468]
// 0050900d  8bce                 mov ecx, esi
// 0050900f  e86c9a0000           call 0x512a80
// 00509014  8bce                 mov ecx, esi
// 00509016  e8a5930000           call 0x5123c0
// 0050901b  6820e58100           push 0x81e520
// 00509020  8d4c2410             lea ecx, [esp + 0x10]
// 00509024  ff1558248000         call dword ptr [0x802458]
// 0050902a  c784246401000013000000 mov dword ptr [esp + 0x164], 0x13
// 00509035  e8d6f7ffff           call 0x508810
// 0050903a  50                   push eax
// 0050903b  8d4c2410             lea ecx, [esp + 0x10]
// 0050903f  51                   push ecx
// 00509040  e8fbecffff           call 0x507d40
// 00509045  83c408               add esp, 8
// 00509048  8d4c240c             lea ecx, [esp + 0xc]
// 0050904c  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509053  ff1568248000         call dword ptr [0x802468]
// 00509059  68ec798200           push 0x8279ec
// 0050905e  8d4c2410             lea ecx, [esp + 0x10]
// 00509062  ff1558248000         call dword ptr [0x802458]
// 00509068  c784246401000014000000 mov dword ptr [esp + 0x164], 0x14
// 00509073  e888f8ffff           call 0x508900
// 00509078  50                   push eax
// 00509079  8d542410             lea edx, [esp + 0x10]
// 0050907d  52                   push edx
// 0050907e  e8bdecffff           call 0x507d40
// 00509083  83c408               add esp, 8
// 00509086  8d4c240c             lea ecx, [esp + 0xc]
// 0050908a  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509091  ff1568248000         call dword ptr [0x802468]
// 00509097  68e0798200           push 0x8279e0
// 0050909c  8d4c2410             lea ecx, [esp + 0x10]
// 005090a0  ff1558248000         call dword ptr [0x802458]
// 005090a6  c784246401000015000000 mov dword ptr [esp + 0x164], 0x15
// 005090b1  e85af0ffff           call 0x508110
// 005090b6  0fb60505359700       movzx eax, byte ptr [0x973505]
// 005090bd  50                   push eax
// 005090be  8d4c2410             lea ecx, [esp + 0x10]
// 005090c2  51                   push ecx
// 005090c3  e8b8edffff           call 0x507e80
// 005090c8  83c408               add esp, 8
// 005090cb  8d4c240c             lea ecx, [esp + 0xc]
// 005090cf  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 005090d6  ff1568248000         call dword ptr [0x802468]
// 005090dc  68d8798200           push 0x8279d8
// 005090e1  8d4c2410             lea ecx, [esp + 0x10]
// 005090e5  ff1558248000         call dword ptr [0x802458]
// 005090eb  c784246401000016000000 mov dword ptr [esp + 0x164], 0x16
// 005090f6  e815f0ffff           call 0x508110
// 005090fb  0fb61501359700       movzx edx, byte ptr [0x973501]
// 00509102  52                   push edx
// 00509103  8d442410             lea eax, [esp + 0x10]
// 00509107  50                   push eax
// 00509108  e873edffff           call 0x507e80
// 0050910d  83c408               add esp, 8
// 00509110  8d4c240c             lea ecx, [esp + 0xc]
// 00509114  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0050911b  ff1568248000         call dword ptr [0x802468]
// 00509121  68d0798200           push 0x8279d0
// 00509126  8d4c2410             lea ecx, [esp + 0x10]
// 0050912a  ff1558248000         call dword ptr [0x802458]
// 00509130  c784246401000017000000 mov dword ptr [esp + 0x164], 0x17
// 0050913b  e8d0efffff           call 0x508110
// 00509140  0fb60d02359700       movzx ecx, byte ptr [0x973502]
// 00509147  51                   push ecx
// 00509148  8d542410             lea edx, [esp + 0x10]
// 0050914c  52                   push edx
// 0050914d  e82eedffff           call 0x507e80
// 00509152  83c408               add esp, 8
// 00509155  8d4c240c             lea ecx, [esp + 0xc]
// 00509159  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509160  ff1568248000         call dword ptr [0x802468]
// 00509166  68c8798200           push 0x8279c8
// 0050916b  8d4c2410             lea ecx, [esp + 0x10]
// 0050916f  ff1558248000         call dword ptr [0x802458]
// 00509175  c784246401000018000000 mov dword ptr [esp + 0x164], 0x18
// 00509180  e88befffff           call 0x508110
// 00509185  0fb60503359700       movzx eax, byte ptr [0x973503]
// 0050918c  50                   push eax
// 0050918d  8d4c2410             lea ecx, [esp + 0x10]
// 00509191  51                   push ecx
// 00509192  e8e9ecffff           call 0x507e80
// 00509197  83c408               add esp, 8
// 0050919a  8d4c240c             lea ecx, [esp + 0xc]
// 0050919e  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 005091a5  ff1568248000         call dword ptr [0x802468]
// 005091ab  68bc798200           push 0x8279bc
// 005091b0  8d4c2410             lea ecx, [esp + 0x10]
// 005091b4  ff1558248000         call dword ptr [0x802458]
// 005091ba  c784246401000019000000 mov dword ptr [esp + 0x164], 0x19
// 005091c5  e846efffff           call 0x508110
// 005091ca  0fb61504359700       movzx edx, byte ptr [0x973504]
// 005091d1  52                   push edx
// 005091d2  8d442410             lea eax, [esp + 0x10]
// 005091d6  50                   push eax
// 005091d7  e8a4ecffff           call 0x507e80
// 005091dc  83c408               add esp, 8
// 005091df  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 005091e6  8d4c240c             lea ecx, [esp + 0xc]
// 005091ea  ff1568248000         call dword ptr [0x802468]
// 005091f0  68b0798200           push 0x8279b0
// 005091f5  8d4c2410             lea ecx, [esp + 0x10]
// 005091f9  ff1558248000         call dword ptr [0x802458]
// 005091ff  c78424640100001a000000 mov dword ptr [esp + 0x164], 0x1a
// 0050920a  e801efffff           call 0x508110
// 0050920f  0fb60d00359700       movzx ecx, byte ptr [0x973500]
// 00509216  51                   push ecx
// 00509217  8d542410             lea edx, [esp + 0x10]
// 0050921b  52                   push edx
// 0050921c  e85fecffff           call 0x507e80
// 00509221  83c408               add esp, 8
// 00509224  8d4c240c             lea ecx, [esp + 0xc]
// 00509228  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0050922f  ff1568248000         call dword ptr [0x802468]
// 00509235  8bce                 mov ecx, esi
// 00509237  e8b4910000           call 0x5123f0
// 0050923c  6816b78000           push 0x80b716
// 00509241  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00509248  ff1558248000         call dword ptr [0x802458]
// 0050924e  6816b78000           push 0x80b716
// 00509253  8d4c2448             lea ecx, [esp + 0x48]
// 00509257  c78424680100001b000000 mov dword ptr [esp + 0x168], 0x1b
// 00509262  ff1558248000         call dword ptr [0x802458]
// 00509268  6816b78000           push 0x80b716
// 0050926d  8d8c2480000000       lea ecx, [esp + 0x80]
// 00509274  c68424680100001c     mov byte ptr [esp + 0x168], 0x1c
// 0050927c  ff1558248000         call dword ptr [0x802458]
// 00509282  6816b78000           push 0x80b716
// 00509287  8d4c242c             lea ecx, [esp + 0x2c]
// 0050928b  c68424680100001d     mov byte ptr [esp + 0x168], 0x1d
// 00509293  ff1558248000         call dword ptr [0x802458]
// 00509299  6816b78000           push 0x80b716
// 0050929e  8d4c2464             lea ecx, [esp + 0x64]
// 005092a2  c68424680100001e     mov byte ptr [esp + 0x168], 0x1e
// 005092aa  ff1558248000         call dword ptr [0x802458]
// 005092b0  b31f                 mov bl, 0x1f
// 005092b2  681ce58100           push 0x81e51c
// 005092b7  8d4c2410             lea ecx, [esp + 0x10]
// 005092bb  889c2468010000       mov byte ptr [esp + 0x168], bl
// 005092c2  ff1558248000         call dword ptr [0x802458]
// 005092c8  8d842498000000       lea eax, [esp + 0x98]
// 005092cf  50                   push eax
// 005092d0  8d4c2448             lea ecx, [esp + 0x48]
// 005092d4  51                   push ecx
// 005092d5  8d942484000000       lea edx, [esp + 0x84]
// 005092dc  52                   push edx
// 005092dd  8d442434             lea eax, [esp + 0x34]
// 005092e1  50                   push eax
// 005092e2  8d4c2470             lea ecx, [esp + 0x70]
// 005092e6  51                   push ecx
// 005092e7  8d542420             lea edx, [esp + 0x20]
// 005092eb  52                   push edx
// 005092ec  8bce                 mov ecx, esi
// 005092ee  c684247c01000020     mov byte ptr [esp + 0x17c], 0x20
// 005092f6  e8759c0000           call 0x512f70
// 005092fb  8d4c240c             lea ecx, [esp + 0xc]
// 005092ff  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00509306  ff1568248000         call dword ptr [0x802468]
// 0050930c  8d4c2460             lea ecx, [esp + 0x60]
// 00509310  c68424640100001e     mov byte ptr [esp + 0x164], 0x1e
// 00509318  ff1568248000         call dword ptr [0x802468]
// 0050931e  8d4c2428             lea ecx, [esp + 0x28]
// 00509322  c68424640100001d     mov byte ptr [esp + 0x164], 0x1d
// 0050932a  ff1568248000         call dword ptr [0x802468]
// 00509330  8d4c247c             lea ecx, [esp + 0x7c]
// 00509334  c68424640100001c     mov byte ptr [esp + 0x164], 0x1c
// 0050933c  ff1568248000         call dword ptr [0x802468]
// 00509342  8d4c2444             lea ecx, [esp + 0x44]
// 00509346  c68424640100001b     mov byte ptr [esp + 0x164], 0x1b
// 0050934e  ff1568248000         call dword ptr [0x802468]
// 00509354  8d8c2498000000       lea ecx, [esp + 0x98]
// 0050935b  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509362  ff1568248000         call dword ptr [0x802468]
// 00509368  8bce                 mov ecx, esi
// 0050936a  e811970000           call 0x512a80
// 0050936f  8bce                 mov ecx, esi
// 00509371  e80a970000           call 0x512a80
// 00509376  6816b78000           push 0x80b716
// 0050937b  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00509382  ff1558248000         call dword ptr [0x802458]
// 00509388  6816b78000           push 0x80b716
// 0050938d  8d4c2448             lea ecx, [esp + 0x48]
// 00509391  c784246801000021000000 mov dword ptr [esp + 0x168], 0x21
// 0050939c  ff1558248000         call dword ptr [0x802458]
// 005093a2  6816b78000           push 0x80b716
// 005093a7  8d8c2480000000       lea ecx, [esp + 0x80]
// 005093ae  c684246801000022     mov byte ptr [esp + 0x168], 0x22
// 005093b6  ff1558248000         call dword ptr [0x802458]
// 005093bc  6816b78000           push 0x80b716
// 005093c1  8d4c242c             lea ecx, [esp + 0x2c]
// 005093c5  c684246801000023     mov byte ptr [esp + 0x168], 0x23
// 005093cd  ff1558248000         call dword ptr [0x802458]
// 005093d3  6828e58100           push 0x81e528
// 005093d8  8d4c2464             lea ecx, [esp + 0x64]
// 005093dc  c684246801000024     mov byte ptr [esp + 0x168], 0x24
// 005093e4  ff1558248000         call dword ptr [0x802458]
// 005093ea  b325                 mov bl, 0x25
// 005093ec  68c8f48100           push 0x81f4c8
// 005093f1  8d4c2410             lea ecx, [esp + 0x10]
// 005093f5  889c2468010000       mov byte ptr [esp + 0x168], bl
// 005093fc  ff1558248000         call dword ptr [0x802458]
// 00509402  8d842498000000       lea eax, [esp + 0x98]
// 00509409  50                   push eax
// 0050940a  8d4c2448             lea ecx, [esp + 0x48]
// 0050940e  51                   push ecx
// 0050940f  8d942484000000       lea edx, [esp + 0x84]
// 00509416  52                   push edx
// 00509417  8d442434             lea eax, [esp + 0x34]
// 0050941b  50                   push eax
// 0050941c  8d4c2470             lea ecx, [esp + 0x70]
// 00509420  51                   push ecx
// 00509421  8d542420             lea edx, [esp + 0x20]
// 00509425  52                   push edx
// 00509426  8bce                 mov ecx, esi
// 00509428  c684247c01000026     mov byte ptr [esp + 0x17c], 0x26
// 00509430  e83b9b0000           call 0x512f70
// 00509435  8d4c240c             lea ecx, [esp + 0xc]
// 00509439  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00509440  ff1568248000         call dword ptr [0x802468]
// 00509446  8d4c2460             lea ecx, [esp + 0x60]
// 0050944a  c684246401000024     mov byte ptr [esp + 0x164], 0x24
// 00509452  ff1568248000         call dword ptr [0x802468]
// 00509458  8d4c2428             lea ecx, [esp + 0x28]
// 0050945c  c684246401000023     mov byte ptr [esp + 0x164], 0x23
// 00509464  ff1568248000         call dword ptr [0x802468]
// 0050946a  8d4c247c             lea ecx, [esp + 0x7c]
// 0050946e  c684246401000022     mov byte ptr [esp + 0x164], 0x22
// 00509476  ff1568248000         call dword ptr [0x802468]
// 0050947c  8d4c2444             lea ecx, [esp + 0x44]
// 00509480  c684246401000021     mov byte ptr [esp + 0x164], 0x21
// 00509488  ff1568248000         call dword ptr [0x802468]
// 0050948e  8d8c2498000000       lea ecx, [esp + 0x98]
// 00509495  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 0050949c  ff1568248000         call dword ptr [0x802468]
// 005094a2  8bce                 mov ecx, esi
// 005094a4  e8d7950000           call 0x512a80
// 005094a9  8bce                 mov ecx, esi
// 005094ab  e8108f0000           call 0x5123c0
// 005094b0  68a0798200           push 0x8279a0
// 005094b5  8d4c2410             lea ecx, [esp + 0x10]
// 005094b9  ff1558248000         call dword ptr [0x802458]
// 005094bf  8d44240c             lea eax, [esp + 0xc]
// 005094c3  68e4ed0000           push 0xede4
// 005094c8  50                   push eax
// 005094c9  c784246c01000027000000 mov dword ptr [esp + 0x16c], 0x27
// 005094d4  e8f7eaffff           call 0x507fd0
// 005094d9  83c408               add esp, 8
// 005094dc  8d4c240c             lea ecx, [esp + 0xc]
// 005094e0  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 005094e7  ff1568248000         call dword ptr [0x802468]
// 005094ed  6890798200           push 0x827990
// 005094f2  8d4c2410             lea ecx, [esp + 0x10]
// 005094f6  ff1558248000         call dword ptr [0x802458]
// 005094fc  c784246401000028000000 mov dword ptr [esp + 0x164], 0x28
// 00509507  e864f4ffff           call 0x508970
// 0050950c  50                   push eax
// 0050950d  8d4c2410             lea ecx, [esp + 0x10]
// 00509511  51                   push ecx
// 00509512  e829e8ffff           call 0x507d40
// 00509517  83c408               add esp, 8
// 0050951a  8d4c240c             lea ecx, [esp + 0xc]
// 0050951e  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509525  ff1568248000         call dword ptr [0x802468]
// 0050952b  8bce                 mov ecx, esi
// 0050952d  e8be8e0000           call 0x5123f0
// 00509532  6816b78000           push 0x80b716
// 00509537  8d8c2444010000       lea ecx, [esp + 0x144]
// 0050953e  ff1558248000         call dword ptr [0x802458]
// 00509544  6816b78000           push 0x80b716
// 00509549  8d8c240c010000       lea ecx, [esp + 0x10c]
// 00509550  c784246801000029000000 mov dword ptr [esp + 0x168], 0x29
// 0050955b  ff1558248000         call dword ptr [0x802458]
// 00509561  6816b78000           push 0x80b716
// 00509566  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0050956d  c68424680100002a     mov byte ptr [esp + 0x168], 0x2a
// 00509575  ff1558248000         call dword ptr [0x802458]
// 0050957b  6816b78000           push 0x80b716
// 00509580  8d8c2428010000       lea ecx, [esp + 0x128]
// 00509587  c68424680100002b     mov byte ptr [esp + 0x168], 0x2b
// 0050958f  ff1558248000         call dword ptr [0x802458]
// 00509595  6816b78000           push 0x80b716
// 0050959a  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 005095a1  c68424680100002c     mov byte ptr [esp + 0x168], 0x2c
// 005095a9  ff1558248000         call dword ptr [0x802458]
// 005095af  b32d                 mov bl, 0x2d
// 005095b1  681ce58100           push 0x81e51c
// 005095b6  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 005095bd  889c2468010000       mov byte ptr [esp + 0x168], bl
// 005095c4  ff1558248000         call dword ptr [0x802458]
// 005095ca  8d942440010000       lea edx, [esp + 0x140]
// 005095d1  52                   push edx
// 005095d2  8d84240c010000       lea eax, [esp + 0x10c]
// 005095d9  50                   push eax
// 005095da  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 005095e1  51                   push ecx
// 005095e2  8d942430010000       lea edx, [esp + 0x130]
// 005095e9  52                   push edx
// 005095ea  8d8424fc000000       lea eax, [esp + 0xfc]
// 005095f1  50                   push eax
// 005095f2  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 005095f9  51                   push ecx
// 005095fa  8bce                 mov ecx, esi
// 005095fc  c684247c0100002e     mov byte ptr [esp + 0x17c], 0x2e
// 00509604  e867990000           call 0x512f70
// 00509609  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00509610  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00509617  ff1568248000         call dword ptr [0x802468]
// 0050961d  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00509624  c68424640100002c     mov byte ptr [esp + 0x164], 0x2c
// 0050962c  ff1568248000         call dword ptr [0x802468]
// 00509632  8d8c2424010000       lea ecx, [esp + 0x124]
// 00509639  c68424640100002b     mov byte ptr [esp + 0x164], 0x2b
// 00509641  ff1568248000         call dword ptr [0x802468]
// 00509647  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 0050964e  c68424640100002a     mov byte ptr [esp + 0x164], 0x2a
// 00509656  ff1568248000         call dword ptr [0x802468]
// 0050965c  8d8c2408010000       lea ecx, [esp + 0x108]
// 00509663  c684246401000029     mov byte ptr [esp + 0x164], 0x29
// 0050966b  ff1568248000         call dword ptr [0x802468]
// 00509671  89bc2464010000       mov dword ptr [esp + 0x164], edi
// 00509678  8d8c2440010000       lea ecx, [esp + 0x140]
// 0050967f  ff1568248000         call dword ptr [0x802468]
// 00509685  8bce                 mov ecx, esi
// 00509687  e8f4930000           call 0x512a80
// 0050968c  8bce                 mov ecx, esi
// 0050968e  e8ed930000           call 0x512a80
// 00509693  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0050969a  5f                   pop edi
// 0050969b  5e                   pop esi
// 0050969c  5b                   pop ebx
// 0050969d  64890d00000000       mov dword ptr fs:[0], ecx
// 005096a4  81c45c010000         add esp, 0x15c
// 005096aa  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?describeSystem@System@G3D@@SAXAAVTextOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
