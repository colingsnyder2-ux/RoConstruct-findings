// roc 2012-06 009d0b30  unit: CXTPControls  size: 1504 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d0b30
//
// 009d0b30  6aff                 push -1
// 009d0b32  6812fead00           push 0xadfe12
// 009d0b37  64a100000000         mov eax, dword ptr fs:[0]
// 009d0b3d  50                   push eax
// 009d0b3e  83ec60               sub esp, 0x60
// 009d0b41  53                   push ebx
// 009d0b42  55                   push ebp
// 009d0b43  56                   push esi
// 009d0b44  57                   push edi
// 009d0b45  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009d0b4a  33c4                 xor eax, esp
// 009d0b4c  50                   push eax
// 009d0b4d  8d442474             lea eax, [esp + 0x74]
// 009d0b51  64a300000000         mov dword ptr fs:[0], eax
// 009d0b57  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009d0b5b  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 009d0b62  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 009d0b69  8b4604               mov eax, dword ptr [esi + 4]
// 009d0b6c  55                   push ebp
// 009d0b6d  50                   push eax
// 009d0b6e  ff15d03ab200         call dword ptr [0xb23ad0]
// 009d0b74  50                   push eax
// 009d0b75  e8ee1bfbff           call 0x982768
// 009d0b7a  8b4e04               mov ecx, dword ptr [esi + 4]
// 009d0b7d  55                   push ebp
// 009d0b7e  51                   push ecx
// 009d0b7f  8bd8                 mov ebx, eax
// 009d0b81  ff15cc3ab200         call dword ptr [0xb23acc]
// 009d0b87  8b5604               mov edx, dword ptr [esi + 4]
// 009d0b8a  6a01                 push 1
// 009d0b8c  6a01                 push 1
// 009d0b8e  52                   push edx
// 009d0b8f  8bf8                 mov edi, eax
// 009d0b91  ff15943cb200         call dword ptr [0xb23c94]
// 009d0b97  33c9                 xor ecx, ecx
// 009d0b99  3bc5                 cmp eax, ebp
// 009d0b9b  0f94c1               sete cl
// 009d0b9e  894c2428             mov dword ptr [esp + 0x28], ecx
// 009d0ba2  81ff00ff0000         cmp edi, 0xff00
// 009d0ba8  0f8403040000         je 0x9d0fb1
// 009d0bae  8d8c2484000000       lea ecx, [esp + 0x84]
// 009d0bb5  ff158447b200         call dword ptr [0xb24784]
// 009d0bbb  6800040000           push 0x400
// 009d0bc0  8d942488000000       lea edx, [esp + 0x88]
// 009d0bc7  52                   push edx
// 009d0bc8  55                   push ebp
// 009d0bc9  56                   push esi
// 009d0bca  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 009d0bd5  e816790200           call 0x9f84f0
// 009d0bda  8bc8                 mov ecx, eax
// 009d0bdc  e84f740200           call 0x9f8030
// 009d0be1  85db                 test ebx, ebx
// 009d0be3  7467                 je 0x9d0c4c
// 009d0be5  6a00                 push 0
// 009d0be7  6a09                 push 9
// 009d0be9  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009d0bf0  ff15f447b200         call dword ptr [0xb247f4]
// 009d0bf6  89442424             mov dword ptr [esp + 0x24], eax
// 009d0bfa  85c0                 test eax, eax
// 009d0bfc  7e4e                 jle 0x9d0c4c
// 009d0bfe  40                   inc eax
// 009d0bff  50                   push eax
// 009d0c00  8d84248c000000       lea eax, [esp + 0x8c]
// 009d0c07  50                   push eax
// 009d0c08  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009d0c0f  ff15f047b200         call dword ptr [0xb247f0]
// 009d0c15  8bc8                 mov ecx, eax
// 009d0c17  ff159847b200         call dword ptr [0xb24798]
// 009d0c1d  50                   push eax
// 009d0c1e  ff15d42ab200         call dword ptr [0xb22ad4]
// 009d0c24  83c404               add esp, 4
// 009d0c27  8d8c2488000000       lea ecx, [esp + 0x88]
// 009d0c2e  8bf8                 mov edi, eax
// 009d0c30  ff15d047b200         call dword ptr [0xb247d0]
// 009d0c36  85ff                 test edi, edi
// 009d0c38  7612                 jbe 0x9d0c4c
// 009d0c3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009d0c3e  51                   push ecx
// 009d0c3f  8d8c2488000000       lea ecx, [esp + 0x88]
// 009d0c46  ff15b043b200         call dword ptr [0xb243b0]
// 009d0c4c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009d0c50  8b4838               mov ecx, dword ptr [eax + 0x38]
// 009d0c53  85c9                 test ecx, ecx
// 009d0c55  740f                 je 0x9d0c66
// 009d0c57  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 009d0c5d  89942488000000       mov dword ptr [esp + 0x88], edx
// 009d0c64  eb24                 jmp 0x9d0c8a
// 009d0c66  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009d0c69  85c9                 test ecx, ecx
// 009d0c6b  7412                 je 0x9d0c7f
// 009d0c6d  e82e4dfcff           call 0x9959a0
// 009d0c72  89842488000000       mov dword ptr [esp + 0x88], eax
// 009d0c79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009d0c7d  eb0b                 jmp 0x9d0c8a
// 009d0c7f  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 009d0c8a  8bc8                 mov ecx, eax
// 009d0c8c  e81fe3ffff           call 0x9cefb0
// 009d0c91  89442424             mov dword ptr [esp + 0x24], eax
// 009d0c95  33c0                 xor eax, eax
// 009d0c97  85db                 test ebx, ebx
// 009d0c99  0f95c0               setne al
// 009d0c9c  8d4c2468             lea ecx, [esp + 0x68]
// 009d0ca0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 009d0ca8  40                   inc eax
// 009d0ca9  89442418             mov dword ptr [esp + 0x18], eax
// 009d0cad  ff158447b200         call dword ptr [0xb24784]
// 009d0cb3  33c0                 xor eax, eax
// 009d0cb5  c644247c01           mov byte ptr [esp + 0x7c], 1
// 009d0cba  39842488000000       cmp dword ptr [esp + 0x88], eax
// 009d0cc1  0f8494000000         je 0x9d0d5b
// 009d0cc7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009d0ccb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009d0cce  89442454             mov dword ptr [esp + 0x54], eax
// 009d0cd2  89442458             mov dword ptr [esp + 0x58], eax
// 009d0cd6  8d842484000000       lea eax, [esp + 0x84]
// 009d0cdd  50                   push eax
// 009d0cde  8d4c246c             lea ecx, [esp + 0x6c]
// 009d0ce2  897c2454             mov dword ptr [esp + 0x54], edi
// 009d0ce6  89542468             mov dword ptr [esp + 0x68], edx
// 009d0cea  89742464             mov dword ptr [esp + 0x64], esi
// 009d0cee  896c2460             mov dword ptr [esp + 0x60], ebp
// 009d0cf2  ff152045b200         call dword ptr [0xb24520]
// 009d0cf8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d0cfc  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 009d0d03  8d542450             lea edx, [esp + 0x50]
// 009d0d07  52                   push edx
// 009d0d08  6a00                 push 0
// 009d0d0a  894c2474             mov dword ptr [esp + 0x74], ecx
// 009d0d0e  c744247800000000     mov dword ptr [esp + 0x78], 0
// 009d0d16  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009d0d19  685e280000           push 0x285e
// 009d0d1e  51                   push ecx
// 009d0d1f  ff15043cb200         call dword ptr [0xb23c04]
// 009d0d25  85c0                 test eax, eax
// 009d0d27  7432                 je 0x9d0d5b
// 009d0d29  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 009d0d2d  8b742454             mov esi, dword ptr [esp + 0x54]
// 009d0d31  8d442468             lea eax, [esp + 0x68]
// 009d0d35  50                   push eax
// 009d0d36  8d8c2488000000       lea ecx, [esp + 0x88]
// 009d0d3d  8954241c             mov dword ptr [esp + 0x1c], edx
// 009d0d41  ff152045b200         call dword ptr [0xb24520]
// 009d0d47  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009d0d4b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 009d0d4f  894c2420             mov dword ptr [esp + 0x20], ecx
// 009d0d53  85f6                 test esi, esi
// 009d0d55  0f8580020000         jne 0x9d0fdb
// 009d0d5b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d0d5f  8d41ff               lea eax, [ecx - 1]
// 009d0d62  83f80a               cmp eax, 0xa
// 009d0d65  0f872f020000         ja 0x9d0f9a
// 009d0d6b  ff2485e4109d00       jmp dword ptr [eax*4 + 0x9d10e4]
// 009d0d72  81ffb8880000         cmp edi, 0x88b8
// 009d0d78  750c                 jne 0x9d0d86
// 009d0d7a  e8511a0000           call 0x9d27d0
// 009d0d7f  8bf0                 mov esi, eax
// 009d0d81  e910020000           jmp 0x9d0f96
// 009d0d86  81ffba880000         cmp edi, 0x88ba
// 009d0d8c  750c                 jne 0x9d0d9a
// 009d0d8e  e8fd2b0000           call 0x9d3990
// 009d0d93  8bf0                 mov esi, eax
// 009d0d95  e9fc010000           jmp 0x9d0f96
// 009d0d9a  81ff00e80000         cmp edi, 0xe800
// 009d0da0  750c                 jne 0x9d0dae
// 009d0da2  e8f91d0000           call 0x9d2ba0
// 009d0da7  8bf0                 mov esi, eax
// 009d0da9  e9e8010000           jmp 0x9d0f96
// 009d0dae  81ff10e20000         cmp edi, 0xe210
// 009d0db4  7522                 jne 0x9d0dd8
// 009d0db6  689c49c100           push 0xc1499c
// 009d0dbb  8d8c2488000000       lea ecx, [esp + 0x88]
// 009d0dc2  ff159c47b200         call dword ptr [0xb2479c]
// 009d0dc8  85c0                 test eax, eax
// 009d0dca  7520                 jne 0x9d0dec
// 009d0dcc  e86f210000           call 0x9d2f40
// 009d0dd1  8bf0                 mov esi, eax
// 009d0dd3  e9be010000           jmp 0x9d0f96
// 009d0dd8  81ff10e10000         cmp edi, 0xe110
// 009d0dde  750c                 jne 0x9d0dec
// 009d0de0  e86b240000           call 0x9d3250
// 009d0de5  8bf0                 mov esi, eax
// 009d0de7  e9aa010000           jmp 0x9d0f96
// 009d0dec  e87f8c0400           call 0xa19a70
// 009d0df1  8bf0                 mov esi, eax
// 009d0df3  e99e010000           jmp 0x9d0f96
// 009d0df8  e8b303fcff           call 0x9911b0
// 009d0dfd  8bf0                 mov esi, eax
// 009d0dff  e992010000           jmp 0x9d0f96
// 009d0e04  e8c7320400           call 0xa140d0
// 009d0e09  8bf0                 mov esi, eax
// 009d0e0b  e986010000           jmp 0x9d0f96
// 009d0e10  e88b2d0000           call 0x9d3ba0
// 009d0e15  8bf0                 mov esi, eax
// 009d0e17  e97a010000           jmp 0x9d0f96
// 009d0e1c  e82f2e0000           call 0x9d3c50
// 009d0e21  8bf0                 mov esi, eax
// 009d0e23  e96e010000           jmp 0x9d0f96
// 009d0e28  e8c32e0000           call 0x9d3cf0
// 009d0e2d  8bf0                 mov esi, eax
// 009d0e2f  e962010000           jmp 0x9d0f96
// 009d0e34  e8c7bd0200           call 0x9fcc00
// 009d0e39  8bf0                 mov esi, eax
// 009d0e3b  e956010000           jmp 0x9d0f96
// 009d0e40  51                   push ecx
// 009d0e41  e85a82ffff           call 0x9c90a0
// 009d0e46  83c404               add esp, 4
// 009d0e49  8d942484000000       lea edx, [esp + 0x84]
// 009d0e50  52                   push edx
// 009d0e51  8d4c2418             lea ecx, [esp + 0x18]
// 009d0e55  8bf0                 mov esi, eax
// 009d0e57  ff158047b200         call dword ptr [0xb24780]
// 009d0e5d  8d442414             lea eax, [esp + 0x14]
// 009d0e61  50                   push eax
// 009d0e62  c684248000000002     mov byte ptr [esp + 0x80], 2
// 009d0e6a  e8b16cfbff           call 0x987b20
// 009d0e6f  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 009d0e76  83c404               add esp, 4
// 009d0e79  85ed                 test ebp, ebp
// 009d0e7b  747a                 je 0x9d0ef7
// 009d0e7d  33c0                 xor eax, eax
// 009d0e7f  89442438             mov dword ptr [esp + 0x38], eax
// 009d0e83  8d4c2414             lea ecx, [esp + 0x14]
// 009d0e87  89442434             mov dword ptr [esp + 0x34], eax
// 009d0e8b  8944243c             mov dword ptr [esp + 0x3c], eax
// 009d0e8f  89442440             mov dword ptr [esp + 0x40], eax
// 009d0e93  89442444             mov dword ptr [esp + 0x44], eax
// 009d0e97  89442448             mov dword ptr [esp + 0x48], eax
// 009d0e9b  8944244c             mov dword ptr [esp + 0x4c], eax
// 009d0e9f  c744243801000000     mov dword ptr [esp + 0x38], 1
// 009d0ea7  ff159847b200         call dword ptr [0xb24798]
// 009d0ead  8b5520               mov edx, dword ptr [ebp + 0x20]
// 009d0eb0  8d4c2434             lea ecx, [esp + 0x34]
// 009d0eb4  51                   push ecx
// 009d0eb5  6a00                 push 0
// 009d0eb7  6861280000           push 0x2861
// 009d0ebc  52                   push edx
// 009d0ebd  89442458             mov dword ptr [esp + 0x58], eax
// 009d0ec1  897c245c             mov dword ptr [esp + 0x5c], edi
// 009d0ec5  ff15043cb200         call dword ptr [0xb23c04]
// 009d0ecb  85c0                 test eax, eax
// 009d0ecd  7428                 je 0x9d0ef7
// 009d0ecf  8b442434             mov eax, dword ptr [esp + 0x34]
// 009d0ed3  50                   push eax
// 009d0ed4  e8d7a8ffff           call 0x9cb7b0
// 009d0ed9  50                   push eax
// 009d0eda  e80716fbff           call 0x9824e6
// 009d0edf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009d0ee3  83c408               add esp, 8
// 009d0ee6  51                   push ecx
// 009d0ee7  8d4c2418             lea ecx, [esp + 0x18]
// 009d0eeb  8be8                 mov ebp, eax
// 009d0eed  ff157847b200         call dword ptr [0xb24778]
// 009d0ef3  85ed                 test ebp, ebp
// 009d0ef5  750f                 jne 0x9d0f06
// 009d0ef7  8b542424             mov edx, dword ptr [esp + 0x24]
// 009d0efb  52                   push edx
// 009d0efc  e8bfa8ffff           call 0x9cb7c0
// 009d0f01  83c404               add esp, 4
// 009d0f04  8be8                 mov ebp, eax
// 009d0f06  8d4c2414             lea ecx, [esp + 0x14]
// 009d0f0a  ff159847b200         call dword ptr [0xb24798]
// 009d0f10  50                   push eax
// 009d0f11  8bcd                 mov ecx, ebp
// 009d0f13  e8d810fdff           call 0x9a1ff0
// 009d0f18  c744242c8ceab400     mov dword ptr [esp + 0x2c], 0xb4ea8c
// 009d0f20  c744243000000000     mov dword ptr [esp + 0x30], 0
// 009d0f28  c644247c03           mov byte ptr [esp + 0x7c], 3
// 009d0f2d  85db                 test ebx, ebx
// 009d0f2f  752a                 jne 0x9d0f5b
// 009d0f31  85ff                 test edi, edi
// 009d0f33  7636                 jbe 0x9d0f6b
// 009d0f35  57                   push edi
// 009d0f36  8d4c2430             lea ecx, [esp + 0x30]
// 009d0f3a  e86195a5ff           call 0x42a4a0
// 009d0f3f  85c0                 test eax, eax
// 009d0f41  7428                 je 0x9d0f6b
// 009d0f43  8b442430             mov eax, dword ptr [esp + 0x30]
// 009d0f47  53                   push ebx
// 009d0f48  50                   push eax
// 009d0f49  ff15d03ab200         call dword ptr [0xb23ad0]
// 009d0f4f  50                   push eax
// 009d0f50  e81318fbff           call 0x982768
// 009d0f55  8bd8                 mov ebx, eax
// 009d0f57  85db                 test ebx, ebx
// 009d0f59  7410                 je 0x9d0f6b
// 009d0f5b  8b5500               mov edx, dword ptr [ebp]
// 009d0f5e  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 009d0f64  6a00                 push 0
// 009d0f66  53                   push ebx
// 009d0f67  8bcd                 mov ecx, ebp
// 009d0f69  ffd0                 call eax
// 009d0f6b  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 009d0f71  8d4c242c             lea ecx, [esp + 0x2c]
// 009d0f75  c644247c02           mov byte ptr [esp + 0x7c], 2
// 009d0f7a  c744242c8ceab400     mov dword ptr [esp + 0x2c], 0xb4ea8c
// 009d0f82  e8c91afbff           call 0x982a50
// 009d0f87  8d4c2414             lea ecx, [esp + 0x14]
// 009d0f8b  c644247c01           mov byte ptr [esp + 0x7c], 1
// 009d0f90  ff15d047b200         call dword ptr [0xb247d0]
// 009d0f96  85f6                 test esi, esi
// 009d0f98  751e                 jne 0x9d0fb8
// 009d0f9a  8d4c2468             lea ecx, [esp + 0x68]
// 009d0f9e  ff15d047b200         call dword ptr [0xb247d0]
// 009d0fa4  8d8c2484000000       lea ecx, [esp + 0x84]
// 009d0fab  ff15d047b200         call dword ptr [0xb247d0]
// 009d0fb1  33c0                 xor eax, eax
// 009d0fb3  e916010000           jmp 0x9d10ce
// 009d0fb8  8b442420             mov eax, dword ptr [esp + 0x20]
// 009d0fbc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d0fc0  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 009d0fc6  398648010000         cmp dword ptr [esi + 0x148], eax
// 009d0fcc  740d                 je 0x9d0fdb
// 009d0fce  8bce                 mov ecx, esi
// 009d0fd0  898648010000         mov dword ptr [esi + 0x148], eax
// 009d0fd6  e8a537fbff           call 0x984780
// 009d0fdb  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 009d0fdf  57                   push edi
// 009d0fe0  8bcb                 mov ecx, ebx
// 009d0fe2  e80912fdff           call 0x9a21f0
// 009d0fe7  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 009d0fee  8be8                 mov ebp, eax
// 009d0ff0  7571                 jne 0x9d1063
// 009d0ff2  85ed                 test ebp, ebp
// 009d0ff4  753e                 jne 0x9d1034
// 009d0ff6  85db                 test ebx, ebx
// 009d0ff8  7411                 je 0x9d100b
// 009d0ffa  394368               cmp dword ptr [ebx + 0x68], eax
// 009d0ffd  740c                 je 0x9d100b
// 009d0fff  85ff                 test edi, edi
// 009d1001  7608                 jbe 0x9d100b
// 009d1003  81ffffffff0f         cmp edi, 0xfffffff
// 009d1009  721f                 jb 0x9d102a
// 009d100b  57                   push edi
// 009d100c  8bce                 mov ecx, esi
// 009d100e  e89d38fbff           call 0x9848b0
// 009d1013  8d8c2484000000       lea ecx, [esp + 0x84]
// 009d101a  ff159847b200         call dword ptr [0xb24798]
// 009d1020  50                   push eax
// 009d1021  8bce                 mov ecx, esi
// 009d1023  e87840fbff           call 0x9850a0
// 009d1028  eb39                 jmp 0x9d1063
// 009d102a  57                   push edi
// 009d102b  8bcb                 mov ecx, ebx
// 009d102d  e8ae11fdff           call 0x9a21e0
// 009d1032  8be8                 mov ebp, eax
// 009d1034  8b16                 mov edx, dword ptr [esi]
// 009d1036  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 009d103c  55                   push ebp
// 009d103d  8bce                 mov ecx, esi
// 009d103f  ffd0                 call eax
// 009d1041  8d4d40               lea ecx, [ebp + 0x40]
// 009d1044  ff156046b200         call dword ptr [0xb24660]
// 009d104a  84c0                 test al, al
// 009d104c  7415                 je 0x9d1063
// 009d104e  8d8c2484000000       lea ecx, [esp + 0x84]
// 009d1055  ff159847b200         call dword ptr [0xb24798]
// 009d105b  50                   push eax
// 009d105c  8bcd                 mov ecx, ebp
// 009d105e  e87d56fbff           call 0x9866e0
// 009d1063  8b442428             mov eax, dword ptr [esp + 0x28]
// 009d1067  85c0                 test eax, eax
// 009d1069  7408                 je 0x9d1073
// 009d106b  50                   push eax
// 009d106c  8bce                 mov ecx, esi
// 009d106e  e88d3afbff           call 0x984b00
// 009d1073  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009d1077  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 009d107a  6a01                 push 1
// 009d107c  56                   push esi
// 009d107d  51                   push ecx
// 009d107e  8d4f24               lea ecx, [edi + 0x24]
// 009d1081  e84aa2feff           call 0x9bb2d0
// 009d1086  8b17                 mov edx, dword ptr [edi]
// 009d1088  8b4268               mov eax, dword ptr [edx + 0x68]
// 009d108b  56                   push esi
// 009d108c  8bcf                 mov ecx, edi
// 009d108e  ffd0                 call eax
// 009d1090  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 009d1097  85c0                 test eax, eax
// 009d1099  741a                 je 0x9d10b5
// 009d109b  8d4c2450             lea ecx, [esp + 0x50]
// 009d109f  51                   push ecx
// 009d10a0  6a00                 push 0
// 009d10a2  8974245c             mov dword ptr [esp + 0x5c], esi
// 009d10a6  8b5020               mov edx, dword ptr [eax + 0x20]
// 009d10a9  685f280000           push 0x285f
// 009d10ae  52                   push edx
// 009d10af  ff15043cb200         call dword ptr [0xb23c04]
// 009d10b5  8d4c2468             lea ecx, [esp + 0x68]
// 009d10b9  ff15d047b200         call dword ptr [0xb247d0]
// 009d10bf  8d8c2484000000       lea ecx, [esp + 0x84]
// 009d10c6  ff15d047b200         call dword ptr [0xb247d0]
// 009d10cc  8bc6                 mov eax, esi
// 009d10ce  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009d10d2  64890d00000000       mov dword ptr fs:[0], ecx
// 009d10d9  59                   pop ecx
// 009d10da  5f                   pop edi
// 009d10db  5e                   pop esi
// 009d10dc  5d                   pop ebp
// 009d10dd  5b                   pop ebx
// 009d10de  83c46c               add esp, 0x6c
// 009d10e1  c20800               ret 8
// 009d10e4  720d                 jb 0x9d10f3
// 009d10e6  9d                   popfd 
// 009d10e7  00400e               add byte ptr [eax + 0xe], al
// 009d10ea  9d                   popfd 
// 009d10eb  00400e               add byte ptr [eax + 0xe], al
// 009d10ee  9d                   popfd 
// 009d10ef  00400e               add byte ptr [eax + 0xe], al
// 009d10f2  9d                   popfd 
// 009d10f3  00f8                 add al, bh
// 009d10f5  0d9d00040e           or eax, 0xe04009d
// 009d10fa  9d                   popfd 
// 009d10fb  009a0f9d0010         add byte ptr [edx + 0x10009d0f], bl
// 009d1101  0e                   push cs
// 009d1102  9d                   popfd 
// 009d1103  001c0e               add byte ptr [esi + ecx], bl
// 009d1106  9d                   popfd 
// 009d1107  00340e               add byte ptr [esi + ecx], dh
// 009d110a  9d                   popfd 
// 009d110b  0028                 add byte ptr [eax], ch
// 009d110d  0e                   push cs
// 009d110e  9d                   popfd 
// copied from an identical function in another client (function ?AddMenuItem@CXTPControls@@QAEPAVCXTPControl@@PAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp