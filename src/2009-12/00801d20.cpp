// roc 2009-12 00801d20  unit: CXTPPaintManager  size: 3642 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801d20
//
// 00801d20  6aff                 push -1
// 00801d22  6880939500           push 0x959380
// 00801d27  64a100000000         mov eax, dword ptr fs:[0]
// 00801d2d  50                   push eax
// 00801d2e  81ec98000000         sub esp, 0x98
// 00801d34  53                   push ebx
// 00801d35  55                   push ebp
// 00801d36  56                   push esi
// 00801d37  57                   push edi
// 00801d38  a10052b600           mov eax, dword ptr [0xb65200]
// 00801d3d  33c4                 xor eax, esp
// 00801d3f  50                   push eax
// 00801d40  8d8424ac000000       lea eax, [esp + 0xac]
// 00801d47  64a300000000         mov dword ptr fs:[0], eax
// 00801d4d  8bf1                 mov esi, ecx
// 00801d4f  8bbc24c4000000       mov edi, dword ptr [esp + 0xc4]
// 00801d56  8b9f00010000         mov ebx, dword ptr [edi + 0x100]
// 00801d5c  8b2e                 mov ebp, dword ptr [esi]
// 00801d5e  8bcf                 mov ecx, edi
// 00801d60  e88b3cc3ff           call 0x4359f0
// 00801d65  50                   push eax
// 00801d66  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 00801d6c  53                   push ebx
// 00801d6d  8bce                 mov ecx, esi
// 00801d6f  ffd0                 call eax
// 00801d71  8bac24c0000000       mov ebp, dword ptr [esp + 0xc0]
// 00801d78  50                   push eax
// 00801d79  55                   push ebp
// 00801d7a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00801d81  e8da980400           call 0x84b660
// 00801d86  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00801d8e  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 00801d99  742a                 je 0x801dc5
// 00801d9b  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00801da1  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00801da7  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00801dad  894c2430             mov dword ptr [esp + 0x30], ecx
// 00801db1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00801db7  89542434             mov dword ptr [esp + 0x34], edx
// 00801dbb  89442438             mov dword ptr [esp + 0x38], eax
// 00801dbf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00801dc3  eb27                 jmp 0x801dec
// 00801dc5  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00801dcc  e85f940400           call 0x84b230
// 00801dd1  8b10                 mov edx, dword ptr [eax]
// 00801dd3  8b4804               mov ecx, dword ptr [eax + 4]
// 00801dd6  89542430             mov dword ptr [esp + 0x30], edx
// 00801dda  8b5008               mov edx, dword ptr [eax + 8]
// 00801ddd  8b400c               mov eax, dword ptr [eax + 0xc]
// 00801de0  894c2434             mov dword ptr [esp + 0x34], ecx
// 00801de4  89542438             mov dword ptr [esp + 0x38], edx
// 00801de8  8944243c             mov dword ptr [esp + 0x3c], eax
// 00801dec  8d442430             lea eax, [esp + 0x30]
// 00801df0  8b08                 mov ecx, dword ptr [eax]
// 00801df2  8b5004               mov edx, dword ptr [eax + 4]
// 00801df5  894c2418             mov dword ptr [esp + 0x18], ecx
// 00801df9  8b4808               mov ecx, dword ptr [eax + 8]
// 00801dfc  8954241c             mov dword ptr [esp + 0x1c], edx
// 00801e00  8b500c               mov edx, dword ptr [eax + 0xc]
// 00801e03  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00801e09  894c2420             mov dword ptr [esp + 0x20], ecx
// 00801e0d  8bcf                 mov ecx, edi
// 00801e0f  89542424             mov dword ptr [esp + 0x24], edx
// 00801e13  89442448             mov dword ptr [esp + 0x48], eax
// 00801e17  e8743effff           call 0x7f5c90
// 00801e1c  57                   push edi
// 00801e1d  8d4c2434             lea ecx, [esp + 0x34]
// 00801e21  8bd8                 mov ebx, eax
// 00801e23  51                   push ecx
// 00801e24  8bce                 mov ecx, esi
// 00801e26  895c2454             mov dword ptr [esp + 0x54], ebx
// 00801e2a  e8b1c0ffff           call 0x7fdee0
// 00801e2f  8b17                 mov edx, dword ptr [edi]
// 00801e31  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00801e37  8d442428             lea eax, [esp + 0x28]
// 00801e3b  50                   push eax
// 00801e3c  8bcf                 mov ecx, edi
// 00801e3e  ffd2                 call edx
// 00801e40  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00801e46  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00801e4c  ba02000000           mov edx, 2
// 00801e51  83f903               cmp ecx, 3
// 00801e54  740c                 je 0x801e62
// 00801e56  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00801e5e  3bca                 cmp ecx, edx
// 00801e60  7508                 jne 0x801e6a
// 00801e62  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00801e6a  85db                 test ebx, ebx
// 00801e6c  7510                 jne 0x801e7e
// 00801e6e  39542448             cmp dword ptr [esp + 0x48], edx
// 00801e72  7518                 jne 0x801e8c
// 00801e74  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00801e7c  eb63                 jmp 0x801ee1
// 00801e7e  3bda                 cmp ebx, edx
// 00801e80  740a                 je 0x801e8c
// 00801e82  83fb03               cmp ebx, 3
// 00801e85  7405                 je 0x801e8c
// 00801e87  83fb04               cmp ebx, 4
// 00801e8a  75e8                 jne 0x801e74
// 00801e8c  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00801e92  85c0                 test eax, eax
// 00801e94  752a                 jne 0x801ec0
// 00801e96  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00801e9c  85c0                 test eax, eax
// 00801e9e  7f20                 jg 0x801ec0
// 00801ea0  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00801ea6  85c9                 test ecx, ecx
// 00801ea8  740c                 je 0x801eb6
// 00801eaa  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00801ead  85c0                 test eax, eax
// 00801eaf  7f0f                 jg 0x801ec0
// 00801eb1  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00801eb4  eb06                 jmp 0x801ebc
// 00801eb6  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00801ebc  85c0                 test eax, eax
// 00801ebe  74b4                 je 0x801e74
// 00801ec0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00801ec4  8b07                 mov eax, dword ptr [edi]
// 00801ec6  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00801ecc  51                   push ecx
// 00801ecd  8bcf                 mov ecx, edi
// 00801ecf  ffd2                 call edx
// 00801ed1  89442460             mov dword ptr [esp + 0x60], eax
// 00801ed5  c744244401000000     mov dword ptr [esp + 0x44], 1
// 00801edd  85c0                 test eax, eax
// 00801edf  7508                 jne 0x801ee9
// 00801ee1  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00801ee9  8b07                 mov eax, dword ptr [edi]
// 00801eeb  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00801ef1  8bcf                 mov ecx, edi
// 00801ef3  ffd2                 call edx
// 00801ef5  8944246c             mov dword ptr [esp + 0x6c], eax
// 00801ef9  8b07                 mov eax, dword ptr [edi]
// 00801efb  8b5078               mov edx, dword ptr [eax + 0x78]
// 00801efe  8bcf                 mov ecx, edi
// 00801f00  ffd2                 call edx
// 00801f02  89442464             mov dword ptr [esp + 0x64], eax
// 00801f06  8b07                 mov eax, dword ptr [edi]
// 00801f08  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00801f0b  8bcf                 mov ecx, edi
// 00801f0d  ffd2                 call edx
// 00801f0f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00801f13  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00801f19  83f8ff               cmp eax, -1
// 00801f1c  750f                 jne 0x801f2d
// 00801f1e  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00801f24  85c9                 test ecx, ecx
// 00801f26  7405                 je 0x801f2d
// 00801f28  e88346ffff           call 0x7f65b0
// 00801f2d  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 00801f33  89442440             mov dword ptr [esp + 0x40], eax
// 00801f37  83fbff               cmp ebx, -1
// 00801f3a  750d                 jne 0x801f49
// 00801f3c  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00801f42  85c0                 test eax, eax
// 00801f44  7403                 je 0x801f49
// 00801f46  8b5838               mov ebx, dword ptr [eax + 0x38]
// 00801f49  8b07                 mov eax, dword ptr [edi]
// 00801f4b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00801f51  8bcf                 mov ecx, edi
// 00801f53  895c2468             mov dword ptr [esp + 0x68], ebx
// 00801f57  ffd2                 call edx
// 00801f59  837c244804           cmp dword ptr [esp + 0x48], 4
// 00801f5e  89842494000000       mov dword ptr [esp + 0x94], eax
// 00801f65  7511                 jne 0x801f78
// 00801f67  837c244004           cmp dword ptr [esp + 0x40], 4
// 00801f6c  7520                 jne 0x801f8e
// 00801f6e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00801f76  eb16                 jmp 0x801f8e
// 00801f78  8b442448             mov eax, dword ptr [esp + 0x48]
// 00801f7c  83f809               cmp eax, 9
// 00801f7f  0f84fe080000         je 0x802883
// 00801f85  83f80b               cmp eax, 0xb
// 00801f88  0f84b5080000         je 0x802843
// 00801f8e  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 00801f95  85db                 test ebx, ebx
// 00801f97  746c                 je 0x802005
// 00801f99  837c244804           cmp dword ptr [esp + 0x48], 4
// 00801f9e  741d                 je 0x801fbd
// 00801fa0  8b07                 mov eax, dword ptr [edi]
// 00801fa2  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00801fa8  8bcf                 mov ecx, edi
// 00801faa  ffd2                 call edx
// 00801fac  85c0                 test eax, eax
// 00801fae  7538                 jne 0x801fe8
// 00801fb0  8b06                 mov eax, dword ptr [esi]
// 00801fb2  8b5078               mov edx, dword ptr [eax + 0x78]
// 00801fb5  57                   push edi
// 00801fb6  55                   push ebp
// 00801fb7  8bce                 mov ecx, esi
// 00801fb9  ffd2                 call edx
// 00801fbb  eb2b                 jmp 0x801fe8
// 00801fbd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00801fc1  8b16                 mov edx, dword ptr [esi]
// 00801fc3  8b5260               mov edx, dword ptr [edx + 0x60]
// 00801fc6  83ec10               sub esp, 0x10
// 00801fc9  8bc4                 mov eax, esp
// 00801fcb  8908                 mov dword ptr [eax], ecx
// 00801fcd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00801fd1  894804               mov dword ptr [eax + 4], ecx
// 00801fd4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00801fd8  894808               mov dword ptr [eax + 8], ecx
// 00801fdb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00801fdf  57                   push edi
// 00801fe0  89480c               mov dword ptr [eax + 0xc], ecx
// 00801fe3  55                   push ebp
// 00801fe4  8bce                 mov ecx, esi
// 00801fe6  ffd2                 call edx
// 00801fe8  8b4500               mov eax, dword ptr [ebp]
// 00801feb  8b16                 mov edx, dword ptr [esi]
// 00801fed  89442474             mov dword ptr [esp + 0x74], eax
// 00801ff1  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00801ff4  57                   push edi
// 00801ff5  8bce                 mov ecx, esi
// 00801ff7  ffd0                 call eax
// 00801ff9  8b542474             mov edx, dword ptr [esp + 0x74]
// 00801ffd  50                   push eax
// 00801ffe  8b4238               mov eax, dword ptr [edx + 0x38]
// 00802001  8bcd                 mov ecx, ebp
// 00802003  ffd0                 call eax
// 00802005  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 0080200a  0f8534020000         jne 0x802244
// 00802010  8b17                 mov edx, dword ptr [edi]
// 00802012  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00802018  8bcf                 mov ecx, edi
// 0080201a  ffd0                 call eax
// 0080201c  8bd8                 mov ebx, eax
// 0080201e  f7db                 neg ebx
// 00802020  1bdb                 sbb ebx, ebx
// 00802022  8bce                 mov ecx, esi
// 00802024  f7db                 neg ebx
// 00802026  e895b7ffff           call 0x7fd7c0
// 0080202b  8bd0                 mov edx, eax
// 0080202d  e80ebfffff           call 0x7fdf40
// 00802032  8944246c             mov dword ptr [esp + 0x6c], eax
// 00802036  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0080203c  85c0                 test eax, eax
// 0080203e  7e05                 jle 0x802045
// 00802040  8d0c40               lea ecx, [eax + eax*2]
// 00802043  eb0c                 jmp 0x802051
// 00802045  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00802049  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0080204d  8d4c0107             lea ecx, [ecx + eax + 7]
// 00802051  8d4412fd             lea eax, [edx + edx - 3]
// 00802055  83f82a               cmp eax, 0x2a
// 00802058  7d05                 jge 0x80205f
// 0080205a  b82a000000           mov eax, 0x2a
// 0080205f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00802063  89442428             mov dword ptr [esp + 0x28], eax
// 00802067  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0080206b  85d2                 test edx, edx
// 0080206d  7408                 je 0x802077
// 0080206f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00802073  8944242c             mov dword ptr [esp + 0x2c], eax
// 00802077  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0080207f  0f843a010000         je 0x8021bf
// 00802085  837c244400           cmp dword ptr [esp + 0x44], 0
// 0080208a  0f84b5000000         je 0x802145
// 00802090  85d2                 test edx, edx
// 00802092  743a                 je 0x8020ce
// 00802094  8d4c244c             lea ecx, [esp + 0x4c]
// 00802098  51                   push ecx
// 00802099  8d4c241c             lea ecx, [esp + 0x1c]
// 0080209d  e85ea9c1ff           call 0x41ca00
// 008020a2  8bc8                 mov ecx, eax
// 008020a4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008020a8  99                   cdq 
// 008020a9  2bc2                 sub eax, edx
// 008020ab  8bd0                 mov edx, eax
// 008020ad  8b4104               mov eax, dword ptr [ecx + 4]
// 008020b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008020b4  d1fa                 sar edx, 1
// 008020b6  2bc2                 sub eax, edx
// 008020b8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008020bc  8d4c0a04             lea ecx, [edx + ecx + 4]
// 008020c0  89442450             mov dword ptr [esp + 0x50], eax
// 008020c4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008020c8  8d44244c             lea eax, [esp + 0x4c]
// 008020cc  eb38                 jmp 0x802106
// 008020ce  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008020d2  8d442474             lea eax, [esp + 0x74]
// 008020d6  83c203               add edx, 3
// 008020d9  50                   push eax
// 008020da  8d4c241c             lea ecx, [esp + 0x1c]
// 008020de  89542450             mov dword ptr [esp + 0x50], edx
// 008020e2  e819a9c1ff           call 0x41ca00
// 008020e7  8bc8                 mov ecx, eax
// 008020e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008020ed  8b09                 mov ecx, dword ptr [ecx]
// 008020ef  99                   cdq 
// 008020f0  2bc2                 sub eax, edx
// 008020f2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008020f6  d1f8                 sar eax, 1
// 008020f8  2bc8                 sub ecx, eax
// 008020fa  894c2474             mov dword ptr [esp + 0x74], ecx
// 008020fe  89542478             mov dword ptr [esp + 0x78], edx
// 00802102  8d442474             lea eax, [esp + 0x74]
// 00802106  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0080210d  6a01                 push 1
// 0080210f  51                   push ecx
// 00802110  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00802114  51                   push ecx
// 00802115  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00802119  51                   push ecx
// 0080211a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080211e  8b16                 mov edx, dword ptr [esi]
// 00802120  51                   push ecx
// 00802121  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00802125  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0080212b  51                   push ecx
// 0080212c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00802130  51                   push ecx
// 00802131  33c9                 xor ecx, ecx
// 00802133  51                   push ecx
// 00802134  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00802138  51                   push ecx
// 00802139  8b4804               mov ecx, dword ptr [eax + 4]
// 0080213c  8b00                 mov eax, dword ptr [eax]
// 0080213e  51                   push ecx
// 0080213f  50                   push eax
// 00802140  55                   push ebp
// 00802141  8bce                 mov ecx, esi
// 00802143  ffd2                 call edx
// 00802145  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080214a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080214e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00802152  8b542420             mov edx, dword ptr [esp + 0x20]
// 00802156  89442430             mov dword ptr [esp + 0x30], eax
// 0080215a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080215e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00802162  740c                 je 0x802170
// 00802164  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00802168  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080216c  03d0                 add edx, eax
// 0080216e  eb0d                 jmp 0x80217d
// 00802170  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00802174  49                   dec ecx
// 00802175  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00802179  2b4c246c             sub ecx, dword ptr [esp + 0x6c]
// 0080217d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00802181  53                   push ebx
// 00802182  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00802186  50                   push eax
// 00802187  6a01                 push 1
// 00802189  83ec10               sub esp, 0x10
// 0080218c  8bc4                 mov eax, esp
// 0080218e  8918                 mov dword ptr [eax], ebx
// 00802190  894804               mov dword ptr [eax + 4], ecx
// 00802193  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00802197  57                   push edi
// 00802198  895008               mov dword ptr [eax + 8], edx
// 0080219b  55                   push ebp
// 0080219c  8d542454             lea edx, [esp + 0x54]
// 008021a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008021a3  52                   push edx
// 008021a4  8bce                 mov ecx, esi
// 008021a6  e8c5cfffff           call 0x7ff170
// 008021ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 008021af  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008021b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008021b7  52                   push edx
// 008021b8  50                   push eax
// 008021b9  51                   push ecx
// 008021ba  e93c090000           jmp 0x802afb
// 008021bf  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008021c6  e865900400           call 0x84b230
// 008021cb  8b10                 mov edx, dword ptr [eax]
// 008021cd  53                   push ebx
// 008021ce  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008021d2  53                   push ebx
// 008021d3  6a00                 push 0
// 008021d5  83ec10               sub esp, 0x10
// 008021d8  8bcc                 mov ecx, esp
// 008021da  8911                 mov dword ptr [ecx], edx
// 008021dc  8b5004               mov edx, dword ptr [eax + 4]
// 008021df  895104               mov dword ptr [ecx + 4], edx
// 008021e2  8b5008               mov edx, dword ptr [eax + 8]
// 008021e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008021e8  895108               mov dword ptr [ecx + 8], edx
// 008021eb  57                   push edi
// 008021ec  89410c               mov dword ptr [ecx + 0xc], eax
// 008021ef  55                   push ebp
// 008021f0  8d4c2454             lea ecx, [esp + 0x54]
// 008021f4  51                   push ecx
// 008021f5  8bce                 mov ecx, esi
// 008021f7  e874cfffff           call 0x7ff170
// 008021fc  85db                 test ebx, ebx
// 008021fe  741f                 je 0x80221f
// 00802200  8b442434             mov eax, dword ptr [esp + 0x34]
// 00802204  83c006               add eax, 6
// 00802207  3944242c             cmp dword ptr [esp + 0x2c], eax
// 0080220b  7f23                 jg 0x802230
// 0080220d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00802211  8bd3                 mov edx, ebx
// 00802213  52                   push edx
// 00802214  50                   push eax
// 00802215  89442434             mov dword ptr [esp + 0x34], eax
// 00802219  51                   push ecx
// 0080221a  e9dc080000           jmp 0x802afb
// 0080221f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00802223  83c005               add eax, 5
// 00802226  39442428             cmp dword ptr [esp + 0x28], eax
// 0080222a  7f04                 jg 0x802230
// 0080222c  89442428             mov dword ptr [esp + 0x28], eax
// 00802230  8b542414             mov edx, dword ptr [esp + 0x14]
// 00802234  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00802238  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080223c  52                   push edx
// 0080223d  50                   push eax
// 0080223e  51                   push ecx
// 0080223f  e9b7080000           jmp 0x802afb
// 00802244  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0080224a  e861f40000           call 0x8116b0
// 0080224f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00802253  85c0                 test eax, eax
// 00802255  0f84b5010000         je 0x802410
// 0080225b  85c9                 test ecx, ecx
// 0080225d  0f84ad010000         je 0x802410
// 00802263  8bcf                 mov ecx, edi
// 00802265  e88637c3ff           call 0x4359f0
// 0080226a  85c0                 test eax, eax
// 0080226c  8d86f8000000         lea eax, [esi + 0xf8]
// 00802272  7506                 jne 0x80227a
// 00802274  8d86f0000000         lea eax, [esi + 0xf0]
// 0080227a  50                   push eax
// 0080227b  55                   push ebp
// 0080227c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00802283  e8d8930400           call 0x84b660
// 00802288  33db                 xor ebx, ebx
// 0080228a  837c244802           cmp dword ptr [esp + 0x48], 2
// 0080228f  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 00802297  0f94c3               sete bl
// 0080229a  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 008022a2  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008022a6  0f84c0000000         je 0x80236c
// 008022ac  837c244804           cmp dword ptr [esp + 0x48], 4
// 008022b1  750a                 jne 0x8022bd
// 008022b3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008022b9  29542420             sub dword ptr [esp + 0x20], edx
// 008022bd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008022c1  8d442474             lea eax, [esp + 0x74]
// 008022c5  50                   push eax
// 008022c6  8d4c241c             lea ecx, [esp + 0x1c]
// 008022ca  83c304               add ebx, 4
// 008022cd  e82ea7c1ff           call 0x41ca00
// 008022d2  8bc8                 mov ecx, eax
// 008022d4  8b442430             mov eax, dword ptr [esp + 0x30]
// 008022d8  99                   cdq 
// 008022d9  6a01                 push 1
// 008022db  2bc2                 sub eax, edx
// 008022dd  8bd0                 mov edx, eax
// 008022df  8b01                 mov eax, dword ptr [ecx]
// 008022e1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008022e8  51                   push ecx
// 008022e9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008022ed  51                   push ecx
// 008022ee  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008022f2  51                   push ecx
// 008022f3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008022f7  51                   push ecx
// 008022f8  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008022fc  51                   push ecx
// 008022fd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00802301  51                   push ecx
// 00802302  33c9                 xor ecx, ecx
// 00802304  51                   push ecx
// 00802305  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00802309  51                   push ecx
// 0080230a  d1fa                 sar edx, 1
// 0080230c  2bc2                 sub eax, edx
// 0080230e  8b16                 mov edx, dword ptr [esi]
// 00802310  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 00802316  53                   push ebx
// 00802317  50                   push eax
// 00802318  55                   push ebp
// 00802319  8bce                 mov ecx, esi
// 0080231b  ffd2                 call edx
// 0080231d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00802321  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00802325  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00802329  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080232d  8d5c03fc             lea ebx, [ebx + eax - 4]
// 00802331  89442434             mov dword ptr [esp + 0x34], eax
// 00802335  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00802339  50                   push eax
// 0080233a  6a01                 push 1
// 0080233c  6a00                 push 0
// 0080233e  6a01                 push 1
// 00802340  83ec10               sub esp, 0x10
// 00802343  8bc4                 mov eax, esp
// 00802345  8908                 mov dword ptr [eax], ecx
// 00802347  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080234b  895804               mov dword ptr [eax + 4], ebx
// 0080234e  57                   push edi
// 0080234f  895008               mov dword ptr [eax + 8], edx
// 00802352  89480c               mov dword ptr [eax + 0xc], ecx
// 00802355  55                   push ebp
// 00802356  8d4c2458             lea ecx, [esp + 0x58]
// 0080235a  51                   push ecx
// 0080235b  8bce                 mov ecx, esi
// 0080235d  e8fed3ffff           call 0x7ff760
// 00802362  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00802366  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080236a  eb74                 jmp 0x8023e0
// 0080236c  8d4c244c             lea ecx, [esp + 0x4c]
// 00802370  e8bb8e0400           call 0x84b230
// 00802375  8b10                 mov edx, dword ptr [eax]
// 00802377  53                   push ebx
// 00802378  6a01                 push 1
// 0080237a  6a00                 push 0
// 0080237c  6a00                 push 0
// 0080237e  83ec10               sub esp, 0x10
// 00802381  8bcc                 mov ecx, esp
// 00802383  8911                 mov dword ptr [ecx], edx
// 00802385  8b5004               mov edx, dword ptr [eax + 4]
// 00802388  895104               mov dword ptr [ecx + 4], edx
// 0080238b  8b5008               mov edx, dword ptr [eax + 8]
// 0080238e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00802391  895108               mov dword ptr [ecx + 8], edx
// 00802394  57                   push edi
// 00802395  89410c               mov dword ptr [ecx + 0xc], eax
// 00802398  55                   push ebp
// 00802399  8d4c2458             lea ecx, [esp + 0x58]
// 0080239d  51                   push ecx
// 0080239e  8bce                 mov ecx, esi
// 008023a0  e8bbd3ffff           call 0x7ff760
// 008023a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008023a9  8b542430             mov edx, dword ptr [esp + 0x30]
// 008023ad  03442434             add eax, dword ptr [esp + 0x34]
// 008023b1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008023b5  83c20a               add edx, 0xa
// 008023b8  3bca                 cmp ecx, edx
// 008023ba  8944242c             mov dword ptr [esp + 0x2c], eax
// 008023be  7f06                 jg 0x8023c6
// 008023c0  8bca                 mov ecx, edx
// 008023c2  894c2428             mov dword ptr [esp + 0x28], ecx
// 008023c6  83bffc00000004       cmp dword ptr [edi + 0xfc], 4
// 008023cd  7507                 jne 0x8023d6
// 008023cf  83c10b               add ecx, 0xb
// 008023d2  894c2428             mov dword ptr [esp + 0x28], ecx
// 008023d6  3bc8                 cmp ecx, eax
// 008023d8  7f06                 jg 0x8023e0
// 008023da  8bc8                 mov ecx, eax
// 008023dc  894c2428             mov dword ptr [esp + 0x28], ecx
// 008023e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008023e4  52                   push edx
// 008023e5  50                   push eax
// 008023e6  51                   push ecx
// 008023e7  57                   push edi
// 008023e8  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 008023ef  57                   push edi
// 008023f0  8bce                 mov ecx, esi
// 008023f2  e869baffff           call 0x7fde60
// 008023f7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008023fe  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 00802406  e8d5920400           call 0x84b6e0
// 0080240b  e9fb060000           jmp 0x802b0b
// 00802410  85db                 test ebx, ebx
// 00802412  0f849d010000         je 0x8025b5
// 00802418  837c246000           cmp dword ptr [esp + 0x60], 0
// 0080241d  0f8492010000         je 0x8025b5
// 00802423  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00802427  e84434cdff           call 0x4d5870
// 0080242c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00802430  8bd8                 mov ebx, eax
// 00802432  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 00802437  e844b80400           call 0x84dc80
// 0080243c  8bc8                 mov ecx, eax
// 0080243e  8bc3                 mov eax, ebx
// 00802440  99                   cdq 
// 00802441  f7f9                 idiv ecx
// 00802443  837c241400           cmp dword ptr [esp + 0x14], 0
// 00802448  8d4c2418             lea ecx, [esp + 0x18]
// 0080244c  89442434             mov dword ptr [esp + 0x34], eax
// 00802450  752d                 jne 0x80247f
// 00802452  8d54244c             lea edx, [esp + 0x4c]
// 00802456  52                   push edx
// 00802457  e8a4a5c1ff           call 0x41ca00
// 0080245c  8bc8                 mov ecx, eax
// 0080245e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00802462  99                   cdq 
// 00802463  2bc2                 sub eax, edx
// 00802465  8bd0                 mov edx, eax
// 00802467  8b4104               mov eax, dword ptr [ecx + 4]
// 0080246a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080246e  d1fa                 sar edx, 1
// 00802470  2bc2                 sub eax, edx
// 00802472  8d5103               lea edx, [ecx + 3]
// 00802475  89542474             mov dword ptr [esp + 0x74], edx
// 00802479  89442478             mov dword ptr [esp + 0x78], eax
// 0080247d  eb2c                 jmp 0x8024ab
// 0080247f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00802483  8d44244c             lea eax, [esp + 0x4c]
// 00802487  50                   push eax
// 00802488  83c303               add ebx, 3
// 0080248b  e870a5c1ff           call 0x41ca00
// 00802490  8bc8                 mov ecx, eax
// 00802492  8b442430             mov eax, dword ptr [esp + 0x30]
// 00802496  8b09                 mov ecx, dword ptr [ecx]
// 00802498  99                   cdq 
// 00802499  2bc2                 sub eax, edx
// 0080249b  d1f8                 sar eax, 1
// 0080249d  2bc8                 sub ecx, eax
// 0080249f  894c2474             mov dword ptr [esp + 0x74], ecx
// 008024a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008024a7  895c2478             mov dword ptr [esp + 0x78], ebx
// 008024ab  8d442474             lea eax, [esp + 0x74]
// 008024af  8b10                 mov edx, dword ptr [eax]
// 008024b1  8b4004               mov eax, dword ptr [eax + 4]
// 008024b4  89442450             mov dword ptr [esp + 0x50], eax
// 008024b8  8b442448             mov eax, dword ptr [esp + 0x48]
// 008024bc  8954244c             mov dword ptr [esp + 0x4c], edx
// 008024c0  83f804               cmp eax, 4
// 008024c3  750c                 jne 0x8024d1
// 008024c5  83c103               add ecx, 3
// 008024c8  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008024cc  e984000000           jmp 0x802555
// 008024d1  83f802               cmp eax, 2
// 008024d4  7517                 jne 0x8024ed
// 008024d6  837c244400           cmp dword ptr [esp + 0x44], 0
// 008024db  7478                 je 0x802555
// 008024dd  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008024e2  7571                 jne 0x802555
// 008024e4  83c103               add ecx, 3
// 008024e7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008024eb  eb68                 jmp 0x802555
// 008024ed  83f803               cmp eax, 3
// 008024f0  7405                 je 0x8024f7
// 008024f2  83f801               cmp eax, 1
// 008024f5  755e                 jne 0x802555
// 008024f7  837c244400           cmp dword ptr [esp + 0x44], 0
// 008024fc  7457                 je 0x802555
// 008024fe  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00802503  7550                 jne 0x802555
// 00802505  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080250a  7525                 jne 0x802531
// 0080250c  8d4c2474             lea ecx, [esp + 0x74]
// 00802510  51                   push ecx
// 00802511  8d4c241c             lea ecx, [esp + 0x1c]
// 00802515  e8e6a4c1ff           call 0x41ca00
// 0080251a  8bc8                 mov ecx, eax
// 0080251c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00802520  99                   cdq 
// 00802521  2bc2                 sub eax, edx
// 00802523  8bd0                 mov edx, eax
// 00802525  8b01                 mov eax, dword ptr [ecx]
// 00802527  d1fa                 sar edx, 1
// 00802529  2bc2                 sub eax, edx
// 0080252b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0080252f  eb24                 jmp 0x802555
// 00802531  8d442474             lea eax, [esp + 0x74]
// 00802535  50                   push eax
// 00802536  8d4c241c             lea ecx, [esp + 0x1c]
// 0080253a  e8c1a4c1ff           call 0x41ca00
// 0080253f  8bc8                 mov ecx, eax
// 00802541  8b442434             mov eax, dword ptr [esp + 0x34]
// 00802545  99                   cdq 
// 00802546  2bc2                 sub eax, edx
// 00802548  8bd0                 mov edx, eax
// 0080254a  8b4104               mov eax, dword ptr [ecx + 4]
// 0080254d  d1fa                 sar edx, 1
// 0080254f  2bc2                 sub eax, edx
// 00802551  89442450             mov dword ptr [esp + 0x50], eax
// 00802555  8bcf                 mov ecx, edi
// 00802557  e864f80600           call 0x871dc0
// 0080255c  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00802563  8b542468             mov edx, dword ptr [esp + 0x68]
// 00802567  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0080256b  6a01                 push 1
// 0080256d  51                   push ecx
// 0080256e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00802572  52                   push edx
// 00802573  8b542470             mov edx, dword ptr [esp + 0x70]
// 00802577  51                   push ecx
// 00802578  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0080257c  52                   push edx
// 0080257d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00802581  51                   push ecx
// 00802582  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00802586  53                   push ebx
// 00802587  52                   push edx
// 00802588  8b542470             mov edx, dword ptr [esp + 0x70]
// 0080258c  51                   push ecx
// 0080258d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00802591  52                   push edx
// 00802592  894320               mov dword ptr [ebx + 0x20], eax
// 00802595  8b06                 mov eax, dword ptr [esi]
// 00802597  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0080259d  51                   push ecx
// 0080259e  55                   push ebp
// 0080259f  8bce                 mov ecx, esi
// 008025a1  ffd2                 call edx
// 008025a3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008025a7  c7432000000000       mov dword ptr [ebx + 0x20], 0
// 008025ae  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 008025b5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008025b9  48                   dec eax
// 008025ba  83f809               cmp eax, 9
// 008025bd  0f874e020000         ja 0x802811
// 008025c3  0fb680502b8000       movzx eax, byte ptr [eax + 0x802b50]
// 008025ca  ff2485402b8000       jmp dword ptr [eax*4 + 0x802b40]
// 008025d1  85c9                 test ecx, ecx
// 008025d3  756f                 jne 0x802644
// 008025d5  85db                 test ebx, ebx
// 008025d7  7412                 je 0x8025eb
// 008025d9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008025df  3988f8000000         cmp dword ptr [eax + 0xf8], ecx
// 008025e5  7504                 jne 0x8025eb
// 008025e7  33c0                 xor eax, eax
// 008025e9  eb05                 jmp 0x8025f0
// 008025eb  b801000000           mov eax, 1
// 008025f0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008025f4  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 008025fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008025ff  50                   push eax
// 00802600  6a01                 push 1
// 00802602  53                   push ebx
// 00802603  51                   push ecx
// 00802604  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00802608  83ec10               sub esp, 0x10
// 0080260b  8bc4                 mov eax, esp
// 0080260d  8910                 mov dword ptr [eax], edx
// 0080260f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00802613  894804               mov dword ptr [eax + 4], ecx
// 00802616  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080261a  57                   push edi
// 0080261b  895008               mov dword ptr [eax + 8], edx
// 0080261e  55                   push ebp
// 0080261f  8d542458             lea edx, [esp + 0x58]
// 00802623  89480c               mov dword ptr [eax + 0xc], ecx
// 00802626  52                   push edx
// 00802627  8bce                 mov ecx, esi
// 00802629  e832d1ffff           call 0x7ff760
// 0080262e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00802632  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00802636  83c006               add eax, 6
// 00802639  53                   push ebx
// 0080263a  83c106               add ecx, 6
// 0080263d  50                   push eax
// 0080263e  51                   push ecx
// 0080263f  e9b7040000           jmp 0x802afb
// 00802644  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00802649  756c                 jne 0x8026b7
// 0080264b  8d442474             lea eax, [esp + 0x74]
// 0080264f  50                   push eax
// 00802650  8d4c241c             lea ecx, [esp + 0x1c]
// 00802654  e8a7a3c1ff           call 0x41ca00
// 00802659  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080265d  8b16                 mov edx, dword ptr [esi]
// 0080265f  8b5804               mov ebx, dword ptr [eax + 4]
// 00802662  83c1f9               add ecx, -7
// 00802665  894c2430             mov dword ptr [esp + 0x30], ecx
// 00802669  6a00                 push 0
// 0080266b  8bcf                 mov ecx, edi
// 0080266d  89542450             mov dword ptr [esp + 0x50], edx
// 00802671  e85a00c5ff           call 0x4526d0
// 00802676  50                   push eax
// 00802677  8b07                 mov eax, dword ptr [edi]
// 00802679  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0080267f  8bcf                 mov ecx, edi
// 00802681  ffd2                 call edx
// 00802683  50                   push eax
// 00802684  8b07                 mov eax, dword ptr [edi]
// 00802686  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00802689  8bcf                 mov ecx, edi
// 0080268b  ffd2                 call edx
// 0080268d  8b542458             mov edx, dword ptr [esp + 0x58]
// 00802691  50                   push eax
// 00802692  8b442440             mov eax, dword ptr [esp + 0x40]
// 00802696  53                   push ebx
// 00802697  50                   push eax
// 00802698  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 0080269e  57                   push edi
// 0080269f  55                   push ebp
// 008026a0  8bce                 mov ecx, esi
// 008026a2  ffd0                 call eax
// 008026a4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008026a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008026ac  52                   push edx
// 008026ad  8d4807               lea ecx, [eax + 7]
// 008026b0  50                   push eax
// 008026b1  51                   push ecx
// 008026b2  e944040000           jmp 0x802afb
// 008026b7  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008026bd  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008026c3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008026c7  51                   push ecx
// 008026c8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008026cc  51                   push ecx
// 008026cd  33c9                 xor ecx, ecx
// 008026cf  85c0                 test eax, eax
// 008026d1  0f95c1               setne cl
// 008026d4  52                   push edx
// 008026d5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008026d9  51                   push ecx
// 008026da  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008026de  53                   push ebx
// 008026df  83ec10               sub esp, 0x10
// 008026e2  8bc4                 mov eax, esp
// 008026e4  8910                 mov dword ptr [eax], edx
// 008026e6  8b542444             mov edx, dword ptr [esp + 0x44]
// 008026ea  894804               mov dword ptr [eax + 4], ecx
// 008026ed  895008               mov dword ptr [eax + 8], edx
// 008026f0  8d9424b8000000       lea edx, [esp + 0xb8]
// 008026f7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008026fb  57                   push edi
// 008026fc  55                   push ebp
// 008026fd  89480c               mov dword ptr [eax + 0xc], ecx
// 00802700  52                   push edx
// 00802701  8bce                 mov ecx, esi
// 00802703  e848e9ffff           call 0x801050
// 00802708  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080270c  8b5004               mov edx, dword ptr [eax + 4]
// 0080270f  8b00                 mov eax, dword ptr [eax]
// 00802711  51                   push ecx
// 00802712  52                   push edx
// 00802713  e9e2030000           jmp 0x802afa
// 00802718  85c9                 test ecx, ecx
// 0080271a  7511                 jne 0x80272d
// 0080271c  bb16000000           mov ebx, 0x16
// 00802721  8bd3                 mov edx, ebx
// 00802723  895c2428             mov dword ptr [esp + 0x28], ebx
// 00802727  8954242c             mov dword ptr [esp + 0x2c], edx
// 0080272b  eb08                 jmp 0x802735
// 0080272d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00802731  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00802735  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0080273a  7513                 jne 0x80274f
// 0080273c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00802740  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00802746  51                   push ecx
// 00802747  03c3                 add eax, ebx
// 00802749  52                   push edx
// 0080274a  e9ab030000           jmp 0x802afa
// 0080274f  ff742444             push dword ptr [esp + 0x44]
// 00802753  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00802757  2b8ec8000000         sub ecx, dword ptr [esi + 0xc8]
// 0080275d  52                   push edx
// 0080275e  8b9424d0000000       mov edx, dword ptr [esp + 0xd0]
// 00802765  53                   push ebx
// 00802766  6a00                 push 0
// 00802768  52                   push edx
// 00802769  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080276d  83ec10               sub esp, 0x10
// 00802770  8bc4                 mov eax, esp
// 00802772  8910                 mov dword ptr [eax], edx
// 00802774  8b542440             mov edx, dword ptr [esp + 0x40]
// 00802778  895004               mov dword ptr [eax + 4], edx
// 0080277b  894808               mov dword ptr [eax + 8], ecx
// 0080277e  894c2444             mov dword ptr [esp + 0x44], ecx
// 00802782  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00802786  57                   push edi
// 00802787  55                   push ebp
// 00802788  8d54245c             lea edx, [esp + 0x5c]
// 0080278c  89480c               mov dword ptr [eax + 0xc], ecx
// 0080278f  52                   push edx
// 00802790  8bce                 mov ecx, esi
// 00802792  e8b9e8ffff           call 0x801050
// 00802797  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0080279d  03442430             add eax, dword ptr [esp + 0x30]
// 008027a1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008027a5  8b542414             mov edx, dword ptr [esp + 0x14]
// 008027a9  e94a030000           jmp 0x802af8
// 008027ae  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008027b3  7514                 jne 0x8027c9
// 008027b5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008027b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008027bd  8b542428             mov edx, dword ptr [esp + 0x28]
// 008027c1  50                   push eax
// 008027c2  51                   push ecx
// 008027c3  52                   push edx
// 008027c4  e932030000           jmp 0x802afb
// 008027c9  85c9                 test ecx, ecx
// 008027cb  7511                 jne 0x8027de
// 008027cd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008027d1  b816000000           mov eax, 0x16
// 008027d6  89442428             mov dword ptr [esp + 0x28], eax
// 008027da  8954242c             mov dword ptr [esp + 0x2c], edx
// 008027de  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008027e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008027e6  51                   push ecx
// 008027e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008027eb  50                   push eax
// 008027ec  51                   push ecx
// 008027ed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008027f1  6a00                 push 0
// 008027f3  53                   push ebx
// 008027f4  83ec10               sub esp, 0x10
// 008027f7  8bc4                 mov eax, esp
// 008027f9  8910                 mov dword ptr [eax], edx
// 008027fb  8b542444             mov edx, dword ptr [esp + 0x44]
// 008027ff  894804               mov dword ptr [eax + 4], ecx
// 00802802  895008               mov dword ptr [eax + 8], edx
// 00802805  8d942490000000       lea edx, [esp + 0x90]
// 0080280c  e9e6feffff           jmp 0x8026f7
// 00802811  8bb424bc000000       mov esi, dword ptr [esp + 0xbc]
// 00802818  8d8c2484000000       lea ecx, [esp + 0x84]
// 0080281f  c70600000000         mov dword ptr [esi], 0
// 00802825  c7460400000000       mov dword ptr [esi + 4], 0
// 0080282c  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00802837  e8a48e0400           call 0x84b6e0
// 0080283c  8bc6                 mov eax, esi
// 0080283e  e9e1020000           jmp 0x802b24
// 00802843  8b442440             mov eax, dword ptr [esp + 0x40]
// 00802847  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0080284b  8b16                 mov edx, dword ptr [esi]
// 0080284d  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00802853  50                   push eax
// 00802854  8b442460             mov eax, dword ptr [esp + 0x60]
// 00802858  53                   push ebx
// 00802859  51                   push ecx
// 0080285a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080285e  50                   push eax
// 0080285f  6a00                 push 0
// 00802861  83ec10               sub esp, 0x10
// 00802864  8bc4                 mov eax, esp
// 00802866  8908                 mov dword ptr [eax], ecx
// 00802868  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080286c  894804               mov dword ptr [eax + 4], ecx
// 0080286f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00802873  894808               mov dword ptr [eax + 8], ecx
// 00802876  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0080287a  89480c               mov dword ptr [eax + 0xc], ecx
// 0080287d  8d442470             lea eax, [esp + 0x70]
// 00802881  eb41                 jmp 0x8028c4
// 00802883  8b442440             mov eax, dword ptr [esp + 0x40]
// 00802887  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0080288b  8b16                 mov edx, dword ptr [esi]
// 0080288d  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 00802893  50                   push eax
// 00802894  8b442460             mov eax, dword ptr [esp + 0x60]
// 00802898  53                   push ebx
// 00802899  51                   push ecx
// 0080289a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080289e  50                   push eax
// 0080289f  6a00                 push 0
// 008028a1  83ec10               sub esp, 0x10
// 008028a4  8bc4                 mov eax, esp
// 008028a6  8908                 mov dword ptr [eax], ecx
// 008028a8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008028ac  894804               mov dword ptr [eax + 4], ecx
// 008028af  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008028b3  894808               mov dword ptr [eax + 8], ecx
// 008028b6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008028ba  89480c               mov dword ptr [eax + 0xc], ecx
// 008028bd  8d842498000000       lea eax, [esp + 0x98]
// 008028c4  55                   push ebp
// 008028c5  50                   push eax
// 008028c6  8bce                 mov ecx, esi
// 008028c8  ffd2                 call edx
// 008028ca  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 008028d2  8b18                 mov ebx, dword ptr [eax]
// 008028d4  8b4004               mov eax, dword ptr [eax + 4]
// 008028d7  895c2430             mov dword ptr [esp + 0x30], ebx
// 008028db  89442434             mov dword ptr [esp + 0x34], eax
// 008028df  0f84af010000         je 0x802a94
// 008028e5  8b16                 mov edx, dword ptr [esi]
// 008028e7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008028ea  8b5d00               mov ebx, dword ptr [ebp]
// 008028ed  57                   push edi
// 008028ee  8bce                 mov ecx, esi
// 008028f0  ffd0                 call eax
// 008028f2  8b5338               mov edx, dword ptr [ebx + 0x38]
// 008028f5  50                   push eax
// 008028f6  8bcd                 mov ecx, ebp
// 008028f8  ffd2                 call edx
// 008028fa  837c241400           cmp dword ptr [esp + 0x14], 0
// 008028ff  7552                 jne 0x802953
// 00802901  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00802905  2b442434             sub eax, dword ptr [esp + 0x34]
// 00802909  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0080290d  03442424             add eax, dword ptr [esp + 0x24]
// 00802911  8d4b03               lea ecx, [ebx + 3]
// 00802914  99                   cdq 
// 00802915  2bc2                 sub eax, edx
// 00802917  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080291b  03d1                 add edx, ecx
// 0080291d  d1f8                 sar eax, 1
// 0080291f  8954247c             mov dword ptr [esp + 0x7c], edx
// 00802923  8b542434             mov edx, dword ptr [esp + 0x34]
// 00802927  03d0                 add edx, eax
// 00802929  89942480000000       mov dword ptr [esp + 0x80], edx
// 00802930  8bd0                 mov edx, eax
// 00802932  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00802936  89442454             mov dword ptr [esp + 0x54], eax
// 0080293a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00802941  89442458             mov dword ptr [esp + 0x58], eax
// 00802945  8b442430             mov eax, dword ptr [esp + 0x30]
// 00802949  8d440305             lea eax, [ebx + eax + 5]
// 0080294d  89442418             mov dword ptr [esp + 0x18], eax
// 00802951  eb58                 jmp 0x8029ab
// 00802953  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00802957  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080295b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0080295f  8d040a               lea eax, [edx + ecx]
// 00802962  99                   cdq 
// 00802963  2bc2                 sub eax, edx
// 00802965  8bc8                 mov ecx, eax
// 00802967  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080296b  99                   cdq 
// 0080296c  2bc2                 sub eax, edx
// 0080296e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00802972  d1f8                 sar eax, 1
// 00802974  d1f9                 sar ecx, 1
// 00802976  2bc8                 sub ecx, eax
// 00802978  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080297c  03c1                 add eax, ecx
// 0080297e  83c303               add ebx, 3
// 00802981  03d3                 add edx, ebx
// 00802983  89442454             mov dword ptr [esp + 0x54], eax
// 00802987  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 0080298e  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00802995  89442458             mov dword ptr [esp + 0x58], eax
// 00802999  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080299d  8bd3                 mov edx, ebx
// 0080299f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008029a3  8d441805             lea eax, [eax + ebx + 5]
// 008029a7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008029ab  8b442440             mov eax, dword ptr [esp + 0x40]
// 008029af  50                   push eax
// 008029b0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008029b4  8b1e                 mov ebx, dword ptr [esi]
// 008029b6  50                   push eax
// 008029b7  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008029bb  50                   push eax
// 008029bc  8b442468             mov eax, dword ptr [esp + 0x68]
// 008029c0  50                   push eax
// 008029c1  6a01                 push 1
// 008029c3  83ec10               sub esp, 0x10
// 008029c6  837c246c0b           cmp dword ptr [esp + 0x6c], 0xb
// 008029cb  8bc4                 mov eax, esp
// 008029cd  8908                 mov dword ptr [eax], ecx
// 008029cf  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008029d3  895004               mov dword ptr [eax + 4], edx
// 008029d6  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008029da  894808               mov dword ptr [eax + 8], ecx
// 008029dd  89500c               mov dword ptr [eax + 0xc], edx
// 008029e0  55                   push ebp
// 008029e1  8d442474             lea eax, [esp + 0x74]
// 008029e5  8bce                 mov ecx, esi
// 008029e7  50                   push eax
// 008029e8  7508                 jne 0x8029f2
// 008029ea  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 008029f0  eb06                 jmp 0x8029f8
// 008029f2  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 008029f8  ffd2                 call edx
// 008029fa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008029fe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00802a02  8b9424c8000000       mov edx, dword ptr [esp + 0xc8]
// 00802a09  6a00                 push 0
// 00802a0b  50                   push eax
// 00802a0c  51                   push ecx
// 00802a0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00802a11  6a00                 push 0
// 00802a13  52                   push edx
// 00802a14  8b542430             mov edx, dword ptr [esp + 0x30]
// 00802a18  83ec10               sub esp, 0x10
// 00802a1b  8bc4                 mov eax, esp
// 00802a1d  8908                 mov dword ptr [eax], ecx
// 00802a1f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00802a23  895004               mov dword ptr [eax + 4], edx
// 00802a26  8b542448             mov edx, dword ptr [esp + 0x48]
// 00802a2a  894808               mov dword ptr [eax + 8], ecx
// 00802a2d  57                   push edi
// 00802a2e  89500c               mov dword ptr [eax + 0xc], edx
// 00802a31  55                   push ebp
// 00802a32  8d442478             lea eax, [esp + 0x78]
// 00802a36  50                   push eax
// 00802a37  8bce                 mov ecx, esi
// 00802a39  e812e6ffff           call 0x801050
// 00802a3e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00802a42  83f802               cmp eax, 2
// 00802a45  7405                 je 0x802a4c
// 00802a47  83f803               cmp eax, 3
// 00802a4a  7537                 jne 0x802a83
// 00802a4c  8b5500               mov edx, dword ptr [ebp]
// 00802a4f  6a12                 push 0x12
// 00802a51  8bce                 mov ecx, esi
// 00802a53  e8e8abffff           call 0x7fd640
// 00802a58  50                   push eax
// 00802a59  8b4238               mov eax, dword ptr [edx + 0x38]
// 00802a5c  8bcd                 mov ecx, ebp
// 00802a5e  ffd0                 call eax
// 00802a60  8b5500               mov edx, dword ptr [ebp]
// 00802a63  6a0f                 push 0xf
// 00802a65  8bce                 mov ecx, esi
// 00802a67  e8d4abffff           call 0x7fd640
// 00802a6c  50                   push eax
// 00802a6d  8b4234               mov eax, dword ptr [edx + 0x34]
// 00802a70  8bcd                 mov ecx, ebp
// 00802a72  ffd0                 call eax
// 00802a74  8b5504               mov edx, dword ptr [ebp + 4]
// 00802a77  8d4c2418             lea ecx, [esp + 0x18]
// 00802a7b  51                   push ecx
// 00802a7c  52                   push edx
// 00802a7d  ff15d4ca9800         call dword ptr [0x98cad4]
// 00802a83  8b442414             mov eax, dword ptr [esp + 0x14]
// 00802a87  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00802a8b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00802a8f  50                   push eax
// 00802a90  51                   push ecx
// 00802a91  52                   push edx
// 00802a92  eb67                 jmp 0x802afb
// 00802a94  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00802a98  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00802a9c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00802aa0  6a00                 push 0
// 00802aa2  50                   push eax
// 00802aa3  51                   push ecx
// 00802aa4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00802aa8  6a00                 push 0
// 00802aaa  6a00                 push 0
// 00802aac  83ec10               sub esp, 0x10
// 00802aaf  8bc4                 mov eax, esp
// 00802ab1  8910                 mov dword ptr [eax], edx
// 00802ab3  8b542444             mov edx, dword ptr [esp + 0x44]
// 00802ab7  894804               mov dword ptr [eax + 4], ecx
// 00802aba  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00802abe  57                   push edi
// 00802abf  895008               mov dword ptr [eax + 8], edx
// 00802ac2  55                   push ebp
// 00802ac3  8d542478             lea edx, [esp + 0x78]
// 00802ac7  89480c               mov dword ptr [eax + 0xc], ecx
// 00802aca  52                   push edx
// 00802acb  8bce                 mov ecx, esi
// 00802acd  e87ee5ffff           call 0x801050
// 00802ad2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00802ad6  85d2                 test edx, edx
// 00802ad8  7412                 je 0x802aec
// 00802ada  8b442450             mov eax, dword ptr [esp + 0x50]
// 00802ade  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00802ae2  8d4c0805             lea ecx, [eax + ecx + 5]
// 00802ae6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00802aea  eb0c                 jmp 0x802af8
// 00802aec  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00802af0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00802af4  8d441805             lea eax, [eax + ebx + 5]
// 00802af8  52                   push edx
// 00802af9  51                   push ecx
// 00802afa  50                   push eax
// 00802afb  57                   push edi
// 00802afc  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 00802b03  57                   push edi
// 00802b04  8bce                 mov ecx, esi
// 00802b06  e855b3ffff           call 0x7fde60
// 00802b0b  8d8c2484000000       lea ecx, [esp + 0x84]
// 00802b12  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00802b1d  e8be8b0400           call 0x84b6e0
// 00802b22  8bc7                 mov eax, edi
// 00802b24  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00802b2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00802b32  59                   pop ecx
// 00802b33  5f                   pop edi
// 00802b34  5e                   pop esi
// 00802b35  5d                   pop ebp
// 00802b36  5b                   pop ebx
// 00802b37  81c4a4000000         add esp, 0xa4
// 00802b3d  c21000               ret 0x10
// 00802b40  ae                   scasb al, byte ptr es:[edi]
// 00802b41  27                   daa 
// 00802b42  8000d1               add byte ptr [eax], 0xd1
// 00802b45  2580001827           and eax, 0x27180080
// 00802b4a  800011               add byte ptr [eax], 0x11
// 00802b4d  288000000100         sub byte ptr [eax + 0x10000], al
// 00802b53  0203                 add al, byte ptr [ebx]
// 00802b55  0303                 add eax, dword ptr [ebx]
// 00802b57  0000                 add byte ptr [eax], al
// copied from an identical function in another client (function ?DrawControlToolBarParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp