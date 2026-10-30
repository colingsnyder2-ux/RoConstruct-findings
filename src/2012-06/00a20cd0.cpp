// roc 2012-06 00a20cd0  unit: CXTPRibbonBar  size: 1372 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a20cd0
//
// 00a20cd0  6aff                 push -1
// 00a20cd2  680545ae00           push 0xae4505
// 00a20cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00a20cdd  50                   push eax
// 00a20cde  83ec2c               sub esp, 0x2c
// 00a20ce1  53                   push ebx
// 00a20ce2  55                   push ebp
// 00a20ce3  56                   push esi
// 00a20ce4  57                   push edi
// 00a20ce5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a20cea  33c4                 xor eax, esp
// 00a20cec  50                   push eax
// 00a20ced  8d442440             lea eax, [esp + 0x40]
// 00a20cf1  64a300000000         mov dword ptr fs:[0], eax
// 00a20cf7  8be9                 mov ebp, ecx
// 00a20cf9  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00a20d00  752f                 jne 0xa20d31
// 00a20d02  e8e91ff7ff           call 0x992cf0
// 00a20d07  8b10                 mov edx, dword ptr [eax]
// 00a20d09  8bc8                 mov ecx, eax
// 00a20d0b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00a20d0e  ffd0                 call eax
// 00a20d10  8bcd                 mov ecx, ebp
// 00a20d12  8bf0                 mov esi, eax
// 00a20d14  e8274cf7ff           call 0x995940
// 00a20d19  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a20d1c  56                   push esi
// 00a20d1d  55                   push ebp
// 00a20d1e  685c280000           push 0x285c
// 00a20d23  51                   push ecx
// 00a20d24  ff15043cb200         call dword ptr [0xb23c04]
// 00a20d2a  8bc6                 mov eax, esi
// 00a20d2c  e9ba040000           jmp 0xa211eb
// 00a20d31  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a20d35  85db                 test ebx, ebx
// 00a20d37  0f84a2000000         je 0xa20ddf
// 00a20d3d  83bbfc0000000a       cmp dword ptr [ebx + 0xfc], 0xa
// 00a20d44  753b                 jne 0xa20d81
// 00a20d46  8b13                 mov edx, dword ptr [ebx]
// 00a20d48  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00a20d4e  8bcb                 mov ecx, ebx
// 00a20d50  ffd0                 call eax
// 00a20d52  85c0                 test eax, eax
// 00a20d54  752b                 jne 0xa20d81
// 00a20d56  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00a20d5c  50                   push eax
// 00a20d5d  e84eaafaff           call 0x9cb7b0
// 00a20d62  50                   push eax
// 00a20d63  e87e17f6ff           call 0x9824e6
// 00a20d68  83c408               add esp, 8
// 00a20d6b  85c0                 test eax, eax
// 00a20d6d  7412                 je 0xa20d81
// 00a20d6f  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00a20d75  8b8880010000         mov ecx, dword ptr [eax + 0x180]
// 00a20d7b  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a20d7f  8bd9                 mov ebx, ecx
// 00a20d81  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 00a20d87  33d2                 xor edx, edx
// 00a20d89  3d83250000           cmp eax, 0x2583
// 00a20d8e  0f94c2               sete dl
// 00a20d91  bf8ceab400           mov edi, 0xb4ea8c
// 00a20d96  33c0                 xor eax, eax
// 00a20d98  897c2438             mov dword ptr [esp + 0x38], edi
// 00a20d9c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a20da0  8bf2                 mov esi, edx
// 00a20da2  89442448             mov dword ptr [esp + 0x48], eax
// 00a20da6  e84577fdff           call 0x9f84f0
// 00a20dab  8b10                 mov edx, dword ptr [eax]
// 00a20dad  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a20db0  8bce                 mov ecx, esi
// 00a20db2  f7d9                 neg ecx
// 00a20db4  1bc9                 sbb ecx, ecx
// 00a20db6  81c182250000         add ecx, 0x2582
// 00a20dbc  51                   push ecx
// 00a20dbd  8d4c243c             lea ecx, [esp + 0x3c]
// 00a20dc1  51                   push ecx
// 00a20dc2  8bc8                 mov ecx, eax
// 00a20dc4  ffd2                 call edx
// 00a20dc6  85c0                 test eax, eax
// 00a20dc8  751c                 jne 0xa20de6
// 00a20dca  8d4c2438             lea ecx, [esp + 0x38]
// 00a20dce  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a20dd6  897c2438             mov dword ptr [esp + 0x38], edi
// 00a20dda  e8711cf6ff           call 0x982a50
// 00a20ddf  33c0                 xor eax, eax
// 00a20de1  e905040000           jmp 0xa211eb
// 00a20de6  8bcd                 mov ecx, ebp
// 00a20de8  e8031ff7ff           call 0x992cf0
// 00a20ded  50                   push eax
// 00a20dee  e8cda9faff           call 0x9cb7c0
// 00a20df3  8bf8                 mov edi, eax
// 00a20df5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00a20df8  83c404               add esp, 4
// 00a20dfb  894738               mov dword ptr [edi + 0x38], eax
// 00a20dfe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a20e02  6a00                 push 0
// 00a20e04  51                   push ecx
// 00a20e05  897c2430             mov dword ptr [esp + 0x30], edi
// 00a20e09  ff15d03ab200         call dword ptr [0xb23ad0]
// 00a20e0f  50                   push eax
// 00a20e10  e85319f6ff           call 0x982768
// 00a20e15  8b17                 mov edx, dword ptr [edi]
// 00a20e17  6a01                 push 1
// 00a20e19  50                   push eax
// 00a20e1a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00a20e20  8bcf                 mov ecx, edi
// 00a20e22  ffd0                 call eax
// 00a20e24  6874010000           push 0x174
// 00a20e29  e8ec12f6ff           call 0x98211a
// 00a20e2e  83c404               add esp, 4
// 00a20e31  89442430             mov dword ptr [esp + 0x30], eax
// 00a20e35  c644244801           mov byte ptr [esp + 0x48], 1
// 00a20e3a  85c0                 test eax, eax
// 00a20e3c  7409                 je 0xa20e47
// 00a20e3e  8bc8                 mov ecx, eax
// 00a20e40  e88b17fbff           call 0x9d25d0
// 00a20e45  eb02                 jmp 0xa20e49
// 00a20e47  33c0                 xor eax, eax
// 00a20e49  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00a20e4f  f7de                 neg esi
// 00a20e51  1bf6                 sbb esi, esi
// 00a20e53  83e6fe               and esi, 0xfffffffe
// 00a20e56  83c602               add esi, 2
// 00a20e59  56                   push esi
// 00a20e5a  50                   push eax
// 00a20e5b  c644245000           mov byte ptr [esp + 0x50], 0
// 00a20e60  e8ab02fbff           call 0x9d1110
// 00a20e65  8b10                 mov edx, dword ptr [eax]
// 00a20e67  8bc8                 mov ecx, eax
// 00a20e69  8b4264               mov eax, dword ptr [edx + 0x64]
// 00a20e6c  6a01                 push 1
// 00a20e6e  ffd0                 call eax
// 00a20e70  53                   push ebx
// 00a20e71  8bcd                 mov ecx, ebp
// 00a20e73  e848eaffff           call 0xa1f8c0
// 00a20e78  8b5500               mov edx, dword ptr [ebp]
// 00a20e7b  89442420             mov dword ptr [esp + 0x20], eax
// 00a20e7f  8b8234020000         mov eax, dword ptr [edx + 0x234]
// 00a20e85  53                   push ebx
// 00a20e86  8bcd                 mov ecx, ebp
// 00a20e88  ffd0                 call eax
// 00a20e8a  8bcb                 mov ecx, ebx
// 00a20e8c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a20e90  e88b07fdff           call 0x9f1620
// 00a20e95  a810                 test al, 0x10
// 00a20e97  7511                 jne 0xa20eaa
// 00a20e99  83bbac00000000       cmp dword ptr [ebx + 0xac], 0
// 00a20ea0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a20ea8  7408                 je 0xa20eb2
// 00a20eaa  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00a20eb2  33f6                 xor esi, esi
// 00a20eb4  8bcf                 mov ecx, edi
// 00a20eb6  89742414             mov dword ptr [esp + 0x14], esi
// 00a20eba  e8412cf7ff           call 0x993b00
// 00a20ebf  85c0                 test eax, eax
// 00a20ec1  0f8ef1020000         jle 0xa211b8
// 00a20ec7  56                   push esi
// 00a20ec8  8bcf                 mov ecx, edi
// 00a20eca  e8412cf7ff           call 0x993b10
// 00a20ecf  8bd8                 mov ebx, eax
// 00a20ed1  81bb8400000090250000 cmp dword ptr [ebx + 0x84], 0x2590
// 00a20edb  750c                 jne 0xa20ee9
// 00a20edd  6887250000           push 0x2587
// 00a20ee2  8bcb                 mov ecx, ebx
// 00a20ee4  e8c739f6ff           call 0x9848b0
// 00a20ee9  81bb8400000091250000 cmp dword ptr [ebx + 0x84], 0x2591
// 00a20ef3  750c                 jne 0xa20f01
// 00a20ef5  6888250000           push 0x2588
// 00a20efa  8bcb                 mov ecx, ebx
// 00a20efc  e8af39f6ff           call 0x9848b0
// 00a20f01  81bb8400000092250000 cmp dword ptr [ebx + 0x84], 0x2592
// 00a20f0b  750c                 jne 0xa20f19
// 00a20f0d  688a250000           push 0x258a
// 00a20f12  8bcb                 mov ecx, ebx
// 00a20f14  e89739f6ff           call 0x9848b0
// 00a20f19  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 00a20f1f  057bdaffff           add eax, 0xffffda7b
// 00a20f24  83f809               cmp eax, 9
// 00a20f27  0f8777020000         ja 0xa211a4
// 00a20f2d  ff24850412a200       jmp dword ptr [eax*4 + 0xa21204]
// 00a20f34  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a20f39  7429                 je 0xa20f64
// 00a20f3b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a20f40  7522                 jne 0xa20f64
// 00a20f42  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00a20f49  7419                 je 0xa20f64
// 00a20f4b  b801000000           mov eax, 1
// 00a20f50  50                   push eax
// 00a20f51  8bcb                 mov ecx, ebx
// 00a20f53  e8a83ef6ff           call 0x984e00
// 00a20f58  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a20f5c  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 00a20f5f  e937020000           jmp 0xa2119b
// 00a20f64  33c0                 xor eax, eax
// 00a20f66  50                   push eax
// 00a20f67  8bcb                 mov ecx, ebx
// 00a20f69  e8923ef6ff           call 0x984e00
// 00a20f6e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a20f72  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 00a20f75  e921020000           jmp 0xa2119b
// 00a20f7a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a20f7f  7517                 jne 0xa20f98
// 00a20f81  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a20f86  7510                 jne 0xa20f98
// 00a20f88  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00a20f8f  7407                 je 0xa20f98
// 00a20f91  b801000000           mov eax, 1
// 00a20f96  eb02                 jmp 0xa20f9a
// 00a20f98  33c0                 xor eax, eax
// 00a20f9a  50                   push eax
// 00a20f9b  8bcb                 mov ecx, ebx
// 00a20f9d  e85e3ef6ff           call 0x984e00
// 00a20fa2  8b13                 mov edx, dword ptr [ebx]
// 00a20fa4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a20fa8  8b5268               mov edx, dword ptr [edx + 0x68]
// 00a20fab  50                   push eax
// 00a20fac  8bcb                 mov ecx, ebx
// 00a20fae  ffd2                 call edx
// 00a20fb0  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a20fb4  89437c               mov dword ptr [ebx + 0x7c], eax
// 00a20fb7  e9df010000           jmp 0xa2119b
// 00a20fbc  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00a20fc3  0f85d2010000         jne 0xa2119b
// 00a20fc9  68c9230000           push 0x23c9
// 00a20fce  8bcb                 mov ecx, ebx
// 00a20fd0  e8db5bf6ff           call 0x986bb0
// 00a20fd5  e9c1010000           jmp 0xa2119b
// 00a20fda  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00a20fe1  741b                 je 0xa20ffe
// 00a20fe3  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 00a20fea  7512                 jne 0xa20ffe
// 00a20fec  b801000000           mov eax, 1
// 00a20ff1  50                   push eax
// 00a20ff2  8bcb                 mov ecx, ebx
// 00a20ff4  e8073ef6ff           call 0x984e00
// 00a20ff9  e99d010000           jmp 0xa2119b
// 00a20ffe  33c0                 xor eax, eax
// 00a21000  50                   push eax
// 00a21001  8bcb                 mov ecx, ebx
// 00a21003  e8f83df6ff           call 0x984e00
// 00a21008  e98e010000           jmp 0xa2119b
// 00a2100d  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00a21014  74e8                 je 0xa20ffe
// 00a21016  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 00a2101d  74df                 je 0xa20ffe
// 00a2101f  b801000000           mov eax, 1
// 00a21024  50                   push eax
// 00a21025  8bcb                 mov ecx, ebx
// 00a21027  e8d43df6ff           call 0x984e00
// 00a2102c  e96a010000           jmp 0xa2119b
// 00a21031  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00a21037  6a08                 push 8
// 00a21039  56                   push esi
// 00a2103a  e88113fbff           call 0x9d23c0
// 00a2103f  8bd8                 mov ebx, eax
// 00a21041  6a01                 push 1
// 00a21043  8bcb                 mov ecx, ebx
// 00a21045  e8b63af6ff           call 0x984b00
// 00a2104a  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00a21051  74ab                 je 0xa20ffe
// 00a21053  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 00a21059  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00a2105d  749f                 je 0xa20ffe
// 00a2105f  b801000000           mov eax, 1
// 00a21064  50                   push eax
// 00a21065  8bcb                 mov ecx, ebx
// 00a21067  e8943df6ff           call 0x984e00
// 00a2106c  e92a010000           jmp 0xa2119b
// 00a21071  8b8d60020000         mov ecx, dword ptr [ebp + 0x260]
// 00a21077  51                   push ecx
// 00a21078  8bcb                 mov ecx, ebx
// 00a2107a  e8813df6ff           call 0x984e00
// 00a2107f  8b958c020000         mov edx, dword ptr [ebp + 0x28c]
// 00a21085  52                   push edx
// 00a21086  8bcb                 mov ecx, ebx
// 00a21088  e8a33ca1ff           call 0x434d30
// 00a2108d  e909010000           jmp 0xa2119b
// 00a21092  8b03                 mov eax, dword ptr [ebx]
// 00a21094  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a2109a  6a01                 push 1
// 00a2109c  8bcb                 mov ecx, ebx
// 00a2109e  ffd2                 call edx
// 00a210a0  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 00a210a6  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a210a9  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a210ad  85c9                 test ecx, ecx
// 00a210af  0f84ef000000         je 0xa211a4
// 00a210b5  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00a210bc  0f84e2000000         je 0xa211a4
// 00a210c2  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 00a210c6  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a210ce  0f8ec7000000         jle 0xa2119b
// 00a210d4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a210d8  50                   push eax
// 00a210d9  e8a221f7ff           call 0x993280
// 00a210de  6880010000           push 0x180
// 00a210e3  8bf0                 mov esi, eax
// 00a210e5  e83010f6ff           call 0x98211a
// 00a210ea  83c404               add esp, 4
// 00a210ed  89442434             mov dword ptr [esp + 0x34], eax
// 00a210f1  c644244802           mov byte ptr [esp + 0x48], 2
// 00a210f6  85c0                 test eax, eax
// 00a210f8  7413                 je 0xa2110d
// 00a210fa  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 00a21100  56                   push esi
// 00a21101  51                   push ecx
// 00a21102  8bc8                 mov ecx, eax
// 00a21104  e807d0ffff           call 0xa1e110
// 00a21109  8bf8                 mov edi, eax
// 00a2110b  eb02                 jmp 0xa2110f
// 00a2110d  33ff                 xor edi, edi
// 00a2110f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a21113  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a21117  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00a2111d  6a01                 push 1
// 00a2111f  52                   push edx
// 00a21120  6a00                 push 0
// 00a21122  6a00                 push 0
// 00a21124  57                   push edi
// 00a21125  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00a2112a  e8710dfbff           call 0x9d1ea0
// 00a2112f  8b06                 mov eax, dword ptr [esi]
// 00a21131  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a21134  8d4c2430             lea ecx, [esp + 0x30]
// 00a21138  51                   push ecx
// 00a21139  8bce                 mov ecx, esi
// 00a2113b  ffd2                 call edx
// 00a2113d  8bc8                 mov ecx, eax
// 00a2113f  c644244803           mov byte ptr [esp + 0x48], 3
// 00a21144  ff159847b200         call dword ptr [0xb24798]
// 00a2114a  50                   push eax
// 00a2114b  8bcf                 mov ecx, edi
// 00a2114d  e84e3ff6ff           call 0x9850a0
// 00a21152  8d4c2430             lea ecx, [esp + 0x30]
// 00a21156  c644244800           mov byte ptr [esp + 0x48], 0
// 00a2115b  ff15d047b200         call dword ptr [0xb247d0]
// 00a21161  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 00a21167  56                   push esi
// 00a21168  e833430500           call 0xa754a0
// 00a2116d  85c0                 test eax, eax
// 00a2116f  7408                 je 0xa21179
// 00a21171  50                   push eax
// 00a21172  8bcf                 mov ecx, edi
// 00a21174  e8d7cfffff           call 0xa1e150
// 00a21179  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a2117d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a21181  ff442414             inc dword ptr [esp + 0x14]
// 00a21185  40                   inc eax
// 00a21186  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00a21189  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a2118d  0f8c41ffffff         jl 0xa210d4
// 00a21193  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a21197  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a2119b  6a08                 push 8
// 00a2119d  8bcb                 mov ecx, ebx
// 00a2119f  e87c39f6ff           call 0x984b20
// 00a211a4  46                   inc esi
// 00a211a5  8bcf                 mov ecx, edi
// 00a211a7  89742414             mov dword ptr [esp + 0x14], esi
// 00a211ab  e85029f7ff           call 0x993b00
// 00a211b0  3bf0                 cmp esi, eax
// 00a211b2  0f8c0ffdffff         jl 0xa20ec7
// 00a211b8  8bcd                 mov ecx, ebp
// 00a211ba  e88147f7ff           call 0x995940
// 00a211bf  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a211c2  57                   push edi
// 00a211c3  55                   push ebp
// 00a211c4  685c280000           push 0x285c
// 00a211c9  52                   push edx
// 00a211ca  ff15043cb200         call dword ptr [0xb23c04]
// 00a211d0  8d4c2438             lea ecx, [esp + 0x38]
// 00a211d4  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a211dc  c74424388ceab400     mov dword ptr [esp + 0x38], 0xb4ea8c
// 00a211e4  e86718f6ff           call 0x982a50
// 00a211e9  8bc7                 mov eax, edi
// 00a211eb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a211ef  64890d00000000       mov dword ptr fs:[0], ecx
// 00a211f6  59                   pop ecx
// 00a211f7  5f                   pop edi
// 00a211f8  5e                   pop esi
// 00a211f9  5d                   pop ebp
// 00a211fa  5b                   pop ebx
// 00a211fb  83c438               add esp, 0x38
// 00a211fe  c20400               ret 4
// 00a21201  8d4900               lea ecx, [ecx]
// 00a21204  340f                 xor al, 0xf
// 00a21206  a2007a0fa2           mov byte ptr [0xa20f7a00], al
// 00a2120b  00bc0fa200da0f       add byte ptr [edi + ecx + 0xfda00a2], bh
// 00a21212  a200a411a2           mov byte ptr [0xa211a400], al
// 00a21217  000d10a200a4         add byte ptr [0xa400a210], cl
// 00a2121d  11a2007110a2         adc dword ptr [edx - 0x5def8f00], esp
// 00a21223  009210a20031         add byte ptr [edx + 0x3100a210], dl
// copied from an identical function in another client (function ?CreateContextMenu@CXTPRibbonBar@@MAEPAVCXTPPopupBar@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp