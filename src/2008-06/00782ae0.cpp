// roc 2008-06 00782ae0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 2212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00782ae0
//
// 00782ae0  83ec6c               sub esp, 0x6c
// 00782ae3  53                   push ebx
// 00782ae4  55                   push ebp
// 00782ae5  56                   push esi
// 00782ae6  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00782aed  8b4644               mov eax, dword ptr [esi + 0x44]
// 00782af0  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 00782af3  8bd9                 mov ebx, ecx
// 00782af5  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00782af8  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00782afb  89442430             mov dword ptr [esp + 0x30], eax
// 00782aff  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00782b05  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00782b0b  57                   push edi
// 00782b0c  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00782b0f  895c2420             mov dword ptr [esp + 0x20], ebx
// 00782b13  894c2438             mov dword ptr [esp + 0x38], ecx
// 00782b17  83faff               cmp edx, -1
// 00782b1a  750f                 jne 0x782b2b
// 00782b1c  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00782b22  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00782b29  eb07                 jmp 0x782b32
// 00782b2b  89942484000000       mov dword ptr [esp + 0x84], edx
// 00782b32  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00782b38  83faff               cmp edx, -1
// 00782b3b  7506                 jne 0x782b43
// 00782b3d  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00782b43  89542414             mov dword ptr [esp + 0x14], edx
// 00782b47  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00782b4d  83faff               cmp edx, -1
// 00782b50  750c                 jne 0x782b5e
// 00782b52  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00782b58  894c2418             mov dword ptr [esp + 0x18], ecx
// 00782b5c  eb04                 jmp 0x782b62
// 00782b5e  89542418             mov dword ptr [esp + 0x18], edx
// 00782b62  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00782b65  397104               cmp dword ptr [ecx + 4], esi
// 00782b68  7525                 jne 0x782b8f
// 00782b6a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00782b70  83faff               cmp edx, -1
// 00782b73  7506                 jne 0x782b7b
// 00782b75  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00782b7b  89942484000000       mov dword ptr [esp + 0x84], edx
// 00782b82  baffffff00           mov edx, 0xffffff
// 00782b87  89542414             mov dword ptr [esp + 0x14], edx
// 00782b8b  89542418             mov dword ptr [esp + 0x18], edx
// 00782b8f  397108               cmp dword ptr [ecx + 8], esi
// 00782b92  7531                 jne 0x782bc5
// 00782b94  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00782b98  742b                 je 0x782bc5
// 00782b9a  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00782ba0  83faff               cmp edx, -1
// 00782ba3  750f                 jne 0x782bb4
// 00782ba5  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00782bab  89842484000000       mov dword ptr [esp + 0x84], eax
// 00782bb2  eb09                 jmp 0x782bbd
// 00782bb4  89942484000000       mov dword ptr [esp + 0x84], edx
// 00782bbb  8bc2                 mov eax, edx
// 00782bbd  89442418             mov dword ptr [esp + 0x18], eax
// 00782bc1  89442414             mov dword ptr [esp + 0x14], eax
// 00782bc5  8b01                 mov eax, dword ptr [ecx]
// 00782bc7  8b5048               mov edx, dword ptr [eax + 0x48]
// 00782bca  ffd2                 call edx
// 00782bcc  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00782bd3  83f803               cmp eax, 3
// 00782bd6  0f8760070000         ja 0x78333c
// 00782bdc  ff248574337800       jmp dword ptr [eax*4 + 0x783374]
// 00782be3  8b542438             mov edx, dword ptr [esp + 0x38]
// 00782be7  8d47ff               lea eax, [edi - 1]
// 00782bea  89442444             mov dword ptr [esp + 0x44], eax
// 00782bee  4d                   dec ebp
// 00782bef  8bc2                 mov eax, edx
// 00782bf1  2bc5                 sub eax, ebp
// 00782bf3  8d4802               lea ecx, [eax + 2]
// 00782bf6  89442410             mov dword ptr [esp + 0x10], eax
// 00782bfa  894c2450             mov dword ptr [esp + 0x50], ecx
// 00782bfe  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00782c02  83c003               add eax, 3
// 00782c05  2bcf                 sub ecx, edi
// 00782c07  8944241c             mov dword ptr [esp + 0x1c], eax
// 00782c0b  8944245c             mov dword ptr [esp + 0x5c], eax
// 00782c0f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00782c16  83c105               add ecx, 5
// 00782c19  8bc5                 mov eax, ebp
// 00782c1b  2bc2                 sub eax, edx
// 00782c1d  894c2454             mov dword ptr [esp + 0x54], ecx
// 00782c21  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00782c24  8b11                 mov edx, dword ptr [ecx]
// 00782c26  89442424             mov dword ptr [esp + 0x24], eax
// 00782c2a  83c0fd               add eax, -3
// 00782c2d  89442428             mov dword ptr [esp + 0x28], eax
// 00782c31  89442460             mov dword ptr [esp + 0x60], eax
// 00782c35  8b4248               mov eax, dword ptr [edx + 0x48]
// 00782c38  6a00                 push 0
// 00782c3a  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00782c3e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00782c46  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00782c4e  ffd0                 call eax
// 00782c50  50                   push eax
// 00782c51  6a04                 push 4
// 00782c53  8d4c2450             lea ecx, [esp + 0x50]
// 00782c57  51                   push ecx
// 00782c58  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00782c5c  56                   push esi
// 00782c5d  53                   push ebx
// 00782c5e  e80deaffff           call 0x781670
// 00782c63  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00782c6a  83c109               add ecx, 9
// 00782c6d  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00782c74  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00782c78  33c9                 xor ecx, ecx
// 00782c7a  89442430             mov dword ptr [esp + 0x30], eax
// 00782c7e  bafeffffff           mov edx, 0xfffffffe
// 00782c83  8d45ff               lea eax, [ebp - 1]
// 00782c86  894c2460             mov dword ptr [esp + 0x60], ecx
// 00782c8a  894c2478             mov dword ptr [esp + 0x78], ecx
// 00782c8e  6a07                 push 7
// 00782c90  89442430             mov dword ptr [esp + 0x30], eax
// 00782c94  8944244c             mov dword ptr [esp + 0x4c], eax
// 00782c98  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782c9c  8d4c2448             lea ecx, [esp + 0x48]
// 00782ca0  89542458             mov dword ptr [esp + 0x58], edx
// 00782ca4  8954245c             mov dword ptr [esp + 0x5c], edx
// 00782ca8  89542478             mov dword ptr [esp + 0x78], edx
// 00782cac  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00782cb3  51                   push ecx
// 00782cb4  89442458             mov dword ptr [esp + 0x58], eax
// 00782cb8  89442474             mov dword ptr [esp + 0x74], eax
// 00782cbc  8b442430             mov eax, dword ptr [esp + 0x30]
// 00782cc0  52                   push edx
// 00782cc1  53                   push ebx
// 00782cc2  897c2454             mov dword ptr [esp + 0x54], edi
// 00782cc6  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00782cce  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 00782cd6  c744247802000000     mov dword ptr [esp + 0x78], 2
// 00782cde  89842480000000       mov dword ptr [esp + 0x80], eax
// 00782ce5  e8a6e7ffff           call 0x781490
// 00782cea  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00782cee  8d47ff               lea eax, [edi - 1]
// 00782cf1  89442454             mov dword ptr [esp + 0x54], eax
// 00782cf5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00782cf9  89442458             mov dword ptr [esp + 0x58], eax
// 00782cfd  b8feffffff           mov eax, 0xfffffffe
// 00782d02  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00782d0a  894c2460             mov dword ptr [esp + 0x60], ecx
// 00782d0e  89442464             mov dword ptr [esp + 0x64], eax
// 00782d12  89442468             mov dword ptr [esp + 0x68], eax
// 00782d16  6a03                 push 3
// 00782d18  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782d1c  8d542458             lea edx, [esp + 0x58]
// 00782d20  52                   push edx
// 00782d21  50                   push eax
// 00782d22  53                   push ebx
// 00782d23  e868e7ffff           call 0x781490
// 00782d28  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00782d2f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00782d33  8d4ffd               lea ecx, [edi - 3]
// 00782d36  894c2464             mov dword ptr [esp + 0x64], ecx
// 00782d3a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00782d3e  42                   inc edx
// 00782d3f  83c104               add ecx, 4
// 00782d42  8944246c             mov dword ptr [esp + 0x6c], eax
// 00782d46  6a04                 push 4
// 00782d48  8d442468             lea eax, [esp + 0x68]
// 00782d4c  8954246c             mov dword ptr [esp + 0x6c], edx
// 00782d50  8b542448             mov edx, dword ptr [esp + 0x48]
// 00782d54  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00782d5b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00782d5f  50                   push eax
// 00782d60  51                   push ecx
// 00782d61  83c2fc               add edx, -4
// 00782d64  53                   push ebx
// 00782d65  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00782d70  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 00782d7b  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 00782d86  89942490000000       mov dword ptr [esp + 0x90], edx
// 00782d8d  e8fee6ffff           call 0x781490
// 00782d92  8b5660               mov edx, dword ptr [esi + 0x60]
// 00782d95  83c430               add esp, 0x30
// 00782d98  397204               cmp dword ptr [edx + 4], esi
// 00782d9b  0f859b050000         jne 0x78333c
// 00782da1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00782da5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00782da9  50                   push eax
// 00782daa  8b442438             mov eax, dword ptr [esp + 0x38]
// 00782dae  2bf8                 sub edi, eax
// 00782db0  2bf9                 sub edi, ecx
// 00782db2  8d542ffd             lea edx, [edi + ebp - 3]
// 00782db6  52                   push edx
// 00782db7  2bc5                 sub eax, ebp
// 00782db9  55                   push ebp
// 00782dba  8d440804             lea eax, [eax + ecx + 4]
// 00782dbe  50                   push eax
// 00782dbf  53                   push ebx
// 00782dc0  e84bdeffff           call 0x780c10
// 00782dc5  e96f050000           jmp 0x783339
// 00782dca  8b542434             mov edx, dword ptr [esp + 0x34]
// 00782dce  33c9                 xor ecx, ecx
// 00782dd0  894c2450             mov dword ptr [esp + 0x50], ecx
// 00782dd4  894c2454             mov dword ptr [esp + 0x54], ecx
// 00782dd8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00782ddc  2bcd                 sub ecx, ebp
// 00782dde  894c2410             mov dword ptr [esp + 0x10], ecx
// 00782de2  83c105               add ecx, 5
// 00782de5  894c2458             mov dword ptr [esp + 0x58], ecx
// 00782de9  4f                   dec edi
// 00782dea  8d45ff               lea eax, [ebp - 1]
// 00782ded  89442448             mov dword ptr [esp + 0x48], eax
// 00782df1  8bcf                 mov ecx, edi
// 00782df3  2bca                 sub ecx, edx
// 00782df5  8bc2                 mov eax, edx
// 00782df7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00782dfb  2bc7                 sub eax, edi
// 00782dfd  83c1fe               add ecx, -2
// 00782e00  89842480000000       mov dword ptr [esp + 0x80], eax
// 00782e07  83c002               add eax, 2
// 00782e0a  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00782e0e  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00782e11  8b11                 mov edx, dword ptr [ecx]
// 00782e13  8944244c             mov dword ptr [esp + 0x4c], eax
// 00782e17  89442460             mov dword ptr [esp + 0x60], eax
// 00782e1b  8b4248               mov eax, dword ptr [edx + 0x48]
// 00782e1e  6a00                 push 0
// 00782e20  897c2448             mov dword ptr [esp + 0x48], edi
// 00782e24  ffd0                 call eax
// 00782e26  50                   push eax
// 00782e27  6a04                 push 4
// 00782e29  8d4c2450             lea ecx, [esp + 0x50]
// 00782e2d  51                   push ecx
// 00782e2e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00782e32  56                   push esi
// 00782e33  53                   push ebx
// 00782e34  e837e8ffff           call 0x781670
// 00782e39  89442424             mov dword ptr [esp + 0x24], eax
// 00782e3d  33c9                 xor ecx, ecx
// 00782e3f  8d47ff               lea eax, [edi - 1]
// 00782e42  89442430             mov dword ptr [esp + 0x30], eax
// 00782e46  89442444             mov dword ptr [esp + 0x44], eax
// 00782e4a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00782e51  894c2450             mov dword ptr [esp + 0x50], ecx
// 00782e55  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00782e59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782e5d  bafeffffff           mov edx, 0xfffffffe
// 00782e62  83c003               add eax, 3
// 00782e65  83c109               add ecx, 9
// 00782e68  89542454             mov dword ptr [esp + 0x54], edx
// 00782e6c  89542458             mov dword ptr [esp + 0x58], edx
// 00782e70  89542478             mov dword ptr [esp + 0x78], edx
// 00782e74  6a07                 push 7
// 00782e76  8d542448             lea edx, [esp + 0x48]
// 00782e7a  89442430             mov dword ptr [esp + 0x30], eax
// 00782e7e  89442450             mov dword ptr [esp + 0x50], eax
// 00782e82  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00782e86  894c2464             mov dword ptr [esp + 0x64], ecx
// 00782e8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00782e8e  89442474             mov dword ptr [esp + 0x74], eax
// 00782e92  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00782e99  52                   push edx
// 00782e9a  50                   push eax
// 00782e9b  83c1fd               add ecx, -3
// 00782e9e  53                   push ebx
// 00782e9f  896c2458             mov dword ptr [esp + 0x58], ebp
// 00782ea3  c744247402000000     mov dword ptr [esp + 0x74], 2
// 00782eab  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 00782eb3  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00782eb7  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00782ec2  e8c9e5ffff           call 0x781490
// 00782ec7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00782ecb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00782ecf  8d45ff               lea eax, [ebp - 1]
// 00782ed2  89442458             mov dword ptr [esp + 0x58], eax
// 00782ed6  b8feffffff           mov eax, 0xfffffffe
// 00782edb  894c2454             mov dword ptr [esp + 0x54], ecx
// 00782edf  8954245c             mov dword ptr [esp + 0x5c], edx
// 00782ee3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00782eeb  89442464             mov dword ptr [esp + 0x64], eax
// 00782eef  89442468             mov dword ptr [esp + 0x68], eax
// 00782ef3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782ef7  6a03                 push 3
// 00782ef9  8d442458             lea eax, [esp + 0x58]
// 00782efd  50                   push eax
// 00782efe  51                   push ecx
// 00782eff  53                   push ebx
// 00782f00  e88be5ffff           call 0x781490
// 00782f05  8b542454             mov edx, dword ptr [esp + 0x54]
// 00782f09  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00782f0d  42                   inc edx
// 00782f0e  89542464             mov dword ptr [esp + 0x64], edx
// 00782f12  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00782f16  83c2fc               add edx, -4
// 00782f19  894c2470             mov dword ptr [esp + 0x70], ecx
// 00782f1d  6a04                 push 4
// 00782f1f  8d45fd               lea eax, [ebp - 3]
// 00782f22  8d4c2468             lea ecx, [esp + 0x68]
// 00782f26  8944246c             mov dword ptr [esp + 0x6c], eax
// 00782f2a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00782f31  89942480000000       mov dword ptr [esp + 0x80], edx
// 00782f38  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00782f3c  51                   push ecx
// 00782f3d  52                   push edx
// 00782f3e  83c004               add eax, 4
// 00782f41  53                   push ebx
// 00782f42  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00782f4a  c784248400000003000000 mov dword ptr [esp + 0x84], 3
// 00782f55  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 00782f60  89842490000000       mov dword ptr [esp + 0x90], eax
// 00782f67  e824e5ffff           call 0x781490
// 00782f6c  8b4660               mov eax, dword ptr [esi + 0x60]
// 00782f6f  83c430               add esp, 0x30
// 00782f72  397004               cmp dword ptr [eax + 4], esi
// 00782f75  0f85c1030000         jne 0x78333c
// 00782f7b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782f7f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00782f83  51                   push ecx
// 00782f84  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00782f88  2bc1                 sub eax, ecx
// 00782f8a  8d5428fd             lea edx, [eax + ebp - 3]
// 00782f8e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00782f95  52                   push edx
// 00782f96  8d4c0104             lea ecx, [ecx + eax + 4]
// 00782f9a  51                   push ecx
// 00782f9b  57                   push edi
// 00782f9c  e992030000           jmp 0x783333
// 00782fa1  8d47ff               lea eax, [edi - 1]
// 00782fa4  89442444             mov dword ptr [esp + 0x44], eax
// 00782fa8  8b442438             mov eax, dword ptr [esp + 0x38]
// 00782fac  8bcd                 mov ecx, ebp
// 00782fae  2bc8                 sub ecx, eax
// 00782fb0  894c2424             mov dword ptr [esp + 0x24], ecx
// 00782fb4  49                   dec ecx
// 00782fb5  894c2450             mov dword ptr [esp + 0x50], ecx
// 00782fb9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00782fbd  2bcf                 sub ecx, edi
// 00782fbf  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00782fc6  89442448             mov dword ptr [esp + 0x48], eax
// 00782fca  83c105               add ecx, 5
// 00782fcd  2bc5                 sub eax, ebp
// 00782fcf  894c2454             mov dword ptr [esp + 0x54], ecx
// 00782fd3  8d4803               lea ecx, [eax + 3]
// 00782fd6  33d2                 xor edx, edx
// 00782fd8  89442410             mov dword ptr [esp + 0x10], eax
// 00782fdc  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00782fe0  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00782fe4  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00782fe7  83c002               add eax, 2
// 00782fea  8954244c             mov dword ptr [esp + 0x4c], edx
// 00782fee  89542458             mov dword ptr [esp + 0x58], edx
// 00782ff2  52                   push edx
// 00782ff3  8b11                 mov edx, dword ptr [ecx]
// 00782ff5  89442464             mov dword ptr [esp + 0x64], eax
// 00782ff9  8b4248               mov eax, dword ptr [edx + 0x48]
// 00782ffc  ffd0                 call eax
// 00782ffe  50                   push eax
// 00782fff  6a04                 push 4
// 00783001  8d4c2450             lea ecx, [esp + 0x50]
// 00783005  51                   push ecx
// 00783006  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0078300a  56                   push esi
// 0078300b  53                   push ebx
// 0078300c  e85fe6ffff           call 0x781670
// 00783011  89442430             mov dword ptr [esp + 0x30], eax
// 00783015  8b442438             mov eax, dword ptr [esp + 0x38]
// 00783019  40                   inc eax
// 0078301a  89442448             mov dword ptr [esp + 0x48], eax
// 0078301e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00783022  83c0fd               add eax, -3
// 00783025  89442428             mov dword ptr [esp + 0x28], eax
// 00783029  89442450             mov dword ptr [esp + 0x50], eax
// 0078302d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00783034  83c009               add eax, 9
// 00783037  33d2                 xor edx, edx
// 00783039  89842480000000       mov dword ptr [esp + 0x80], eax
// 00783040  8944245c             mov dword ptr [esp + 0x5c], eax
// 00783044  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00783048  8954244c             mov dword ptr [esp + 0x4c], edx
// 0078304c  89542460             mov dword ptr [esp + 0x60], edx
// 00783050  89542478             mov dword ptr [esp + 0x78], edx
// 00783054  6a07                 push 7
// 00783056  8d542448             lea edx, [esp + 0x48]
// 0078305a  89442470             mov dword ptr [esp + 0x70], eax
// 0078305e  89442474             mov dword ptr [esp + 0x74], eax
// 00783062  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00783069  52                   push edx
// 0078306a  b9feffffff           mov ecx, 0xfffffffe
// 0078306f  50                   push eax
// 00783070  53                   push ebx
// 00783071  897c2454             mov dword ptr [esp + 0x54], edi
// 00783075  894c2464             mov dword ptr [esp + 0x64], ecx
// 00783079  c744246802000000     mov dword ptr [esp + 0x68], 2
// 00783081  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 00783089  894c2478             mov dword ptr [esp + 0x78], ecx
// 0078308d  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00783094  e8f7e3ffff           call 0x781490
// 00783099  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0078309d  8d47ff               lea eax, [edi - 1]
// 007830a0  89442454             mov dword ptr [esp + 0x54], eax
// 007830a4  8b442448             mov eax, dword ptr [esp + 0x48]
// 007830a8  40                   inc eax
// 007830a9  89442458             mov dword ptr [esp + 0x58], eax
// 007830ad  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 007830b5  894c2460             mov dword ptr [esp + 0x60], ecx
// 007830b9  c7442464feffffff     mov dword ptr [esp + 0x64], 0xfffffffe
// 007830c1  c744246802000000     mov dword ptr [esp + 0x68], 2
// 007830c9  6a03                 push 3
// 007830cb  8b442428             mov eax, dword ptr [esp + 0x28]
// 007830cf  8d542458             lea edx, [esp + 0x58]
// 007830d3  52                   push edx
// 007830d4  50                   push eax
// 007830d5  53                   push ebx
// 007830d6  e8b5e3ffff           call 0x781490
// 007830db  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007830e2  8d4ffd               lea ecx, [edi - 3]
// 007830e5  894c2464             mov dword ptr [esp + 0x64], ecx
// 007830e9  8d55ff               lea edx, [ebp - 1]
// 007830ec  6a04                 push 4
// 007830ee  8d4c2468             lea ecx, [esp + 0x68]
// 007830f2  8954246c             mov dword ptr [esp + 0x6c], edx
// 007830f6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007830fa  89442470             mov dword ptr [esp + 0x70], eax
// 007830fe  8b442434             mov eax, dword ptr [esp + 0x34]
// 00783102  51                   push ecx
// 00783103  83c004               add eax, 4
// 00783106  52                   push edx
// 00783107  53                   push ebx
// 00783108  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00783113  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 0078311e  c7842488000000fdffffff mov dword ptr [esp + 0x88], 0xfffffffd
// 00783129  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00783130  89842490000000       mov dword ptr [esp + 0x90], eax
// 00783137  e854e3ffff           call 0x781490
// 0078313c  8b4660               mov eax, dword ptr [esi + 0x60]
// 0078313f  83c430               add esp, 0x30
// 00783142  397004               cmp dword ptr [eax + 4], esi
// 00783145  0f85f1010000         jne 0x78333c
// 0078314b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0078314f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00783153  51                   push ecx
// 00783154  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00783158  2bf8                 sub edi, eax
// 0078315a  2bf9                 sub edi, ecx
// 0078315c  8d542ffd             lea edx, [edi + ebp - 3]
// 00783160  52                   push edx
// 00783161  2bc5                 sub eax, ebp
// 00783163  51                   push ecx
// 00783164  8d440804             lea eax, [eax + ecx + 4]
// 00783168  50                   push eax
// 00783169  53                   push ebx
// 0078316a  e8a1daffff           call 0x780c10
// 0078316f  e9c5010000           jmp 0x783339
// 00783174  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00783178  8d4101               lea eax, [ecx + 1]
// 0078317b  89442444             mov dword ptr [esp + 0x44], eax
// 0078317f  8d45ff               lea eax, [ebp - 1]
// 00783182  89442448             mov dword ptr [esp + 0x48], eax
// 00783186  8bc7                 mov eax, edi
// 00783188  2bc1                 sub eax, ecx
// 0078318a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078318e  83c0fe               add eax, -2
// 00783191  8944244c             mov dword ptr [esp + 0x4c], eax
// 00783195  8b442438             mov eax, dword ptr [esp + 0x38]
// 00783199  2bc5                 sub eax, ebp
// 0078319b  89442410             mov dword ptr [esp + 0x10], eax
// 0078319f  83c005               add eax, 5
// 007831a2  89442458             mov dword ptr [esp + 0x58], eax
// 007831a6  8bc1                 mov eax, ecx
// 007831a8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007831ab  33d2                 xor edx, edx
// 007831ad  2bc7                 sub eax, edi
// 007831af  89842480000000       mov dword ptr [esp + 0x80], eax
// 007831b6  83c002               add eax, 2
// 007831b9  89542450             mov dword ptr [esp + 0x50], edx
// 007831bd  89542454             mov dword ptr [esp + 0x54], edx
// 007831c1  52                   push edx
// 007831c2  8b11                 mov edx, dword ptr [ecx]
// 007831c4  89442460             mov dword ptr [esp + 0x60], eax
// 007831c8  89442464             mov dword ptr [esp + 0x64], eax
// 007831cc  8b4248               mov eax, dword ptr [edx + 0x48]
// 007831cf  ffd0                 call eax
// 007831d1  50                   push eax
// 007831d2  6a04                 push 4
// 007831d4  8d4c2450             lea ecx, [esp + 0x50]
// 007831d8  51                   push ecx
// 007831d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007831dd  56                   push esi
// 007831de  53                   push ebx
// 007831df  e88ce4ffff           call 0x781670
// 007831e4  8944242c             mov dword ptr [esp + 0x2c], eax
// 007831e8  8b442434             mov eax, dword ptr [esp + 0x34]
// 007831ec  40                   inc eax
// 007831ed  89442444             mov dword ptr [esp + 0x44], eax
// 007831f1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007831f5  83c0fd               add eax, -3
// 007831f8  89442430             mov dword ptr [esp + 0x30], eax
// 007831fc  8944244c             mov dword ptr [esp + 0x4c], eax
// 00783200  8b442410             mov eax, dword ptr [esp + 0x10]
// 00783204  83c009               add eax, 9
// 00783207  33d2                 xor edx, edx
// 00783209  89442428             mov dword ptr [esp + 0x28], eax
// 0078320d  89442460             mov dword ptr [esp + 0x60], eax
// 00783211  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00783218  83c003               add eax, 3
// 0078321b  89542450             mov dword ptr [esp + 0x50], edx
// 0078321f  8954245c             mov dword ptr [esp + 0x5c], edx
// 00783223  89542474             mov dword ptr [esp + 0x74], edx
// 00783227  6a07                 push 7
// 00783229  8d542448             lea edx, [esp + 0x48]
// 0078322d  89442470             mov dword ptr [esp + 0x70], eax
// 00783231  89442474             mov dword ptr [esp + 0x74], eax
// 00783235  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0078323c  52                   push edx
// 0078323d  b9feffffff           mov ecx, 0xfffffffe
// 00783242  50                   push eax
// 00783243  53                   push ebx
// 00783244  896c2458             mov dword ptr [esp + 0x58], ebp
// 00783248  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00783250  894c2468             mov dword ptr [esp + 0x68], ecx
// 00783254  894c2474             mov dword ptr [esp + 0x74], ecx
// 00783258  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 00783260  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00783267  e824e2ffff           call 0x781490
// 0078326c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00783270  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00783274  40                   inc eax
// 00783275  89442454             mov dword ptr [esp + 0x54], eax
// 00783279  8d45ff               lea eax, [ebp - 1]
// 0078327c  89442458             mov dword ptr [esp + 0x58], eax
// 00783280  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00783284  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0078328c  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00783294  c7442468feffffff     mov dword ptr [esp + 0x68], 0xfffffffe
// 0078329c  8b442424             mov eax, dword ptr [esp + 0x24]
// 007832a0  6a03                 push 3
// 007832a2  8d542458             lea edx, [esp + 0x58]
// 007832a6  52                   push edx
// 007832a7  50                   push eax
// 007832a8  53                   push ebx
// 007832a9  e8e2e1ffff           call 0x781490
// 007832ae  8b542448             mov edx, dword ptr [esp + 0x48]
// 007832b2  4f                   dec edi
// 007832b3  897c2464             mov dword ptr [esp + 0x64], edi
// 007832b7  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 007832be  8d4704               lea eax, [edi + 4]
// 007832c1  8d4dfd               lea ecx, [ebp - 3]
// 007832c4  8944247c             mov dword ptr [esp + 0x7c], eax
// 007832c8  89842480000000       mov dword ptr [esp + 0x80], eax
// 007832cf  6a04                 push 4
// 007832d1  8d442468             lea eax, [esp + 0x68]
// 007832d5  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007832d9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007832dd  50                   push eax
// 007832de  51                   push ecx
// 007832df  53                   push ebx
// 007832e0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 007832e8  89942480000000       mov dword ptr [esp + 0x80], edx
// 007832ef  c7842484000000fdffffff mov dword ptr [esp + 0x84], 0xfffffffd
// 007832fa  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 00783305  e886e1ffff           call 0x781490
// 0078330a  8b5660               mov edx, dword ptr [esi + 0x60]
// 0078330d  83c430               add esp, 0x30
// 00783310  397204               cmp dword ptr [edx + 4], esi
// 00783313  7527                 jne 0x78333c
// 00783315  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00783319  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0078331d  50                   push eax
// 0078331e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00783322  2bc1                 sub eax, ecx
// 00783324  8d5428fd             lea edx, [eax + ebp - 3]
// 00783328  52                   push edx
// 00783329  8d443904             lea eax, [ecx + edi + 4]
// 0078332d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00783331  50                   push eax
// 00783332  51                   push ecx
// 00783333  53                   push ebx
// 00783334  e8a7d8ffff           call 0x780be0
// 00783339  83c414               add esp, 0x14
// 0078333c  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0078333f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00783343  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00783346  8b11                 mov edx, dword ptr [ecx]
// 00783348  6a01                 push 1
// 0078334a  83ec10               sub esp, 0x10
// 0078334d  8bc4                 mov eax, esp
// 0078334f  8938                 mov dword ptr [eax], edi
// 00783351  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00783354  897804               mov dword ptr [eax + 4], edi
// 00783357  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 0078335a  897808               mov dword ptr [eax + 8], edi
// 0078335d  8b7e50               mov edi, dword ptr [esi + 0x50]
// 00783360  56                   push esi
// 00783361  89780c               mov dword ptr [eax + 0xc], edi
// 00783364  8b4268               mov eax, dword ptr [edx + 0x68]
// 00783367  53                   push ebx
// 00783368  ffd0                 call eax
// 0078336a  5f                   pop edi
// 0078336b  5e                   pop esi
// 0078336c  5d                   pop ebp
// 0078336d  5b                   pop ebx
// 0078336e  83c46c               add esp, 0x6c
// 00783371  c20800               ret 8
// 00783374  e32b                 jecxz 0x7833a1
// 00783376  7800                 js 0x783378
// 00783378  ca2d78               retf 0x782d
// 0078337b  00a12f780074         add byte ptr [ecx + 0x7400782f], ah
// 00783381  317800               xor dword ptr [eax], edi
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
