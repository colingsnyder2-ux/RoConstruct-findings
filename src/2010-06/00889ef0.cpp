// roc 2010-06 00889ef0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 2212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00889ef0
//
// 00889ef0  83ec6c               sub esp, 0x6c
// 00889ef3  53                   push ebx
// 00889ef4  55                   push ebp
// 00889ef5  56                   push esi
// 00889ef6  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00889efd  8b4644               mov eax, dword ptr [esi + 0x44]
// 00889f00  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 00889f03  8bd9                 mov ebx, ecx
// 00889f05  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00889f08  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00889f0b  89442430             mov dword ptr [esp + 0x30], eax
// 00889f0f  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00889f15  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00889f1b  57                   push edi
// 00889f1c  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00889f1f  895c2420             mov dword ptr [esp + 0x20], ebx
// 00889f23  894c2438             mov dword ptr [esp + 0x38], ecx
// 00889f27  83faff               cmp edx, -1
// 00889f2a  750f                 jne 0x889f3b
// 00889f2c  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00889f32  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00889f39  eb07                 jmp 0x889f42
// 00889f3b  89942484000000       mov dword ptr [esp + 0x84], edx
// 00889f42  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00889f48  83faff               cmp edx, -1
// 00889f4b  7506                 jne 0x889f53
// 00889f4d  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00889f53  89542414             mov dword ptr [esp + 0x14], edx
// 00889f57  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00889f5d  83faff               cmp edx, -1
// 00889f60  750c                 jne 0x889f6e
// 00889f62  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00889f68  894c2418             mov dword ptr [esp + 0x18], ecx
// 00889f6c  eb04                 jmp 0x889f72
// 00889f6e  89542418             mov dword ptr [esp + 0x18], edx
// 00889f72  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00889f75  397104               cmp dword ptr [ecx + 4], esi
// 00889f78  7525                 jne 0x889f9f
// 00889f7a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00889f80  83faff               cmp edx, -1
// 00889f83  7506                 jne 0x889f8b
// 00889f85  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00889f8b  89942484000000       mov dword ptr [esp + 0x84], edx
// 00889f92  baffffff00           mov edx, 0xffffff
// 00889f97  89542414             mov dword ptr [esp + 0x14], edx
// 00889f9b  89542418             mov dword ptr [esp + 0x18], edx
// 00889f9f  397108               cmp dword ptr [ecx + 8], esi
// 00889fa2  7531                 jne 0x889fd5
// 00889fa4  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00889fa8  742b                 je 0x889fd5
// 00889faa  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00889fb0  83faff               cmp edx, -1
// 00889fb3  750f                 jne 0x889fc4
// 00889fb5  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00889fbb  89842484000000       mov dword ptr [esp + 0x84], eax
// 00889fc2  eb09                 jmp 0x889fcd
// 00889fc4  89942484000000       mov dword ptr [esp + 0x84], edx
// 00889fcb  8bc2                 mov eax, edx
// 00889fcd  89442418             mov dword ptr [esp + 0x18], eax
// 00889fd1  89442414             mov dword ptr [esp + 0x14], eax
// 00889fd5  8b01                 mov eax, dword ptr [ecx]
// 00889fd7  8b5048               mov edx, dword ptr [eax + 0x48]
// 00889fda  ffd2                 call edx
// 00889fdc  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00889fe3  83f803               cmp eax, 3
// 00889fe6  0f8760070000         ja 0x88a74c
// 00889fec  ff248584a78800       jmp dword ptr [eax*4 + 0x88a784]
// 00889ff3  8b542438             mov edx, dword ptr [esp + 0x38]
// 00889ff7  8d47ff               lea eax, [edi - 1]
// 00889ffa  89442444             mov dword ptr [esp + 0x44], eax
// 00889ffe  4d                   dec ebp
// 00889fff  8bc2                 mov eax, edx
// 0088a001  2bc5                 sub eax, ebp
// 0088a003  8d4802               lea ecx, [eax + 2]
// 0088a006  89442410             mov dword ptr [esp + 0x10], eax
// 0088a00a  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088a00e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088a012  83c003               add eax, 3
// 0088a015  2bcf                 sub ecx, edi
// 0088a017  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088a01b  8944245c             mov dword ptr [esp + 0x5c], eax
// 0088a01f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0088a026  83c105               add ecx, 5
// 0088a029  8bc5                 mov eax, ebp
// 0088a02b  2bc2                 sub eax, edx
// 0088a02d  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088a031  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088a034  8b11                 mov edx, dword ptr [ecx]
// 0088a036  89442424             mov dword ptr [esp + 0x24], eax
// 0088a03a  83c0fd               add eax, -3
// 0088a03d  89442428             mov dword ptr [esp + 0x28], eax
// 0088a041  89442460             mov dword ptr [esp + 0x60], eax
// 0088a045  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088a048  6a00                 push 0
// 0088a04a  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0088a04e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0088a056  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0088a05e  ffd0                 call eax
// 0088a060  50                   push eax
// 0088a061  6a04                 push 4
// 0088a063  8d4c2450             lea ecx, [esp + 0x50]
// 0088a067  51                   push ecx
// 0088a068  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a06c  56                   push esi
// 0088a06d  53                   push ebx
// 0088a06e  e8cde9ffff           call 0x888a40
// 0088a073  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0088a07a  83c109               add ecx, 9
// 0088a07d  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0088a084  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088a088  33c9                 xor ecx, ecx
// 0088a08a  89442430             mov dword ptr [esp + 0x30], eax
// 0088a08e  bafeffffff           mov edx, 0xfffffffe
// 0088a093  8d45ff               lea eax, [ebp - 1]
// 0088a096  894c2460             mov dword ptr [esp + 0x60], ecx
// 0088a09a  894c2478             mov dword ptr [esp + 0x78], ecx
// 0088a09e  6a07                 push 7
// 0088a0a0  89442430             mov dword ptr [esp + 0x30], eax
// 0088a0a4  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088a0a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088a0ac  8d4c2448             lea ecx, [esp + 0x48]
// 0088a0b0  89542458             mov dword ptr [esp + 0x58], edx
// 0088a0b4  8954245c             mov dword ptr [esp + 0x5c], edx
// 0088a0b8  89542478             mov dword ptr [esp + 0x78], edx
// 0088a0bc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0088a0c3  51                   push ecx
// 0088a0c4  89442458             mov dword ptr [esp + 0x58], eax
// 0088a0c8  89442474             mov dword ptr [esp + 0x74], eax
// 0088a0cc  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088a0d0  52                   push edx
// 0088a0d1  53                   push ebx
// 0088a0d2  897c2454             mov dword ptr [esp + 0x54], edi
// 0088a0d6  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0088a0de  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 0088a0e6  c744247802000000     mov dword ptr [esp + 0x78], 2
// 0088a0ee  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a0f5  e866e7ffff           call 0x888860
// 0088a0fa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088a0fe  8d47ff               lea eax, [edi - 1]
// 0088a101  89442454             mov dword ptr [esp + 0x54], eax
// 0088a105  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088a109  89442458             mov dword ptr [esp + 0x58], eax
// 0088a10d  b8feffffff           mov eax, 0xfffffffe
// 0088a112  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0088a11a  894c2460             mov dword ptr [esp + 0x60], ecx
// 0088a11e  89442464             mov dword ptr [esp + 0x64], eax
// 0088a122  89442468             mov dword ptr [esp + 0x68], eax
// 0088a126  6a03                 push 3
// 0088a128  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088a12c  8d542458             lea edx, [esp + 0x58]
// 0088a130  52                   push edx
// 0088a131  50                   push eax
// 0088a132  53                   push ebx
// 0088a133  e828e7ffff           call 0x888860
// 0088a138  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0088a13f  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088a143  8d4ffd               lea ecx, [edi - 3]
// 0088a146  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088a14a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a14e  42                   inc edx
// 0088a14f  83c104               add ecx, 4
// 0088a152  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088a156  6a04                 push 4
// 0088a158  8d442468             lea eax, [esp + 0x68]
// 0088a15c  8954246c             mov dword ptr [esp + 0x6c], edx
// 0088a160  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088a164  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0088a16b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088a16f  50                   push eax
// 0088a170  51                   push ecx
// 0088a171  83c2fc               add edx, -4
// 0088a174  53                   push ebx
// 0088a175  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0088a180  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 0088a18b  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0088a196  89942490000000       mov dword ptr [esp + 0x90], edx
// 0088a19d  e8bee6ffff           call 0x888860
// 0088a1a2  8b5660               mov edx, dword ptr [esi + 0x60]
// 0088a1a5  83c430               add esp, 0x30
// 0088a1a8  397204               cmp dword ptr [edx + 4], esi
// 0088a1ab  0f859b050000         jne 0x88a74c
// 0088a1b1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088a1b5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088a1b9  50                   push eax
// 0088a1ba  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088a1be  2bf8                 sub edi, eax
// 0088a1c0  2bf9                 sub edi, ecx
// 0088a1c2  8d542ffd             lea edx, [edi + ebp - 3]
// 0088a1c6  52                   push edx
// 0088a1c7  2bc5                 sub eax, ebp
// 0088a1c9  55                   push ebp
// 0088a1ca  8d440804             lea eax, [eax + ecx + 4]
// 0088a1ce  50                   push eax
// 0088a1cf  53                   push ebx
// 0088a1d0  e84bdeffff           call 0x888020
// 0088a1d5  e96f050000           jmp 0x88a749
// 0088a1da  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088a1de  33c9                 xor ecx, ecx
// 0088a1e0  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088a1e4  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088a1e8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088a1ec  2bcd                 sub ecx, ebp
// 0088a1ee  894c2410             mov dword ptr [esp + 0x10], ecx
// 0088a1f2  83c105               add ecx, 5
// 0088a1f5  894c2458             mov dword ptr [esp + 0x58], ecx
// 0088a1f9  4f                   dec edi
// 0088a1fa  8d45ff               lea eax, [ebp - 1]
// 0088a1fd  89442448             mov dword ptr [esp + 0x48], eax
// 0088a201  8bcf                 mov ecx, edi
// 0088a203  2bca                 sub ecx, edx
// 0088a205  8bc2                 mov eax, edx
// 0088a207  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088a20b  2bc7                 sub eax, edi
// 0088a20d  83c1fe               add ecx, -2
// 0088a210  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a217  83c002               add eax, 2
// 0088a21a  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088a21e  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088a221  8b11                 mov edx, dword ptr [ecx]
// 0088a223  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088a227  89442460             mov dword ptr [esp + 0x60], eax
// 0088a22b  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088a22e  6a00                 push 0
// 0088a230  897c2448             mov dword ptr [esp + 0x48], edi
// 0088a234  ffd0                 call eax
// 0088a236  50                   push eax
// 0088a237  6a04                 push 4
// 0088a239  8d4c2450             lea ecx, [esp + 0x50]
// 0088a23d  51                   push ecx
// 0088a23e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a242  56                   push esi
// 0088a243  53                   push ebx
// 0088a244  e8f7e7ffff           call 0x888a40
// 0088a249  89442424             mov dword ptr [esp + 0x24], eax
// 0088a24d  33c9                 xor ecx, ecx
// 0088a24f  8d47ff               lea eax, [edi - 1]
// 0088a252  89442430             mov dword ptr [esp + 0x30], eax
// 0088a256  89442444             mov dword ptr [esp + 0x44], eax
// 0088a25a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088a261  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088a265  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088a269  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088a26d  bafeffffff           mov edx, 0xfffffffe
// 0088a272  83c003               add eax, 3
// 0088a275  83c109               add ecx, 9
// 0088a278  89542454             mov dword ptr [esp + 0x54], edx
// 0088a27c  89542458             mov dword ptr [esp + 0x58], edx
// 0088a280  89542478             mov dword ptr [esp + 0x78], edx
// 0088a284  6a07                 push 7
// 0088a286  8d542448             lea edx, [esp + 0x48]
// 0088a28a  89442430             mov dword ptr [esp + 0x30], eax
// 0088a28e  89442450             mov dword ptr [esp + 0x50], eax
// 0088a292  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0088a296  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088a29a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088a29e  89442474             mov dword ptr [esp + 0x74], eax
// 0088a2a2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0088a2a9  52                   push edx
// 0088a2aa  50                   push eax
// 0088a2ab  83c1fd               add ecx, -3
// 0088a2ae  53                   push ebx
// 0088a2af  896c2458             mov dword ptr [esp + 0x58], ebp
// 0088a2b3  c744247402000000     mov dword ptr [esp + 0x74], 2
// 0088a2bb  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 0088a2c3  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0088a2c7  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0088a2d2  e889e5ffff           call 0x888860
// 0088a2d7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088a2db  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088a2df  8d45ff               lea eax, [ebp - 1]
// 0088a2e2  89442458             mov dword ptr [esp + 0x58], eax
// 0088a2e6  b8feffffff           mov eax, 0xfffffffe
// 0088a2eb  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088a2ef  8954245c             mov dword ptr [esp + 0x5c], edx
// 0088a2f3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0088a2fb  89442464             mov dword ptr [esp + 0x64], eax
// 0088a2ff  89442468             mov dword ptr [esp + 0x68], eax
// 0088a303  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088a307  6a03                 push 3
// 0088a309  8d442458             lea eax, [esp + 0x58]
// 0088a30d  50                   push eax
// 0088a30e  51                   push ecx
// 0088a30f  53                   push ebx
// 0088a310  e84be5ffff           call 0x888860
// 0088a315  8b542454             mov edx, dword ptr [esp + 0x54]
// 0088a319  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088a31d  42                   inc edx
// 0088a31e  89542464             mov dword ptr [esp + 0x64], edx
// 0088a322  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088a326  83c2fc               add edx, -4
// 0088a329  894c2470             mov dword ptr [esp + 0x70], ecx
// 0088a32d  6a04                 push 4
// 0088a32f  8d45fd               lea eax, [ebp - 3]
// 0088a332  8d4c2468             lea ecx, [esp + 0x68]
// 0088a336  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088a33a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0088a341  89942480000000       mov dword ptr [esp + 0x80], edx
// 0088a348  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088a34c  51                   push ecx
// 0088a34d  52                   push edx
// 0088a34e  83c004               add eax, 4
// 0088a351  53                   push ebx
// 0088a352  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0088a35a  c784248400000003000000 mov dword ptr [esp + 0x84], 3
// 0088a365  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 0088a370  89842490000000       mov dword ptr [esp + 0x90], eax
// 0088a377  e8e4e4ffff           call 0x888860
// 0088a37c  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088a37f  83c430               add esp, 0x30
// 0088a382  397004               cmp dword ptr [eax + 4], esi
// 0088a385  0f85c1030000         jne 0x88a74c
// 0088a38b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088a38f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088a393  51                   push ecx
// 0088a394  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088a398  2bc1                 sub eax, ecx
// 0088a39a  8d5428fd             lea edx, [eax + ebp - 3]
// 0088a39e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0088a3a5  52                   push edx
// 0088a3a6  8d4c0104             lea ecx, [ecx + eax + 4]
// 0088a3aa  51                   push ecx
// 0088a3ab  57                   push edi
// 0088a3ac  e992030000           jmp 0x88a743
// 0088a3b1  8d47ff               lea eax, [edi - 1]
// 0088a3b4  89442444             mov dword ptr [esp + 0x44], eax
// 0088a3b8  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088a3bc  8bcd                 mov ecx, ebp
// 0088a3be  2bc8                 sub ecx, eax
// 0088a3c0  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088a3c4  49                   dec ecx
// 0088a3c5  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088a3c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088a3cd  2bcf                 sub ecx, edi
// 0088a3cf  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0088a3d6  89442448             mov dword ptr [esp + 0x48], eax
// 0088a3da  83c105               add ecx, 5
// 0088a3dd  2bc5                 sub eax, ebp
// 0088a3df  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088a3e3  8d4803               lea ecx, [eax + 3]
// 0088a3e6  33d2                 xor edx, edx
// 0088a3e8  89442410             mov dword ptr [esp + 0x10], eax
// 0088a3ec  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088a3f0  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088a3f4  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088a3f7  83c002               add eax, 2
// 0088a3fa  8954244c             mov dword ptr [esp + 0x4c], edx
// 0088a3fe  89542458             mov dword ptr [esp + 0x58], edx
// 0088a402  52                   push edx
// 0088a403  8b11                 mov edx, dword ptr [ecx]
// 0088a405  89442464             mov dword ptr [esp + 0x64], eax
// 0088a409  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088a40c  ffd0                 call eax
// 0088a40e  50                   push eax
// 0088a40f  6a04                 push 4
// 0088a411  8d4c2450             lea ecx, [esp + 0x50]
// 0088a415  51                   push ecx
// 0088a416  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a41a  56                   push esi
// 0088a41b  53                   push ebx
// 0088a41c  e81fe6ffff           call 0x888a40
// 0088a421  89442430             mov dword ptr [esp + 0x30], eax
// 0088a425  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088a429  40                   inc eax
// 0088a42a  89442448             mov dword ptr [esp + 0x48], eax
// 0088a42e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088a432  83c0fd               add eax, -3
// 0088a435  89442428             mov dword ptr [esp + 0x28], eax
// 0088a439  89442450             mov dword ptr [esp + 0x50], eax
// 0088a43d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088a444  83c009               add eax, 9
// 0088a447  33d2                 xor edx, edx
// 0088a449  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a450  8944245c             mov dword ptr [esp + 0x5c], eax
// 0088a454  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088a458  8954244c             mov dword ptr [esp + 0x4c], edx
// 0088a45c  89542460             mov dword ptr [esp + 0x60], edx
// 0088a460  89542478             mov dword ptr [esp + 0x78], edx
// 0088a464  6a07                 push 7
// 0088a466  8d542448             lea edx, [esp + 0x48]
// 0088a46a  89442470             mov dword ptr [esp + 0x70], eax
// 0088a46e  89442474             mov dword ptr [esp + 0x74], eax
// 0088a472  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0088a479  52                   push edx
// 0088a47a  b9feffffff           mov ecx, 0xfffffffe
// 0088a47f  50                   push eax
// 0088a480  53                   push ebx
// 0088a481  897c2454             mov dword ptr [esp + 0x54], edi
// 0088a485  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088a489  c744246802000000     mov dword ptr [esp + 0x68], 2
// 0088a491  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 0088a499  894c2478             mov dword ptr [esp + 0x78], ecx
// 0088a49d  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0088a4a4  e8b7e3ffff           call 0x888860
// 0088a4a9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088a4ad  8d47ff               lea eax, [edi - 1]
// 0088a4b0  89442454             mov dword ptr [esp + 0x54], eax
// 0088a4b4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088a4b8  40                   inc eax
// 0088a4b9  89442458             mov dword ptr [esp + 0x58], eax
// 0088a4bd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0088a4c5  894c2460             mov dword ptr [esp + 0x60], ecx
// 0088a4c9  c7442464feffffff     mov dword ptr [esp + 0x64], 0xfffffffe
// 0088a4d1  c744246802000000     mov dword ptr [esp + 0x68], 2
// 0088a4d9  6a03                 push 3
// 0088a4db  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088a4df  8d542458             lea edx, [esp + 0x58]
// 0088a4e3  52                   push edx
// 0088a4e4  50                   push eax
// 0088a4e5  53                   push ebx
// 0088a4e6  e875e3ffff           call 0x888860
// 0088a4eb  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0088a4f2  8d4ffd               lea ecx, [edi - 3]
// 0088a4f5  894c2464             mov dword ptr [esp + 0x64], ecx
// 0088a4f9  8d55ff               lea edx, [ebp - 1]
// 0088a4fc  6a04                 push 4
// 0088a4fe  8d4c2468             lea ecx, [esp + 0x68]
// 0088a502  8954246c             mov dword ptr [esp + 0x6c], edx
// 0088a506  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088a50a  89442470             mov dword ptr [esp + 0x70], eax
// 0088a50e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088a512  51                   push ecx
// 0088a513  83c004               add eax, 4
// 0088a516  52                   push edx
// 0088a517  53                   push ebx
// 0088a518  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0088a523  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 0088a52e  c7842488000000fdffffff mov dword ptr [esp + 0x88], 0xfffffffd
// 0088a539  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0088a540  89842490000000       mov dword ptr [esp + 0x90], eax
// 0088a547  e814e3ffff           call 0x888860
// 0088a54c  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088a54f  83c430               add esp, 0x30
// 0088a552  397004               cmp dword ptr [eax + 4], esi
// 0088a555  0f85f1010000         jne 0x88a74c
// 0088a55b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a55f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088a563  51                   push ecx
// 0088a564  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088a568  2bf8                 sub edi, eax
// 0088a56a  2bf9                 sub edi, ecx
// 0088a56c  8d542ffd             lea edx, [edi + ebp - 3]
// 0088a570  52                   push edx
// 0088a571  2bc5                 sub eax, ebp
// 0088a573  51                   push ecx
// 0088a574  8d440804             lea eax, [eax + ecx + 4]
// 0088a578  50                   push eax
// 0088a579  53                   push ebx
// 0088a57a  e8a1daffff           call 0x888020
// 0088a57f  e9c5010000           jmp 0x88a749
// 0088a584  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088a588  8d4101               lea eax, [ecx + 1]
// 0088a58b  89442444             mov dword ptr [esp + 0x44], eax
// 0088a58f  8d45ff               lea eax, [ebp - 1]
// 0088a592  89442448             mov dword ptr [esp + 0x48], eax
// 0088a596  8bc7                 mov eax, edi
// 0088a598  2bc1                 sub eax, ecx
// 0088a59a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088a59e  83c0fe               add eax, -2
// 0088a5a1  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088a5a5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088a5a9  2bc5                 sub eax, ebp
// 0088a5ab  89442410             mov dword ptr [esp + 0x10], eax
// 0088a5af  83c005               add eax, 5
// 0088a5b2  89442458             mov dword ptr [esp + 0x58], eax
// 0088a5b6  8bc1                 mov eax, ecx
// 0088a5b8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088a5bb  33d2                 xor edx, edx
// 0088a5bd  2bc7                 sub eax, edi
// 0088a5bf  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a5c6  83c002               add eax, 2
// 0088a5c9  89542450             mov dword ptr [esp + 0x50], edx
// 0088a5cd  89542454             mov dword ptr [esp + 0x54], edx
// 0088a5d1  52                   push edx
// 0088a5d2  8b11                 mov edx, dword ptr [ecx]
// 0088a5d4  89442460             mov dword ptr [esp + 0x60], eax
// 0088a5d8  89442464             mov dword ptr [esp + 0x64], eax
// 0088a5dc  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088a5df  ffd0                 call eax
// 0088a5e1  50                   push eax
// 0088a5e2  6a04                 push 4
// 0088a5e4  8d4c2450             lea ecx, [esp + 0x50]
// 0088a5e8  51                   push ecx
// 0088a5e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088a5ed  56                   push esi
// 0088a5ee  53                   push ebx
// 0088a5ef  e84ce4ffff           call 0x888a40
// 0088a5f4  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088a5f8  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088a5fc  40                   inc eax
// 0088a5fd  89442444             mov dword ptr [esp + 0x44], eax
// 0088a601  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088a605  83c0fd               add eax, -3
// 0088a608  89442430             mov dword ptr [esp + 0x30], eax
// 0088a60c  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088a610  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088a614  83c009               add eax, 9
// 0088a617  33d2                 xor edx, edx
// 0088a619  89442428             mov dword ptr [esp + 0x28], eax
// 0088a61d  89442460             mov dword ptr [esp + 0x60], eax
// 0088a621  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088a628  83c003               add eax, 3
// 0088a62b  89542450             mov dword ptr [esp + 0x50], edx
// 0088a62f  8954245c             mov dword ptr [esp + 0x5c], edx
// 0088a633  89542474             mov dword ptr [esp + 0x74], edx
// 0088a637  6a07                 push 7
// 0088a639  8d542448             lea edx, [esp + 0x48]
// 0088a63d  89442470             mov dword ptr [esp + 0x70], eax
// 0088a641  89442474             mov dword ptr [esp + 0x74], eax
// 0088a645  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0088a64c  52                   push edx
// 0088a64d  b9feffffff           mov ecx, 0xfffffffe
// 0088a652  50                   push eax
// 0088a653  53                   push ebx
// 0088a654  896c2458             mov dword ptr [esp + 0x58], ebp
// 0088a658  c744246402000000     mov dword ptr [esp + 0x64], 2
// 0088a660  894c2468             mov dword ptr [esp + 0x68], ecx
// 0088a664  894c2474             mov dword ptr [esp + 0x74], ecx
// 0088a668  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 0088a670  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 0088a677  e8e4e1ffff           call 0x888860
// 0088a67c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088a680  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088a684  40                   inc eax
// 0088a685  89442454             mov dword ptr [esp + 0x54], eax
// 0088a689  8d45ff               lea eax, [ebp - 1]
// 0088a68c  89442458             mov dword ptr [esp + 0x58], eax
// 0088a690  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088a694  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0088a69c  c744246402000000     mov dword ptr [esp + 0x64], 2
// 0088a6a4  c7442468feffffff     mov dword ptr [esp + 0x68], 0xfffffffe
// 0088a6ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088a6b0  6a03                 push 3
// 0088a6b2  8d542458             lea edx, [esp + 0x58]
// 0088a6b6  52                   push edx
// 0088a6b7  50                   push eax
// 0088a6b8  53                   push ebx
// 0088a6b9  e8a2e1ffff           call 0x888860
// 0088a6be  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088a6c2  4f                   dec edi
// 0088a6c3  897c2464             mov dword ptr [esp + 0x64], edi
// 0088a6c7  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 0088a6ce  8d4704               lea eax, [edi + 4]
// 0088a6d1  8d4dfd               lea ecx, [ebp - 3]
// 0088a6d4  8944247c             mov dword ptr [esp + 0x7c], eax
// 0088a6d8  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a6df  6a04                 push 4
// 0088a6e1  8d442468             lea eax, [esp + 0x68]
// 0088a6e5  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0088a6e9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088a6ed  50                   push eax
// 0088a6ee  51                   push ecx
// 0088a6ef  53                   push ebx
// 0088a6f0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0088a6f8  89942480000000       mov dword ptr [esp + 0x80], edx
// 0088a6ff  c7842484000000fdffffff mov dword ptr [esp + 0x84], 0xfffffffd
// 0088a70a  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 0088a715  e846e1ffff           call 0x888860
// 0088a71a  8b5660               mov edx, dword ptr [esi + 0x60]
// 0088a71d  83c430               add esp, 0x30
// 0088a720  397204               cmp dword ptr [edx + 4], esi
// 0088a723  7527                 jne 0x88a74c
// 0088a725  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088a729  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088a72d  50                   push eax
// 0088a72e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088a732  2bc1                 sub eax, ecx
// 0088a734  8d5428fd             lea edx, [eax + ebp - 3]
// 0088a738  52                   push edx
// 0088a739  8d443904             lea eax, [ecx + edi + 4]
// 0088a73d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088a741  50                   push eax
// 0088a742  51                   push ecx
// 0088a743  53                   push ebx
// 0088a744  e8a7d8ffff           call 0x887ff0
// 0088a749  83c414               add esp, 0x14
// 0088a74c  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0088a74f  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088a753  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 0088a756  8b11                 mov edx, dword ptr [ecx]
// 0088a758  6a01                 push 1
// 0088a75a  83ec10               sub esp, 0x10
// 0088a75d  8bc4                 mov eax, esp
// 0088a75f  8938                 mov dword ptr [eax], edi
// 0088a761  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0088a764  897804               mov dword ptr [eax + 4], edi
// 0088a767  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 0088a76a  897808               mov dword ptr [eax + 8], edi
// 0088a76d  8b7e50               mov edi, dword ptr [esi + 0x50]
// 0088a770  56                   push esi
// 0088a771  89780c               mov dword ptr [eax + 0xc], edi
// 0088a774  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088a777  53                   push ebx
// 0088a778  ffd0                 call eax
// 0088a77a  5f                   pop edi
// 0088a77b  5e                   pop esi
// 0088a77c  5d                   pop ebp
// 0088a77d  5b                   pop ebx
// 0088a77e  83c46c               add esp, 0x6c
// 0088a781  c20800               ret 8
// 0088a784  f39f                 lahf 
// 0088a786  8800                 mov byte ptr [eax], al
// 0088a788  daa18800b1a3         fisub dword ptr [ecx - 0x5c4eff78]
// 0088a78e  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp