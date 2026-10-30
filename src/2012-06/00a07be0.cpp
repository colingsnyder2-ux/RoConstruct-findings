// roc 2012-06 00a07be0  unit: CXTPOffice2007Theme  size: 4998 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a07be0
//
// 00a07be0  6aff                 push -1
// 00a07be2  682432ae00           push 0xae3224
// 00a07be7  64a100000000         mov eax, dword ptr fs:[0]
// 00a07bed  50                   push eax
// 00a07bee  81ec64010000         sub esp, 0x164
// 00a07bf4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a07bf9  33c4                 xor eax, esp
// 00a07bfb  89842460010000       mov dword ptr [esp + 0x160], eax
// 00a07c02  53                   push ebx
// 00a07c03  55                   push ebp
// 00a07c04  56                   push esi
// 00a07c05  57                   push edi
// 00a07c06  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a07c0b  33c4                 xor eax, esp
// 00a07c0d  50                   push eax
// 00a07c0e  8d842478010000       lea eax, [esp + 0x178]
// 00a07c15  64a300000000         mov dword ptr fs:[0], eax
// 00a07c1b  8bf1                 mov esi, ecx
// 00a07c1d  e81e6e0000           call 0xa0ea40
// 00a07c22  8d4c2420             lea ecx, [esp + 0x20]
// 00a07c26  e85558feff           call 0x9ed480
// 00a07c2b  33ed                 xor ebp, ebp
// 00a07c2d  bf90010000           mov edi, 0x190
// 00a07c32  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 00a07c39  396e70               cmp dword ptr [esi + 0x70], ebp
// 00a07c3c  7415                 je 0xa07c53
// 00a07c3e  e84d19fcff           call 0x9c9590
// 00a07c43  8bc8                 mov ecx, eax
// 00a07c45  e87622fcff           call 0x9c9ec0
// 00a07c4a  85c0                 test eax, eax
// 00a07c4c  7405                 je 0xa07c53
// 00a07c4e  c644245205           mov byte ptr [esp + 0x52], 5
// 00a07c53  897c2448             mov dword ptr [esp + 0x48], edi
// 00a07c57  39ae18010000         cmp dword ptr [esi + 0x118], ebp
// 00a07c5d  7434                 je 0xa07c93
// 00a07c5f  8dbe1c010000         lea edi, [esi + 0x11c]
// 00a07c65  8bcf                 mov ecx, edi
// 00a07c67  ff159847b200         call dword ptr [0xb24798]
// 00a07c6d  50                   push eax
// 00a07c6e  e83d00f8ff           call 0x987cb0
// 00a07c73  83c404               add esp, 4
// 00a07c76  85c0                 test eax, eax
// 00a07c78  7419                 je 0xa07c93
// 00a07c7a  8bcf                 mov ecx, edi
// 00a07c7c  ff159847b200         call dword ptr [0xb24798]
// 00a07c82  50                   push eax
// 00a07c83  8d442458             lea eax, [esp + 0x58]
// 00a07c87  6a20                 push 0x20
// 00a07c89  50                   push eax
// 00a07c8a  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a07c90  83c40c               add esp, 0xc
// 00a07c93  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a07c97  83c10a               add ecx, 0xa
// 00a07c9a  83f909               cmp ecx, 9
// 00a07c9d  7708                 ja 0xa07ca7
// 00a07c9f  c7442438f5ffffff     mov dword ptr [esp + 0x38], 0xfffffff5
// 00a07ca7  39aebc050000         cmp dword ptr [esi + 0x5bc], ebp
// 00a07cad  8dbeb4050000         lea edi, [esi + 0x5b4]
// 00a07cb3  7505                 jne 0xa07cba
// 00a07cb5  396f04               cmp dword ptr [edi + 4], ebp
// 00a07cb8  751a                 jne 0xa07cd4
// 00a07cba  8bcf                 mov ecx, edi
// 00a07cbc  e80baaf7ff           call 0x9826cc
// 00a07cc1  8d542438             lea edx, [esp + 0x38]
// 00a07cc5  52                   push edx
// 00a07cc6  ff15a820b200         call dword ptr [0xb220a8]
// 00a07ccc  50                   push eax
// 00a07ccd  8bcf                 mov ecx, edi
// 00a07ccf  e804aaf7ff           call 0x9826d8
// 00a07cd4  55                   push ebp
// 00a07cd5  8d442420             lea eax, [esp + 0x20]
// 00a07cd9  50                   push eax
// 00a07cda  55                   push ebp
// 00a07cdb  bb01000000           mov ebx, 1
// 00a07ce0  6a05                 push 5
// 00a07ce2  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00a07ce6  ff15543ab200         call dword ptr [0xb23a54]
// 00a07cec  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 00a07cf2  6a04                 push 4
// 00a07cf4  ffd7                 call edi
// 00a07cf6  83f811               cmp eax, 0x11
// 00a07cf9  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 00a07cff  7f05                 jg 0xa07d06
// 00a07d01  b811000000           mov eax, 0x11
// 00a07d06  6a04                 push 4
// 00a07d08  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 00a07d0e  ffd7                 call edi
// 00a07d10  40                   inc eax
// 00a07d11  83f812               cmp eax, 0x12
// 00a07d14  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 00a07d1a  7f05                 jg 0xa07d21
// 00a07d1c  b812000000           mov eax, 0x12
// 00a07d21  51                   push ecx
// 00a07d22  8bcc                 mov ecx, esp
// 00a07d24  89642418             mov dword ptr [esp + 0x18], esp
// 00a07d28  68c0c8c100           push 0xc1c8c0
// 00a07d2d  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 00a07d33  ff15c847b200         call dword ptr [0xb247c8]
// 00a07d39  51                   push ecx
// 00a07d3a  8bcc                 mov ecx, esp
// 00a07d3c  89642420             mov dword ptr [esp + 0x20], esp
// 00a07d40  68ac33c100           push 0xc133ac
// 00a07d45  89ac248c010000       mov dword ptr [esp + 0x18c], ebp
// 00a07d4c  ff15c847b200         call dword ptr [0xb247c8]
// 00a07d52  8bce                 mov ecx, esi
// 00a07d54  e807fbffff           call 0xa07860
// 00a07d59  83cfff               or edi, 0xffffffff
// 00a07d5c  8bc8                 mov ecx, eax
// 00a07d5e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a07d65  e8c6e50500           call 0xa66330
// 00a07d6a  51                   push ecx
// 00a07d6b  8bcc                 mov ecx, esp
// 00a07d6d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07d71  68b0c8c100           push 0xc1c8b0
// 00a07d76  894624               mov dword ptr [esi + 0x24], eax
// 00a07d79  ff15c847b200         call dword ptr [0xb247c8]
// 00a07d7f  51                   push ecx
// 00a07d80  8bcc                 mov ecx, esp
// 00a07d82  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07d86  68ac33c100           push 0xc133ac
// 00a07d8b  899c248c010000       mov dword ptr [esp + 0x18c], ebx
// 00a07d92  ff15c847b200         call dword ptr [0xb247c8]
// 00a07d98  8bce                 mov ecx, esi
// 00a07d9a  e8c1faffff           call 0xa07860
// 00a07d9f  8bc8                 mov ecx, eax
// 00a07da1  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a07da8  e883e50500           call 0xa66330
// 00a07dad  d9057027b600         fld dword ptr [0xb62770]
// 00a07db3  83ec08               sub esp, 8
// 00a07db6  d95c2404             fstp dword ptr [esp + 4]
// 00a07dba  8bcc                 mov ecx, esp
// 00a07dbc  89642420             mov dword ptr [esp + 0x20], esp
// 00a07dc0  6898c8c100           push 0xc1c898
// 00a07dc5  8986fc050000         mov dword ptr [esi + 0x5fc], eax
// 00a07dcb  ff15c847b200         call dword ptr [0xb247c8]
// 00a07dd1  51                   push ecx
// 00a07dd2  8bcc                 mov ecx, esp
// 00a07dd4  89642420             mov dword ptr [esp + 0x20], esp
// 00a07dd8  68ac33c100           push 0xc133ac
// 00a07ddd  c784249001000002000000 mov dword ptr [esp + 0x190], 2
// 00a07de8  ff15c847b200         call dword ptr [0xb247c8]
// 00a07dee  8bce                 mov ecx, esi
// 00a07df0  e86bfaffff           call 0xa07860
// 00a07df5  8bc8                 mov ecx, eax
// 00a07df7  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a07dfe  e82de50500           call 0xa66330
// 00a07e03  50                   push eax
// 00a07e04  51                   push ecx
// 00a07e05  8bcc                 mov ecx, esp
// 00a07e07  89642424             mov dword ptr [esp + 0x24], esp
// 00a07e0b  6880c8c100           push 0xc1c880
// 00a07e10  ff15c847b200         call dword ptr [0xb247c8]
// 00a07e16  51                   push ecx
// 00a07e17  8bcc                 mov ecx, esp
// 00a07e19  89642424             mov dword ptr [esp + 0x24], esp
// 00a07e1d  68ac33c100           push 0xc133ac
// 00a07e22  c784249401000003000000 mov dword ptr [esp + 0x194], 3
// 00a07e2d  ff15c847b200         call dword ptr [0xb247c8]
// 00a07e33  8bce                 mov ecx, esi
// 00a07e35  e826faffff           call 0xa07860
// 00a07e3a  8bc8                 mov ecx, eax
// 00a07e3c  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a07e43  e8e8e40500           call 0xa66330
// 00a07e48  50                   push eax
// 00a07e49  8d8e00060000         lea ecx, [esi + 0x600]
// 00a07e4f  e8ec4efbff           call 0x9bcd40
// 00a07e54  d9057027b600         fld dword ptr [0xb62770]
// 00a07e5a  83ec08               sub esp, 8
// 00a07e5d  d95c2404             fstp dword ptr [esp + 4]
// 00a07e61  8bcc                 mov ecx, esp
// 00a07e63  89642420             mov dword ptr [esp + 0x20], esp
// 00a07e67  6868c8c100           push 0xc1c868
// 00a07e6c  ff15c847b200         call dword ptr [0xb247c8]
// 00a07e72  51                   push ecx
// 00a07e73  8bcc                 mov ecx, esp
// 00a07e75  89642420             mov dword ptr [esp + 0x20], esp
// 00a07e79  68ac33c100           push 0xc133ac
// 00a07e7e  c784249001000004000000 mov dword ptr [esp + 0x190], 4
// 00a07e89  ff15c847b200         call dword ptr [0xb247c8]
// 00a07e8f  8bce                 mov ecx, esi
// 00a07e91  e8caf9ffff           call 0xa07860
// 00a07e96  8bc8                 mov ecx, eax
// 00a07e98  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a07e9f  e88ce40500           call 0xa66330
// 00a07ea4  50                   push eax
// 00a07ea5  51                   push ecx
// 00a07ea6  8bcc                 mov ecx, esp
// 00a07ea8  89642424             mov dword ptr [esp + 0x24], esp
// 00a07eac  684cc8c100           push 0xc1c84c
// 00a07eb1  ff15c847b200         call dword ptr [0xb247c8]
// 00a07eb7  51                   push ecx
// 00a07eb8  8bcc                 mov ecx, esp
// 00a07eba  89642424             mov dword ptr [esp + 0x24], esp
// 00a07ebe  68ac33c100           push 0xc133ac
// 00a07ec3  c784249401000005000000 mov dword ptr [esp + 0x194], 5
// 00a07ece  ff15c847b200         call dword ptr [0xb247c8]
// 00a07ed4  8bce                 mov ecx, esi
// 00a07ed6  e885f9ffff           call 0xa07860
// 00a07edb  8bc8                 mov ecx, eax
// 00a07edd  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a07ee4  e847e40500           call 0xa66330
// 00a07ee9  50                   push eax
// 00a07eea  8d8e20060000         lea ecx, [esi + 0x620]
// 00a07ef0  e84b4efbff           call 0x9bcd40
// 00a07ef5  51                   push ecx
// 00a07ef6  8bcc                 mov ecx, esp
// 00a07ef8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07efc  6840c8c100           push 0xc1c840
// 00a07f01  ff15c847b200         call dword ptr [0xb247c8]
// 00a07f07  51                   push ecx
// 00a07f08  8bcc                 mov ecx, esp
// 00a07f0a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07f0e  684893ba00           push 0xba9348
// 00a07f13  c784248c01000006000000 mov dword ptr [esp + 0x18c], 6
// 00a07f1e  ff15c847b200         call dword ptr [0xb247c8]
// 00a07f24  8bce                 mov ecx, esi
// 00a07f26  e835f9ffff           call 0xa07860
// 00a07f2b  8bc8                 mov ecx, eax
// 00a07f2d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a07f34  e8f7e30500           call 0xa66330
// 00a07f39  50                   push eax
// 00a07f3a  8d8e5c040000         lea ecx, [esi + 0x45c]
// 00a07f40  e86b58fbff           call 0x9bd7b0
// 00a07f45  d9058885b600         fld dword ptr [0xb68588]
// 00a07f4b  83ec08               sub esp, 8
// 00a07f4e  d95c2404             fstp dword ptr [esp + 4]
// 00a07f52  8bcc                 mov ecx, esp
// 00a07f54  89642420             mov dword ptr [esp + 0x20], esp
// 00a07f58  6830c8c100           push 0xc1c830
// 00a07f5d  ff15c847b200         call dword ptr [0xb247c8]
// 00a07f63  51                   push ecx
// 00a07f64  8bcc                 mov ecx, esp
// 00a07f66  89642420             mov dword ptr [esp + 0x20], esp
// 00a07f6a  684893ba00           push 0xba9348
// 00a07f6f  c784249001000007000000 mov dword ptr [esp + 0x190], 7
// 00a07f7a  ff15c847b200         call dword ptr [0xb247c8]
// 00a07f80  8bce                 mov ecx, esi
// 00a07f82  e8d9f8ffff           call 0xa07860
// 00a07f87  8bc8                 mov ecx, eax
// 00a07f89  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a07f90  e89be30500           call 0xa66330
// 00a07f95  50                   push eax
// 00a07f96  51                   push ecx
// 00a07f97  8bcc                 mov ecx, esp
// 00a07f99  89642424             mov dword ptr [esp + 0x24], esp
// 00a07f9d  681cc8c100           push 0xc1c81c
// 00a07fa2  ff15c847b200         call dword ptr [0xb247c8]
// 00a07fa8  51                   push ecx
// 00a07fa9  8bcc                 mov ecx, esp
// 00a07fab  89642424             mov dword ptr [esp + 0x24], esp
// 00a07faf  684893ba00           push 0xba9348
// 00a07fb4  c784249401000008000000 mov dword ptr [esp + 0x194], 8
// 00a07fbf  ff15c847b200         call dword ptr [0xb247c8]
// 00a07fc5  8bce                 mov ecx, esi
// 00a07fc7  e894f8ffff           call 0xa07860
// 00a07fcc  8bc8                 mov ecx, eax
// 00a07fce  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a07fd5  e856e30500           call 0xa66330
// 00a07fda  50                   push eax
// 00a07fdb  8d8e7c040000         lea ecx, [esi + 0x47c]
// 00a07fe1  e85a4dfbff           call 0x9bcd40
// 00a07fe6  51                   push ecx
// 00a07fe7  8bcc                 mov ecx, esp
// 00a07fe9  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07fed  6808c8c100           push 0xc1c808
// 00a07ff2  ff15c847b200         call dword ptr [0xb247c8]
// 00a07ff8  51                   push ecx
// 00a07ff9  8bcc                 mov ecx, esp
// 00a07ffb  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a07fff  684893ba00           push 0xba9348
// 00a08004  c784248c01000009000000 mov dword ptr [esp + 0x18c], 9
// 00a0800f  ff15c847b200         call dword ptr [0xb247c8]
// 00a08015  8bce                 mov ecx, esi
// 00a08017  e844f8ffff           call 0xa07860
// 00a0801c  8bc8                 mov ecx, eax
// 00a0801e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08025  e806e30500           call 0xa66330
// 00a0802a  d9058885b600         fld dword ptr [0xb68588]
// 00a08030  83ec08               sub esp, 8
// 00a08033  d95c2404             fstp dword ptr [esp + 4]
// 00a08037  8bcc                 mov ecx, esp
// 00a08039  89642420             mov dword ptr [esp + 0x20], esp
// 00a0803d  68ecc7c100           push 0xc1c7ec
// 00a08042  898620050000         mov dword ptr [esi + 0x520], eax
// 00a08048  ff15c847b200         call dword ptr [0xb247c8]
// 00a0804e  51                   push ecx
// 00a0804f  8bcc                 mov ecx, esp
// 00a08051  89642420             mov dword ptr [esp + 0x20], esp
// 00a08055  684893ba00           push 0xba9348
// 00a0805a  c78424900100000a000000 mov dword ptr [esp + 0x190], 0xa
// 00a08065  ff15c847b200         call dword ptr [0xb247c8]
// 00a0806b  8bce                 mov ecx, esi
// 00a0806d  e8eef7ffff           call 0xa07860
// 00a08072  8bc8                 mov ecx, eax
// 00a08074  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a0807b  e8b0e20500           call 0xa66330
// 00a08080  50                   push eax
// 00a08081  51                   push ecx
// 00a08082  8bcc                 mov ecx, esp
// 00a08084  89642424             mov dword ptr [esp + 0x24], esp
// 00a08088  68d0c7c100           push 0xc1c7d0
// 00a0808d  ff15c847b200         call dword ptr [0xb247c8]
// 00a08093  51                   push ecx
// 00a08094  8bcc                 mov ecx, esp
// 00a08096  89642424             mov dword ptr [esp + 0x24], esp
// 00a0809a  684893ba00           push 0xba9348
// 00a0809f  c78424940100000b000000 mov dword ptr [esp + 0x194], 0xb
// 00a080aa  ff15c847b200         call dword ptr [0xb247c8]
// 00a080b0  8bce                 mov ecx, esi
// 00a080b2  e8a9f7ffff           call 0xa07860
// 00a080b7  8bc8                 mov ecx, eax
// 00a080b9  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a080c0  e86be20500           call 0xa66330
// 00a080c5  50                   push eax
// 00a080c6  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a080cc  e86f4cfbff           call 0x9bcd40
// 00a080d1  d9057027b600         fld dword ptr [0xb62770]
// 00a080d7  83ec08               sub esp, 8
// 00a080da  d95c2404             fstp dword ptr [esp + 4]
// 00a080de  8bcc                 mov ecx, esp
// 00a080e0  89642420             mov dword ptr [esp + 0x20], esp
// 00a080e4  68b4c7c100           push 0xc1c7b4
// 00a080e9  ff15c847b200         call dword ptr [0xb247c8]
// 00a080ef  51                   push ecx
// 00a080f0  8bcc                 mov ecx, esp
// 00a080f2  89642420             mov dword ptr [esp + 0x20], esp
// 00a080f6  684893ba00           push 0xba9348
// 00a080fb  c78424900100000c000000 mov dword ptr [esp + 0x190], 0xc
// 00a08106  ff15c847b200         call dword ptr [0xb247c8]
// 00a0810c  8bce                 mov ecx, esi
// 00a0810e  e84df7ffff           call 0xa07860
// 00a08113  8bc8                 mov ecx, eax
// 00a08115  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a0811c  e80fe20500           call 0xa66330
// 00a08121  50                   push eax
// 00a08122  51                   push ecx
// 00a08123  8bcc                 mov ecx, esp
// 00a08125  89642424             mov dword ptr [esp + 0x24], esp
// 00a08129  6894c7c100           push 0xc1c794
// 00a0812e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08134  51                   push ecx
// 00a08135  8bcc                 mov ecx, esp
// 00a08137  89642424             mov dword ptr [esp + 0x24], esp
// 00a0813b  684893ba00           push 0xba9348
// 00a08140  c78424940100000d000000 mov dword ptr [esp + 0x194], 0xd
// 00a0814b  ff15c847b200         call dword ptr [0xb247c8]
// 00a08151  8bce                 mov ecx, esi
// 00a08153  e808f7ffff           call 0xa07860
// 00a08158  8bc8                 mov ecx, eax
// 00a0815a  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08161  e8cae10500           call 0xa66330
// 00a08166  8d9efc040000         lea ebx, [esi + 0x4fc]
// 00a0816c  50                   push eax
// 00a0816d  8bcb                 mov ecx, ebx
// 00a0816f  e8cc4bfbff           call 0x9bcd40
// 00a08174  d9057027b600         fld dword ptr [0xb62770]
// 00a0817a  83ec08               sub esp, 8
// 00a0817d  d95c2404             fstp dword ptr [esp + 4]
// 00a08181  8bcc                 mov ecx, esp
// 00a08183  89642420             mov dword ptr [esp + 0x20], esp
// 00a08187  683cb8c100           push 0xc1b83c
// 00a0818c  ff15c847b200         call dword ptr [0xb247c8]
// 00a08192  51                   push ecx
// 00a08193  8bcc                 mov ecx, esp
// 00a08195  89642420             mov dword ptr [esp + 0x20], esp
// 00a08199  684893ba00           push 0xba9348
// 00a0819e  c78424900100000e000000 mov dword ptr [esp + 0x190], 0xe
// 00a081a9  ff15c847b200         call dword ptr [0xb247c8]
// 00a081af  8bce                 mov ecx, esi
// 00a081b1  e8aaf6ffff           call 0xa07860
// 00a081b6  8bc8                 mov ecx, eax
// 00a081b8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a081bf  e86ce10500           call 0xa66330
// 00a081c4  50                   push eax
// 00a081c5  51                   push ecx
// 00a081c6  8bcc                 mov ecx, esp
// 00a081c8  89642424             mov dword ptr [esp + 0x24], esp
// 00a081cc  681cb8c100           push 0xc1b81c
// 00a081d1  ff15c847b200         call dword ptr [0xb247c8]
// 00a081d7  51                   push ecx
// 00a081d8  8bcc                 mov ecx, esp
// 00a081da  89642424             mov dword ptr [esp + 0x24], esp
// 00a081de  684893ba00           push 0xba9348
// 00a081e3  c78424940100000f000000 mov dword ptr [esp + 0x194], 0xf
// 00a081ee  ff15c847b200         call dword ptr [0xb247c8]
// 00a081f4  8bce                 mov ecx, esi
// 00a081f6  e865f6ffff           call 0xa07860
// 00a081fb  8bc8                 mov ecx, eax
// 00a081fd  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08204  e827e10500           call 0xa66330
// 00a08209  50                   push eax
// 00a0820a  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00a08210  e82b4bfbff           call 0x9bcd40
// 00a08215  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00a08218  898ec8040000         mov dword ptr [esi + 0x4c8], ecx
// 00a0821e  8b5308               mov edx, dword ptr [ebx + 8]
// 00a08221  8996c4040000         mov dword ptr [esi + 0x4c4], edx
// 00a08227  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00a0822a  8986d4040000         mov dword ptr [esi + 0x4d4], eax
// 00a08230  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00a08233  898ed0040000         mov dword ptr [esi + 0x4d0], ecx
// 00a08239  d9431c               fld dword ptr [ebx + 0x1c]
// 00a0823c  51                   push ecx
// 00a0823d  d99ed8040000         fstp dword ptr [esi + 0x4d8]
// 00a08243  8bcc                 mov ecx, esp
// 00a08245  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08249  687cc7c100           push 0xc1c77c
// 00a0824e  896e20               mov dword ptr [esi + 0x20], ebp
// 00a08251  ff15c847b200         call dword ptr [0xb247c8]
// 00a08257  51                   push ecx
// 00a08258  8bcc                 mov ecx, esp
// 00a0825a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0825e  684893ba00           push 0xba9348
// 00a08263  c784248c01000010000000 mov dword ptr [esp + 0x18c], 0x10
// 00a0826e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08274  8bce                 mov ecx, esi
// 00a08276  e8e5f5ffff           call 0xa07860
// 00a0827b  8bc8                 mov ecx, eax
// 00a0827d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08284  e8a7e00500           call 0xa66330
// 00a08289  51                   push ecx
// 00a0828a  8bcc                 mov ecx, esp
// 00a0828c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08290  6870c7c100           push 0xc1c770
// 00a08295  898638050000         mov dword ptr [esi + 0x538], eax
// 00a0829b  ff15c847b200         call dword ptr [0xb247c8]
// 00a082a1  51                   push ecx
// 00a082a2  8bcc                 mov ecx, esp
// 00a082a4  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a082a8  684893ba00           push 0xba9348
// 00a082ad  c784248c01000011000000 mov dword ptr [esp + 0x18c], 0x11
// 00a082b8  ff15c847b200         call dword ptr [0xb247c8]
// 00a082be  8bce                 mov ecx, esi
// 00a082c0  e89bf5ffff           call 0xa07860
// 00a082c5  8bc8                 mov ecx, eax
// 00a082c7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a082ce  e85de00500           call 0xa66330
// 00a082d3  51                   push ecx
// 00a082d4  8bcc                 mov ecx, esp
// 00a082d6  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a082da  6860c7c100           push 0xc1c760
// 00a082df  8986f8050000         mov dword ptr [esi + 0x5f8], eax
// 00a082e5  c78654030000f6f6f600 mov dword ptr [esi + 0x354], 0xf6f6f6
// 00a082ef  ff15c847b200         call dword ptr [0xb247c8]
// 00a082f5  51                   push ecx
// 00a082f6  8bcc                 mov ecx, esp
// 00a082f8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a082fc  684893ba00           push 0xba9348
// 00a08301  c784248c01000012000000 mov dword ptr [esp + 0x18c], 0x12
// 00a0830c  ff15c847b200         call dword ptr [0xb247c8]
// 00a08312  8bce                 mov ecx, esi
// 00a08314  e847f5ffff           call 0xa07860
// 00a08319  8bc8                 mov ecx, eax
// 00a0831b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08322  e809e00500           call 0xa66330
// 00a08327  51                   push ecx
// 00a08328  8bcc                 mov ecx, esp
// 00a0832a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0832e  6850c7c100           push 0xc1c750
// 00a08333  89866c030000         mov dword ptr [esi + 0x36c], eax
// 00a08339  ff15c847b200         call dword ptr [0xb247c8]
// 00a0833f  51                   push ecx
// 00a08340  8bcc                 mov ecx, esp
// 00a08342  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08346  684893ba00           push 0xba9348
// 00a0834b  c784248c01000013000000 mov dword ptr [esp + 0x18c], 0x13
// 00a08356  ff15c847b200         call dword ptr [0xb247c8]
// 00a0835c  8bce                 mov ecx, esi
// 00a0835e  e8fdf4ffff           call 0xa07860
// 00a08363  8bc8                 mov ecx, eax
// 00a08365  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a0836c  e8bfdf0500           call 0xa66330
// 00a08371  898630030000         mov dword ptr [esi + 0x330], eax
// 00a08377  89ae78030000         mov dword ptr [esi + 0x378], ebp
// 00a0837d  89ae84030000         mov dword ptr [esi + 0x384], ebp
// 00a08383  89ae90030000         mov dword ptr [esi + 0x390], ebp
// 00a08389  b88d8d8d00           mov eax, 0x8d8d8d
// 00a0838e  51                   push ecx
// 00a0838f  8bcc                 mov ecx, esp
// 00a08391  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08395  6844c7c100           push 0xc1c744
// 00a0839a  898638040000         mov dword ptr [esi + 0x438], eax
// 00a083a0  898620040000         mov dword ptr [esi + 0x420], eax
// 00a083a6  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00a083ac  ff15c847b200         call dword ptr [0xb247c8]
// 00a083b2  51                   push ecx
// 00a083b3  8bcc                 mov ecx, esp
// 00a083b5  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a083b9  684c87c100           push 0xc1874c
// 00a083be  c784248c01000014000000 mov dword ptr [esp + 0x18c], 0x14
// 00a083c9  ff15c847b200         call dword ptr [0xb247c8]
// 00a083cf  8bce                 mov ecx, esi
// 00a083d1  e88af4ffff           call 0xa07860
// 00a083d6  8bc8                 mov ecx, eax
// 00a083d8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a083df  e84cdf0500           call 0xa66330
// 00a083e4  51                   push ecx
// 00a083e5  8bcc                 mov ecx, esp
// 00a083e7  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a083eb  6830c7c100           push 0xc1c730
// 00a083f0  8986f0030000         mov dword ptr [esi + 0x3f0], eax
// 00a083f6  ff15c847b200         call dword ptr [0xb247c8]
// 00a083fc  51                   push ecx
// 00a083fd  8bcc                 mov ecx, esp
// 00a083ff  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08403  684893ba00           push 0xba9348
// 00a08408  c784248c01000015000000 mov dword ptr [esp + 0x18c], 0x15
// 00a08413  ff15c847b200         call dword ptr [0xb247c8]
// 00a08419  8bce                 mov ecx, esi
// 00a0841b  e840f4ffff           call 0xa07860
// 00a08420  8bc8                 mov ecx, eax
// 00a08422  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08429  e802df0500           call 0xa66330
// 00a0842e  51                   push ecx
// 00a0842f  8bcc                 mov ecx, esp
// 00a08431  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08435  6818c7c100           push 0xc1c718
// 00a0843a  89464c               mov dword ptr [esi + 0x4c], eax
// 00a0843d  ff15c847b200         call dword ptr [0xb247c8]
// 00a08443  51                   push ecx
// 00a08444  8bcc                 mov ecx, esp
// 00a08446  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0844a  684893ba00           push 0xba9348
// 00a0844f  c784248c01000016000000 mov dword ptr [esp + 0x18c], 0x16
// 00a0845a  ff15c847b200         call dword ptr [0xb247c8]
// 00a08460  8bce                 mov ecx, esi
// 00a08462  e8f9f3ffff           call 0xa07860
// 00a08467  8bc8                 mov ecx, eax
// 00a08469  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08470  e8bbde0500           call 0xa66330
// 00a08475  51                   push ecx
// 00a08476  8bcc                 mov ecx, esp
// 00a08478  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0847c  6804c7c100           push 0xc1c704
// 00a08481  894658               mov dword ptr [esi + 0x58], eax
// 00a08484  ff15c847b200         call dword ptr [0xb247c8]
// 00a0848a  51                   push ecx
// 00a0848b  8bcc                 mov ecx, esp
// 00a0848d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08491  684893ba00           push 0xba9348
// 00a08496  c784248c01000017000000 mov dword ptr [esp + 0x18c], 0x17
// 00a084a1  ff15c847b200         call dword ptr [0xb247c8]
// 00a084a7  8bce                 mov ecx, esi
// 00a084a9  e8b2f3ffff           call 0xa07860
// 00a084ae  8bc8                 mov ecx, eax
// 00a084b0  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a084b7  e874de0500           call 0xa66330
// 00a084bc  51                   push ecx
// 00a084bd  8bcc                 mov ecx, esp
// 00a084bf  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a084c3  68f4c6c100           push 0xc1c6f4
// 00a084c8  898644040000         mov dword ptr [esi + 0x444], eax
// 00a084ce  ff15c847b200         call dword ptr [0xb247c8]
// 00a084d4  51                   push ecx
// 00a084d5  8bcc                 mov ecx, esp
// 00a084d7  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a084db  68d456b900           push 0xb956d4
// 00a084e0  c784248c01000018000000 mov dword ptr [esp + 0x18c], 0x18
// 00a084eb  ff15c847b200         call dword ptr [0xb247c8]
// 00a084f1  8bce                 mov ecx, esi
// 00a084f3  e868f3ffff           call 0xa07860
// 00a084f8  8bc8                 mov ecx, eax
// 00a084fa  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08501  e82ade0500           call 0xa66330
// 00a08506  51                   push ecx
// 00a08507  8bcc                 mov ecx, esp
// 00a08509  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0850d  68e8c6c100           push 0xc1c6e8
// 00a08512  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 00a08518  ff15c847b200         call dword ptr [0xb247c8]
// 00a0851e  51                   push ecx
// 00a0851f  8bcc                 mov ecx, esp
// 00a08521  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08525  684c87c100           push 0xc1874c
// 00a0852a  c784248c01000019000000 mov dword ptr [esp + 0x18c], 0x19
// 00a08535  ff15c847b200         call dword ptr [0xb247c8]
// 00a0853b  8bce                 mov ecx, esi
// 00a0853d  e81ef3ffff           call 0xa07860
// 00a08542  8bc8                 mov ecx, eax
// 00a08544  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a0854b  e8e0dd0500           call 0xa66330
// 00a08550  8986cc030000         mov dword ptr [esi + 0x3cc], eax
// 00a08556  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 00a0855c  3bc7                 cmp eax, edi
// 00a0855e  7506                 jne 0xa08566
// 00a08560  8b8620050000         mov eax, dword ptr [esi + 0x520]
// 00a08566  51                   push ecx
// 00a08567  8bcc                 mov ecx, esp
// 00a08569  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0856d  68dcc6c100           push 0xc1c6dc
// 00a08572  8986d8030000         mov dword ptr [esi + 0x3d8], eax
// 00a08578  ff15c847b200         call dword ptr [0xb247c8]
// 00a0857e  51                   push ecx
// 00a0857f  8bcc                 mov ecx, esp
// 00a08581  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08585  684893ba00           push 0xba9348
// 00a0858a  c784248c0100001a000000 mov dword ptr [esp + 0x18c], 0x1a
// 00a08595  ff15c847b200         call dword ptr [0xb247c8]
// 00a0859b  8bce                 mov ecx, esi
// 00a0859d  e8bef2ffff           call 0xa07860
// 00a085a2  8bc8                 mov ecx, eax
// 00a085a4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a085ab  e880dd0500           call 0xa66330
// 00a085b0  51                   push ecx
// 00a085b1  8bcc                 mov ecx, esp
// 00a085b3  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a085b7  68c8c6c100           push 0xc1c6c8
// 00a085bc  8986d0020000         mov dword ptr [esi + 0x2d0], eax
// 00a085c2  ff15c847b200         call dword ptr [0xb247c8]
// 00a085c8  51                   push ecx
// 00a085c9  8bcc                 mov ecx, esp
// 00a085cb  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a085cf  684893ba00           push 0xba9348
// 00a085d4  c784248c0100001b000000 mov dword ptr [esp + 0x18c], 0x1b
// 00a085df  ff15c847b200         call dword ptr [0xb247c8]
// 00a085e5  8bce                 mov ecx, esi
// 00a085e7  e874f2ffff           call 0xa07860
// 00a085ec  8bc8                 mov ecx, eax
// 00a085ee  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a085f5  e836dd0500           call 0xa66330
// 00a085fa  51                   push ecx
// 00a085fb  8bcc                 mov ecx, esp
// 00a085fd  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08601  68b4c6c100           push 0xc1c6b4
// 00a08606  89863c030000         mov dword ptr [esi + 0x33c], eax
// 00a0860c  ff15c847b200         call dword ptr [0xb247c8]
// 00a08612  51                   push ecx
// 00a08613  8bcc                 mov ecx, esp
// 00a08615  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08619  684893ba00           push 0xba9348
// 00a0861e  c784248c0100001c000000 mov dword ptr [esp + 0x18c], 0x1c
// 00a08629  ff15c847b200         call dword ptr [0xb247c8]
// 00a0862f  8bce                 mov ecx, esi
// 00a08631  e82af2ffff           call 0xa07860
// 00a08636  8bc8                 mov ecx, eax
// 00a08638  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a0863f  e8ecdc0500           call 0xa66330
// 00a08644  51                   push ecx
// 00a08645  8bcc                 mov ecx, esp
// 00a08647  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0864b  68a0c6c100           push 0xc1c6a0
// 00a08650  898648030000         mov dword ptr [esi + 0x348], eax
// 00a08656  ff15c847b200         call dword ptr [0xb247c8]
// 00a0865c  51                   push ecx
// 00a0865d  8bcc                 mov ecx, esp
// 00a0865f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08663  68d456b900           push 0xb956d4
// 00a08668  c784248c0100001d000000 mov dword ptr [esp + 0x18c], 0x1d
// 00a08673  ff15c847b200         call dword ptr [0xb247c8]
// 00a08679  8bce                 mov ecx, esi
// 00a0867b  e8e0f1ffff           call 0xa07860
// 00a08680  8bc8                 mov ecx, eax
// 00a08682  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08689  e8a2dc0500           call 0xa66330
// 00a0868e  51                   push ecx
// 00a0868f  8bcc                 mov ecx, esp
// 00a08691  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08695  6888c6c100           push 0xc1c688
// 00a0869a  898640060000         mov dword ptr [esi + 0x640], eax
// 00a086a0  ff15c847b200         call dword ptr [0xb247c8]
// 00a086a6  c78424840100001e000000 mov dword ptr [esp + 0x184], 0x1e
// 00a086b1  51                   push ecx
// 00a086b2  8bcc                 mov ecx, esp
// 00a086b4  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a086b8  68d456b900           push 0xb956d4
// 00a086bd  ff15c847b200         call dword ptr [0xb247c8]
// 00a086c3  8bce                 mov ecx, esi
// 00a086c5  e896f1ffff           call 0xa07860
// 00a086ca  8bc8                 mov ecx, eax
// 00a086cc  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a086d3  e858dc0500           call 0xa66330
// 00a086d8  51                   push ecx
// 00a086d9  8bcc                 mov ecx, esp
// 00a086db  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a086df  6870c6c100           push 0xc1c670
// 00a086e4  898644060000         mov dword ptr [esi + 0x644], eax
// 00a086ea  ff15c847b200         call dword ptr [0xb247c8]
// 00a086f0  51                   push ecx
// 00a086f1  8bcc                 mov ecx, esp
// 00a086f3  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a086f7  68d456b900           push 0xb956d4
// 00a086fc  c784248c0100001f000000 mov dword ptr [esp + 0x18c], 0x1f
// 00a08707  ff15c847b200         call dword ptr [0xb247c8]
// 00a0870d  8bce                 mov ecx, esi
// 00a0870f  e84cf1ffff           call 0xa07860
// 00a08714  8bc8                 mov ecx, eax
// 00a08716  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a0871d  e80edc0500           call 0xa66330
// 00a08722  51                   push ecx
// 00a08723  8bcc                 mov ecx, esp
// 00a08725  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08729  685cc6c100           push 0xc1c65c
// 00a0872e  898648060000         mov dword ptr [esi + 0x648], eax
// 00a08734  ff15c847b200         call dword ptr [0xb247c8]
// 00a0873a  51                   push ecx
// 00a0873b  8bcc                 mov ecx, esp
// 00a0873d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08741  684c87c100           push 0xc1874c
// 00a08746  c784248c01000020000000 mov dword ptr [esp + 0x18c], 0x20
// 00a08751  ff15c847b200         call dword ptr [0xb247c8]
// 00a08757  8bce                 mov ecx, esi
// 00a08759  e802f1ffff           call 0xa07860
// 00a0875e  8bc8                 mov ecx, eax
// 00a08760  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08767  e8c4db0500           call 0xa66330
// 00a0876c  51                   push ecx
// 00a0876d  8bcc                 mov ecx, esp
// 00a0876f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08773  6844c6c100           push 0xc1c644
// 00a08778  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 00a0877e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08784  51                   push ecx
// 00a08785  8bcc                 mov ecx, esp
// 00a08787  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0878b  684c87c100           push 0xc1874c
// 00a08790  c784248c01000021000000 mov dword ptr [esp + 0x18c], 0x21
// 00a0879b  ff15c847b200         call dword ptr [0xb247c8]
// 00a087a1  8bce                 mov ecx, esi
// 00a087a3  e8b8f0ffff           call 0xa07860
// 00a087a8  8bc8                 mov ecx, eax
// 00a087aa  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a087b1  e87adb0500           call 0xa66330
// 00a087b6  51                   push ecx
// 00a087b7  8bcc                 mov ecx, esp
// 00a087b9  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a087bd  6830c6c100           push 0xc1c630
// 00a087c2  8986e8020000         mov dword ptr [esi + 0x2e8], eax
// 00a087c8  ff15c847b200         call dword ptr [0xb247c8]
// 00a087ce  51                   push ecx
// 00a087cf  8bcc                 mov ecx, esp
// 00a087d1  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a087d5  684c87c100           push 0xc1874c
// 00a087da  c784248c01000022000000 mov dword ptr [esp + 0x18c], 0x22
// 00a087e5  ff15c847b200         call dword ptr [0xb247c8]
// 00a087eb  8bce                 mov ecx, esi
// 00a087ed  e86ef0ffff           call 0xa07860
// 00a087f2  8bc8                 mov ecx, eax
// 00a087f4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a087fb  e830db0500           call 0xa66330
// 00a08800  51                   push ecx
// 00a08801  8bcc                 mov ecx, esp
// 00a08803  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08807  6818c6c100           push 0xc1c618
// 00a0880c  8986f4020000         mov dword ptr [esi + 0x2f4], eax
// 00a08812  ff15c847b200         call dword ptr [0xb247c8]
// 00a08818  51                   push ecx
// 00a08819  8bcc                 mov ecx, esp
// 00a0881b  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0881f  684c87c100           push 0xc1874c
// 00a08824  c784248c01000023000000 mov dword ptr [esp + 0x18c], 0x23
// 00a0882f  ff15c847b200         call dword ptr [0xb247c8]
// 00a08835  8bce                 mov ecx, esi
// 00a08837  e824f0ffff           call 0xa07860
// 00a0883c  8bc8                 mov ecx, eax
// 00a0883e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08845  e8e6da0500           call 0xa66330
// 00a0884a  51                   push ecx
// 00a0884b  8bcc                 mov ecx, esp
// 00a0884d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08851  6804c6c100           push 0xc1c604
// 00a08856  8986c0030000         mov dword ptr [esi + 0x3c0], eax
// 00a0885c  ff15c847b200         call dword ptr [0xb247c8]
// 00a08862  51                   push ecx
// 00a08863  8bcc                 mov ecx, esp
// 00a08865  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08869  684c87c100           push 0xc1874c
// 00a0886e  c784248c01000024000000 mov dword ptr [esp + 0x18c], 0x24
// 00a08879  ff15c847b200         call dword ptr [0xb247c8]
// 00a0887f  8bce                 mov ecx, esi
// 00a08881  e8daefffff           call 0xa07860
// 00a08886  8bc8                 mov ecx, eax
// 00a08888  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a0888f  e89cda0500           call 0xa66330
// 00a08894  51                   push ecx
// 00a08895  8bcc                 mov ecx, esp
// 00a08897  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0889b  68ecc5c100           push 0xc1c5ec
// 00a088a0  898618030000         mov dword ptr [esi + 0x318], eax
// 00a088a6  ff15c847b200         call dword ptr [0xb247c8]
// 00a088ac  51                   push ecx
// 00a088ad  8bcc                 mov ecx, esp
// 00a088af  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a088b3  684c87c100           push 0xc1874c
// 00a088b8  c784248c01000025000000 mov dword ptr [esp + 0x18c], 0x25
// 00a088c3  ff15c847b200         call dword ptr [0xb247c8]
// 00a088c9  8bce                 mov ecx, esi
// 00a088cb  e890efffff           call 0xa07860
// 00a088d0  8bc8                 mov ecx, eax
// 00a088d2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a088d9  e852da0500           call 0xa66330
// 00a088de  d9057027b600         fld dword ptr [0xb62770]
// 00a088e4  83ec08               sub esp, 8
// 00a088e7  d95c2404             fstp dword ptr [esp + 4]
// 00a088eb  8bcc                 mov ecx, esp
// 00a088ed  89642420             mov dword ptr [esp + 0x20], esp
// 00a088f1  68d4c5c100           push 0xc1c5d4
// 00a088f6  898624030000         mov dword ptr [esi + 0x324], eax
// 00a088fc  89ae9c030000         mov dword ptr [esi + 0x39c], ebp
// 00a08902  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 00a0890c  ff15c847b200         call dword ptr [0xb247c8]
// 00a08912  51                   push ecx
// 00a08913  8bcc                 mov ecx, esp
// 00a08915  89642420             mov dword ptr [esp + 0x20], esp
// 00a08919  684c87c100           push 0xc1874c
// 00a0891e  c784249001000026000000 mov dword ptr [esp + 0x190], 0x26
// 00a08929  ff15c847b200         call dword ptr [0xb247c8]
// 00a0892f  8bce                 mov ecx, esi
// 00a08931  e82aefffff           call 0xa07860
// 00a08936  8bc8                 mov ecx, eax
// 00a08938  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a0893f  e8ecd90500           call 0xa66330
// 00a08944  50                   push eax
// 00a08945  51                   push ecx
// 00a08946  8bcc                 mov ecx, esp
// 00a08948  89642424             mov dword ptr [esp + 0x24], esp
// 00a0894c  68bcc5c100           push 0xc1c5bc
// 00a08951  ff15c847b200         call dword ptr [0xb247c8]
// 00a08957  51                   push ecx
// 00a08958  8bcc                 mov ecx, esp
// 00a0895a  89642424             mov dword ptr [esp + 0x24], esp
// 00a0895e  684c87c100           push 0xc1874c
// 00a08963  c784249401000027000000 mov dword ptr [esp + 0x194], 0x27
// 00a0896e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08974  8bce                 mov ecx, esi
// 00a08976  e8e5eeffff           call 0xa07860
// 00a0897b  8bc8                 mov ecx, eax
// 00a0897d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08984  e8a7d90500           call 0xa66330
// 00a08989  50                   push eax
// 00a0898a  8d8e90050000         lea ecx, [esi + 0x590]
// 00a08990  e8ab43fbff           call 0x9bcd40
// 00a08995  d9057027b600         fld dword ptr [0xb62770]
// 00a0899b  83ec08               sub esp, 8
// 00a0899e  d95c2404             fstp dword ptr [esp + 4]
// 00a089a2  8bcc                 mov ecx, esp
// 00a089a4  89642420             mov dword ptr [esp + 0x20], esp
// 00a089a8  68a4c5c100           push 0xc1c5a4
// 00a089ad  ff15c847b200         call dword ptr [0xb247c8]
// 00a089b3  51                   push ecx
// 00a089b4  8bcc                 mov ecx, esp
// 00a089b6  89642420             mov dword ptr [esp + 0x20], esp
// 00a089ba  684c87c100           push 0xc1874c
// 00a089bf  c784249001000028000000 mov dword ptr [esp + 0x190], 0x28
// 00a089ca  ff15c847b200         call dword ptr [0xb247c8]
// 00a089d0  8bce                 mov ecx, esi
// 00a089d2  e889eeffff           call 0xa07860
// 00a089d7  8bc8                 mov ecx, eax
// 00a089d9  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a089e0  e84bd90500           call 0xa66330
// 00a089e5  50                   push eax
// 00a089e6  51                   push ecx
// 00a089e7  8bcc                 mov ecx, esp
// 00a089e9  89642424             mov dword ptr [esp + 0x24], esp
// 00a089ed  688cc5c100           push 0xc1c58c
// 00a089f2  ff15c847b200         call dword ptr [0xb247c8]
// 00a089f8  51                   push ecx
// 00a089f9  8bcc                 mov ecx, esp
// 00a089fb  89642424             mov dword ptr [esp + 0x24], esp
// 00a089ff  684c87c100           push 0xc1874c
// 00a08a04  c784249401000029000000 mov dword ptr [esp + 0x194], 0x29
// 00a08a0f  ff15c847b200         call dword ptr [0xb247c8]
// 00a08a15  8bce                 mov ecx, esi
// 00a08a17  e844eeffff           call 0xa07860
// 00a08a1c  8bc8                 mov ecx, eax
// 00a08a1e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08a25  e806d90500           call 0xa66330
// 00a08a2a  50                   push eax
// 00a08a2b  8d8e50050000         lea ecx, [esi + 0x550]
// 00a08a31  e80a43fbff           call 0x9bcd40
// 00a08a36  d9057027b600         fld dword ptr [0xb62770]
// 00a08a3c  83ec08               sub esp, 8
// 00a08a3f  d95c2404             fstp dword ptr [esp + 4]
// 00a08a43  8bcc                 mov ecx, esp
// 00a08a45  89642420             mov dword ptr [esp + 0x20], esp
// 00a08a49  6874c5c100           push 0xc1c574
// 00a08a4e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08a54  51                   push ecx
// 00a08a55  8bcc                 mov ecx, esp
// 00a08a57  89642420             mov dword ptr [esp + 0x20], esp
// 00a08a5b  684c87c100           push 0xc1874c
// 00a08a60  c78424900100002a000000 mov dword ptr [esp + 0x190], 0x2a
// 00a08a6b  ff15c847b200         call dword ptr [0xb247c8]
// 00a08a71  8bce                 mov ecx, esi
// 00a08a73  e8e8edffff           call 0xa07860
// 00a08a78  8bc8                 mov ecx, eax
// 00a08a7a  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a08a81  e8aad80500           call 0xa66330
// 00a08a86  50                   push eax
// 00a08a87  51                   push ecx
// 00a08a88  8bcc                 mov ecx, esp
// 00a08a8a  89642424             mov dword ptr [esp + 0x24], esp
// 00a08a8e  685cc5c100           push 0xc1c55c
// 00a08a93  ff15c847b200         call dword ptr [0xb247c8]
// 00a08a99  51                   push ecx
// 00a08a9a  8bcc                 mov ecx, esp
// 00a08a9c  89642424             mov dword ptr [esp + 0x24], esp
// 00a08aa0  684c87c100           push 0xc1874c
// 00a08aa5  c78424940100002b000000 mov dword ptr [esp + 0x194], 0x2b
// 00a08ab0  ff15c847b200         call dword ptr [0xb247c8]
// 00a08ab6  8bce                 mov ecx, esi
// 00a08ab8  e8a3edffff           call 0xa07860
// 00a08abd  8bc8                 mov ecx, eax
// 00a08abf  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08ac6  e865d80500           call 0xa66330
// 00a08acb  50                   push eax
// 00a08acc  8d8e70050000         lea ecx, [esi + 0x570]
// 00a08ad2  e86942fbff           call 0x9bcd40
// 00a08ad7  51                   push ecx
// 00a08ad8  8bcc                 mov ecx, esp
// 00a08ada  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08ade  684cc5c100           push 0xc1c54c
// 00a08ae3  ff15c847b200         call dword ptr [0xb247c8]
// 00a08ae9  51                   push ecx
// 00a08aea  8bcc                 mov ecx, esp
// 00a08aec  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08af0  684c87c100           push 0xc1874c
// 00a08af5  c784248c0100002c000000 mov dword ptr [esp + 0x18c], 0x2c
// 00a08b00  ff15c847b200         call dword ptr [0xb247c8]
// 00a08b06  8bce                 mov ecx, esi
// 00a08b08  e853edffff           call 0xa07860
// 00a08b0d  8bc8                 mov ecx, eax
// 00a08b0f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08b16  e815d80500           call 0xa66330
// 00a08b1b  51                   push ecx
// 00a08b1c  8bcc                 mov ecx, esp
// 00a08b1e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08b22  683cc5c100           push 0xc1c53c
// 00a08b27  8986cc050000         mov dword ptr [esi + 0x5cc], eax
// 00a08b2d  ff15c847b200         call dword ptr [0xb247c8]
// 00a08b33  51                   push ecx
// 00a08b34  8bcc                 mov ecx, esp
// 00a08b36  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08b3a  684c87c100           push 0xc1874c
// 00a08b3f  c784248c0100002d000000 mov dword ptr [esp + 0x18c], 0x2d
// 00a08b4a  ff15c847b200         call dword ptr [0xb247c8]
// 00a08b50  8bce                 mov ecx, esi
// 00a08b52  e809edffff           call 0xa07860
// 00a08b57  8bc8                 mov ecx, eax
// 00a08b59  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08b60  e8cbd70500           call 0xa66330
// 00a08b65  51                   push ecx
// 00a08b66  8bcc                 mov ecx, esp
// 00a08b68  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08b6c  682cc5c100           push 0xc1c52c
// 00a08b71  8986d0050000         mov dword ptr [esi + 0x5d0], eax
// 00a08b77  ff15c847b200         call dword ptr [0xb247c8]
// 00a08b7d  51                   push ecx
// 00a08b7e  8bcc                 mov ecx, esp
// 00a08b80  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08b84  684c87c100           push 0xc1874c
// 00a08b89  c784248c0100002e000000 mov dword ptr [esp + 0x18c], 0x2e
// 00a08b94  ff15c847b200         call dword ptr [0xb247c8]
// 00a08b9a  8bce                 mov ecx, esi
// 00a08b9c  e8bfecffff           call 0xa07860
// 00a08ba1  8bc8                 mov ecx, eax
// 00a08ba3  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08baa  e881d70500           call 0xa66330
// 00a08baf  51                   push ecx
// 00a08bb0  8bcc                 mov ecx, esp
// 00a08bb2  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08bb6  681cc5c100           push 0xc1c51c
// 00a08bbb  8986d4050000         mov dword ptr [esi + 0x5d4], eax
// 00a08bc1  ff15c847b200         call dword ptr [0xb247c8]
// 00a08bc7  51                   push ecx
// 00a08bc8  8bcc                 mov ecx, esp
// 00a08bca  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08bce  684c87c100           push 0xc1874c
// 00a08bd3  c784248c0100002f000000 mov dword ptr [esp + 0x18c], 0x2f
// 00a08bde  ff15c847b200         call dword ptr [0xb247c8]
// 00a08be4  8bce                 mov ecx, esi
// 00a08be6  e875ecffff           call 0xa07860
// 00a08beb  8bc8                 mov ecx, eax
// 00a08bed  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08bf4  e837d70500           call 0xa66330
// 00a08bf9  51                   push ecx
// 00a08bfa  8bcc                 mov ecx, esp
// 00a08bfc  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08c00  680cc5c100           push 0xc1c50c
// 00a08c05  8986d8050000         mov dword ptr [esi + 0x5d8], eax
// 00a08c0b  ff15c847b200         call dword ptr [0xb247c8]
// 00a08c11  51                   push ecx
// 00a08c12  8bcc                 mov ecx, esp
// 00a08c14  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08c18  684c87c100           push 0xc1874c
// 00a08c1d  c784248c01000030000000 mov dword ptr [esp + 0x18c], 0x30
// 00a08c28  ff15c847b200         call dword ptr [0xb247c8]
// 00a08c2e  8bce                 mov ecx, esi
// 00a08c30  e82becffff           call 0xa07860
// 00a08c35  8bc8                 mov ecx, eax
// 00a08c37  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08c3e  e8edd60500           call 0xa66330
// 00a08c43  51                   push ecx
// 00a08c44  8bcc                 mov ecx, esp
// 00a08c46  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08c4a  68fcc4c100           push 0xc1c4fc
// 00a08c4f  8986dc050000         mov dword ptr [esi + 0x5dc], eax
// 00a08c55  ff15c847b200         call dword ptr [0xb247c8]
// 00a08c5b  51                   push ecx
// 00a08c5c  8bcc                 mov ecx, esp
// 00a08c5e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08c62  684c87c100           push 0xc1874c
// 00a08c67  c784248c01000031000000 mov dword ptr [esp + 0x18c], 0x31
// 00a08c72  ff15c847b200         call dword ptr [0xb247c8]
// 00a08c78  8bce                 mov ecx, esi
// 00a08c7a  e8e1ebffff           call 0xa07860
// 00a08c7f  8bc8                 mov ecx, eax
// 00a08c81  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08c88  e8a3d60500           call 0xa66330
// 00a08c8d  51                   push ecx
// 00a08c8e  8bcc                 mov ecx, esp
// 00a08c90  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08c94  68ecc4c100           push 0xc1c4ec
// 00a08c99  8986e0050000         mov dword ptr [esi + 0x5e0], eax
// 00a08c9f  ff15c847b200         call dword ptr [0xb247c8]
// 00a08ca5  51                   push ecx
// 00a08ca6  8bcc                 mov ecx, esp
// 00a08ca8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08cac  684c87c100           push 0xc1874c
// 00a08cb1  c784248c01000032000000 mov dword ptr [esp + 0x18c], 0x32
// 00a08cbc  ff15c847b200         call dword ptr [0xb247c8]
// 00a08cc2  8bce                 mov ecx, esi
// 00a08cc4  e897ebffff           call 0xa07860
// 00a08cc9  8bc8                 mov ecx, eax
// 00a08ccb  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08cd2  e859d60500           call 0xa66330
// 00a08cd7  51                   push ecx
// 00a08cd8  8bcc                 mov ecx, esp
// 00a08cda  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08cde  68dcc4c100           push 0xc1c4dc
// 00a08ce3  8986e4050000         mov dword ptr [esi + 0x5e4], eax
// 00a08ce9  ff15c847b200         call dword ptr [0xb247c8]
// 00a08cef  51                   push ecx
// 00a08cf0  8bcc                 mov ecx, esp
// 00a08cf2  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08cf6  684c87c100           push 0xc1874c
// 00a08cfb  c784248c01000033000000 mov dword ptr [esp + 0x18c], 0x33
// 00a08d06  ff15c847b200         call dword ptr [0xb247c8]
// 00a08d0c  8bce                 mov ecx, esi
// 00a08d0e  e84debffff           call 0xa07860
// 00a08d13  8bc8                 mov ecx, eax
// 00a08d15  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08d1c  e80fd60500           call 0xa66330
// 00a08d21  51                   push ecx
// 00a08d22  8986e8050000         mov dword ptr [esi + 0x5e8], eax
// 00a08d28  8bcc                 mov ecx, esp
// 00a08d2a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08d2e  68c4c4c100           push 0xc1c4c4
// 00a08d33  ff15c847b200         call dword ptr [0xb247c8]
// 00a08d39  51                   push ecx
// 00a08d3a  8bcc                 mov ecx, esp
// 00a08d3c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08d40  684c87c100           push 0xc1874c
// 00a08d45  c784248c01000034000000 mov dword ptr [esp + 0x18c], 0x34
// 00a08d50  ff15c847b200         call dword ptr [0xb247c8]
// 00a08d56  8bce                 mov ecx, esi
// 00a08d58  e803ebffff           call 0xa07860
// 00a08d5d  8bc8                 mov ecx, eax
// 00a08d5f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08d66  e8c5d50500           call 0xa66330
// 00a08d6b  51                   push ecx
// 00a08d6c  8bcc                 mov ecx, esp
// 00a08d6e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08d72  68b0c4c100           push 0xc1c4b0
// 00a08d77  8986f4050000         mov dword ptr [esi + 0x5f4], eax
// 00a08d7d  ff15c847b200         call dword ptr [0xb247c8]
// 00a08d83  51                   push ecx
// 00a08d84  8bcc                 mov ecx, esp
// 00a08d86  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08d8a  684c87c100           push 0xc1874c
// 00a08d8f  c784248c01000035000000 mov dword ptr [esp + 0x18c], 0x35
// 00a08d9a  ff15c847b200         call dword ptr [0xb247c8]
// 00a08da0  8bce                 mov ecx, esi
// 00a08da2  e8b9eaffff           call 0xa07860
// 00a08da7  8bc8                 mov ecx, eax
// 00a08da9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08db0  e87bd50500           call 0xa66330
// 00a08db5  51                   push ecx
// 00a08db6  8bcc                 mov ecx, esp
// 00a08db8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08dbc  689cc4c100           push 0xc1c49c
// 00a08dc1  8986f0050000         mov dword ptr [esi + 0x5f0], eax
// 00a08dc7  ff15c847b200         call dword ptr [0xb247c8]
// 00a08dcd  51                   push ecx
// 00a08dce  8bcc                 mov ecx, esp
// 00a08dd0  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08dd4  684c87c100           push 0xc1874c
// 00a08dd9  c784248c01000036000000 mov dword ptr [esp + 0x18c], 0x36
// 00a08de4  ff15c847b200         call dword ptr [0xb247c8]
// 00a08dea  8bce                 mov ecx, esi
// 00a08dec  e86feaffff           call 0xa07860
// 00a08df1  8bc8                 mov ecx, eax
// 00a08df3  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08dfa  e831d50500           call 0xa66330
// 00a08dff  51                   push ecx
// 00a08e00  8bcc                 mov ecx, esp
// 00a08e02  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08e06  688cc4c100           push 0xc1c48c
// 00a08e0b  8986ec050000         mov dword ptr [esi + 0x5ec], eax
// 00a08e11  ff15c847b200         call dword ptr [0xb247c8]
// 00a08e17  51                   push ecx
// 00a08e18  8bcc                 mov ecx, esp
// 00a08e1a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08e1e  684893ba00           push 0xba9348
// 00a08e23  c784248c01000037000000 mov dword ptr [esp + 0x18c], 0x37
// 00a08e2e  ff15c847b200         call dword ptr [0xb247c8]
// 00a08e34  8bce                 mov ecx, esi
// 00a08e36  e825eaffff           call 0xa07860
// 00a08e3b  8bc8                 mov ecx, eax
// 00a08e3d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08e44  e8e7d40500           call 0xa66330
// 00a08e49  51                   push ecx
// 00a08e4a  8bcc                 mov ecx, esp
// 00a08e4c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08e50  6878c4c100           push 0xc1c478
// 00a08e55  898608040000         mov dword ptr [esi + 0x408], eax
// 00a08e5b  ff15c847b200         call dword ptr [0xb247c8]
// 00a08e61  51                   push ecx
// 00a08e62  8bcc                 mov ecx, esp
// 00a08e64  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a08e68  684893ba00           push 0xba9348
// 00a08e6d  c784248c01000038000000 mov dword ptr [esp + 0x18c], 0x38
// 00a08e78  ff15c847b200         call dword ptr [0xb247c8]
// 00a08e7e  8bce                 mov ecx, esi
// 00a08e80  e8dbe9ffff           call 0xa07860
// 00a08e85  8bc8                 mov ecx, eax
// 00a08e87  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00a08e8e  e89dd40500           call 0xa66330
// 00a08e93  d9057027b600         fld dword ptr [0xb62770]
// 00a08e99  83ec08               sub esp, 8
// 00a08e9c  d95c2404             fstp dword ptr [esp + 4]
// 00a08ea0  8bcc                 mov ecx, esp
// 00a08ea2  89642420             mov dword ptr [esp + 0x20], esp
// 00a08ea6  6860c4c100           push 0xc1c460
// 00a08eab  8986e4030000         mov dword ptr [esi + 0x3e4], eax
// 00a08eb1  ff15c847b200         call dword ptr [0xb247c8]
// 00a08eb7  51                   push ecx
// 00a08eb8  8bcc                 mov ecx, esp
// 00a08eba  89642420             mov dword ptr [esp + 0x20], esp
// 00a08ebe  684893ba00           push 0xba9348
// 00a08ec3  c784249001000039000000 mov dword ptr [esp + 0x190], 0x39
// 00a08ece  ff15c847b200         call dword ptr [0xb247c8]
// 00a08ed4  8bce                 mov ecx, esi
// 00a08ed6  e885e9ffff           call 0xa07860
// 00a08edb  8bc8                 mov ecx, eax
// 00a08edd  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00a08ee4  e847d40500           call 0xa66330
// 00a08ee9  50                   push eax
// 00a08eea  51                   push ecx
// 00a08eeb  8bcc                 mov ecx, esp
// 00a08eed  89642424             mov dword ptr [esp + 0x24], esp
// 00a08ef1  6844c4c100           push 0xc1c444
// 00a08ef6  ff15c847b200         call dword ptr [0xb247c8]
// 00a08efc  51                   push ecx
// 00a08efd  8bcc                 mov ecx, esp
// 00a08eff  89642424             mov dword ptr [esp + 0x24], esp
// 00a08f03  684893ba00           push 0xba9348
// 00a08f08  c78424940100003a000000 mov dword ptr [esp + 0x194], 0x3a
// 00a08f13  ff15c847b200         call dword ptr [0xb247c8]
// 00a08f19  8bce                 mov ecx, esi
// 00a08f1b  e840e9ffff           call 0xa07860
// 00a08f20  8bc8                 mov ecx, eax
// 00a08f22  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00a08f29  e802d40500           call 0xa66330
// 00a08f2e  50                   push eax
// 00a08f2f  8d4e28               lea ecx, [esi + 0x28]
// 00a08f32  e8093efbff           call 0x9bcd40
// 00a08f37  8bce                 mov ecx, esi
// 00a08f39  e8124c0000           call 0xa0db50
// 00a08f3e  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 00a08f45  64890d00000000       mov dword ptr fs:[0], ecx
// 00a08f4c  59                   pop ecx
// 00a08f4d  5f                   pop edi
// 00a08f4e  5e                   pop esi
// 00a08f4f  5d                   pop ebp
// 00a08f50  5b                   pop ebx
// 00a08f51  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00a08f58  33cc                 xor ecx, esp
// 00a08f5a  e8d8aaf7ff           call 0x983a37
// 00a08f5f  81c470010000         add esp, 0x170
// 00a08f65  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2007Theme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp