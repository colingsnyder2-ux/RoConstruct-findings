// roc 2011-06 008dae30  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 2212 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dae30
//
// 008dae30  83ec6c               sub esp, 0x6c
// 008dae33  53                   push ebx
// 008dae34  55                   push ebp
// 008dae35  56                   push esi
// 008dae36  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 008dae3d  8b4644               mov eax, dword ptr [esi + 0x44]
// 008dae40  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 008dae43  8bd9                 mov ebx, ecx
// 008dae45  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008dae48  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008dae4b  89442430             mov dword ptr [esp + 0x30], eax
// 008dae4f  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008dae55  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008dae5b  57                   push edi
// 008dae5c  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008dae5f  895c2420             mov dword ptr [esp + 0x20], ebx
// 008dae63  894c2438             mov dword ptr [esp + 0x38], ecx
// 008dae67  83faff               cmp edx, -1
// 008dae6a  750f                 jne 0x8dae7b
// 008dae6c  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 008dae72  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008dae79  eb07                 jmp 0x8dae82
// 008dae7b  89942484000000       mov dword ptr [esp + 0x84], edx
// 008dae82  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008dae88  83faff               cmp edx, -1
// 008dae8b  7506                 jne 0x8dae93
// 008dae8d  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008dae93  89542414             mov dword ptr [esp + 0x14], edx
// 008dae97  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 008dae9d  83faff               cmp edx, -1
// 008daea0  750c                 jne 0x8daeae
// 008daea2  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 008daea8  894c2418             mov dword ptr [esp + 0x18], ecx
// 008daeac  eb04                 jmp 0x8daeb2
// 008daeae  89542418             mov dword ptr [esp + 0x18], edx
// 008daeb2  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008daeb5  397104               cmp dword ptr [ecx + 4], esi
// 008daeb8  7525                 jne 0x8daedf
// 008daeba  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008daec0  83faff               cmp edx, -1
// 008daec3  7506                 jne 0x8daecb
// 008daec5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008daecb  89942484000000       mov dword ptr [esp + 0x84], edx
// 008daed2  baffffff00           mov edx, 0xffffff
// 008daed7  89542414             mov dword ptr [esp + 0x14], edx
// 008daedb  89542418             mov dword ptr [esp + 0x18], edx
// 008daedf  397108               cmp dword ptr [ecx + 8], esi
// 008daee2  7531                 jne 0x8daf15
// 008daee4  837b2400             cmp dword ptr [ebx + 0x24], 0
// 008daee8  742b                 je 0x8daf15
// 008daeea  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 008daef0  83faff               cmp edx, -1
// 008daef3  750f                 jne 0x8daf04
// 008daef5  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 008daefb  89842484000000       mov dword ptr [esp + 0x84], eax
// 008daf02  eb09                 jmp 0x8daf0d
// 008daf04  89942484000000       mov dword ptr [esp + 0x84], edx
// 008daf0b  8bc2                 mov eax, edx
// 008daf0d  89442418             mov dword ptr [esp + 0x18], eax
// 008daf11  89442414             mov dword ptr [esp + 0x14], eax
// 008daf15  8b01                 mov eax, dword ptr [ecx]
// 008daf17  8b5048               mov edx, dword ptr [eax + 0x48]
// 008daf1a  ffd2                 call edx
// 008daf1c  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 008daf23  83f803               cmp eax, 3
// 008daf26  0f8760070000         ja 0x8db68c
// 008daf2c  ff2485c4b68d00       jmp dword ptr [eax*4 + 0x8db6c4]
// 008daf33  8b542438             mov edx, dword ptr [esp + 0x38]
// 008daf37  8d47ff               lea eax, [edi - 1]
// 008daf3a  89442444             mov dword ptr [esp + 0x44], eax
// 008daf3e  4d                   dec ebp
// 008daf3f  8bc2                 mov eax, edx
// 008daf41  2bc5                 sub eax, ebp
// 008daf43  8d4802               lea ecx, [eax + 2]
// 008daf46  89442410             mov dword ptr [esp + 0x10], eax
// 008daf4a  894c2450             mov dword ptr [esp + 0x50], ecx
// 008daf4e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008daf52  83c003               add eax, 3
// 008daf55  2bcf                 sub ecx, edi
// 008daf57  8944241c             mov dword ptr [esp + 0x1c], eax
// 008daf5b  8944245c             mov dword ptr [esp + 0x5c], eax
// 008daf5f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008daf66  83c105               add ecx, 5
// 008daf69  8bc5                 mov eax, ebp
// 008daf6b  2bc2                 sub eax, edx
// 008daf6d  894c2454             mov dword ptr [esp + 0x54], ecx
// 008daf71  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008daf74  8b11                 mov edx, dword ptr [ecx]
// 008daf76  89442424             mov dword ptr [esp + 0x24], eax
// 008daf7a  83c0fd               add eax, -3
// 008daf7d  89442428             mov dword ptr [esp + 0x28], eax
// 008daf81  89442460             mov dword ptr [esp + 0x60], eax
// 008daf85  8b4248               mov eax, dword ptr [edx + 0x48]
// 008daf88  6a00                 push 0
// 008daf8a  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008daf8e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008daf96  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008daf9e  ffd0                 call eax
// 008dafa0  50                   push eax
// 008dafa1  6a04                 push 4
// 008dafa3  8d4c2450             lea ecx, [esp + 0x50]
// 008dafa7  51                   push ecx
// 008dafa8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008dafac  56                   push esi
// 008dafad  53                   push ebx
// 008dafae  e80deaffff           call 0x8d99c0
// 008dafb3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008dafba  83c109               add ecx, 9
// 008dafbd  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008dafc4  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008dafc8  33c9                 xor ecx, ecx
// 008dafca  89442430             mov dword ptr [esp + 0x30], eax
// 008dafce  bafeffffff           mov edx, 0xfffffffe
// 008dafd3  8d45ff               lea eax, [ebp - 1]
// 008dafd6  894c2460             mov dword ptr [esp + 0x60], ecx
// 008dafda  894c2478             mov dword ptr [esp + 0x78], ecx
// 008dafde  6a07                 push 7
// 008dafe0  89442430             mov dword ptr [esp + 0x30], eax
// 008dafe4  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dafe8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dafec  8d4c2448             lea ecx, [esp + 0x48]
// 008daff0  89542458             mov dword ptr [esp + 0x58], edx
// 008daff4  8954245c             mov dword ptr [esp + 0x5c], edx
// 008daff8  89542478             mov dword ptr [esp + 0x78], edx
// 008daffc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008db003  51                   push ecx
// 008db004  89442458             mov dword ptr [esp + 0x58], eax
// 008db008  89442474             mov dword ptr [esp + 0x74], eax
// 008db00c  8b442430             mov eax, dword ptr [esp + 0x30]
// 008db010  52                   push edx
// 008db011  53                   push ebx
// 008db012  897c2454             mov dword ptr [esp + 0x54], edi
// 008db016  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008db01e  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 008db026  c744247802000000     mov dword ptr [esp + 0x78], 2
// 008db02e  89842480000000       mov dword ptr [esp + 0x80], eax
// 008db035  e8a6e7ffff           call 0x8d97e0
// 008db03a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008db03e  8d47ff               lea eax, [edi - 1]
// 008db041  89442454             mov dword ptr [esp + 0x54], eax
// 008db045  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008db049  89442458             mov dword ptr [esp + 0x58], eax
// 008db04d  b8feffffff           mov eax, 0xfffffffe
// 008db052  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008db05a  894c2460             mov dword ptr [esp + 0x60], ecx
// 008db05e  89442464             mov dword ptr [esp + 0x64], eax
// 008db062  89442468             mov dword ptr [esp + 0x68], eax
// 008db066  6a03                 push 3
// 008db068  8b442428             mov eax, dword ptr [esp + 0x28]
// 008db06c  8d542458             lea edx, [esp + 0x58]
// 008db070  52                   push edx
// 008db071  50                   push eax
// 008db072  53                   push ebx
// 008db073  e868e7ffff           call 0x8d97e0
// 008db078  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008db07f  8b542458             mov edx, dword ptr [esp + 0x58]
// 008db083  8d4ffd               lea ecx, [edi - 3]
// 008db086  894c2464             mov dword ptr [esp + 0x64], ecx
// 008db08a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008db08e  42                   inc edx
// 008db08f  83c104               add ecx, 4
// 008db092  8944246c             mov dword ptr [esp + 0x6c], eax
// 008db096  6a04                 push 4
// 008db098  8d442468             lea eax, [esp + 0x68]
// 008db09c  8954246c             mov dword ptr [esp + 0x6c], edx
// 008db0a0  8b542448             mov edx, dword ptr [esp + 0x48]
// 008db0a4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008db0ab  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008db0af  50                   push eax
// 008db0b0  51                   push ecx
// 008db0b1  83c2fc               add edx, -4
// 008db0b4  53                   push ebx
// 008db0b5  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008db0c0  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 008db0cb  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 008db0d6  89942490000000       mov dword ptr [esp + 0x90], edx
// 008db0dd  e8fee6ffff           call 0x8d97e0
// 008db0e2  8b5660               mov edx, dword ptr [esi + 0x60]
// 008db0e5  83c430               add esp, 0x30
// 008db0e8  397204               cmp dword ptr [edx + 4], esi
// 008db0eb  0f859b050000         jne 0x8db68c
// 008db0f1  8b442430             mov eax, dword ptr [esp + 0x30]
// 008db0f5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008db0f9  50                   push eax
// 008db0fa  8b442438             mov eax, dword ptr [esp + 0x38]
// 008db0fe  2bf8                 sub edi, eax
// 008db100  2bf9                 sub edi, ecx
// 008db102  8d542ffd             lea edx, [edi + ebp - 3]
// 008db106  52                   push edx
// 008db107  2bc5                 sub eax, ebp
// 008db109  55                   push ebp
// 008db10a  8d440804             lea eax, [eax + ecx + 4]
// 008db10e  50                   push eax
// 008db10f  53                   push ebx
// 008db110  e84bdeffff           call 0x8d8f60
// 008db115  e96f050000           jmp 0x8db689
// 008db11a  8b542434             mov edx, dword ptr [esp + 0x34]
// 008db11e  33c9                 xor ecx, ecx
// 008db120  894c2450             mov dword ptr [esp + 0x50], ecx
// 008db124  894c2454             mov dword ptr [esp + 0x54], ecx
// 008db128  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008db12c  2bcd                 sub ecx, ebp
// 008db12e  894c2410             mov dword ptr [esp + 0x10], ecx
// 008db132  83c105               add ecx, 5
// 008db135  894c2458             mov dword ptr [esp + 0x58], ecx
// 008db139  4f                   dec edi
// 008db13a  8d45ff               lea eax, [ebp - 1]
// 008db13d  89442448             mov dword ptr [esp + 0x48], eax
// 008db141  8bcf                 mov ecx, edi
// 008db143  2bca                 sub ecx, edx
// 008db145  8bc2                 mov eax, edx
// 008db147  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008db14b  2bc7                 sub eax, edi
// 008db14d  83c1fe               add ecx, -2
// 008db150  89842480000000       mov dword ptr [esp + 0x80], eax
// 008db157  83c002               add eax, 2
// 008db15a  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008db15e  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008db161  8b11                 mov edx, dword ptr [ecx]
// 008db163  8944244c             mov dword ptr [esp + 0x4c], eax
// 008db167  89442460             mov dword ptr [esp + 0x60], eax
// 008db16b  8b4248               mov eax, dword ptr [edx + 0x48]
// 008db16e  6a00                 push 0
// 008db170  897c2448             mov dword ptr [esp + 0x48], edi
// 008db174  ffd0                 call eax
// 008db176  50                   push eax
// 008db177  6a04                 push 4
// 008db179  8d4c2450             lea ecx, [esp + 0x50]
// 008db17d  51                   push ecx
// 008db17e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008db182  56                   push esi
// 008db183  53                   push ebx
// 008db184  e837e8ffff           call 0x8d99c0
// 008db189  89442424             mov dword ptr [esp + 0x24], eax
// 008db18d  33c9                 xor ecx, ecx
// 008db18f  8d47ff               lea eax, [edi - 1]
// 008db192  89442430             mov dword ptr [esp + 0x30], eax
// 008db196  89442444             mov dword ptr [esp + 0x44], eax
// 008db19a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008db1a1  894c2450             mov dword ptr [esp + 0x50], ecx
// 008db1a5  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008db1a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008db1ad  bafeffffff           mov edx, 0xfffffffe
// 008db1b2  83c003               add eax, 3
// 008db1b5  83c109               add ecx, 9
// 008db1b8  89542454             mov dword ptr [esp + 0x54], edx
// 008db1bc  89542458             mov dword ptr [esp + 0x58], edx
// 008db1c0  89542478             mov dword ptr [esp + 0x78], edx
// 008db1c4  6a07                 push 7
// 008db1c6  8d542448             lea edx, [esp + 0x48]
// 008db1ca  89442430             mov dword ptr [esp + 0x30], eax
// 008db1ce  89442450             mov dword ptr [esp + 0x50], eax
// 008db1d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008db1d6  894c2464             mov dword ptr [esp + 0x64], ecx
// 008db1da  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008db1de  89442474             mov dword ptr [esp + 0x74], eax
// 008db1e2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008db1e9  52                   push edx
// 008db1ea  50                   push eax
// 008db1eb  83c1fd               add ecx, -3
// 008db1ee  53                   push ebx
// 008db1ef  896c2458             mov dword ptr [esp + 0x58], ebp
// 008db1f3  c744247402000000     mov dword ptr [esp + 0x74], 2
// 008db1fb  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 008db203  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008db207  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008db212  e8c9e5ffff           call 0x8d97e0
// 008db217  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008db21b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008db21f  8d45ff               lea eax, [ebp - 1]
// 008db222  89442458             mov dword ptr [esp + 0x58], eax
// 008db226  b8feffffff           mov eax, 0xfffffffe
// 008db22b  894c2454             mov dword ptr [esp + 0x54], ecx
// 008db22f  8954245c             mov dword ptr [esp + 0x5c], edx
// 008db233  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008db23b  89442464             mov dword ptr [esp + 0x64], eax
// 008db23f  89442468             mov dword ptr [esp + 0x68], eax
// 008db243  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008db247  6a03                 push 3
// 008db249  8d442458             lea eax, [esp + 0x58]
// 008db24d  50                   push eax
// 008db24e  51                   push ecx
// 008db24f  53                   push ebx
// 008db250  e88be5ffff           call 0x8d97e0
// 008db255  8b542454             mov edx, dword ptr [esp + 0x54]
// 008db259  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008db25d  42                   inc edx
// 008db25e  89542464             mov dword ptr [esp + 0x64], edx
// 008db262  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008db266  83c2fc               add edx, -4
// 008db269  894c2470             mov dword ptr [esp + 0x70], ecx
// 008db26d  6a04                 push 4
// 008db26f  8d45fd               lea eax, [ebp - 3]
// 008db272  8d4c2468             lea ecx, [esp + 0x68]
// 008db276  8944246c             mov dword ptr [esp + 0x6c], eax
// 008db27a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008db281  89942480000000       mov dword ptr [esp + 0x80], edx
// 008db288  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008db28c  51                   push ecx
// 008db28d  52                   push edx
// 008db28e  83c004               add eax, 4
// 008db291  53                   push ebx
// 008db292  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008db29a  c784248400000003000000 mov dword ptr [esp + 0x84], 3
// 008db2a5  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 008db2b0  89842490000000       mov dword ptr [esp + 0x90], eax
// 008db2b7  e824e5ffff           call 0x8d97e0
// 008db2bc  8b4660               mov eax, dword ptr [esi + 0x60]
// 008db2bf  83c430               add esp, 0x30
// 008db2c2  397004               cmp dword ptr [eax + 4], esi
// 008db2c5  0f85c1030000         jne 0x8db68c
// 008db2cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008db2cf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008db2d3  51                   push ecx
// 008db2d4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008db2d8  2bc1                 sub eax, ecx
// 008db2da  8d5428fd             lea edx, [eax + ebp - 3]
// 008db2de  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008db2e5  52                   push edx
// 008db2e6  8d4c0104             lea ecx, [ecx + eax + 4]
// 008db2ea  51                   push ecx
// 008db2eb  57                   push edi
// 008db2ec  e992030000           jmp 0x8db683
// 008db2f1  8d47ff               lea eax, [edi - 1]
// 008db2f4  89442444             mov dword ptr [esp + 0x44], eax
// 008db2f8  8b442438             mov eax, dword ptr [esp + 0x38]
// 008db2fc  8bcd                 mov ecx, ebp
// 008db2fe  2bc8                 sub ecx, eax
// 008db300  894c2424             mov dword ptr [esp + 0x24], ecx
// 008db304  49                   dec ecx
// 008db305  894c2450             mov dword ptr [esp + 0x50], ecx
// 008db309  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008db30d  2bcf                 sub ecx, edi
// 008db30f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008db316  89442448             mov dword ptr [esp + 0x48], eax
// 008db31a  83c105               add ecx, 5
// 008db31d  2bc5                 sub eax, ebp
// 008db31f  894c2454             mov dword ptr [esp + 0x54], ecx
// 008db323  8d4803               lea ecx, [eax + 3]
// 008db326  33d2                 xor edx, edx
// 008db328  89442410             mov dword ptr [esp + 0x10], eax
// 008db32c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008db330  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008db334  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008db337  83c002               add eax, 2
// 008db33a  8954244c             mov dword ptr [esp + 0x4c], edx
// 008db33e  89542458             mov dword ptr [esp + 0x58], edx
// 008db342  52                   push edx
// 008db343  8b11                 mov edx, dword ptr [ecx]
// 008db345  89442464             mov dword ptr [esp + 0x64], eax
// 008db349  8b4248               mov eax, dword ptr [edx + 0x48]
// 008db34c  ffd0                 call eax
// 008db34e  50                   push eax
// 008db34f  6a04                 push 4
// 008db351  8d4c2450             lea ecx, [esp + 0x50]
// 008db355  51                   push ecx
// 008db356  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008db35a  56                   push esi
// 008db35b  53                   push ebx
// 008db35c  e85fe6ffff           call 0x8d99c0
// 008db361  89442430             mov dword ptr [esp + 0x30], eax
// 008db365  8b442438             mov eax, dword ptr [esp + 0x38]
// 008db369  40                   inc eax
// 008db36a  89442448             mov dword ptr [esp + 0x48], eax
// 008db36e  8b442424             mov eax, dword ptr [esp + 0x24]
// 008db372  83c0fd               add eax, -3
// 008db375  89442428             mov dword ptr [esp + 0x28], eax
// 008db379  89442450             mov dword ptr [esp + 0x50], eax
// 008db37d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008db384  83c009               add eax, 9
// 008db387  33d2                 xor edx, edx
// 008db389  89842480000000       mov dword ptr [esp + 0x80], eax
// 008db390  8944245c             mov dword ptr [esp + 0x5c], eax
// 008db394  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008db398  8954244c             mov dword ptr [esp + 0x4c], edx
// 008db39c  89542460             mov dword ptr [esp + 0x60], edx
// 008db3a0  89542478             mov dword ptr [esp + 0x78], edx
// 008db3a4  6a07                 push 7
// 008db3a6  8d542448             lea edx, [esp + 0x48]
// 008db3aa  89442470             mov dword ptr [esp + 0x70], eax
// 008db3ae  89442474             mov dword ptr [esp + 0x74], eax
// 008db3b2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008db3b9  52                   push edx
// 008db3ba  b9feffffff           mov ecx, 0xfffffffe
// 008db3bf  50                   push eax
// 008db3c0  53                   push ebx
// 008db3c1  897c2454             mov dword ptr [esp + 0x54], edi
// 008db3c5  894c2464             mov dword ptr [esp + 0x64], ecx
// 008db3c9  c744246802000000     mov dword ptr [esp + 0x68], 2
// 008db3d1  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 008db3d9  894c2478             mov dword ptr [esp + 0x78], ecx
// 008db3dd  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008db3e4  e8f7e3ffff           call 0x8d97e0
// 008db3e9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008db3ed  8d47ff               lea eax, [edi - 1]
// 008db3f0  89442454             mov dword ptr [esp + 0x54], eax
// 008db3f4  8b442448             mov eax, dword ptr [esp + 0x48]
// 008db3f8  40                   inc eax
// 008db3f9  89442458             mov dword ptr [esp + 0x58], eax
// 008db3fd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008db405  894c2460             mov dword ptr [esp + 0x60], ecx
// 008db409  c7442464feffffff     mov dword ptr [esp + 0x64], 0xfffffffe
// 008db411  c744246802000000     mov dword ptr [esp + 0x68], 2
// 008db419  6a03                 push 3
// 008db41b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008db41f  8d542458             lea edx, [esp + 0x58]
// 008db423  52                   push edx
// 008db424  50                   push eax
// 008db425  53                   push ebx
// 008db426  e8b5e3ffff           call 0x8d97e0
// 008db42b  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008db432  8d4ffd               lea ecx, [edi - 3]
// 008db435  894c2464             mov dword ptr [esp + 0x64], ecx
// 008db439  8d55ff               lea edx, [ebp - 1]
// 008db43c  6a04                 push 4
// 008db43e  8d4c2468             lea ecx, [esp + 0x68]
// 008db442  8954246c             mov dword ptr [esp + 0x6c], edx
// 008db446  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008db44a  89442470             mov dword ptr [esp + 0x70], eax
// 008db44e  8b442434             mov eax, dword ptr [esp + 0x34]
// 008db452  51                   push ecx
// 008db453  83c004               add eax, 4
// 008db456  52                   push edx
// 008db457  53                   push ebx
// 008db458  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008db463  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 008db46e  c7842488000000fdffffff mov dword ptr [esp + 0x88], 0xfffffffd
// 008db479  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008db480  89842490000000       mov dword ptr [esp + 0x90], eax
// 008db487  e854e3ffff           call 0x8d97e0
// 008db48c  8b4660               mov eax, dword ptr [esi + 0x60]
// 008db48f  83c430               add esp, 0x30
// 008db492  397004               cmp dword ptr [eax + 4], esi
// 008db495  0f85f1010000         jne 0x8db68c
// 008db49b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008db49f  8b442434             mov eax, dword ptr [esp + 0x34]
// 008db4a3  51                   push ecx
// 008db4a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008db4a8  2bf8                 sub edi, eax
// 008db4aa  2bf9                 sub edi, ecx
// 008db4ac  8d542ffd             lea edx, [edi + ebp - 3]
// 008db4b0  52                   push edx
// 008db4b1  2bc5                 sub eax, ebp
// 008db4b3  51                   push ecx
// 008db4b4  8d440804             lea eax, [eax + ecx + 4]
// 008db4b8  50                   push eax
// 008db4b9  53                   push ebx
// 008db4ba  e8a1daffff           call 0x8d8f60
// 008db4bf  e9c5010000           jmp 0x8db689
// 008db4c4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008db4c8  8d4101               lea eax, [ecx + 1]
// 008db4cb  89442444             mov dword ptr [esp + 0x44], eax
// 008db4cf  8d45ff               lea eax, [ebp - 1]
// 008db4d2  89442448             mov dword ptr [esp + 0x48], eax
// 008db4d6  8bc7                 mov eax, edi
// 008db4d8  2bc1                 sub eax, ecx
// 008db4da  8944241c             mov dword ptr [esp + 0x1c], eax
// 008db4de  83c0fe               add eax, -2
// 008db4e1  8944244c             mov dword ptr [esp + 0x4c], eax
// 008db4e5  8b442438             mov eax, dword ptr [esp + 0x38]
// 008db4e9  2bc5                 sub eax, ebp
// 008db4eb  89442410             mov dword ptr [esp + 0x10], eax
// 008db4ef  83c005               add eax, 5
// 008db4f2  89442458             mov dword ptr [esp + 0x58], eax
// 008db4f6  8bc1                 mov eax, ecx
// 008db4f8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008db4fb  33d2                 xor edx, edx
// 008db4fd  2bc7                 sub eax, edi
// 008db4ff  89842480000000       mov dword ptr [esp + 0x80], eax
// 008db506  83c002               add eax, 2
// 008db509  89542450             mov dword ptr [esp + 0x50], edx
// 008db50d  89542454             mov dword ptr [esp + 0x54], edx
// 008db511  52                   push edx
// 008db512  8b11                 mov edx, dword ptr [ecx]
// 008db514  89442460             mov dword ptr [esp + 0x60], eax
// 008db518  89442464             mov dword ptr [esp + 0x64], eax
// 008db51c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008db51f  ffd0                 call eax
// 008db521  50                   push eax
// 008db522  6a04                 push 4
// 008db524  8d4c2450             lea ecx, [esp + 0x50]
// 008db528  51                   push ecx
// 008db529  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008db52d  56                   push esi
// 008db52e  53                   push ebx
// 008db52f  e88ce4ffff           call 0x8d99c0
// 008db534  8944242c             mov dword ptr [esp + 0x2c], eax
// 008db538  8b442434             mov eax, dword ptr [esp + 0x34]
// 008db53c  40                   inc eax
// 008db53d  89442444             mov dword ptr [esp + 0x44], eax
// 008db541  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008db545  83c0fd               add eax, -3
// 008db548  89442430             mov dword ptr [esp + 0x30], eax
// 008db54c  8944244c             mov dword ptr [esp + 0x4c], eax
// 008db550  8b442410             mov eax, dword ptr [esp + 0x10]
// 008db554  83c009               add eax, 9
// 008db557  33d2                 xor edx, edx
// 008db559  89442428             mov dword ptr [esp + 0x28], eax
// 008db55d  89442460             mov dword ptr [esp + 0x60], eax
// 008db561  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008db568  83c003               add eax, 3
// 008db56b  89542450             mov dword ptr [esp + 0x50], edx
// 008db56f  8954245c             mov dword ptr [esp + 0x5c], edx
// 008db573  89542474             mov dword ptr [esp + 0x74], edx
// 008db577  6a07                 push 7
// 008db579  8d542448             lea edx, [esp + 0x48]
// 008db57d  89442470             mov dword ptr [esp + 0x70], eax
// 008db581  89442474             mov dword ptr [esp + 0x74], eax
// 008db585  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008db58c  52                   push edx
// 008db58d  b9feffffff           mov ecx, 0xfffffffe
// 008db592  50                   push eax
// 008db593  53                   push ebx
// 008db594  896c2458             mov dword ptr [esp + 0x58], ebp
// 008db598  c744246402000000     mov dword ptr [esp + 0x64], 2
// 008db5a0  894c2468             mov dword ptr [esp + 0x68], ecx
// 008db5a4  894c2474             mov dword ptr [esp + 0x74], ecx
// 008db5a8  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 008db5b0  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008db5b7  e824e2ffff           call 0x8d97e0
// 008db5bc  8b442444             mov eax, dword ptr [esp + 0x44]
// 008db5c0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008db5c4  40                   inc eax
// 008db5c5  89442454             mov dword ptr [esp + 0x54], eax
// 008db5c9  8d45ff               lea eax, [ebp - 1]
// 008db5cc  89442458             mov dword ptr [esp + 0x58], eax
// 008db5d0  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008db5d4  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008db5dc  c744246402000000     mov dword ptr [esp + 0x64], 2
// 008db5e4  c7442468feffffff     mov dword ptr [esp + 0x68], 0xfffffffe
// 008db5ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 008db5f0  6a03                 push 3
// 008db5f2  8d542458             lea edx, [esp + 0x58]
// 008db5f6  52                   push edx
// 008db5f7  50                   push eax
// 008db5f8  53                   push ebx
// 008db5f9  e8e2e1ffff           call 0x8d97e0
// 008db5fe  8b542448             mov edx, dword ptr [esp + 0x48]
// 008db602  4f                   dec edi
// 008db603  897c2464             mov dword ptr [esp + 0x64], edi
// 008db607  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 008db60e  8d4704               lea eax, [edi + 4]
// 008db611  8d4dfd               lea ecx, [ebp - 3]
// 008db614  8944247c             mov dword ptr [esp + 0x7c], eax
// 008db618  89842480000000       mov dword ptr [esp + 0x80], eax
// 008db61f  6a04                 push 4
// 008db621  8d442468             lea eax, [esp + 0x68]
// 008db625  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008db629  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008db62d  50                   push eax
// 008db62e  51                   push ecx
// 008db62f  53                   push ebx
// 008db630  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008db638  89942480000000       mov dword ptr [esp + 0x80], edx
// 008db63f  c7842484000000fdffffff mov dword ptr [esp + 0x84], 0xfffffffd
// 008db64a  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 008db655  e886e1ffff           call 0x8d97e0
// 008db65a  8b5660               mov edx, dword ptr [esi + 0x60]
// 008db65d  83c430               add esp, 0x30
// 008db660  397204               cmp dword ptr [edx + 4], esi
// 008db663  7527                 jne 0x8db68c
// 008db665  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008db669  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008db66d  50                   push eax
// 008db66e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008db672  2bc1                 sub eax, ecx
// 008db674  8d5428fd             lea edx, [eax + ebp - 3]
// 008db678  52                   push edx
// 008db679  8d443904             lea eax, [ecx + edi + 4]
// 008db67d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008db681  50                   push eax
// 008db682  51                   push ecx
// 008db683  53                   push ebx
// 008db684  e8a7d8ffff           call 0x8d8f30
// 008db689  83c414               add esp, 0x14
// 008db68c  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008db68f  8b542420             mov edx, dword ptr [esp + 0x20]
// 008db693  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008db696  8b11                 mov edx, dword ptr [ecx]
// 008db698  6a01                 push 1
// 008db69a  83ec10               sub esp, 0x10
// 008db69d  8bc4                 mov eax, esp
// 008db69f  8938                 mov dword ptr [eax], edi
// 008db6a1  8b7e48               mov edi, dword ptr [esi + 0x48]
// 008db6a4  897804               mov dword ptr [eax + 4], edi
// 008db6a7  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008db6aa  897808               mov dword ptr [eax + 8], edi
// 008db6ad  8b7e50               mov edi, dword ptr [esi + 0x50]
// 008db6b0  56                   push esi
// 008db6b1  89780c               mov dword ptr [eax + 0xc], edi
// 008db6b4  8b4268               mov eax, dword ptr [edx + 0x68]
// 008db6b7  53                   push ebx
// 008db6b8  ffd0                 call eax
// 008db6ba  5f                   pop edi
// 008db6bb  5e                   pop esi
// 008db6bc  5d                   pop ebp
// 008db6bd  5b                   pop ebx
// 008db6be  83c46c               add esp, 0x6c
// 008db6c1  c20800               ret 8
// 008db6c4  33af8d001ab1         xor ebp, dword ptr [edi - 0x4ee5ff73]
// 008db6ca  8d00                 lea eax, [eax]
// 008db6cc  f1                   int1 
// 008db6cd  b28d                 mov dl, 0x8d
// 008db6cf  00c4                 add ah, al
// 008db6d1  b48d                 mov ah, 0x8d
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp