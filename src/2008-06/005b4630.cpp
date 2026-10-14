// roc 2008-06 005b4630  unit: RBX::VHat::?$FactoryProduct  size: 5601 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b4630
//
// 005b4630  6aff                 push -1
// 005b4632  6842397d00           push 0x7d3942
// 005b4637  64a100000000         mov eax, dword ptr fs:[0]
// 005b463d  50                   push eax
// 005b463e  64892500000000       mov dword ptr fs:[0], esp
// 005b4645  83ec10               sub esp, 0x10
// 005b4648  55                   push ebp
// 005b4649  56                   push esi
// 005b464a  57                   push edi
// 005b464b  8bf1                 mov esi, ecx
// 005b464d  6a04                 push 4
// 005b464f  8974241c             mov dword ptr [esp + 0x1c], esi
// 005b4653  e8c8c20e00           call 0x6a0920
// 005b4658  33ed                 xor ebp, ebp
// 005b465a  83c404               add esp, 4
// 005b465d  3bc5                 cmp eax, ebp
// 005b465f  7404                 je 0x5b4665
// 005b4661  8930                 mov dword ptr [eax], esi
// 005b4663  eb02                 jmp 0x5b4667
// 005b4665  33c0                 xor eax, eax
// 005b4667  8906                 mov dword ptr [esi], eax
// 005b4669  896e0c               mov dword ptr [esi + 0xc], ebp
// 005b466c  896e10               mov dword ptr [esi + 0x10], ebp
// 005b466f  896e14               mov dword ptr [esi + 0x14], ebp
// 005b4672  6a04                 push 4
// 005b4674  c744242801000000     mov dword ptr [esp + 0x28], 1
// 005b467c  8d7e18               lea edi, [esi + 0x18]
// 005b467f  e89cc20e00           call 0x6a0920
// 005b4684  83c404               add esp, 4
// 005b4687  3bc5                 cmp eax, ebp
// 005b4689  7404                 je 0x5b468f
// 005b468b  8938                 mov dword ptr [eax], edi
// 005b468d  eb02                 jmp 0x5b4691
// 005b468f  33c0                 xor eax, eax
// 005b4691  8907                 mov dword ptr [edi], eax
// 005b4693  896f0c               mov dword ptr [edi + 0xc], ebp
// 005b4696  896f10               mov dword ptr [edi + 0x10], ebp
// 005b4699  896f14               mov dword ptr [edi + 0x14], ebp
// 005b469c  8d442413             lea eax, [esp + 0x13]
// 005b46a0  50                   push eax
// 005b46a1  8d542417             lea edx, [esp + 0x17]
// 005b46a5  8d4e30               lea ecx, [esi + 0x30]
// 005b46a8  52                   push edx
// 005b46a9  c644242c03           mov byte ptr [esp + 0x2c], 3
// 005b46ae  e85d1ae9ff           call 0x446110
// 005b46b3  8d442413             lea eax, [esp + 0x13]
// 005b46b7  50                   push eax
// 005b46b8  8d542417             lea edx, [esp + 0x17]
// 005b46bc  8d4e50               lea ecx, [esi + 0x50]
// 005b46bf  52                   push edx
// 005b46c0  c644242c04           mov byte ptr [esp + 0x2c], 4
// 005b46c5  e8f6c8f3ff           call 0x4f0fc0
// 005b46ca  8d442413             lea eax, [esp + 0x13]
// 005b46ce  50                   push eax
// 005b46cf  8d542417             lea edx, [esp + 0x17]
// 005b46d3  8d4e70               lea ecx, [esi + 0x70]
// 005b46d6  52                   push edx
// 005b46d7  c644242c05           mov byte ptr [esp + 0x2c], 5
// 005b46dc  e84f540e00           call 0x699b30
// 005b46e1  8d442413             lea eax, [esp + 0x13]
// 005b46e5  50                   push eax
// 005b46e6  8d542417             lea edx, [esp + 0x17]
// 005b46ea  8d8e90000000         lea ecx, [esi + 0x90]
// 005b46f0  52                   push edx
// 005b46f1  c644242c06           mov byte ptr [esp + 0x2c], 6
// 005b46f6  e8151ae9ff           call 0x446110
// 005b46fb  83ec1c               sub esp, 0x1c
// 005b46fe  8bcc                 mov ecx, esp
// 005b4700  89642430             mov dword ptr [esp + 0x30], esp
// 005b4704  6820588300           push 0x835820
// 005b4709  c644244407           mov byte ptr [esp + 0x44], 7
// 005b470e  ff1558248000         call dword ptr [0x802458]
// 005b4714  68f2000000           push 0xf2
// 005b4719  68f3000000           push 0xf3
// 005b471e  68f2000000           push 0xf2
// 005b4723  6a01                 push 1
// 005b4725  8bce                 mov ecx, esi
// 005b4727  e8e4fcffff           call 0x5b4410
// 005b472c  83ec1c               sub esp, 0x1c
// 005b472f  8bcc                 mov ecx, esp
// 005b4731  89642430             mov dword ptr [esp + 0x30], esp
// 005b4735  6818588300           push 0x835818
// 005b473a  ff1558248000         call dword ptr [0x802458]
// 005b4740  68a2000000           push 0xa2
// 005b4745  68a5000000           push 0xa5
// 005b474a  68a1000000           push 0xa1
// 005b474f  6a02                 push 2
// 005b4751  8bce                 mov ecx, esi
// 005b4753  e8b8fcffff           call 0x5b4410
// 005b4758  83ec1c               sub esp, 0x1c
// 005b475b  8bcc                 mov ecx, esp
// 005b475d  89642430             mov dword ptr [esp + 0x30], esp
// 005b4761  6808588300           push 0x835808
// 005b4766  ff1558248000         call dword ptr [0x802458]
// 005b476c  6899000000           push 0x99
// 005b4771  68e9000000           push 0xe9
// 005b4776  68f9000000           push 0xf9
// 005b477b  6a03                 push 3
// 005b477d  8bce                 mov ecx, esi
// 005b477f  e88cfcffff           call 0x5b4410
// 005b4784  83ec1c               sub esp, 0x1c
// 005b4787  8bcc                 mov ecx, esp
// 005b4789  89642430             mov dword ptr [esp + 0x30], esp
// 005b478d  68f8578300           push 0x8357f8
// 005b4792  ff1558248000         call dword ptr [0x802458]
// 005b4798  6899000000           push 0x99
// 005b479d  68c5000000           push 0xc5
// 005b47a2  68d7000000           push 0xd7
// 005b47a7  6a05                 push 5
// 005b47a9  8bce                 mov ecx, esi
// 005b47ab  e860fcffff           call 0x5b4410
// 005b47b0  83ec1c               sub esp, 0x1c
// 005b47b3  8bcc                 mov ecx, esp
// 005b47b5  89642430             mov dword ptr [esp + 0x30], esp
// 005b47b9  68e4578300           push 0x8357e4
// 005b47be  ff1558248000         call dword ptr [0x802458]
// 005b47c4  68b8000000           push 0xb8
// 005b47c9  68da000000           push 0xda
// 005b47ce  68c2000000           push 0xc2
// 005b47d3  6a06                 push 6
// 005b47d5  8bce                 mov ecx, esi
// 005b47d7  e834fcffff           call 0x5b4410
// 005b47dc  83ec1c               sub esp, 0x1c
// 005b47df  8bcc                 mov ecx, esp
// 005b47e1  89642430             mov dword ptr [esp + 0x30], esp
// 005b47e5  68cc578300           push 0x8357cc
// 005b47ea  ff1558248000         call dword ptr [0x802458]
// 005b47f0  68c7000000           push 0xc7
// 005b47f5  68ba000000           push 0xba
// 005b47fa  68e8000000           push 0xe8
// 005b47ff  6a09                 push 9
// 005b4801  8bce                 mov ecx, esi
// 005b4803  e808fcffff           call 0x5b4410
// 005b4808  83ec1c               sub esp, 0x1c
// 005b480b  8bcc                 mov ecx, esp
// 005b480d  89642430             mov dword ptr [esp + 0x30], esp
// 005b4811  68c0578300           push 0x8357c0
// 005b4816  ff1558248000         call dword ptr [0x802458]
// 005b481c  68db000000           push 0xdb
// 005b4821  68bb000000           push 0xbb
// 005b4826  6880000000           push 0x80
// 005b482b  6a0b                 push 0xb
// 005b482d  8bce                 mov ecx, esi
// 005b482f  e8dcfbffff           call 0x5b4410
// 005b4834  83ec1c               sub esp, 0x1c
// 005b4837  8bcc                 mov ecx, esp
// 005b4839  89642430             mov dword ptr [esp + 0x30], esp
// 005b483d  68ac578300           push 0x8357ac
// 005b4842  ff1558248000         call dword ptr [0x802458]
// 005b4848  6a42                 push 0x42
// 005b484a  6884000000           push 0x84
// 005b484f  68cb000000           push 0xcb
// 005b4854  6a0c                 push 0xc
// 005b4856  8bce                 mov ecx, esi
// 005b4858  e8b3fbffff           call 0x5b4410
// 005b485d  83ec1c               sub esp, 0x1c
// 005b4860  8bcc                 mov ecx, esp
// 005b4862  89642430             mov dword ptr [esp + 0x30], esp
// 005b4866  68a4578300           push 0x8357a4
// 005b486b  ff1558248000         call dword ptr [0x802458]
// 005b4871  6a68                 push 0x68
// 005b4873  688e000000           push 0x8e
// 005b4878  68cc000000           push 0xcc
// 005b487d  6a12                 push 0x12
// 005b487f  8bce                 mov ecx, esi
// 005b4881  e88afbffff           call 0x5b4410
// 005b4886  83ec1c               sub esp, 0x1c
// 005b4889  8bcc                 mov ecx, esp
// 005b488b  89642430             mov dword ptr [esp + 0x30], esp
// 005b488f  6898578300           push 0x835798
// 005b4894  ff1558248000         call dword ptr [0x802458]
// 005b489a  6a1b                 push 0x1b
// 005b489c  6a28                 push 0x28
// 005b489e  68c4000000           push 0xc4
// 005b48a3  6a15                 push 0x15
// 005b48a5  8bce                 mov ecx, esi
// 005b48a7  e864fbffff           call 0x5b4410
// 005b48ac  83ec1c               sub esp, 0x1c
// 005b48af  8bcc                 mov ecx, esp
// 005b48b1  89642430             mov dword ptr [esp + 0x30], esp
// 005b48b5  6884578300           push 0x835784
// 005b48ba  ff1558248000         call dword ptr [0x802458]
// 005b48c0  68a0000000           push 0xa0
// 005b48c5  6a70                 push 0x70
// 005b48c7  68c4000000           push 0xc4
// 005b48cc  6a16                 push 0x16
// 005b48ce  8bce                 mov ecx, esi
// 005b48d0  e83bfbffff           call 0x5b4410
// 005b48d5  83ec1c               sub esp, 0x1c
// 005b48d8  8bcc                 mov ecx, esp
// 005b48da  89642430             mov dword ptr [esp + 0x30], esp
// 005b48de  6878578300           push 0x835778
// 005b48e3  ff1558248000         call dword ptr [0x802458]
// 005b48e9  68ab000000           push 0xab
// 005b48ee  6a69                 push 0x69
// 005b48f0  6a0d                 push 0xd
// 005b48f2  6a17                 push 0x17
// 005b48f4  8bce                 mov ecx, esi
// 005b48f6  e815fbffff           call 0x5b4410
// 005b48fb  83ec1c               sub esp, 0x1c
// 005b48fe  8bcc                 mov ecx, esp
// 005b4900  89642430             mov dword ptr [esp + 0x30], esp
// 005b4904  6868578300           push 0x835768
// 005b4909  ff1558248000         call dword ptr [0x802458]
// 005b490f  6a2f                 push 0x2f
// 005b4911  68cd000000           push 0xcd
// 005b4916  68f5000000           push 0xf5
// 005b491b  6a18                 push 0x18
// 005b491d  8bce                 mov ecx, esi
// 005b491f  e8ecfaffff           call 0x5b4410
// 005b4924  83ec1c               sub esp, 0x1c
// 005b4927  8bcc                 mov ecx, esp
// 005b4929  89642430             mov dword ptr [esp + 0x30], esp
// 005b492d  6858578300           push 0x835758
// 005b4932  ff1558248000         call dword ptr [0x802458]
// 005b4938  6a32                 push 0x32
// 005b493a  6a47                 push 0x47
// 005b493c  6a62                 push 0x62
// 005b493e  6a19                 push 0x19
// 005b4940  8bce                 mov ecx, esi
// 005b4942  e8c9faffff           call 0x5b4410
// 005b4947  83ec1c               sub esp, 0x1c
// 005b494a  8bcc                 mov ecx, esp
// 005b494c  89642430             mov dword ptr [esp + 0x30], esp
// 005b4950  6850578300           push 0x835750
// 005b4955  ff1558248000         call dword ptr [0x802458]
// 005b495b  6a34                 push 0x34
// 005b495d  6a2a                 push 0x2a
// 005b495f  6a1b                 push 0x1b
// 005b4961  6a1a                 push 0x1a
// 005b4963  8bce                 mov ecx, esi
// 005b4965  e8a6faffff           call 0x5b4410
// 005b496a  83ec1c               sub esp, 0x1c
// 005b496d  8bcc                 mov ecx, esp
// 005b496f  89642430             mov dword ptr [esp + 0x30], esp
// 005b4973  6844578300           push 0x835744
// 005b4978  ff1558248000         call dword ptr [0x802458]
// 005b497e  6a6c                 push 0x6c
// 005b4980  6a6e                 push 0x6e
// 005b4982  6a6d                 push 0x6d
// 005b4984  6a1b                 push 0x1b
// 005b4986  8bce                 mov ecx, esi
// 005b4988  e883faffff           call 0x5b4410
// 005b498d  83ec1c               sub esp, 0x1c
// 005b4990  8bcc                 mov ecx, esp
// 005b4992  89642430             mov dword ptr [esp + 0x30], esp
// 005b4996  6838578300           push 0x835738
// 005b499b  ff1558248000         call dword ptr [0x802458]
// 005b49a1  6a46                 push 0x46
// 005b49a3  6a7f                 push 0x7f
// 005b49a5  6a28                 push 0x28
// 005b49a7  6a1c                 push 0x1c
// 005b49a9  8bce                 mov ecx, esi
// 005b49ab  e860faffff           call 0x5b4410
// 005b49b0  83ec1c               sub esp, 0x1c
// 005b49b3  8bcc                 mov ecx, esp
// 005b49b5  89642430             mov dword ptr [esp + 0x30], esp
// 005b49b9  6828578300           push 0x835728
// 005b49be  ff1558248000         call dword ptr [0x802458]
// 005b49c4  688b000000           push 0x8b
// 005b49c9  68c4000000           push 0xc4
// 005b49ce  68a1000000           push 0xa1
// 005b49d3  6a1d                 push 0x1d
// 005b49d5  8bce                 mov ecx, esi
// 005b49d7  e834faffff           call 0x5b4410
// 005b49dc  83ec1c               sub esp, 0x1c
// 005b49df  8bcc                 mov ecx, esp
// 005b49e1  89642430             mov dword ptr [esp + 0x30], esp
// 005b49e5  6810578300           push 0x835710
// 005b49ea  ff1558248000         call dword ptr [0x802458]
// 005b49f0  689b000000           push 0x9b
// 005b49f5  68cf000000           push 0xcf
// 005b49fa  68f3000000           push 0xf3
// 005b49ff  6a24                 push 0x24
// 005b4a01  8bce                 mov ecx, esi
// 005b4a03  e808faffff           call 0x5b4410
// 005b4a08  83ec1c               sub esp, 0x1c
// 005b4a0b  8bcc                 mov ecx, esp
// 005b4a0d  89642430             mov dword ptr [esp + 0x30], esp
// 005b4a11  6800578300           push 0x835700
// 005b4a16  ff1558248000         call dword ptr [0x802458]
// 005b4a1c  6a4a                 push 0x4a
// 005b4a1e  6897000000           push 0x97
// 005b4a23  6a4b                 push 0x4b
// 005b4a25  6a25                 push 0x25
// 005b4a27  8bce                 mov ecx, esi
// 005b4a29  e8e2f9ffff           call 0x5b4410
// 005b4a2e  83ec1c               sub esp, 0x1c
// 005b4a31  8bcc                 mov ecx, esp
// 005b4a33  89642430             mov dword ptr [esp + 0x30], esp
// 005b4a37  68f4568300           push 0x8356f4
// 005b4a3c  ff1558248000         call dword ptr [0x802458]
// 005b4a42  6a34                 push 0x34
// 005b4a44  6a5f                 push 0x5f
// 005b4a46  68a0000000           push 0xa0
// 005b4a4b  6a26                 push 0x26
// 005b4a4d  8bce                 mov ecx, esi
// 005b4a4f  e8bcf9ffff           call 0x5b4410
// 005b4a54  83ec1c               sub esp, 0x1c
// 005b4a57  8bcc                 mov ecx, esp
// 005b4a59  89642430             mov dword ptr [esp + 0x30], esp
// 005b4a5d  68e0568300           push 0x8356e0
// 005b4a62  ff1558248000         call dword ptr [0x802458]
// 005b4a68  68de000000           push 0xde
// 005b4a6d  68ca000000           push 0xca
// 005b4a72  68c1000000           push 0xc1
// 005b4a77  6a27                 push 0x27
// 005b4a79  8bce                 mov ecx, esi
// 005b4a7b  e890f9ffff           call 0x5b4410
// 005b4a80  83ec1c               sub esp, 0x1c
// 005b4a83  8bcc                 mov ecx, esp
// 005b4a85  89642430             mov dword ptr [esp + 0x30], esp
// 005b4a89  68d4568300           push 0x8356d4
// 005b4a8e  ff1558248000         call dword ptr [0x802458]
// 005b4a94  68ec000000           push 0xec
// 005b4a99  68ec000000           push 0xec
// 005b4a9e  68ec000000           push 0xec
// 005b4aa3  6a28                 push 0x28
// 005b4aa5  8bce                 mov ecx, esi
// 005b4aa7  e864f9ffff           call 0x5b4410
// 005b4aac  83ec1c               sub esp, 0x1c
// 005b4aaf  8bcc                 mov ecx, esp
// 005b4ab1  89642430             mov dword ptr [esp + 0x30], esp
// 005b4ab5  68cc568300           push 0x8356cc
// 005b4aba  ff1558248000         call dword ptr [0x802458]
// 005b4ac0  6a4b                 push 0x4b
// 005b4ac2  6a54                 push 0x54
// 005b4ac4  68cd000000           push 0xcd
// 005b4ac9  6a29                 push 0x29
// 005b4acb  8bce                 mov ecx, esi
// 005b4acd  e83ef9ffff           call 0x5b4410
// 005b4ad2  83ec1c               sub esp, 0x1c
// 005b4ad5  8bcc                 mov ecx, esp
// 005b4ad7  89642430             mov dword ptr [esp + 0x30], esp
// 005b4adb  68c0568300           push 0x8356c0
// 005b4ae0  ff1558248000         call dword ptr [0x802458]
// 005b4ae6  68f0000000           push 0xf0
// 005b4aeb  68df000000           push 0xdf
// 005b4af0  68c1000000           push 0xc1
// 005b4af5  6a2a                 push 0x2a
// 005b4af7  8bce                 mov ecx, esi
// 005b4af9  e812f9ffff           call 0x5b4410
// 005b4afe  83ec1c               sub esp, 0x1c
// 005b4b01  8bcc                 mov ecx, esp
// 005b4b03  89642430             mov dword ptr [esp + 0x30], esp
// 005b4b07  68b4568300           push 0x8356b4
// 005b4b0c  ff1558248000         call dword ptr [0x802458]
// 005b4b12  68e8000000           push 0xe8
// 005b4b17  68b6000000           push 0xb6
// 005b4b1c  6a7b                 push 0x7b
// 005b4b1e  6a2b                 push 0x2b
// 005b4b20  8bce                 mov ecx, esi
// 005b4b22  e8e9f8ffff           call 0x5b4410
// 005b4b27  83ec1c               sub esp, 0x1c
// 005b4b2a  8bcc                 mov ecx, esp
// 005b4b2c  89642430             mov dword ptr [esp + 0x30], esp
// 005b4b30  68a8568300           push 0x8356a8
// 005b4b35  ff1558248000         call dword ptr [0x802458]
// 005b4b3b  688d000000           push 0x8d
// 005b4b40  68f1000000           push 0xf1
// 005b4b45  68f7000000           push 0xf7
// 005b4b4a  6a2c                 push 0x2c
// 005b4b4c  8bce                 mov ecx, esi
// 005b4b4e  e8bdf8ffff           call 0x5b4410
// 005b4b53  83ec1c               sub esp, 0x1c
// 005b4b56  8bcc                 mov ecx, esp
// 005b4b58  89642430             mov dword ptr [esp + 0x30], esp
// 005b4b5c  689c568300           push 0x83569c
// 005b4b61  ff1558248000         call dword ptr [0x802458]
// 005b4b67  68e3000000           push 0xe3
// 005b4b6c  68d2000000           push 0xd2
// 005b4b71  68b4000000           push 0xb4
// 005b4b76  6a2d                 push 0x2d
// 005b4b78  8bce                 mov ecx, esi
// 005b4b7a  e891f8ffff           call 0x5b4410
// 005b4b7f  83ec1c               sub esp, 0x1c
// 005b4b82  8bcc                 mov ecx, esp
// 005b4b84  89642430             mov dword ptr [esp + 0x30], esp
// 005b4b88  6884568300           push 0x835684
// 005b4b8d  ff1558248000         call dword ptr [0x802458]
// 005b4b93  6a6c                 push 0x6c
// 005b4b95  6885000000           push 0x85
// 005b4b9a  68d9000000           push 0xd9
// 005b4b9f  6a2f                 push 0x2f
// 005b4ba1  8bce                 mov ecx, esi
// 005b4ba3  e868f8ffff           call 0x5b4410
// 005b4ba8  83ec1c               sub esp, 0x1c
// 005b4bab  8bcc                 mov ecx, esp
// 005b4bad  89642430             mov dword ptr [esp + 0x30], esp
// 005b4bb1  6878568300           push 0x835678
// 005b4bb6  ff1558248000         call dword ptr [0x802458]
// 005b4bbc  688d000000           push 0x8d
// 005b4bc1  68b6000000           push 0xb6
// 005b4bc6  6884000000           push 0x84
// 005b4bcb  6a30                 push 0x30
// 005b4bcd  8bce                 mov ecx, esi
// 005b4bcf  e83cf8ffff           call 0x5b4410
// 005b4bd4  83ec1c               sub esp, 0x1c
// 005b4bd7  8bcc                 mov ecx, esp
// 005b4bd9  89642430             mov dword ptr [esp + 0x30], esp
// 005b4bdd  6868568300           push 0x835668
// 005b4be2  ff1558248000         call dword ptr [0x802458]
// 005b4be8  6884000000           push 0x84
// 005b4bed  68f1000000           push 0xf1
// 005b4bf2  68f8000000           push 0xf8
// 005b4bf7  6a31                 push 0x31
// 005b4bf9  8bce                 mov ecx, esi
// 005b4bfb  e810f8ffff           call 0x5b4410
// 005b4c00  83ec1c               sub esp, 0x1c
// 005b4c03  8bcc                 mov ecx, esp
// 005b4c05  89642430             mov dword ptr [esp + 0x30], esp
// 005b4c09  6858568300           push 0x835658
// 005b4c0e  ff1558248000         call dword ptr [0x802458]
// 005b4c14  68de000000           push 0xde
// 005b4c19  68e8000000           push 0xe8
// 005b4c1e  68ec000000           push 0xec
// 005b4c23  6a32                 push 0x32
// 005b4c25  8bce                 mov ecx, esi
// 005b4c27  e8e4f7ffff           call 0x5b4410
// 005b4c2c  83ec1c               sub esp, 0x1c
// 005b4c2f  8bcc                 mov ecx, esp
// 005b4c31  89642430             mov dword ptr [esp + 0x30], esp
// 005b4c35  684c568300           push 0x83564c
// 005b4c3a  ff1558248000         call dword ptr [0x802458]
// 005b4c40  68b6000000           push 0xb6
// 005b4c45  68c4000000           push 0xc4
// 005b4c4a  68ee000000           push 0xee
// 005b4c4f  6a64                 push 0x64
// 005b4c51  8bce                 mov ecx, esi
// 005b4c53  e8b8f7ffff           call 0x5b4410
// 005b4c58  83ec1c               sub esp, 0x1c
// 005b4c5b  8bcc                 mov ecx, esp
// 005b4c5d  89642430             mov dword ptr [esp + 0x30], esp
// 005b4c61  6840568300           push 0x835640
// 005b4c66  ff1558248000         call dword ptr [0x802458]
// 005b4c6c  6a79                 push 0x79
// 005b4c6e  6886000000           push 0x86
// 005b4c73  68da000000           push 0xda
// 005b4c78  6a65                 push 0x65
// 005b4c7a  8bce                 mov ecx, esi
// 005b4c7c  e88ff7ffff           call 0x5b4410
// 005b4c81  83ec1c               sub esp, 0x1c
// 005b4c84  8bcc                 mov ecx, esp
// 005b4c86  89642430             mov dword ptr [esp + 0x30], esp
// 005b4c8a  6834568300           push 0x835634
// 005b4c8f  ff1558248000         call dword ptr [0x802458]
// 005b4c95  68c9000000           push 0xc9
// 005b4c9a  6899000000           push 0x99
// 005b4c9f  6a6e                 push 0x6e
// 005b4ca1  6a66                 push 0x66
// 005b4ca3  8bce                 mov ecx, esi
// 005b4ca5  e866f7ffff           call 0x5b4410
// 005b4caa  83ec1c               sub esp, 0x1c
// 005b4cad  8bcc                 mov ecx, esp
// 005b4caf  89642430             mov dword ptr [esp + 0x30], esp
// 005b4cb3  6828568300           push 0x835628
// 005b4cb8  ff1558248000         call dword ptr [0x802458]
// 005b4cbe  68b7000000           push 0xb7
// 005b4cc3  68c1000000           push 0xc1
// 005b4cc8  68c7000000           push 0xc7
// 005b4ccd  6a67                 push 0x67
// 005b4ccf  8bce                 mov ecx, esi
// 005b4cd1  e83af7ffff           call 0x5b4410
// 005b4cd6  83ec1c               sub esp, 0x1c
// 005b4cd9  8bcc                 mov ecx, esp
// 005b4cdb  89642430             mov dword ptr [esp + 0x30], esp
// 005b4cdf  6818568300           push 0x835618
// 005b4ce4  ff1558248000         call dword ptr [0x802458]
// 005b4cea  6a7b                 push 0x7b
// 005b4cec  6a32                 push 0x32
// 005b4cee  6a6b                 push 0x6b
// 005b4cf0  6a68                 push 0x68
// 005b4cf2  8bce                 mov ecx, esi
// 005b4cf4  e817f7ffff           call 0x5b4410
// 005b4cf9  83ec1c               sub esp, 0x1c
// 005b4cfc  8bcc                 mov ecx, esp
// 005b4cfe  89642430             mov dword ptr [esp + 0x30], esp
// 005b4d02  6800568300           push 0x835600
// 005b4d07  ff1558248000         call dword ptr [0x802458]
// 005b4d0d  6a3f                 push 0x3f
// 005b4d0f  689b000000           push 0x9b
// 005b4d14  68e2000000           push 0xe2
// 005b4d19  6a69                 push 0x69
// 005b4d1b  8bce                 mov ecx, esi
// 005b4d1d  e8eef6ffff           call 0x5b4410
// 005b4d22  83ec1c               sub esp, 0x1c
// 005b4d25  8bcc                 mov ecx, esp
// 005b4d27  89642430             mov dword ptr [esp + 0x30], esp
// 005b4d2b  68f0558300           push 0x8355f0
// 005b4d30  ff1558248000         call dword ptr [0x802458]
// 005b4d36  6a40                 push 0x40
// 005b4d38  6885000000           push 0x85
// 005b4d3d  68da000000           push 0xda
// 005b4d42  6a6a                 push 0x6a
// 005b4d44  8bce                 mov ecx, esi
// 005b4d46  e8c5f6ffff           call 0x5b4410
// 005b4d4b  83ec1c               sub esp, 0x1c
// 005b4d4e  8bcc                 mov ecx, esp
// 005b4d50  89642430             mov dword ptr [esp + 0x30], esp
// 005b4d54  68dc558300           push 0x8355dc
// 005b4d59  ff1558248000         call dword ptr [0x802458]
// 005b4d5f  689b000000           push 0x9b
// 005b4d64  688f000000           push 0x8f
// 005b4d69  55                   push ebp
// 005b4d6a  6a6b                 push 0x6b
// 005b4d6c  8bce                 mov ecx, esi
// 005b4d6e  e89df6ffff           call 0x5b4410
// 005b4d73  83ec1c               sub esp, 0x1c
// 005b4d76  8bcc                 mov ecx, esp
// 005b4d78  89642430             mov dword ptr [esp + 0x30], esp
// 005b4d7c  68cc558300           push 0x8355cc
// 005b4d81  ff1558248000         call dword ptr [0x802458]
// 005b4d87  6a43                 push 0x43
// 005b4d89  6a5c                 push 0x5c
// 005b4d8b  6a68                 push 0x68
// 005b4d8d  6a6c                 push 0x6c
// 005b4d8f  8bce                 mov ecx, esi
// 005b4d91  e87af6ffff           call 0x5b4410
// 005b4d96  83ec1c               sub esp, 0x1c
// 005b4d99  8bcc                 mov ecx, esp
// 005b4d9b  89642430             mov dword ptr [esp + 0x30], esp
// 005b4d9f  68b4558300           push 0x8355b4
// 005b4da4  ff1558248000         call dword ptr [0x802458]
// 005b4daa  6893000000           push 0x93
// 005b4daf  6a54                 push 0x54
// 005b4db1  6a43                 push 0x43
// 005b4db3  6a6e                 push 0x6e
// 005b4db5  8bce                 mov ecx, esi
// 005b4db7  e854f6ffff           call 0x5b4410
// 005b4dbc  83ec1c               sub esp, 0x1c
// 005b4dbf  8bcc                 mov ecx, esp
// 005b4dc1  89642430             mov dword ptr [esp + 0x30], esp
// 005b4dc5  68a8558300           push 0x8355a8
// 005b4dca  ff1558248000         call dword ptr [0x802458]
// 005b4dd0  68b1000000           push 0xb1
// 005b4dd5  68b7000000           push 0xb7
// 005b4dda  68bf000000           push 0xbf
// 005b4ddf  6a6f                 push 0x6f
// 005b4de1  8bce                 mov ecx, esi
// 005b4de3  e828f6ffff           call 0x5b4410
// 005b4de8  83ec1c               sub esp, 0x1c
// 005b4deb  8bcc                 mov ecx, esp
// 005b4ded  89642430             mov dword ptr [esp + 0x30], esp
// 005b4df1  6890558300           push 0x835590
// 005b4df6  ff1558248000         call dword ptr [0x802458]
// 005b4dfc  68ac000000           push 0xac
// 005b4e01  6a74                 push 0x74
// 005b4e03  6a68                 push 0x68
// 005b4e05  6a70                 push 0x70
// 005b4e07  8bce                 mov ecx, esi
// 005b4e09  e802f6ffff           call 0x5b4410
// 005b4e0e  83ec1c               sub esp, 0x1c
// 005b4e11  8bcc                 mov ecx, esp
// 005b4e13  89642430             mov dword ptr [esp + 0x30], esp
// 005b4e17  6874558300           push 0x835574
// 005b4e1c  ff1558248000         call dword ptr [0x802458]
// 005b4e22  68c8000000           push 0xc8
// 005b4e27  68ad000000           push 0xad
// 005b4e2c  68e4000000           push 0xe4
// 005b4e31  6a71                 push 0x71
// 005b4e33  8bce                 mov ecx, esi
// 005b4e35  e8d6f5ffff           call 0x5b4410
// 005b4e3a  83ec1c               sub esp, 0x1c
// 005b4e3d  8bcc                 mov ecx, esp
// 005b4e3f  89642430             mov dword ptr [esp + 0x30], esp
// 005b4e43  685c558300           push 0x83555c
// 005b4e48  ff1558248000         call dword ptr [0x802458]
// 005b4e4e  6a3c                 push 0x3c
// 005b4e50  68d2000000           push 0xd2
// 005b4e55  68c7000000           push 0xc7
// 005b4e5a  6a73                 push 0x73
// 005b4e5c  8bce                 mov ecx, esi
// 005b4e5e  e8adf5ffff           call 0x5b4410
// 005b4e63  83ec1c               sub esp, 0x1c
// 005b4e66  8bcc                 mov ecx, esp
// 005b4e68  89642430             mov dword ptr [esp + 0x30], esp
// 005b4e6c  6848558300           push 0x835548
// 005b4e71  ff1558248000         call dword ptr [0x802458]
// 005b4e77  68af000000           push 0xaf
// 005b4e7c  68a5000000           push 0xa5
// 005b4e81  6a55                 push 0x55
// 005b4e83  6a74                 push 0x74
// 005b4e85  8bce                 mov ecx, esi
// 005b4e87  e884f5ffff           call 0x5b4410
// 005b4e8c  83ec1c               sub esp, 0x1c
// 005b4e8f  8bcc                 mov ecx, esp
// 005b4e91  89642430             mov dword ptr [esp + 0x30], esp
// 005b4e95  6834558300           push 0x835534
// 005b4e9a  ff1558248000         call dword ptr [0x802458]
// 005b4ea0  68d5000000           push 0xd5
// 005b4ea5  68d7000000           push 0xd7
// 005b4eaa  68b7000000           push 0xb7
// 005b4eaf  6a76                 push 0x76
// 005b4eb1  8bce                 mov ecx, esi
// 005b4eb3  e858f5ffff           call 0x5b4410
// 005b4eb8  83ec1c               sub esp, 0x1c
// 005b4ebb  8bcc                 mov ecx, esp
// 005b4ebd  89642430             mov dword ptr [esp + 0x30], esp
// 005b4ec1  6820558300           push 0x835520
// 005b4ec6  ff1558248000         call dword ptr [0x802458]
// 005b4ecc  6a46                 push 0x46
// 005b4ece  68bd000000           push 0xbd
// 005b4ed3  68a4000000           push 0xa4
// 005b4ed8  6a77                 push 0x77
// 005b4eda  8bce                 mov ecx, esi
// 005b4edc  e82ff5ffff           call 0x5b4410
// 005b4ee1  83ec1c               sub esp, 0x1c
// 005b4ee4  8bcc                 mov ecx, esp
// 005b4ee6  89642430             mov dword ptr [esp + 0x30], esp
// 005b4eea  6808558300           push 0x835508
// 005b4eef  ff1558248000         call dword ptr [0x802458]
// 005b4ef5  68a7000000           push 0xa7
// 005b4efa  68e4000000           push 0xe4
// 005b4eff  68d9000000           push 0xd9
// 005b4f04  6a78                 push 0x78
// 005b4f06  8bce                 mov ecx, esi
// 005b4f08  e803f5ffff           call 0x5b4410
// 005b4f0d  83ec1c               sub esp, 0x1c
// 005b4f10  8bcc                 mov ecx, esp
// 005b4f12  89642430             mov dword ptr [esp + 0x30], esp
// 005b4f16  68f0548300           push 0x8354f0
// 005b4f1b  ff1558248000         call dword ptr [0x802458]
// 005b4f21  6a58                 push 0x58
// 005b4f23  68ac000000           push 0xac
// 005b4f28  68e7000000           push 0xe7
// 005b4f2d  6a79                 push 0x79
// 005b4f2f  8bce                 mov ecx, esi
// 005b4f31  e8daf4ffff           call 0x5b4410
// 005b4f36  83ec1c               sub esp, 0x1c
// 005b4f39  8bcc                 mov ecx, esp
// 005b4f3b  89642430             mov dword ptr [esp + 0x30], esp
// 005b4f3f  68dc548300           push 0x8354dc
// 005b4f44  ff1558248000         call dword ptr [0x802458]
// 005b4f4a  6a4c                 push 0x4c
// 005b4f4c  6a6f                 push 0x6f
// 005b4f4e  68d3000000           push 0xd3
// 005b4f53  6a7b                 push 0x7b
// 005b4f55  8bce                 mov ecx, esi
// 005b4f57  e8b4f4ffff           call 0x5b4410
// 005b4f5c  83ec1c               sub esp, 0x1c
// 005b4f5f  8bcc                 mov ecx, esp
// 005b4f61  89642430             mov dword ptr [esp + 0x30], esp
// 005b4f65  68c4548300           push 0x8354c4
// 005b4f6a  ff1558248000         call dword ptr [0x802458]
// 005b4f70  6a78                 push 0x78
// 005b4f72  6a39                 push 0x39
// 005b4f74  6892000000           push 0x92
// 005b4f79  6a7c                 push 0x7c
// 005b4f7b  8bce                 mov ecx, esi
// 005b4f7d  e88ef4ffff           call 0x5b4410
// 005b4f82  83ec1c               sub esp, 0x1c
// 005b4f85  8bcc                 mov ecx, esp
// 005b4f87  89642430             mov dword ptr [esp + 0x30], esp
// 005b4f8b  68b4548300           push 0x8354b4
// 005b4f90  ff1558248000         call dword ptr [0x802458]
// 005b4f96  6891000000           push 0x91
// 005b4f9b  68b8000000           push 0xb8
// 005b4fa0  68ea000000           push 0xea
// 005b4fa5  6a7d                 push 0x7d
// 005b4fa7  8bce                 mov ecx, esi
// 005b4fa9  e862f4ffff           call 0x5b4410
// 005b4fae  83ec1c               sub esp, 0x1c
// 005b4fb1  8bcc                 mov ecx, esp
// 005b4fb3  89642430             mov dword ptr [esp + 0x30], esp
// 005b4fb7  6898548300           push 0x835498
// 005b4fbc  ff1558248000         call dword ptr [0x802458]
// 005b4fc2  68cb000000           push 0xcb
// 005b4fc7  68a5000000           push 0xa5
// 005b4fcc  68a5000000           push 0xa5
// 005b4fd1  6a7e                 push 0x7e
// 005b4fd3  8bce                 mov ecx, esi
// 005b4fd5  e836f4ffff           call 0x5b4410
// 005b4fda  83ec1c               sub esp, 0x1c
// 005b4fdd  8bcc                 mov ecx, esp
// 005b4fdf  89642430             mov dword ptr [esp + 0x30], esp
// 005b4fe3  6890548300           push 0x835490
// 005b4fe8  ff1558248000         call dword ptr [0x802458]
// 005b4fee  6881000000           push 0x81
// 005b4ff3  68bc000000           push 0xbc
// 005b4ff8  68dc000000           push 0xdc
// 005b4ffd  6a7f                 push 0x7f
// 005b4fff  8bce                 mov ecx, esi
// 005b5001  e80af4ffff           call 0x5b4410
// 005b5006  83ec1c               sub esp, 0x1c
// 005b5009  8bcc                 mov ecx, esp
// 005b500b  89642430             mov dword ptr [esp + 0x30], esp
// 005b500f  6884548300           push 0x835484
// 005b5014  ff1558248000         call dword ptr [0x802458]
// 005b501a  6a59                 push 0x59
// 005b501c  6a7a                 push 0x7a
// 005b501e  68ae000000           push 0xae
// 005b5023  6880000000           push 0x80
// 005b5028  8bce                 mov ecx, esi
// 005b502a  e8e1f3ffff           call 0x5b4410
// 005b502f  83ec1c               sub esp, 0x1c
// 005b5032  8bcc                 mov ecx, esp
// 005b5034  89642430             mov dword ptr [esp + 0x30], esp
// 005b5038  687c548300           push 0x83547c
// 005b503d  ff1558248000         call dword ptr [0x802458]
// 005b5043  68a8000000           push 0xa8
// 005b5048  68a3000000           push 0xa3
// 005b504d  689c000000           push 0x9c
// 005b5052  6883000000           push 0x83
// 005b5057  8bce                 mov ecx, esi
// 005b5059  e8b2f3ffff           call 0x5b4410
// 005b505e  83ec1c               sub esp, 0x1c
// 005b5061  8bcc                 mov ecx, esp
// 005b5063  89642430             mov dword ptr [esp + 0x30], esp
// 005b5067  6870548300           push 0x835470
// 005b506c  ff1558248000         call dword ptr [0x802458]
// 005b5072  6a3d                 push 0x3d
// 005b5074  6a73                 push 0x73
// 005b5076  68d5000000           push 0xd5
// 005b507b  6885000000           push 0x85
// 005b5080  8bce                 mov ecx, esi
// 005b5082  e889f3ffff           call 0x5b4410
// 005b5087  83ec1c               sub esp, 0x1c
// 005b508a  8bcc                 mov ecx, esp
// 005b508c  89642430             mov dword ptr [esp + 0x30], esp
// 005b5090  6864548300           push 0x835464
// 005b5095  ff1558248000         call dword ptr [0x802458]
// 005b509b  6a56                 push 0x56
// 005b509d  68dd000000           push 0xdd
// 005b50a2  68d8000000           push 0xd8
// 005b50a7  6886000000           push 0x86
// 005b50ac  8bce                 mov ecx, esi
// 005b50ae  e85df3ffff           call 0x5b4410
// 005b50b3  83ec1c               sub esp, 0x1c
// 005b50b6  8bcc                 mov ecx, esp
// 005b50b8  89642430             mov dword ptr [esp + 0x30], esp
// 005b50bc  6858548300           push 0x835458
// 005b50c1  ff1558248000         call dword ptr [0x802458]
// 005b50c7  689c000000           push 0x9c
// 005b50cc  6886000000           push 0x86
// 005b50d1  6a74                 push 0x74
// 005b50d3  6887000000           push 0x87
// 005b50d8  8bce                 mov ecx, esi
// 005b50da  e831f3ffff           call 0x5b4410
// 005b50df  83ec1c               sub esp, 0x1c
// 005b50e2  8bcc                 mov ecx, esp
// 005b50e4  89642430             mov dword ptr [esp + 0x30], esp
// 005b50e8  684c548300           push 0x83544c
// 005b50ed  ff1558248000         call dword ptr [0x802458]
// 005b50f3  6890000000           push 0x90
// 005b50f8  6a7c                 push 0x7c
// 005b50fa  6887000000           push 0x87
// 005b50ff  6888000000           push 0x88
// 005b5104  8bce                 mov ecx, esi
// 005b5106  e805f3ffff           call 0x5b4410
// 005b510b  83ec1c               sub esp, 0x1c
// 005b510e  8bcc                 mov ecx, esp
// 005b5110  89642430             mov dword ptr [esp + 0x30], esp
// 005b5114  683c548300           push 0x83543c
// 005b5119  ff1558248000         call dword ptr [0x802458]
// 005b511f  6a64                 push 0x64
// 005b5121  6898000000           push 0x98
// 005b5126  68e0000000           push 0xe0
// 005b512b  6889000000           push 0x89
// 005b5130  8bce                 mov ecx, esi
// 005b5132  e8d9f2ffff           call 0x5b4410
// 005b5137  83ec1c               sub esp, 0x1c
// 005b513a  8bcc                 mov ecx, esp
// 005b513c  89642430             mov dword ptr [esp + 0x30], esp
// 005b5140  6830548300           push 0x835430
// 005b5145  ff1558248000         call dword ptr [0x802458]
// 005b514b  6a73                 push 0x73
// 005b514d  688a000000           push 0x8a
// 005b5152  6895000000           push 0x95
// 005b5157  688a000000           push 0x8a
// 005b515c  8bce                 mov ecx, esi
// 005b515e  e8adf2ffff           call 0x5b4410
// 005b5163  83ec1c               sub esp, 0x1c
// 005b5166  8bcc                 mov ecx, esp
// 005b5168  89642430             mov dword ptr [esp + 0x30], esp
// 005b516c  6824548300           push 0x835424
// 005b5171  ff1558248000         call dword ptr [0x802458]
// 005b5177  6a56                 push 0x56
// 005b5179  6a3a                 push 0x3a
// 005b517b  6a20                 push 0x20
// 005b517d  688c000000           push 0x8c
// 005b5182  8bce                 mov ecx, esi
// 005b5184  e887f2ffff           call 0x5b4410
// 005b5189  83ec1c               sub esp, 0x1c
// 005b518c  8bcc                 mov ecx, esp
// 005b518e  89642430             mov dword ptr [esp + 0x30], esp
// 005b5192  6818548300           push 0x835418
// 005b5197  ff1558248000         call dword ptr [0x802458]
// 005b519d  6a2c                 push 0x2c
// 005b519f  6a46                 push 0x46
// 005b51a1  6a27                 push 0x27
// 005b51a3  688d000000           push 0x8d
// 005b51a8  8bce                 mov ecx, esi
// 005b51aa  e861f2ffff           call 0x5b4410
// 005b51af  83ec1c               sub esp, 0x1c
// 005b51b2  8bcc                 mov ecx, esp
// 005b51b4  89642430             mov dword ptr [esp + 0x30], esp
// 005b51b8  6808548300           push 0x835408
// 005b51bd  ff1558248000         call dword ptr [0x802458]
// 005b51c3  68f7000000           push 0xf7
// 005b51c8  68e2000000           push 0xe2
// 005b51cd  68cf000000           push 0xcf
// 005b51d2  688f000000           push 0x8f
// 005b51d7  8bce                 mov ecx, esi
// 005b51d9  e832f2ffff           call 0x5b4410
// 005b51de  83ec1c               sub esp, 0x1c
// 005b51e1  8bcc                 mov ecx, esp
// 005b51e3  89642430             mov dword ptr [esp + 0x30], esp
// 005b51e7  68f4538300           push 0x8353f4
// 005b51ec  ff1558248000         call dword ptr [0x802458]
// 005b51f2  68a1000000           push 0xa1
// 005b51f7  6888000000           push 0x88
// 005b51fc  6a79                 push 0x79
// 005b51fe  6891000000           push 0x91
// 005b5203  8bce                 mov ecx, esi
// 005b5205  e806f2ffff           call 0x5b4410
// 005b520a  83ec1c               sub esp, 0x1c
// 005b520d  8bcc                 mov ecx, esp
// 005b520f  89642430             mov dword ptr [esp + 0x30], esp
// 005b5213  68dc538300           push 0x8353dc
// 005b5218  ff1558248000         call dword ptr [0x802458]
// 005b521e  68a3000000           push 0xa3
// 005b5223  688e000000           push 0x8e
// 005b5228  6895000000           push 0x95
// 005b522d  6892000000           push 0x92
// 005b5232  8bce                 mov ecx, esi
// 005b5234  e8d7f1ffff           call 0x5b4410
// 005b5239  83ec1c               sub esp, 0x1c
// 005b523c  8bcc                 mov ecx, esp
// 005b523e  89642430             mov dword ptr [esp + 0x30], esp
// 005b5242  68c4538300           push 0x8353c4
// 005b5247  ff1558248000         call dword ptr [0x802458]
// 005b524d  6a67                 push 0x67
// 005b524f  6887000000           push 0x87
// 005b5254  6893000000           push 0x93
// 005b5259  6893000000           push 0x93
// 005b525e  8bce                 mov ecx, esi
// 005b5260  e8abf1ffff           call 0x5b4410
// 005b5265  83ec1c               sub esp, 0x1c
// 005b5268  8bcc                 mov ecx, esp
// 005b526a  89642430             mov dword ptr [esp + 0x30], esp
// 005b526e  68b0538300           push 0x8353b0
// 005b5273  ff1558248000         call dword ptr [0x802458]
// 005b5279  6a57                 push 0x57
// 005b527b  6a58                 push 0x58
// 005b527d  6a57                 push 0x57
// 005b527f  6894000000           push 0x94
// 005b5284  8bce                 mov ecx, esi
// 005b5286  e885f1ffff           call 0x5b4410
// 005b528b  83ec1c               sub esp, 0x1c
// 005b528e  8bcc                 mov ecx, esp
// 005b5290  89642430             mov dword ptr [esp + 0x30], esp
// 005b5294  68a0538300           push 0x8353a0
// 005b5299  ff1558248000         call dword ptr [0x802458]
// 005b529f  6a32                 push 0x32
// 005b52a1  6a1d                 push 0x1d
// 005b52a3  6a16                 push 0x16
// 005b52a5  6895000000           push 0x95
// 005b52aa  8bce                 mov ecx, esi
// 005b52ac  e85ff1ffff           call 0x5b4410
// 005b52b1  83ec1c               sub esp, 0x1c
// 005b52b4  8bcc                 mov ecx, esp
// 005b52b6  89642430             mov dword ptr [esp + 0x30], esp
// 005b52ba  688c538300           push 0x83538c
// 005b52bf  ff1558248000         call dword ptr [0x802458]
// 005b52c5  68ac000000           push 0xac
// 005b52ca  68ad000000           push 0xad
// 005b52cf  68ab000000           push 0xab
// 005b52d4  6896000000           push 0x96
// 005b52d9  8bce                 mov ecx, esi
// 005b52db  e830f1ffff           call 0x5b4410
// 005b52e0  83ec1c               sub esp, 0x1c
// 005b52e3  8bcc                 mov ecx, esp
// 005b52e5  89642430             mov dword ptr [esp + 0x30], esp
// 005b52e9  6880538300           push 0x835380
// 005b52ee  ff1558248000         call dword ptr [0x802458]
// 005b52f4  6881000000           push 0x81
// 005b52f9  6890000000           push 0x90
// 005b52fe  6a78                 push 0x78
// 005b5300  6897000000           push 0x97
// 005b5305  8bce                 mov ecx, esi
// 005b5307  e804f1ffff           call 0x5b4410
// 005b530c  83ec1c               sub esp, 0x1c
// 005b530f  8bcc                 mov ecx, esp
// 005b5311  89642430             mov dword ptr [esp + 0x30], esp
// 005b5315  6874538300           push 0x835374
// 005b531a  ff1558248000         call dword ptr [0x802458]
// 005b5320  6a76                 push 0x76
// 005b5322  6a79                 push 0x79
// 005b5324  6895000000           push 0x95
// 005b5329  6899000000           push 0x99
// 005b532e  8bce                 mov ecx, esi
// 005b5330  e8dbf0ffff           call 0x5b4410
// 005b5335  83ec1c               sub esp, 0x1c
// 005b5338  8bcc                 mov ecx, esp
// 005b533a  89642430             mov dword ptr [esp + 0x30], esp
// 005b533e  6868538300           push 0x835368
// 005b5343  ff1558248000         call dword ptr [0x802458]
// 005b5349  6a2f                 push 0x2f
// 005b534b  6a2e                 push 0x2e
// 005b534d  6a7b                 push 0x7b
// 005b534f  689a000000           push 0x9a
// 005b5354  8bce                 mov ecx, esi
// 005b5356  e8b5f0ffff           call 0x5b4410
// 005b535b  83ec1c               sub esp, 0x1c
// 005b535e  8bcc                 mov ecx, esp
// 005b5360  89642430             mov dword ptr [esp + 0x30], esp
// 005b5364  6858538300           push 0x835358
// 005b5369  ff1558248000         call dword ptr [0x802458]
// 005b536f  6a7b                 push 0x7b
// 005b5371  68f6000000           push 0xf6
// 005b5376  68ff000000           push 0xff
// 005b537b  689d000000           push 0x9d
// 005b5380  8bce                 mov ecx, esi
// 005b5382  e889f0ffff           call 0x5b4410
// 005b5387  83ec1c               sub esp, 0x1c
// 005b538a  8bcc                 mov ecx, esp
// 005b538c  89642430             mov dword ptr [esp + 0x30], esp
// 005b5390  6848538300           push 0x835348
// 005b5395  ff1558248000         call dword ptr [0x802458]
// 005b539b  68c2000000           push 0xc2
// 005b53a0  68a4000000           push 0xa4
// 005b53a5  68e1000000           push 0xe1
// 005b53aa  689e000000           push 0x9e
// 005b53af  8bce                 mov ecx, esi
// 005b53b1  e85af0ffff           call 0x5b4410
// 005b53b6  83ec1c               sub esp, 0x1c
// 005b53b9  8bcc                 mov ecx, esp
// 005b53bb  89642430             mov dword ptr [esp + 0x30], esp
// 005b53bf  6838538300           push 0x835338
// 005b53c4  ff1558248000         call dword ptr [0x802458]
// 005b53ca  6a62                 push 0x62
// 005b53cc  6a6c                 push 0x6c
// 005b53ce  6a75                 push 0x75
// 005b53d0  68a8000000           push 0xa8
// 005b53d5  8bce                 mov ecx, esi
// 005b53d7  e834f0ffff           call 0x5b4410
// 005b53dc  83ec1c               sub esp, 0x1c
// 005b53df  8bcc                 mov ecx, esp
// 005b53e1  89642430             mov dword ptr [esp + 0x30], esp
// 005b53e5  6828538300           push 0x835328
// 005b53ea  ff1558248000         call dword ptr [0x802458]
// 005b53f0  6a5b                 push 0x5b
// 005b53f2  6a69                 push 0x69
// 005b53f4  6897000000           push 0x97
// 005b53f9  68b0000000           push 0xb0
// 005b53fe  8bce                 mov ecx, esi
// 005b5400  e80bf0ffff           call 0x5b4410
// 005b5405  83ec1c               sub esp, 0x1c
// 005b5408  8bcc                 mov ecx, esp
// 005b540a  89642430             mov dword ptr [esp + 0x30], esp
// 005b540e  6814538300           push 0x835314
// 005b5413  ff1558248000         call dword ptr [0x802458]
// 005b5419  6a55                 push 0x55
// 005b541b  6884000000           push 0x84
// 005b5420  68b4000000           push 0xb4
// 005b5425  68b2000000           push 0xb2
// 005b542a  8bce                 mov ecx, esi
// 005b542c  e8dfefffff           call 0x5b4410
// 005b5431  83ec1c               sub esp, 0x1c
// 005b5434  8bcc                 mov ecx, esp
// 005b5436  89642430             mov dword ptr [esp + 0x30], esp
// 005b543a  6800538300           push 0x835300
// 005b543f  ff1558248000         call dword ptr [0x802458]
// 005b5445  6888000000           push 0x88
// 005b544a  6887000000           push 0x87
// 005b544f  6889000000           push 0x89
// 005b5454  68b3000000           push 0xb3
// 005b5459  8bce                 mov ecx, esi
// 005b545b  e8b0efffff           call 0x5b4410
// 005b5460  83ec1c               sub esp, 0x1c
// 005b5463  8bcc                 mov ecx, esp
// 005b5465  89642430             mov dword ptr [esp + 0x30], esp
// 005b5469  68f8528300           push 0x8352f8
// 005b546e  ff1558248000         call dword ptr [0x802458]
// 005b5474  6a4b                 push 0x4b
// 005b5476  68a9000000           push 0xa9
// 005b547b  68d7000000           push 0xd7
// 005b5480  68b4000000           push 0xb4
// 005b5485  8bce                 mov ecx, esi
// 005b5487  e884efffff           call 0x5b4410
// 005b548c  83ec1c               sub esp, 0x1c
// 005b548f  8bcc                 mov ecx, esp
// 005b5491  89642430             mov dword ptr [esp + 0x30], esp
// 005b5495  68ec528300           push 0x8352ec
// 005b549a  ff1558248000         call dword ptr [0x802458]
// 005b54a0  6a2e                 push 0x2e
// 005b54a2  68d6000000           push 0xd6
// 005b54a7  68f9000000           push 0xf9
// 005b54ac  68be000000           push 0xbe
// 005b54b1  8bce                 mov ecx, esi
// 005b54b3  e858efffff           call 0x5b4410
// 005b54b8  83ec1c               sub esp, 0x1c
// 005b54bb  8bcc                 mov ecx, esp
// 005b54bd  89642430             mov dword ptr [esp + 0x30], esp
// 005b54c1  68d4528300           push 0x8352d4
// 005b54c6  ff1558248000         call dword ptr [0x802458]
// 005b54cc  6a2d                 push 0x2d
// 005b54ce  68ab000000           push 0xab
// 005b54d3  68e8000000           push 0xe8
// 005b54d8  68bf000000           push 0xbf
// 005b54dd  8bce                 mov ecx, esi
// 005b54df  e82cefffff           call 0x5b4410
// 005b54e4  83ec1c               sub esp, 0x1c
// 005b54e7  8bcc                 mov ecx, esp
// 005b54e9  89642430             mov dword ptr [esp + 0x30], esp
// 005b54ed  68c4528300           push 0x8352c4
// 005b54f2  ff1558248000         call dword ptr [0x802458]
// 005b54f8  6a27                 push 0x27
// 005b54fa  6a40                 push 0x40
// 005b54fc  6a69                 push 0x69
// 005b54fe  68c0000000           push 0xc0
// 005b5503  8bce                 mov ecx, esi
// 005b5505  e806efffff           call 0x5b4410
// 005b550a  83ec1c               sub esp, 0x1c
// 005b550d  8bcc                 mov ecx, esp
// 005b550f  89642430             mov dword ptr [esp + 0x30], esp
// 005b5513  68ac528300           push 0x8352ac
// 005b5518  ff1558248000         call dword ptr [0x802458]
// 005b551e  6a24                 push 0x24
// 005b5520  6a60                 push 0x60
// 005b5522  68cf000000           push 0xcf
// 005b5527  68c1000000           push 0xc1
// 005b552c  8bce                 mov ecx, esi
// 005b552e  e8ddeeffff           call 0x5b4410
// 005b5533  83ec1c               sub esp, 0x1c
// 005b5536  8bcc                 mov ecx, esp
// 005b5538  89642430             mov dword ptr [esp + 0x30], esp
// 005b553c  6898528300           push 0x835298
// 005b5541  ff1558248000         call dword ptr [0x802458]
// 005b5547  68a4000000           push 0xa4
// 005b554c  68a2000000           push 0xa2
// 005b5551  68a3000000           push 0xa3
// 005b5556  68c2000000           push 0xc2
// 005b555b  8bce                 mov ecx, esi
// 005b555d  e8aeeeffff           call 0x5b4410
// 005b5562  83ec1c               sub esp, 0x1c
// 005b5565  8bcc                 mov ecx, esp
// 005b5567  89642430             mov dword ptr [esp + 0x30], esp
// 005b556b  688c528300           push 0x83528c
// 005b5570  ff1558248000         call dword ptr [0x802458]
// 005b5576  68a4000000           push 0xa4
// 005b557b  6a67                 push 0x67
// 005b557d  6a46                 push 0x46
// 005b557f  68c3000000           push 0xc3
// 005b5584  8bce                 mov ecx, esi
// 005b5586  e885eeffff           call 0x5b4410
// 005b558b  83ec1c               sub esp, 0x1c
// 005b558e  8bcc                 mov ecx, esp
// 005b5590  89642430             mov dword ptr [esp + 0x30], esp
// 005b5594  687c528300           push 0x83527c
// 005b5599  ff1558248000         call dword ptr [0x802458]
// 005b559f  688b000000           push 0x8b
// 005b55a4  6a47                 push 0x47
// 005b55a6  6a23                 push 0x23
// 005b55a8  68c4000000           push 0xc4
// 005b55ad  8bce                 mov ecx, esi
// 005b55af  e85ceeffff           call 0x5b4410
// 005b55b4  83ec1c               sub esp, 0x1c
// 005b55b7  8bcc                 mov ecx, esp
// 005b55b9  89642430             mov dword ptr [esp + 0x30], esp
// 005b55bd  6864528300           push 0x835264
// 005b55c2  ff1558248000         call dword ptr [0x802458]
// 005b55c8  6885000000           push 0x85
// 005b55cd  6a42                 push 0x42
// 005b55cf  688e000000           push 0x8e
// 005b55d4  68c6000000           push 0xc6
// 005b55d9  8bce                 mov ecx, esi
// 005b55db  e830eeffff           call 0x5b4410
// 005b55e0  83ec1c               sub esp, 0x1c
// 005b55e3  8bcc                 mov ecx, esp
// 005b55e5  89642430             mov dword ptr [esp + 0x30], esp
// 005b55e9  6854528300           push 0x835254
// 005b55ee  ff1558248000         call dword ptr [0x802458]
// 005b55f4  6a61                 push 0x61
// 005b55f6  6a5f                 push 0x5f
// 005b55f8  6a63                 push 0x63
// 005b55fa  68c7000000           push 0xc7
// 005b55ff  8bce                 mov ecx, esi
// 005b5601  e80aeeffff           call 0x5b4410
// 005b5606  83ec1c               sub esp, 0x1c
// 005b5609  8bcc                 mov ecx, esp
// 005b560b  89642430             mov dword ptr [esp + 0x30], esp
// 005b560f  6844528300           push 0x835244
// 005b5614  ff1558248000         call dword ptr [0x802458]
// 005b561a  6a5d                 push 0x5d
// 005b561c  688a000000           push 0x8a
// 005b5621  6882000000           push 0x82
// 005b5626  68c8000000           push 0xc8
// 005b562b  8bce                 mov ecx, esi
// 005b562d  e8deedffff           call 0x5b4410
// 005b5632  83ec1c               sub esp, 0x1c
// 005b5635  8bcc                 mov ecx, esp
// 005b5637  89642430             mov dword ptr [esp + 0x30], esp
// 005b563b  6830528300           push 0x835230
// 005b5640  ff1558248000         call dword ptr [0x802458]
// 005b5646  68de000000           push 0xde
// 005b564b  68e4000000           push 0xe4
// 005b5650  68e5000000           push 0xe5
// 005b5655  68d0000000           push 0xd0
// 005b565a  8bce                 mov ecx, esi
// 005b565c  e8afedffff           call 0x5b4410
// 005b5661  83ec1c               sub esp, 0x1c
// 005b5664  8bcc                 mov ecx, esp
// 005b5666  89642430             mov dword ptr [esp + 0x30], esp
// 005b566a  6824528300           push 0x835224
// 005b566f  ff1558248000         call dword ptr [0x802458]
// 005b5675  6a44                 push 0x44
// 005b5677  688e000000           push 0x8e
// 005b567c  68b0000000           push 0xb0
// 005b5681  68d1000000           push 0xd1
// 005b5686  8bce                 mov ecx, esi
// 005b5688  e883edffff           call 0x5b4410
// 005b568d  83ec1c               sub esp, 0x1c
// 005b5690  8bcc                 mov ecx, esp
// 005b5692  89642430             mov dword ptr [esp + 0x30], esp
// 005b5696  6818528300           push 0x835218
// 005b569b  ff1558248000         call dword ptr [0x802458]
// 005b56a1  6a78                 push 0x78
// 005b56a3  6895000000           push 0x95
// 005b56a8  6a70                 push 0x70
// 005b56aa  68d2000000           push 0xd2
// 005b56af  8bce                 mov ecx, esi
// 005b56b1  e85aedffff           call 0x5b4410
// 005b56b6  83ec1c               sub esp, 0x1c
// 005b56b9  8bcc                 mov ecx, esp
// 005b56bb  89642430             mov dword ptr [esp + 0x30], esp
// 005b56bf  680c528300           push 0x83520c
// 005b56c4  ff1558248000         call dword ptr [0x802458]
// 005b56ca  68b5000000           push 0xb5
// 005b56cf  68b5000000           push 0xb5
// 005b56d4  6a79                 push 0x79
// 005b56d6  68d3000000           push 0xd3
// 005b56db  8bce                 mov ecx, esi
// 005b56dd  e82eedffff           call 0x5b4410
// 005b56e2  83ec1c               sub esp, 0x1c
// 005b56e5  8bcc                 mov ecx, esp
// 005b56e7  89642430             mov dword ptr [esp + 0x30], esp
// 005b56eb  68f8518300           push 0x8351f8
// 005b56f0  ff1558248000         call dword ptr [0x802458]
// 005b56f6  68e9000000           push 0xe9
// 005b56fb  68c3000000           push 0xc3
// 005b5700  689f000000           push 0x9f
// 005b5705  68d4000000           push 0xd4
// 005b570a  8bce                 mov ecx, esi
// 005b570c  e8ffecffff           call 0x5b4410
// 005b5711  83ec1c               sub esp, 0x1c
// 005b5714  8bcc                 mov ecx, esp
// 005b5716  89642430             mov dword ptr [esp + 0x30], esp
// 005b571a  68e4518300           push 0x8351e4
// 005b571f  ff1558248000         call dword ptr [0x802458]
// 005b5725  68b7000000           push 0xb7
// 005b572a  6881000000           push 0x81
// 005b572f  6a6c                 push 0x6c
// 005b5731  68d5000000           push 0xd5
// 005b5736  8bce                 mov ecx, esi
// 005b5738  e8d3ecffff           call 0x5b4410
// 005b573d  83ec1c               sub esp, 0x1c
// 005b5740  8bcc                 mov ecx, esp
// 005b5742  89642430             mov dword ptr [esp + 0x30], esp
// 005b5746  68dc518300           push 0x8351dc
// 005b574b  ff1558248000         call dword ptr [0x802458]
// 005b5751  6a2a                 push 0x2a
// 005b5753  6a4c                 push 0x4c
// 005b5755  688f000000           push 0x8f
// 005b575a  68d8000000           push 0xd8
// 005b575f  8bce                 mov ecx, esi
// 005b5761  e8aaecffff           call 0x5b4410
// 005b5766  83ec1c               sub esp, 0x1c
// 005b5769  8bcc                 mov ecx, esp
// 005b576b  89642430             mov dword ptr [esp + 0x30], esp
// 005b576f  68d4518300           push 0x8351d4
// 005b5774  ff1558248000         call dword ptr [0x802458]
// 005b577a  6a45                 push 0x45
// 005b577c  6a5c                 push 0x5c
// 005b577e  6a7c                 push 0x7c
// 005b5780  68d9000000           push 0xd9
// 005b5785  8bce                 mov ecx, esi
// 005b5787  e884ecffff           call 0x5b4410
// 005b578c  83ec1c               sub esp, 0x1c
// 005b578f  8bcc                 mov ecx, esp
// 005b5791  89642430             mov dword ptr [esp + 0x30], esp
// 005b5795  68c4518300           push 0x8351c4
// 005b579a  ff1558248000         call dword ptr [0x802458]
// 005b57a0  689f000000           push 0x9f
// 005b57a5  6a70                 push 0x70
// 005b57a7  6896000000           push 0x96
// 005b57ac  68da000000           push 0xda
// 005b57b1  8bce                 mov ecx, esi
// 005b57b3  e858ecffff           call 0x5b4410
// 005b57b8  83ec1c               sub esp, 0x1c
// 005b57bb  8bcc                 mov ecx, esp
// 005b57bd  89642430             mov dword ptr [esp + 0x30], esp
// 005b57c1  68bc518300           push 0x8351bc
// 005b57c6  ff1558248000         call dword ptr [0x802458]
// 005b57cc  689b000000           push 0x9b
// 005b57d1  6a62                 push 0x62
// 005b57d3  6a6b                 push 0x6b
// 005b57d5  68db000000           push 0xdb
// 005b57da  8bce                 mov ecx, esi
// 005b57dc  e82fecffff           call 0x5b4410
// 005b57e1  83ec1c               sub esp, 0x1c
// 005b57e4  8bcc                 mov ecx, esp
// 005b57e6  89642430             mov dword ptr [esp + 0x30], esp
// 005b57ea  68b0518300           push 0x8351b0
// 005b57ef  ff1558248000         call dword ptr [0x802458]
// 005b57f5  68ce000000           push 0xce
// 005b57fa  68a9000000           push 0xa9
// 005b57ff  68a7000000           push 0xa7
// 005b5804  68dc000000           push 0xdc
// 005b5809  8bce                 mov ecx, esi
// 005b580b  e800ecffff           call 0x5b4410
// 005b5810  83ec1c               sub esp, 0x1c
// 005b5813  8bcc                 mov ecx, esp
// 005b5815  89642430             mov dword ptr [esp + 0x30], esp
// 005b5819  68a0518300           push 0x8351a0
// 005b581e  ff1558248000         call dword ptr [0x802458]
// 005b5824  6898000000           push 0x98
// 005b5829  6a62                 push 0x62
// 005b582b  68cd000000           push 0xcd
// 005b5830  68dd000000           push 0xdd
// 005b5835  8bce                 mov ecx, esi
// 005b5837  e8d4ebffff           call 0x5b4410
// 005b583c  83ec1c               sub esp, 0x1c
// 005b583f  8bcc                 mov ecx, esp
// 005b5841  89642430             mov dword ptr [esp + 0x30], esp
// 005b5845  6890518300           push 0x835190
// 005b584a  ff1558248000         call dword ptr [0x802458]
// 005b5850  68c8000000           push 0xc8
// 005b5855  68ad000000           push 0xad
// 005b585a  68e4000000           push 0xe4
// 005b585f  68de000000           push 0xde
// 005b5864  8bce                 mov ecx, esi
// 005b5866  e8a5ebffff           call 0x5b4410
// 005b586b  83ec1c               sub esp, 0x1c
// 005b586e  8bcc                 mov ecx, esp
// 005b5870  89642430             mov dword ptr [esp + 0x30], esp
// 005b5874  6884518300           push 0x835184
// 005b5879  ff1558248000         call dword ptr [0x802458]
// 005b587f  6895000000           push 0x95
// 005b5884  6890000000           push 0x90
// 005b5889  68dc000000           push 0xdc
// 005b588e  68df000000           push 0xdf
// 005b5893  8bce                 mov ecx, esi
// 005b5895  e876ebffff           call 0x5b4410
// 005b589a  83ec1c               sub esp, 0x1c
// 005b589d  8bcc                 mov ecx, esp
// 005b589f  89642430             mov dword ptr [esp + 0x30], esp
// 005b58a3  6870518300           push 0x835170
// 005b58a8  ff1558248000         call dword ptr [0x802458]
// 005b58ae  68a0000000           push 0xa0
// 005b58b3  68d5000000           push 0xd5
// 005b58b8  68f0000000           push 0xf0
// 005b58bd  68e0000000           push 0xe0
// 005b58c2  8bce                 mov ecx, esi
// 005b58c4  e847ebffff           call 0x5b4410
// 005b58c9  83ec1c               sub esp, 0x1c
// 005b58cc  8bcc                 mov ecx, esp
// 005b58ce  89642430             mov dword ptr [esp + 0x30], esp
// 005b58d2  6858518300           push 0x835158
// 005b58d7  ff1558248000         call dword ptr [0x802458]
// 005b58dd  6a7f                 push 0x7f
// 005b58df  68b8000000           push 0xb8
// 005b58e4  68eb000000           push 0xeb
// 005b58e9  68e1000000           push 0xe1
// 005b58ee  8bce                 mov ecx, esi
// 005b58f0  e81bebffff           call 0x5b4410
// 005b58f5  83ec1c               sub esp, 0x1c
// 005b58f8  8bcc                 mov ecx, esp
// 005b58fa  89642430             mov dword ptr [esp + 0x30], esp
// 005b58fe  684c518300           push 0x83514c
// 005b5903  ff1558248000         call dword ptr [0x802458]
// 005b5909  688c000000           push 0x8c
// 005b590e  68ea000000           push 0xea
// 005b5913  68fd000000           push 0xfd
// 005b5918  68e2000000           push 0xe2
// 005b591d  8bce                 mov ecx, esi
// 005b591f  e8eceaffff           call 0x5b4410
// 005b5924  83ec1c               sub esp, 0x1c
// 005b5927  8bcc                 mov ecx, esp
// 005b5929  89642430             mov dword ptr [esp + 0x30], esp
// 005b592d  6840518300           push 0x835140
// 005b5932  ff1558248000         call dword ptr [0x802458]
// 005b5938  68dd000000           push 0xdd
// 005b593d  68bb000000           push 0xbb
// 005b5942  6a7d                 push 0x7d
// 005b5944  68e8000000           push 0xe8
// 005b5949  8bce                 mov ecx, esi
// 005b594b  e8c0eaffff           call 0x5b4410
// 005b5950  83ec1c               sub esp, 0x1c
// 005b5953  8bcc                 mov ecx, esp
// 005b5955  89642430             mov dword ptr [esp + 0x30], esp
// 005b5959  6830518300           push 0x835130
// 005b595e  ff1558248000         call dword ptr [0x802458]
// 005b5964  6a75                 push 0x75
// 005b5966  6a2b                 push 0x2b
// 005b5968  6a34                 push 0x34
// 005b596a  680c010000           push 0x10c
// 005b596f  8bce                 mov ecx, esi
// 005b5971  e89aeaffff           call 0x5b4410
// 005b5976  8d442414             lea eax, [esp + 0x14]
// 005b597a  50                   push eax
// 005b597b  8bcf                 mov ecx, edi
// 005b597d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 005b5985  e89615e9ff           call 0x446f20
// 005b598a  8d4c2414             lea ecx, [esp + 0x14]
// 005b598e  51                   push ecx
// 005b598f  8bcf                 mov ecx, edi
// 005b5991  c7442418d0000000     mov dword ptr [esp + 0x18], 0xd0
// 005b5999  e88215e9ff           call 0x446f20
// 005b599e  8d542414             lea edx, [esp + 0x14]
// 005b59a2  52                   push edx
// 005b59a3  8bcf                 mov ecx, edi
// 005b59a5  c7442418c2000000     mov dword ptr [esp + 0x18], 0xc2
// 005b59ad  e86e15e9ff           call 0x446f20
// 005b59b2  8d442414             lea eax, [esp + 0x14]
// 005b59b6  50                   push eax
// 005b59b7  8bcf                 mov ecx, edi
// 005b59b9  c7442418c7000000     mov dword ptr [esp + 0x18], 0xc7
// 005b59c1  e85a15e9ff           call 0x446f20
// 005b59c6  8d4c2414             lea ecx, [esp + 0x14]
// 005b59ca  51                   push ecx
// 005b59cb  8bcf                 mov ecx, edi
// 005b59cd  c74424181a000000     mov dword ptr [esp + 0x18], 0x1a
// 005b59d5  e84615e9ff           call 0x446f20
// 005b59da  8d542414             lea edx, [esp + 0x14]
// 005b59de  52                   push edx
// 005b59df  8bcf                 mov ecx, edi
// 005b59e1  c744241815000000     mov dword ptr [esp + 0x18], 0x15
// 005b59e9  e83215e9ff           call 0x446f20
// 005b59ee  8d442414             lea eax, [esp + 0x14]
// 005b59f2  50                   push eax
// 005b59f3  8bcf                 mov ecx, edi
// 005b59f5  c744241818000000     mov dword ptr [esp + 0x18], 0x18
// 005b59fd  e81e15e9ff           call 0x446f20
// 005b5a02  8d4c2414             lea ecx, [esp + 0x14]
// 005b5a06  51                   push ecx
// 005b5a07  8bcf                 mov ecx, edi
// 005b5a09  c7442418e2000000     mov dword ptr [esp + 0x18], 0xe2
// 005b5a11  e80a15e9ff           call 0x446f20
// 005b5a16  8d542414             lea edx, [esp + 0x14]
// 005b5a1a  52                   push edx
// 005b5a1b  8bcf                 mov ecx, edi
// 005b5a1d  c744241817000000     mov dword ptr [esp + 0x18], 0x17
// 005b5a25  e8f614e9ff           call 0x446f20
// 005b5a2a  8d442414             lea eax, [esp + 0x14]
// 005b5a2e  50                   push eax
// 005b5a2f  8bcf                 mov ecx, edi
// 005b5a31  c74424186b000000     mov dword ptr [esp + 0x18], 0x6b
// 005b5a39  e8e214e9ff           call 0x446f20
// 005b5a3e  8d4c2414             lea ecx, [esp + 0x14]
// 005b5a42  51                   push ecx
// 005b5a43  8bcf                 mov ecx, edi
// 005b5a45  c744241866000000     mov dword ptr [esp + 0x18], 0x66
// 005b5a4d  e8ce14e9ff           call 0x446f20
// 005b5a52  8d542414             lea edx, [esp + 0x14]
// 005b5a56  52                   push edx
// 005b5a57  8bcf                 mov ecx, edi
// 005b5a59  c74424180b000000     mov dword ptr [esp + 0x18], 0xb
// 005b5a61  e8ba14e9ff           call 0x446f20
// 005b5a66  8d442414             lea eax, [esp + 0x14]
// 005b5a6a  50                   push eax
// 005b5a6b  8bcf                 mov ecx, edi
// 005b5a6d  c74424182d000000     mov dword ptr [esp + 0x18], 0x2d
// 005b5a75  e8a614e9ff           call 0x446f20
// 005b5a7a  8d4c2414             lea ecx, [esp + 0x14]
// 005b5a7e  51                   push ecx
// 005b5a7f  8bcf                 mov ecx, edi
// 005b5a81  c744241887000000     mov dword ptr [esp + 0x18], 0x87
// 005b5a89  e89214e9ff           call 0x446f20
// 005b5a8e  8d542414             lea edx, [esp + 0x14]
// 005b5a92  52                   push edx
// 005b5a93  8bcf                 mov ecx, edi
// 005b5a95  c74424186a000000     mov dword ptr [esp + 0x18], 0x6a
// 005b5a9d  e87e14e9ff           call 0x446f20
// 005b5aa2  8d442414             lea eax, [esp + 0x14]
// 005b5aa6  50                   push eax
// 005b5aa7  8bcf                 mov ecx, edi
// 005b5aa9  c744241869000000     mov dword ptr [esp + 0x18], 0x69
// 005b5ab1  e86a14e9ff           call 0x446f20
// 005b5ab6  8d4c2414             lea ecx, [esp + 0x14]
// 005b5aba  51                   push ecx
// 005b5abb  8bcf                 mov ecx, edi
// 005b5abd  c74424188d000000     mov dword ptr [esp + 0x18], 0x8d
// 005b5ac5  e85614e9ff           call 0x446f20
// 005b5aca  8d542414             lea edx, [esp + 0x14]
// 005b5ace  52                   push edx
// 005b5acf  8bcf                 mov ecx, edi
// 005b5ad1  c74424181c000000     mov dword ptr [esp + 0x18], 0x1c
// 005b5ad9  e84214e9ff           call 0x446f20
// 005b5ade  8d442414             lea eax, [esp + 0x14]
// 005b5ae2  50                   push eax
// 005b5ae3  8bcf                 mov ecx, edi
// 005b5ae5  c744241825000000     mov dword ptr [esp + 0x18], 0x25
// 005b5aed  e82e14e9ff           call 0x446f20
// 005b5af2  8d4c2414             lea ecx, [esp + 0x14]
// 005b5af6  51                   push ecx
// 005b5af7  8bcf                 mov ecx, edi
// 005b5af9  c744241877000000     mov dword ptr [esp + 0x18], 0x77
// 005b5b01  e81a14e9ff           call 0x446f20
// 005b5b06  8d542414             lea edx, [esp + 0x14]
// 005b5b0a  52                   push edx
// 005b5b0b  8bcf                 mov ecx, edi
// 005b5b0d  c74424181d000000     mov dword ptr [esp + 0x18], 0x1d
// 005b5b15  e80614e9ff           call 0x446f20
// 005b5b1a  c744241497000000     mov dword ptr [esp + 0x14], 0x97
// 005b5b22  8d442414             lea eax, [esp + 0x14]
// 005b5b26  50                   push eax
// 005b5b27  8bcf                 mov ecx, edi
// 005b5b29  e8f213e9ff           call 0x446f20
// 005b5b2e  8d4c2414             lea ecx, [esp + 0x14]
// 005b5b32  51                   push ecx
// 005b5b33  8bcf                 mov ecx, edi
// 005b5b35  c744241826000000     mov dword ptr [esp + 0x18], 0x26
// 005b5b3d  e8de13e9ff           call 0x446f20
// 005b5b42  8d542414             lea edx, [esp + 0x14]
// 005b5b46  52                   push edx
// 005b5b47  8bcf                 mov ecx, edi
// 005b5b49  c7442418c0000000     mov dword ptr [esp + 0x18], 0xc0
// 005b5b51  e8ca13e9ff           call 0x446f20
// 005b5b56  8d442414             lea eax, [esp + 0x14]
// 005b5b5a  50                   push eax
// 005b5b5b  8bcf                 mov ecx, edi
// 005b5b5d  c744241868000000     mov dword ptr [esp + 0x18], 0x68
// 005b5b65  e8b613e9ff           call 0x446f20
// 005b5b6a  8d4c2414             lea ecx, [esp + 0x14]
// 005b5b6e  51                   push ecx
// 005b5b6f  8bcf                 mov ecx, edi
// 005b5b71  c744241809000000     mov dword ptr [esp + 0x18], 9
// 005b5b79  e8a213e9ff           call 0x446f20
// 005b5b7e  8d542414             lea edx, [esp + 0x14]
// 005b5b82  52                   push edx
// 005b5b83  8bcf                 mov ecx, edi
// 005b5b85  c744241865000000     mov dword ptr [esp + 0x18], 0x65
// 005b5b8d  e88e13e9ff           call 0x446f20
// 005b5b92  8d442414             lea eax, [esp + 0x14]
// 005b5b96  50                   push eax
// 005b5b97  8bcf                 mov ecx, edi
// 005b5b99  c744241805000000     mov dword ptr [esp + 0x18], 5
// 005b5ba1  e87a13e9ff           call 0x446f20
// 005b5ba6  8d4c2414             lea ecx, [esp + 0x14]
// 005b5baa  51                   push ecx
// 005b5bab  8bcf                 mov ecx, edi
// 005b5bad  c744241899000000     mov dword ptr [esp + 0x18], 0x99
// 005b5bb5  e86613e9ff           call 0x446f20
// 005b5bba  8d542414             lea edx, [esp + 0x14]
// 005b5bbe  52                   push edx
// 005b5bbf  8bcf                 mov ecx, edi
// 005b5bc1  c7442418d9000000     mov dword ptr [esp + 0x18], 0xd9
// 005b5bc9  e85213e9ff           call 0x446f20
// 005b5bce  8d442414             lea eax, [esp + 0x14]
// 005b5bd2  50                   push eax
// 005b5bd3  8bcf                 mov ecx, edi
// 005b5bd5  c744241812000000     mov dword ptr [esp + 0x18], 0x12
// 005b5bdd  e83e13e9ff           call 0x446f20
// 005b5be2  8d4c2414             lea ecx, [esp + 0x14]
// 005b5be6  51                   push ecx
// 005b5be7  8bcf                 mov ecx, edi
// 005b5be9  c74424187d000000     mov dword ptr [esp + 0x18], 0x7d
// 005b5bf1  e82a13e9ff           call 0x446f20
// 005b5bf6  8bce                 mov ecx, esi
// 005b5bf8  e8f3e6ffff           call 0x5b42f0
// 005b5bfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b5c01  5f                   pop edi
// 005b5c02  8bc6                 mov eax, esi
// 005b5c04  5e                   pop esi
// 005b5c05  64890d00000000       mov dword ptr fs:[0], ecx
// 005b5c0c  5d                   pop ebp
// 005b5c0d  83c41c               add esp, 0x1c
// 005b5c10  c3                   ret 
// library rbxgs-dll/v8datamodel\BrickColor.cpp (function ??0BrickMap@BrickColor@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/BrickColor.cpp
