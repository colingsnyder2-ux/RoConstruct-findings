// roc 2008-06 00605c20  unit: RBX::UnifiedImageWidget  size: 1154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00605c20
//
// 00605c20  6aff                 push -1
// 00605c22  68d8887d00           push 0x7d88d8
// 00605c27  64a100000000         mov eax, dword ptr fs:[0]
// 00605c2d  50                   push eax
// 00605c2e  64892500000000       mov dword ptr fs:[0], esp
// 00605c35  83ec10               sub esp, 0x10
// 00605c38  8b442424             mov eax, dword ptr [esp + 0x24]
// 00605c3c  53                   push ebx
// 00605c3d  55                   push ebp
// 00605c3e  56                   push esi
// 00605c3f  8bf1                 mov esi, ecx
// 00605c41  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00605c45  57                   push edi
// 00605c46  8d542410             lea edx, [esp + 0x10]
// 00605c4a  894e04               mov dword ptr [esi + 4], ecx
// 00605c4d  52                   push edx
// 00605c4e  8bce                 mov ecx, esi
// 00605c50  8906                 mov dword ptr [esi], eax
// 00605c52  e879e5ffff           call 0x6041d0
// 00605c57  8b10                 mov edx, dword ptr [eax]
// 00605c59  83ec08               sub esp, 8
// 00605c5c  8bcc                 mov ecx, esp
// 00605c5e  8911                 mov dword ptr [ecx], edx
// 00605c60  8b4004               mov eax, dword ptr [eax + 4]
// 00605c63  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00605c6b  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605c6f  894104               mov dword ptr [ecx + 4], eax
// 00605c72  85c0                 test eax, eax
// 00605c74  740c                 je 0x605c82
// 00605c76  83c004               add eax, 4
// 00605c79  b901000000           mov ecx, 1
// 00605c7e  f00fc108             lock xadd dword ptr [eax], ecx
// 00605c82  8b16                 mov edx, dword ptr [esi]
// 00605c84  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605c8a  e881b2ffff           call 0x600f10
// 00605c8f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605c93  83cbff               or ebx, 0xffffffff
// 00605c96  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605c9a  85ff                 test edi, edi
// 00605c9c  7428                 je 0x605cc6
// 00605c9e  8d4704               lea eax, [edi + 4]
// 00605ca1  8bcb                 mov ecx, ebx
// 00605ca3  f00fc108             lock xadd dword ptr [eax], ecx
// 00605ca7  751d                 jne 0x605cc6
// 00605ca9  8b17                 mov edx, dword ptr [edi]
// 00605cab  8b4204               mov eax, dword ptr [edx + 4]
// 00605cae  8bcf                 mov ecx, edi
// 00605cb0  ffd0                 call eax
// 00605cb2  8d4f08               lea ecx, [edi + 8]
// 00605cb5  8bd3                 mov edx, ebx
// 00605cb7  f00fc111             lock xadd dword ptr [ecx], edx
// 00605cbb  7509                 jne 0x605cc6
// 00605cbd  8b07                 mov eax, dword ptr [edi]
// 00605cbf  8b5008               mov edx, dword ptr [eax + 8]
// 00605cc2  8bcf                 mov ecx, edi
// 00605cc4  ffd2                 call edx
// 00605cc6  8d442410             lea eax, [esp + 0x10]
// 00605cca  50                   push eax
// 00605ccb  8bce                 mov ecx, esi
// 00605ccd  e85ef2ffff           call 0x604f30
// 00605cd2  8b10                 mov edx, dword ptr [eax]
// 00605cd4  83ec08               sub esp, 8
// 00605cd7  8bcc                 mov ecx, esp
// 00605cd9  8911                 mov dword ptr [ecx], edx
// 00605cdb  8b4004               mov eax, dword ptr [eax + 4]
// 00605cde  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00605ce6  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605cea  894104               mov dword ptr [ecx + 4], eax
// 00605ced  85c0                 test eax, eax
// 00605cef  740c                 je 0x605cfd
// 00605cf1  83c004               add eax, 4
// 00605cf4  b901000000           mov ecx, 1
// 00605cf9  f00fc108             lock xadd dword ptr [eax], ecx
// 00605cfd  8b16                 mov edx, dword ptr [esi]
// 00605cff  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605d05  e806b2ffff           call 0x600f10
// 00605d0a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605d0e  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605d12  85ff                 test edi, edi
// 00605d14  7428                 je 0x605d3e
// 00605d16  8d4704               lea eax, [edi + 4]
// 00605d19  8bcb                 mov ecx, ebx
// 00605d1b  f00fc108             lock xadd dword ptr [eax], ecx
// 00605d1f  751d                 jne 0x605d3e
// 00605d21  8b17                 mov edx, dword ptr [edi]
// 00605d23  8b4204               mov eax, dword ptr [edx + 4]
// 00605d26  8bcf                 mov ecx, edi
// 00605d28  ffd0                 call eax
// 00605d2a  8d4f08               lea ecx, [edi + 8]
// 00605d2d  8bd3                 mov edx, ebx
// 00605d2f  f00fc111             lock xadd dword ptr [ecx], edx
// 00605d33  7509                 jne 0x605d3e
// 00605d35  8b07                 mov eax, dword ptr [edi]
// 00605d37  8b5008               mov edx, dword ptr [eax + 8]
// 00605d3a  8bcf                 mov ecx, edi
// 00605d3c  ffd2                 call edx
// 00605d3e  8d442410             lea eax, [esp + 0x10]
// 00605d42  50                   push eax
// 00605d43  8bce                 mov ecx, esi
// 00605d45  e8e6d5ffff           call 0x603330
// 00605d4a  8b10                 mov edx, dword ptr [eax]
// 00605d4c  83ec08               sub esp, 8
// 00605d4f  8bcc                 mov ecx, esp
// 00605d51  8911                 mov dword ptr [ecx], edx
// 00605d53  8b4004               mov eax, dword ptr [eax + 4]
// 00605d56  c744243002000000     mov dword ptr [esp + 0x30], 2
// 00605d5e  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605d62  894104               mov dword ptr [ecx + 4], eax
// 00605d65  85c0                 test eax, eax
// 00605d67  740c                 je 0x605d75
// 00605d69  83c004               add eax, 4
// 00605d6c  b901000000           mov ecx, 1
// 00605d71  f00fc108             lock xadd dword ptr [eax], ecx
// 00605d75  8b16                 mov edx, dword ptr [esi]
// 00605d77  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605d7d  e88eb1ffff           call 0x600f10
// 00605d82  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605d86  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605d8a  85ff                 test edi, edi
// 00605d8c  7428                 je 0x605db6
// 00605d8e  8d4704               lea eax, [edi + 4]
// 00605d91  8bcb                 mov ecx, ebx
// 00605d93  f00fc108             lock xadd dword ptr [eax], ecx
// 00605d97  751d                 jne 0x605db6
// 00605d99  8b17                 mov edx, dword ptr [edi]
// 00605d9b  8b4204               mov eax, dword ptr [edx + 4]
// 00605d9e  8bcf                 mov ecx, edi
// 00605da0  ffd0                 call eax
// 00605da2  8d4f08               lea ecx, [edi + 8]
// 00605da5  8bd3                 mov edx, ebx
// 00605da7  f00fc111             lock xadd dword ptr [ecx], edx
// 00605dab  7509                 jne 0x605db6
// 00605dad  8b07                 mov eax, dword ptr [edi]
// 00605daf  8b5008               mov edx, dword ptr [eax + 8]
// 00605db2  8bcf                 mov ecx, edi
// 00605db4  ffd2                 call edx
// 00605db6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00605dba  55                   push ebp
// 00605dbb  8d442414             lea eax, [esp + 0x14]
// 00605dbf  50                   push eax
// 00605dc0  8bce                 mov ecx, esi
// 00605dc2  e869d9ffff           call 0x603730
// 00605dc7  8b10                 mov edx, dword ptr [eax]
// 00605dc9  83ec08               sub esp, 8
// 00605dcc  8bcc                 mov ecx, esp
// 00605dce  8911                 mov dword ptr [ecx], edx
// 00605dd0  8b4004               mov eax, dword ptr [eax + 4]
// 00605dd3  c744243003000000     mov dword ptr [esp + 0x30], 3
// 00605ddb  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605ddf  894104               mov dword ptr [ecx + 4], eax
// 00605de2  85c0                 test eax, eax
// 00605de4  740c                 je 0x605df2
// 00605de6  83c004               add eax, 4
// 00605de9  b901000000           mov ecx, 1
// 00605dee  f00fc108             lock xadd dword ptr [eax], ecx
// 00605df2  8b16                 mov edx, dword ptr [esi]
// 00605df4  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605dfa  e811b1ffff           call 0x600f10
// 00605dff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605e03  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605e07  85ff                 test edi, edi
// 00605e09  7428                 je 0x605e33
// 00605e0b  8d4704               lea eax, [edi + 4]
// 00605e0e  8bcb                 mov ecx, ebx
// 00605e10  f00fc108             lock xadd dword ptr [eax], ecx
// 00605e14  751d                 jne 0x605e33
// 00605e16  8b17                 mov edx, dword ptr [edi]
// 00605e18  8b4204               mov eax, dword ptr [edx + 4]
// 00605e1b  8bcf                 mov ecx, edi
// 00605e1d  ffd0                 call eax
// 00605e1f  8d4f08               lea ecx, [edi + 8]
// 00605e22  8bd3                 mov edx, ebx
// 00605e24  f00fc111             lock xadd dword ptr [ecx], edx
// 00605e28  7509                 jne 0x605e33
// 00605e2a  8b07                 mov eax, dword ptr [edi]
// 00605e2c  8b5008               mov edx, dword ptr [eax + 8]
// 00605e2f  8bcf                 mov ecx, edi
// 00605e31  ffd2                 call edx
// 00605e33  8d442410             lea eax, [esp + 0x10]
// 00605e37  50                   push eax
// 00605e38  8bce                 mov ecx, esi
// 00605e3a  e8e1daffff           call 0x603920
// 00605e3f  8b10                 mov edx, dword ptr [eax]
// 00605e41  83ec08               sub esp, 8
// 00605e44  8bcc                 mov ecx, esp
// 00605e46  8911                 mov dword ptr [ecx], edx
// 00605e48  8b4004               mov eax, dword ptr [eax + 4]
// 00605e4b  c744243004000000     mov dword ptr [esp + 0x30], 4
// 00605e53  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605e57  894104               mov dword ptr [ecx + 4], eax
// 00605e5a  85c0                 test eax, eax
// 00605e5c  740c                 je 0x605e6a
// 00605e5e  83c004               add eax, 4
// 00605e61  b901000000           mov ecx, 1
// 00605e66  f00fc108             lock xadd dword ptr [eax], ecx
// 00605e6a  8b16                 mov edx, dword ptr [esi]
// 00605e6c  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605e72  e899b0ffff           call 0x600f10
// 00605e77  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605e7b  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605e7f  85ff                 test edi, edi
// 00605e81  7428                 je 0x605eab
// 00605e83  8d4704               lea eax, [edi + 4]
// 00605e86  8bcb                 mov ecx, ebx
// 00605e88  f00fc108             lock xadd dword ptr [eax], ecx
// 00605e8c  751d                 jne 0x605eab
// 00605e8e  8b17                 mov edx, dword ptr [edi]
// 00605e90  8b4204               mov eax, dword ptr [edx + 4]
// 00605e93  8bcf                 mov ecx, edi
// 00605e95  ffd0                 call eax
// 00605e97  8d4f08               lea ecx, [edi + 8]
// 00605e9a  8bd3                 mov edx, ebx
// 00605e9c  f00fc111             lock xadd dword ptr [ecx], edx
// 00605ea0  7509                 jne 0x605eab
// 00605ea2  8b07                 mov eax, dword ptr [edi]
// 00605ea4  8b5008               mov edx, dword ptr [eax + 8]
// 00605ea7  8bcf                 mov ecx, edi
// 00605ea9  ffd2                 call edx
// 00605eab  8d442410             lea eax, [esp + 0x10]
// 00605eaf  50                   push eax
// 00605eb0  8bce                 mov ecx, esi
// 00605eb2  e809dcffff           call 0x603ac0
// 00605eb7  8b10                 mov edx, dword ptr [eax]
// 00605eb9  83ec08               sub esp, 8
// 00605ebc  8bcc                 mov ecx, esp
// 00605ebe  8911                 mov dword ptr [ecx], edx
// 00605ec0  8b4004               mov eax, dword ptr [eax + 4]
// 00605ec3  c744243005000000     mov dword ptr [esp + 0x30], 5
// 00605ecb  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605ecf  894104               mov dword ptr [ecx + 4], eax
// 00605ed2  85c0                 test eax, eax
// 00605ed4  740c                 je 0x605ee2
// 00605ed6  83c004               add eax, 4
// 00605ed9  b901000000           mov ecx, 1
// 00605ede  f00fc108             lock xadd dword ptr [eax], ecx
// 00605ee2  8b16                 mov edx, dword ptr [esi]
// 00605ee4  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605eea  e821b0ffff           call 0x600f10
// 00605eef  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605ef3  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605ef7  85ff                 test edi, edi
// 00605ef9  7428                 je 0x605f23
// 00605efb  8d4704               lea eax, [edi + 4]
// 00605efe  8bcb                 mov ecx, ebx
// 00605f00  f00fc108             lock xadd dword ptr [eax], ecx
// 00605f04  751d                 jne 0x605f23
// 00605f06  8b17                 mov edx, dword ptr [edi]
// 00605f08  8b4204               mov eax, dword ptr [edx + 4]
// 00605f0b  8bcf                 mov ecx, edi
// 00605f0d  ffd0                 call eax
// 00605f0f  8d4f08               lea ecx, [edi + 8]
// 00605f12  8bd3                 mov edx, ebx
// 00605f14  f00fc111             lock xadd dword ptr [ecx], edx
// 00605f18  7509                 jne 0x605f23
// 00605f1a  8b07                 mov eax, dword ptr [edi]
// 00605f1c  8b5008               mov edx, dword ptr [eax + 8]
// 00605f1f  8bcf                 mov ecx, edi
// 00605f21  ffd2                 call edx
// 00605f23  8d442410             lea eax, [esp + 0x10]
// 00605f27  50                   push eax
// 00605f28  8bce                 mov ecx, esi
// 00605f2a  e841c8ffff           call 0x602770
// 00605f2f  8b10                 mov edx, dword ptr [eax]
// 00605f31  83ec08               sub esp, 8
// 00605f34  8bcc                 mov ecx, esp
// 00605f36  8911                 mov dword ptr [ecx], edx
// 00605f38  8b4004               mov eax, dword ptr [eax + 4]
// 00605f3b  c744243006000000     mov dword ptr [esp + 0x30], 6
// 00605f43  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605f47  894104               mov dword ptr [ecx + 4], eax
// 00605f4a  85c0                 test eax, eax
// 00605f4c  740c                 je 0x605f5a
// 00605f4e  83c004               add eax, 4
// 00605f51  b901000000           mov ecx, 1
// 00605f56  f00fc108             lock xadd dword ptr [eax], ecx
// 00605f5a  8b16                 mov edx, dword ptr [esi]
// 00605f5c  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605f62  e8a9afffff           call 0x600f10
// 00605f67  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605f6b  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605f6f  85ff                 test edi, edi
// 00605f71  7428                 je 0x605f9b
// 00605f73  8d4704               lea eax, [edi + 4]
// 00605f76  8bcb                 mov ecx, ebx
// 00605f78  f00fc108             lock xadd dword ptr [eax], ecx
// 00605f7c  751d                 jne 0x605f9b
// 00605f7e  8b17                 mov edx, dword ptr [edi]
// 00605f80  8b4204               mov eax, dword ptr [edx + 4]
// 00605f83  8bcf                 mov ecx, edi
// 00605f85  ffd0                 call eax
// 00605f87  8d4f08               lea ecx, [edi + 8]
// 00605f8a  8bd3                 mov edx, ebx
// 00605f8c  f00fc111             lock xadd dword ptr [ecx], edx
// 00605f90  7509                 jne 0x605f9b
// 00605f92  8b07                 mov eax, dword ptr [edi]
// 00605f94  8b5008               mov edx, dword ptr [eax + 8]
// 00605f97  8bcf                 mov ecx, edi
// 00605f99  ffd2                 call edx
// 00605f9b  55                   push ebp
// 00605f9c  8d442414             lea eax, [esp + 0x14]
// 00605fa0  50                   push eax
// 00605fa1  8bce                 mov ecx, esi
// 00605fa3  e8c8e0ffff           call 0x604070
// 00605fa8  8b10                 mov edx, dword ptr [eax]
// 00605faa  83ec08               sub esp, 8
// 00605fad  8bcc                 mov ecx, esp
// 00605faf  8911                 mov dword ptr [ecx], edx
// 00605fb1  8b4004               mov eax, dword ptr [eax + 4]
// 00605fb4  c744243007000000     mov dword ptr [esp + 0x30], 7
// 00605fbc  8964243c             mov dword ptr [esp + 0x3c], esp
// 00605fc0  894104               mov dword ptr [ecx + 4], eax
// 00605fc3  85c0                 test eax, eax
// 00605fc5  740c                 je 0x605fd3
// 00605fc7  83c004               add eax, 4
// 00605fca  b901000000           mov ecx, 1
// 00605fcf  f00fc108             lock xadd dword ptr [eax], ecx
// 00605fd3  8b16                 mov edx, dword ptr [esi]
// 00605fd5  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00605fdb  e830afffff           call 0x600f10
// 00605fe0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00605fe4  895c2428             mov dword ptr [esp + 0x28], ebx
// 00605fe8  85ff                 test edi, edi
// 00605fea  7428                 je 0x606014
// 00605fec  8d4704               lea eax, [edi + 4]
// 00605fef  8bcb                 mov ecx, ebx
// 00605ff1  f00fc108             lock xadd dword ptr [eax], ecx
// 00605ff5  751d                 jne 0x606014
// 00605ff7  8b17                 mov edx, dword ptr [edi]
// 00605ff9  8b4204               mov eax, dword ptr [edx + 4]
// 00605ffc  8bcf                 mov ecx, edi
// 00605ffe  ffd0                 call eax
// 00606000  8d4f08               lea ecx, [edi + 8]
// 00606003  8bd3                 mov edx, ebx
// 00606005  f00fc111             lock xadd dword ptr [ecx], edx
// 00606009  7509                 jne 0x606014
// 0060600b  8b07                 mov eax, dword ptr [edi]
// 0060600d  8b5008               mov edx, dword ptr [eax + 8]
// 00606010  8bcf                 mov ecx, edi
// 00606012  ffd2                 call edx
// 00606014  6a14                 push 0x14
// 00606016  55                   push ebp
// 00606017  8d442420             lea eax, [esp + 0x20]
// 0060601b  50                   push eax
// 0060601c  8bce                 mov ecx, esi
// 0060601e  e83ddcffff           call 0x603c60
// 00606023  8b10                 mov edx, dword ptr [eax]
// 00606025  83ec08               sub esp, 8
// 00606028  8bcc                 mov ecx, esp
// 0060602a  8911                 mov dword ptr [ecx], edx
// 0060602c  8b4004               mov eax, dword ptr [eax + 4]
// 0060602f  c744243008000000     mov dword ptr [esp + 0x30], 8
// 00606037  8964243c             mov dword ptr [esp + 0x3c], esp
// 0060603b  894104               mov dword ptr [ecx + 4], eax
// 0060603e  85c0                 test eax, eax
// 00606040  740c                 je 0x60604e
// 00606042  83c004               add eax, 4
// 00606045  b901000000           mov ecx, 1
// 0060604a  f00fc108             lock xadd dword ptr [eax], ecx
// 0060604e  8b16                 mov edx, dword ptr [esi]
// 00606050  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00606056  e8b5aeffff           call 0x600f10
// 0060605b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0060605f  895c2428             mov dword ptr [esp + 0x28], ebx
// 00606063  85f6                 test esi, esi
// 00606065  7426                 je 0x60608d
// 00606067  8d4604               lea eax, [esi + 4]
// 0060606a  8bcb                 mov ecx, ebx
// 0060606c  f00fc108             lock xadd dword ptr [eax], ecx
// 00606070  751b                 jne 0x60608d
// 00606072  8b16                 mov edx, dword ptr [esi]
// 00606074  8b4204               mov eax, dword ptr [edx + 4]
// 00606077  8bce                 mov ecx, esi
// 00606079  ffd0                 call eax
// 0060607b  8d4e08               lea ecx, [esi + 8]
// 0060607e  f00fc119             lock xadd dword ptr [ecx], ebx
// 00606082  7509                 jne 0x60608d
// 00606084  8b16                 mov edx, dword ptr [esi]
// 00606086  8b4208               mov eax, dword ptr [edx + 8]
// 00606089  8bce                 mov ecx, esi
// 0060608b  ffd0                 call eax
// 0060608d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00606091  5f                   pop edi
// 00606092  5e                   pop esi
// 00606093  5d                   pop ebp
// 00606094  64890d00000000       mov dword ptr fs:[0], ecx
// 0060609b  5b                   pop ebx
// 0060609c  83c41c               add esp, 0x1c
// 0060609f  c20c00               ret 0xc
// library rbxgs/roc_guibuilder_native_assembly_efa31104829b8758.cpp (function ?buildGui@GuiBuilder@RBX@@QAEXPAVAdorn@2@PAVDataModel@2@PAVWorkspace@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_guibuilder_native_assembly_efa31104829b8758.cpp
