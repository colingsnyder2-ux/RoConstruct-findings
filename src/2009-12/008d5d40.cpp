// roc 2009-12 008d5d40  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 2212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d5d40
//
// 008d5d40  83ec6c               sub esp, 0x6c
// 008d5d43  53                   push ebx
// 008d5d44  55                   push ebp
// 008d5d45  56                   push esi
// 008d5d46  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 008d5d4d  8b4644               mov eax, dword ptr [esi + 0x44]
// 008d5d50  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 008d5d53  8bd9                 mov ebx, ecx
// 008d5d55  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008d5d58  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008d5d5b  89442430             mov dword ptr [esp + 0x30], eax
// 008d5d5f  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d5d65  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008d5d6b  57                   push edi
// 008d5d6c  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008d5d6f  895c2420             mov dword ptr [esp + 0x20], ebx
// 008d5d73  894c2438             mov dword ptr [esp + 0x38], ecx
// 008d5d77  83faff               cmp edx, -1
// 008d5d7a  750f                 jne 0x8d5d8b
// 008d5d7c  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 008d5d82  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008d5d89  eb07                 jmp 0x8d5d92
// 008d5d8b  89942484000000       mov dword ptr [esp + 0x84], edx
// 008d5d92  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008d5d98  83faff               cmp edx, -1
// 008d5d9b  7506                 jne 0x8d5da3
// 008d5d9d  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008d5da3  89542414             mov dword ptr [esp + 0x14], edx
// 008d5da7  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 008d5dad  83faff               cmp edx, -1
// 008d5db0  750c                 jne 0x8d5dbe
// 008d5db2  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 008d5db8  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d5dbc  eb04                 jmp 0x8d5dc2
// 008d5dbe  89542418             mov dword ptr [esp + 0x18], edx
// 008d5dc2  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d5dc5  397104               cmp dword ptr [ecx + 4], esi
// 008d5dc8  7525                 jne 0x8d5def
// 008d5dca  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008d5dd0  83faff               cmp edx, -1
// 008d5dd3  7506                 jne 0x8d5ddb
// 008d5dd5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008d5ddb  89942484000000       mov dword ptr [esp + 0x84], edx
// 008d5de2  baffffff00           mov edx, 0xffffff
// 008d5de7  89542414             mov dword ptr [esp + 0x14], edx
// 008d5deb  89542418             mov dword ptr [esp + 0x18], edx
// 008d5def  397108               cmp dword ptr [ecx + 8], esi
// 008d5df2  7531                 jne 0x8d5e25
// 008d5df4  837b2400             cmp dword ptr [ebx + 0x24], 0
// 008d5df8  742b                 je 0x8d5e25
// 008d5dfa  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 008d5e00  83faff               cmp edx, -1
// 008d5e03  750f                 jne 0x8d5e14
// 008d5e05  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 008d5e0b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d5e12  eb09                 jmp 0x8d5e1d
// 008d5e14  89942484000000       mov dword ptr [esp + 0x84], edx
// 008d5e1b  8bc2                 mov eax, edx
// 008d5e1d  89442418             mov dword ptr [esp + 0x18], eax
// 008d5e21  89442414             mov dword ptr [esp + 0x14], eax
// 008d5e25  8b01                 mov eax, dword ptr [ecx]
// 008d5e27  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d5e2a  ffd2                 call edx
// 008d5e2c  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 008d5e33  83f803               cmp eax, 3
// 008d5e36  0f8760070000         ja 0x8d659c
// 008d5e3c  ff2485d4658d00       jmp dword ptr [eax*4 + 0x8d65d4]
// 008d5e43  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d5e47  8d47ff               lea eax, [edi - 1]
// 008d5e4a  89442444             mov dword ptr [esp + 0x44], eax
// 008d5e4e  4d                   dec ebp
// 008d5e4f  8bc2                 mov eax, edx
// 008d5e51  2bc5                 sub eax, ebp
// 008d5e53  8d4802               lea ecx, [eax + 2]
// 008d5e56  89442410             mov dword ptr [esp + 0x10], eax
// 008d5e5a  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d5e5e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d5e62  83c003               add eax, 3
// 008d5e65  2bcf                 sub ecx, edi
// 008d5e67  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d5e6b  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d5e6f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d5e76  83c105               add ecx, 5
// 008d5e79  8bc5                 mov eax, ebp
// 008d5e7b  2bc2                 sub eax, edx
// 008d5e7d  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d5e81  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d5e84  8b11                 mov edx, dword ptr [ecx]
// 008d5e86  89442424             mov dword ptr [esp + 0x24], eax
// 008d5e8a  83c0fd               add eax, -3
// 008d5e8d  89442428             mov dword ptr [esp + 0x28], eax
// 008d5e91  89442460             mov dword ptr [esp + 0x60], eax
// 008d5e95  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d5e98  6a00                 push 0
// 008d5e9a  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008d5e9e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008d5ea6  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008d5eae  ffd0                 call eax
// 008d5eb0  50                   push eax
// 008d5eb1  6a04                 push 4
// 008d5eb3  8d4c2450             lea ecx, [esp + 0x50]
// 008d5eb7  51                   push ecx
// 008d5eb8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d5ebc  56                   push esi
// 008d5ebd  53                   push ebx
// 008d5ebe  e8cde9ffff           call 0x8d4890
// 008d5ec3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008d5eca  83c109               add ecx, 9
// 008d5ecd  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d5ed4  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008d5ed8  33c9                 xor ecx, ecx
// 008d5eda  89442430             mov dword ptr [esp + 0x30], eax
// 008d5ede  bafeffffff           mov edx, 0xfffffffe
// 008d5ee3  8d45ff               lea eax, [ebp - 1]
// 008d5ee6  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d5eea  894c2478             mov dword ptr [esp + 0x78], ecx
// 008d5eee  6a07                 push 7
// 008d5ef0  89442430             mov dword ptr [esp + 0x30], eax
// 008d5ef4  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d5ef8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5efc  8d4c2448             lea ecx, [esp + 0x48]
// 008d5f00  89542458             mov dword ptr [esp + 0x58], edx
// 008d5f04  8954245c             mov dword ptr [esp + 0x5c], edx
// 008d5f08  89542478             mov dword ptr [esp + 0x78], edx
// 008d5f0c  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008d5f13  51                   push ecx
// 008d5f14  89442458             mov dword ptr [esp + 0x58], eax
// 008d5f18  89442474             mov dword ptr [esp + 0x74], eax
// 008d5f1c  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d5f20  52                   push edx
// 008d5f21  53                   push ebx
// 008d5f22  897c2454             mov dword ptr [esp + 0x54], edi
// 008d5f26  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008d5f2e  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 008d5f36  c744247802000000     mov dword ptr [esp + 0x78], 2
// 008d5f3e  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d5f45  e866e7ffff           call 0x8d46b0
// 008d5f4a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d5f4e  8d47ff               lea eax, [edi - 1]
// 008d5f51  89442454             mov dword ptr [esp + 0x54], eax
// 008d5f55  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d5f59  89442458             mov dword ptr [esp + 0x58], eax
// 008d5f5d  b8feffffff           mov eax, 0xfffffffe
// 008d5f62  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008d5f6a  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d5f6e  89442464             mov dword ptr [esp + 0x64], eax
// 008d5f72  89442468             mov dword ptr [esp + 0x68], eax
// 008d5f76  6a03                 push 3
// 008d5f78  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5f7c  8d542458             lea edx, [esp + 0x58]
// 008d5f80  52                   push edx
// 008d5f81  50                   push eax
// 008d5f82  53                   push ebx
// 008d5f83  e828e7ffff           call 0x8d46b0
// 008d5f88  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008d5f8f  8b542458             mov edx, dword ptr [esp + 0x58]
// 008d5f93  8d4ffd               lea ecx, [edi - 3]
// 008d5f96  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d5f9a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d5f9e  42                   inc edx
// 008d5f9f  83c104               add ecx, 4
// 008d5fa2  8944246c             mov dword ptr [esp + 0x6c], eax
// 008d5fa6  6a04                 push 4
// 008d5fa8  8d442468             lea eax, [esp + 0x68]
// 008d5fac  8954246c             mov dword ptr [esp + 0x6c], edx
// 008d5fb0  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d5fb4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d5fbb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d5fbf  50                   push eax
// 008d5fc0  51                   push ecx
// 008d5fc1  83c2fc               add edx, -4
// 008d5fc4  53                   push ebx
// 008d5fc5  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008d5fd0  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 008d5fdb  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 008d5fe6  89942490000000       mov dword ptr [esp + 0x90], edx
// 008d5fed  e8bee6ffff           call 0x8d46b0
// 008d5ff2  8b5660               mov edx, dword ptr [esi + 0x60]
// 008d5ff5  83c430               add esp, 0x30
// 008d5ff8  397204               cmp dword ptr [edx + 4], esi
// 008d5ffb  0f859b050000         jne 0x8d659c
// 008d6001  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d6005  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d6009  50                   push eax
// 008d600a  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d600e  2bf8                 sub edi, eax
// 008d6010  2bf9                 sub edi, ecx
// 008d6012  8d542ffd             lea edx, [edi + ebp - 3]
// 008d6016  52                   push edx
// 008d6017  2bc5                 sub eax, ebp
// 008d6019  55                   push ebp
// 008d601a  8d440804             lea eax, [eax + ecx + 4]
// 008d601e  50                   push eax
// 008d601f  53                   push ebx
// 008d6020  e84bdeffff           call 0x8d3e70
// 008d6025  e96f050000           jmp 0x8d6599
// 008d602a  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d602e  33c9                 xor ecx, ecx
// 008d6030  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d6034  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d6038  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d603c  2bcd                 sub ecx, ebp
// 008d603e  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d6042  83c105               add ecx, 5
// 008d6045  894c2458             mov dword ptr [esp + 0x58], ecx
// 008d6049  4f                   dec edi
// 008d604a  8d45ff               lea eax, [ebp - 1]
// 008d604d  89442448             mov dword ptr [esp + 0x48], eax
// 008d6051  8bcf                 mov ecx, edi
// 008d6053  2bca                 sub ecx, edx
// 008d6055  8bc2                 mov eax, edx
// 008d6057  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d605b  2bc7                 sub eax, edi
// 008d605d  83c1fe               add ecx, -2
// 008d6060  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d6067  83c002               add eax, 2
// 008d606a  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008d606e  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d6071  8b11                 mov edx, dword ptr [ecx]
// 008d6073  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d6077  89442460             mov dword ptr [esp + 0x60], eax
// 008d607b  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d607e  6a00                 push 0
// 008d6080  897c2448             mov dword ptr [esp + 0x48], edi
// 008d6084  ffd0                 call eax
// 008d6086  50                   push eax
// 008d6087  6a04                 push 4
// 008d6089  8d4c2450             lea ecx, [esp + 0x50]
// 008d608d  51                   push ecx
// 008d608e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d6092  56                   push esi
// 008d6093  53                   push ebx
// 008d6094  e8f7e7ffff           call 0x8d4890
// 008d6099  89442424             mov dword ptr [esp + 0x24], eax
// 008d609d  33c9                 xor ecx, ecx
// 008d609f  8d47ff               lea eax, [edi - 1]
// 008d60a2  89442430             mov dword ptr [esp + 0x30], eax
// 008d60a6  89442444             mov dword ptr [esp + 0x44], eax
// 008d60aa  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d60b1  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d60b5  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008d60b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d60bd  bafeffffff           mov edx, 0xfffffffe
// 008d60c2  83c003               add eax, 3
// 008d60c5  83c109               add ecx, 9
// 008d60c8  89542454             mov dword ptr [esp + 0x54], edx
// 008d60cc  89542458             mov dword ptr [esp + 0x58], edx
// 008d60d0  89542478             mov dword ptr [esp + 0x78], edx
// 008d60d4  6a07                 push 7
// 008d60d6  8d542448             lea edx, [esp + 0x48]
// 008d60da  89442430             mov dword ptr [esp + 0x30], eax
// 008d60de  89442450             mov dword ptr [esp + 0x50], eax
// 008d60e2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008d60e6  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d60ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d60ee  89442474             mov dword ptr [esp + 0x74], eax
// 008d60f2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008d60f9  52                   push edx
// 008d60fa  50                   push eax
// 008d60fb  83c1fd               add ecx, -3
// 008d60fe  53                   push ebx
// 008d60ff  896c2458             mov dword ptr [esp + 0x58], ebp
// 008d6103  c744247402000000     mov dword ptr [esp + 0x74], 2
// 008d610b  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 008d6113  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008d6117  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008d6122  e889e5ffff           call 0x8d46b0
// 008d6127  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d612b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d612f  8d45ff               lea eax, [ebp - 1]
// 008d6132  89442458             mov dword ptr [esp + 0x58], eax
// 008d6136  b8feffffff           mov eax, 0xfffffffe
// 008d613b  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d613f  8954245c             mov dword ptr [esp + 0x5c], edx
// 008d6143  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008d614b  89442464             mov dword ptr [esp + 0x64], eax
// 008d614f  89442468             mov dword ptr [esp + 0x68], eax
// 008d6153  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d6157  6a03                 push 3
// 008d6159  8d442458             lea eax, [esp + 0x58]
// 008d615d  50                   push eax
// 008d615e  51                   push ecx
// 008d615f  53                   push ebx
// 008d6160  e84be5ffff           call 0x8d46b0
// 008d6165  8b542454             mov edx, dword ptr [esp + 0x54]
// 008d6169  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d616d  42                   inc edx
// 008d616e  89542464             mov dword ptr [esp + 0x64], edx
// 008d6172  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d6176  83c2fc               add edx, -4
// 008d6179  894c2470             mov dword ptr [esp + 0x70], ecx
// 008d617d  6a04                 push 4
// 008d617f  8d45fd               lea eax, [ebp - 3]
// 008d6182  8d4c2468             lea ecx, [esp + 0x68]
// 008d6186  8944246c             mov dword ptr [esp + 0x6c], eax
// 008d618a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008d6191  89942480000000       mov dword ptr [esp + 0x80], edx
// 008d6198  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d619c  51                   push ecx
// 008d619d  52                   push edx
// 008d619e  83c004               add eax, 4
// 008d61a1  53                   push ebx
// 008d61a2  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008d61aa  c784248400000003000000 mov dword ptr [esp + 0x84], 3
// 008d61b5  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 008d61c0  89842490000000       mov dword ptr [esp + 0x90], eax
// 008d61c7  e8e4e4ffff           call 0x8d46b0
// 008d61cc  8b4660               mov eax, dword ptr [esi + 0x60]
// 008d61cf  83c430               add esp, 0x30
// 008d61d2  397004               cmp dword ptr [eax + 4], esi
// 008d61d5  0f85c1030000         jne 0x8d659c
// 008d61db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d61df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d61e3  51                   push ecx
// 008d61e4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d61e8  2bc1                 sub eax, ecx
// 008d61ea  8d5428fd             lea edx, [eax + ebp - 3]
// 008d61ee  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d61f5  52                   push edx
// 008d61f6  8d4c0104             lea ecx, [ecx + eax + 4]
// 008d61fa  51                   push ecx
// 008d61fb  57                   push edi
// 008d61fc  e992030000           jmp 0x8d6593
// 008d6201  8d47ff               lea eax, [edi - 1]
// 008d6204  89442444             mov dword ptr [esp + 0x44], eax
// 008d6208  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d620c  8bcd                 mov ecx, ebp
// 008d620e  2bc8                 sub ecx, eax
// 008d6210  894c2424             mov dword ptr [esp + 0x24], ecx
// 008d6214  49                   dec ecx
// 008d6215  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d6219  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d621d  2bcf                 sub ecx, edi
// 008d621f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d6226  89442448             mov dword ptr [esp + 0x48], eax
// 008d622a  83c105               add ecx, 5
// 008d622d  2bc5                 sub eax, ebp
// 008d622f  894c2454             mov dword ptr [esp + 0x54], ecx
// 008d6233  8d4803               lea ecx, [eax + 3]
// 008d6236  33d2                 xor edx, edx
// 008d6238  89442410             mov dword ptr [esp + 0x10], eax
// 008d623c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d6240  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008d6244  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d6247  83c002               add eax, 2
// 008d624a  8954244c             mov dword ptr [esp + 0x4c], edx
// 008d624e  89542458             mov dword ptr [esp + 0x58], edx
// 008d6252  52                   push edx
// 008d6253  8b11                 mov edx, dword ptr [ecx]
// 008d6255  89442464             mov dword ptr [esp + 0x64], eax
// 008d6259  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d625c  ffd0                 call eax
// 008d625e  50                   push eax
// 008d625f  6a04                 push 4
// 008d6261  8d4c2450             lea ecx, [esp + 0x50]
// 008d6265  51                   push ecx
// 008d6266  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d626a  56                   push esi
// 008d626b  53                   push ebx
// 008d626c  e81fe6ffff           call 0x8d4890
// 008d6271  89442430             mov dword ptr [esp + 0x30], eax
// 008d6275  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d6279  40                   inc eax
// 008d627a  89442448             mov dword ptr [esp + 0x48], eax
// 008d627e  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d6282  83c0fd               add eax, -3
// 008d6285  89442428             mov dword ptr [esp + 0x28], eax
// 008d6289  89442450             mov dword ptr [esp + 0x50], eax
// 008d628d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d6294  83c009               add eax, 9
// 008d6297  33d2                 xor edx, edx
// 008d6299  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d62a0  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d62a4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d62a8  8954244c             mov dword ptr [esp + 0x4c], edx
// 008d62ac  89542460             mov dword ptr [esp + 0x60], edx
// 008d62b0  89542478             mov dword ptr [esp + 0x78], edx
// 008d62b4  6a07                 push 7
// 008d62b6  8d542448             lea edx, [esp + 0x48]
// 008d62ba  89442470             mov dword ptr [esp + 0x70], eax
// 008d62be  89442474             mov dword ptr [esp + 0x74], eax
// 008d62c2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008d62c9  52                   push edx
// 008d62ca  b9feffffff           mov ecx, 0xfffffffe
// 008d62cf  50                   push eax
// 008d62d0  53                   push ebx
// 008d62d1  897c2454             mov dword ptr [esp + 0x54], edi
// 008d62d5  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d62d9  c744246802000000     mov dword ptr [esp + 0x68], 2
// 008d62e1  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 008d62e9  894c2478             mov dword ptr [esp + 0x78], ecx
// 008d62ed  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008d62f4  e8b7e3ffff           call 0x8d46b0
// 008d62f9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d62fd  8d47ff               lea eax, [edi - 1]
// 008d6300  89442454             mov dword ptr [esp + 0x54], eax
// 008d6304  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d6308  40                   inc eax
// 008d6309  89442458             mov dword ptr [esp + 0x58], eax
// 008d630d  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008d6315  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d6319  c7442464feffffff     mov dword ptr [esp + 0x64], 0xfffffffe
// 008d6321  c744246802000000     mov dword ptr [esp + 0x68], 2
// 008d6329  6a03                 push 3
// 008d632b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d632f  8d542458             lea edx, [esp + 0x58]
// 008d6333  52                   push edx
// 008d6334  50                   push eax
// 008d6335  53                   push ebx
// 008d6336  e875e3ffff           call 0x8d46b0
// 008d633b  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008d6342  8d4ffd               lea ecx, [edi - 3]
// 008d6345  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d6349  8d55ff               lea edx, [ebp - 1]
// 008d634c  6a04                 push 4
// 008d634e  8d4c2468             lea ecx, [esp + 0x68]
// 008d6352  8954246c             mov dword ptr [esp + 0x6c], edx
// 008d6356  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d635a  89442470             mov dword ptr [esp + 0x70], eax
// 008d635e  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d6362  51                   push ecx
// 008d6363  83c004               add eax, 4
// 008d6366  52                   push edx
// 008d6367  53                   push ebx
// 008d6368  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008d6373  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 008d637e  c7842488000000fdffffff mov dword ptr [esp + 0x88], 0xfffffffd
// 008d6389  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008d6390  89842490000000       mov dword ptr [esp + 0x90], eax
// 008d6397  e814e3ffff           call 0x8d46b0
// 008d639c  8b4660               mov eax, dword ptr [esi + 0x60]
// 008d639f  83c430               add esp, 0x30
// 008d63a2  397004               cmp dword ptr [eax + 4], esi
// 008d63a5  0f85f1010000         jne 0x8d659c
// 008d63ab  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d63af  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d63b3  51                   push ecx
// 008d63b4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d63b8  2bf8                 sub edi, eax
// 008d63ba  2bf9                 sub edi, ecx
// 008d63bc  8d542ffd             lea edx, [edi + ebp - 3]
// 008d63c0  52                   push edx
// 008d63c1  2bc5                 sub eax, ebp
// 008d63c3  51                   push ecx
// 008d63c4  8d440804             lea eax, [eax + ecx + 4]
// 008d63c8  50                   push eax
// 008d63c9  53                   push ebx
// 008d63ca  e8a1daffff           call 0x8d3e70
// 008d63cf  e9c5010000           jmp 0x8d6599
// 008d63d4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d63d8  8d4101               lea eax, [ecx + 1]
// 008d63db  89442444             mov dword ptr [esp + 0x44], eax
// 008d63df  8d45ff               lea eax, [ebp - 1]
// 008d63e2  89442448             mov dword ptr [esp + 0x48], eax
// 008d63e6  8bc7                 mov eax, edi
// 008d63e8  2bc1                 sub eax, ecx
// 008d63ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d63ee  83c0fe               add eax, -2
// 008d63f1  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d63f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 008d63f9  2bc5                 sub eax, ebp
// 008d63fb  89442410             mov dword ptr [esp + 0x10], eax
// 008d63ff  83c005               add eax, 5
// 008d6402  89442458             mov dword ptr [esp + 0x58], eax
// 008d6406  8bc1                 mov eax, ecx
// 008d6408  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d640b  33d2                 xor edx, edx
// 008d640d  2bc7                 sub eax, edi
// 008d640f  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d6416  83c002               add eax, 2
// 008d6419  89542450             mov dword ptr [esp + 0x50], edx
// 008d641d  89542454             mov dword ptr [esp + 0x54], edx
// 008d6421  52                   push edx
// 008d6422  8b11                 mov edx, dword ptr [ecx]
// 008d6424  89442460             mov dword ptr [esp + 0x60], eax
// 008d6428  89442464             mov dword ptr [esp + 0x64], eax
// 008d642c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d642f  ffd0                 call eax
// 008d6431  50                   push eax
// 008d6432  6a04                 push 4
// 008d6434  8d4c2450             lea ecx, [esp + 0x50]
// 008d6438  51                   push ecx
// 008d6439  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d643d  56                   push esi
// 008d643e  53                   push ebx
// 008d643f  e84ce4ffff           call 0x8d4890
// 008d6444  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d6448  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d644c  40                   inc eax
// 008d644d  89442444             mov dword ptr [esp + 0x44], eax
// 008d6451  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d6455  83c0fd               add eax, -3
// 008d6458  89442430             mov dword ptr [esp + 0x30], eax
// 008d645c  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d6460  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d6464  83c009               add eax, 9
// 008d6467  33d2                 xor edx, edx
// 008d6469  89442428             mov dword ptr [esp + 0x28], eax
// 008d646d  89442460             mov dword ptr [esp + 0x60], eax
// 008d6471  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d6478  83c003               add eax, 3
// 008d647b  89542450             mov dword ptr [esp + 0x50], edx
// 008d647f  8954245c             mov dword ptr [esp + 0x5c], edx
// 008d6483  89542474             mov dword ptr [esp + 0x74], edx
// 008d6487  6a07                 push 7
// 008d6489  8d542448             lea edx, [esp + 0x48]
// 008d648d  89442470             mov dword ptr [esp + 0x70], eax
// 008d6491  89442474             mov dword ptr [esp + 0x74], eax
// 008d6495  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008d649c  52                   push edx
// 008d649d  b9feffffff           mov ecx, 0xfffffffe
// 008d64a2  50                   push eax
// 008d64a3  53                   push ebx
// 008d64a4  896c2458             mov dword ptr [esp + 0x58], ebp
// 008d64a8  c744246402000000     mov dword ptr [esp + 0x64], 2
// 008d64b0  894c2468             mov dword ptr [esp + 0x68], ecx
// 008d64b4  894c2474             mov dword ptr [esp + 0x74], ecx
// 008d64b8  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 008d64c0  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008d64c7  e8e4e1ffff           call 0x8d46b0
// 008d64cc  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d64d0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d64d4  40                   inc eax
// 008d64d5  89442454             mov dword ptr [esp + 0x54], eax
// 008d64d9  8d45ff               lea eax, [ebp - 1]
// 008d64dc  89442458             mov dword ptr [esp + 0x58], eax
// 008d64e0  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008d64e4  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008d64ec  c744246402000000     mov dword ptr [esp + 0x64], 2
// 008d64f4  c7442468feffffff     mov dword ptr [esp + 0x68], 0xfffffffe
// 008d64fc  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d6500  6a03                 push 3
// 008d6502  8d542458             lea edx, [esp + 0x58]
// 008d6506  52                   push edx
// 008d6507  50                   push eax
// 008d6508  53                   push ebx
// 008d6509  e8a2e1ffff           call 0x8d46b0
// 008d650e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d6512  4f                   dec edi
// 008d6513  897c2464             mov dword ptr [esp + 0x64], edi
// 008d6517  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 008d651e  8d4704               lea eax, [edi + 4]
// 008d6521  8d4dfd               lea ecx, [ebp - 3]
// 008d6524  8944247c             mov dword ptr [esp + 0x7c], eax
// 008d6528  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d652f  6a04                 push 4
// 008d6531  8d442468             lea eax, [esp + 0x68]
// 008d6535  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008d6539  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d653d  50                   push eax
// 008d653e  51                   push ecx
// 008d653f  53                   push ebx
// 008d6540  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008d6548  89942480000000       mov dword ptr [esp + 0x80], edx
// 008d654f  c7842484000000fdffffff mov dword ptr [esp + 0x84], 0xfffffffd
// 008d655a  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 008d6565  e846e1ffff           call 0x8d46b0
// 008d656a  8b5660               mov edx, dword ptr [esi + 0x60]
// 008d656d  83c430               add esp, 0x30
// 008d6570  397204               cmp dword ptr [edx + 4], esi
// 008d6573  7527                 jne 0x8d659c
// 008d6575  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d6579  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d657d  50                   push eax
// 008d657e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d6582  2bc1                 sub eax, ecx
// 008d6584  8d5428fd             lea edx, [eax + ebp - 3]
// 008d6588  52                   push edx
// 008d6589  8d443904             lea eax, [ecx + edi + 4]
// 008d658d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d6591  50                   push eax
// 008d6592  51                   push ecx
// 008d6593  53                   push ebx
// 008d6594  e8a7d8ffff           call 0x8d3e40
// 008d6599  83c414               add esp, 0x14
// 008d659c  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008d659f  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d65a3  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008d65a6  8b11                 mov edx, dword ptr [ecx]
// 008d65a8  6a01                 push 1
// 008d65aa  83ec10               sub esp, 0x10
// 008d65ad  8bc4                 mov eax, esp
// 008d65af  8938                 mov dword ptr [eax], edi
// 008d65b1  8b7e48               mov edi, dword ptr [esi + 0x48]
// 008d65b4  897804               mov dword ptr [eax + 4], edi
// 008d65b7  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008d65ba  897808               mov dword ptr [eax + 8], edi
// 008d65bd  8b7e50               mov edi, dword ptr [esi + 0x50]
// 008d65c0  56                   push esi
// 008d65c1  89780c               mov dword ptr [eax + 0xc], edi
// 008d65c4  8b4268               mov eax, dword ptr [edx + 0x68]
// 008d65c7  53                   push ebx
// 008d65c8  ffd0                 call eax
// 008d65ca  5f                   pop edi
// 008d65cb  5e                   pop esi
// 008d65cc  5d                   pop ebp
// 008d65cd  5b                   pop ebx
// 008d65ce  83c46c               add esp, 0x6c
// 008d65d1  c20800               ret 8
// 008d65d4  43                   inc ebx
// 008d65d5  5e                   pop esi
// 008d65d6  8d00                 lea eax, [eax]
// 008d65d8  2a608d               sub ah, byte ptr [eax - 0x73]
// 008d65db  0001                 add byte ptr [ecx], al
// 008d65dd  628d00d4638d         bound ecx, qword ptr [ebp - 0x729c2c00]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp