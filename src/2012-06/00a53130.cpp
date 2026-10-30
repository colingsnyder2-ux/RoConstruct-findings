// roc 2012-06 00a53130  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 2212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a53130
//
// 00a53130  83ec6c               sub esp, 0x6c
// 00a53133  53                   push ebx
// 00a53134  55                   push ebp
// 00a53135  56                   push esi
// 00a53136  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00a5313d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00a53140  8b6e50               mov ebp, dword ptr [esi + 0x50]
// 00a53143  8bd9                 mov ebx, ecx
// 00a53145  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00a53148  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00a5314b  89442430             mov dword ptr [esp + 0x30], eax
// 00a5314f  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a53155  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a5315b  57                   push edi
// 00a5315c  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00a5315f  895c2420             mov dword ptr [esp + 0x20], ebx
// 00a53163  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a53167  83faff               cmp edx, -1
// 00a5316a  750f                 jne 0xa5317b
// 00a5316c  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00a53172  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a53179  eb07                 jmp 0xa53182
// 00a5317b  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a53182  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00a53188  83faff               cmp edx, -1
// 00a5318b  7506                 jne 0xa53193
// 00a5318d  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00a53193  89542414             mov dword ptr [esp + 0x14], edx
// 00a53197  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00a5319d  83faff               cmp edx, -1
// 00a531a0  750c                 jne 0xa531ae
// 00a531a2  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00a531a8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a531ac  eb04                 jmp 0xa531b2
// 00a531ae  89542418             mov dword ptr [esp + 0x18], edx
// 00a531b2  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a531b5  397104               cmp dword ptr [ecx + 4], esi
// 00a531b8  7525                 jne 0xa531df
// 00a531ba  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a531c0  83faff               cmp edx, -1
// 00a531c3  7506                 jne 0xa531cb
// 00a531c5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00a531cb  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a531d2  baffffff00           mov edx, 0xffffff
// 00a531d7  89542414             mov dword ptr [esp + 0x14], edx
// 00a531db  89542418             mov dword ptr [esp + 0x18], edx
// 00a531df  397108               cmp dword ptr [ecx + 8], esi
// 00a531e2  7531                 jne 0xa53215
// 00a531e4  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00a531e8  742b                 je 0xa53215
// 00a531ea  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00a531f0  83faff               cmp edx, -1
// 00a531f3  750f                 jne 0xa53204
// 00a531f5  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00a531fb  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a53202  eb09                 jmp 0xa5320d
// 00a53204  89942484000000       mov dword ptr [esp + 0x84], edx
// 00a5320b  8bc2                 mov eax, edx
// 00a5320d  89442418             mov dword ptr [esp + 0x18], eax
// 00a53211  89442414             mov dword ptr [esp + 0x14], eax
// 00a53215  8b01                 mov eax, dword ptr [ecx]
// 00a53217  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a5321a  ffd2                 call edx
// 00a5321c  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00a53223  83f803               cmp eax, 3
// 00a53226  0f8760070000         ja 0xa5398c
// 00a5322c  ff2485c439a500       jmp dword ptr [eax*4 + 0xa539c4]
// 00a53233  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a53237  8d47ff               lea eax, [edi - 1]
// 00a5323a  89442444             mov dword ptr [esp + 0x44], eax
// 00a5323e  4d                   dec ebp
// 00a5323f  8bc2                 mov eax, edx
// 00a53241  2bc5                 sub eax, ebp
// 00a53243  8d4802               lea ecx, [eax + 2]
// 00a53246  89442410             mov dword ptr [esp + 0x10], eax
// 00a5324a  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a5324e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a53252  83c003               add eax, 3
// 00a53255  2bcf                 sub ecx, edi
// 00a53257  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5325b  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a5325f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a53266  83c105               add ecx, 5
// 00a53269  8bc5                 mov eax, ebp
// 00a5326b  2bc2                 sub eax, edx
// 00a5326d  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a53271  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a53274  8b11                 mov edx, dword ptr [ecx]
// 00a53276  89442424             mov dword ptr [esp + 0x24], eax
// 00a5327a  83c0fd               add eax, -3
// 00a5327d  89442428             mov dword ptr [esp + 0x28], eax
// 00a53281  89442460             mov dword ptr [esp + 0x60], eax
// 00a53285  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a53288  6a00                 push 0
// 00a5328a  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00a5328e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00a53296  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a5329e  ffd0                 call eax
// 00a532a0  50                   push eax
// 00a532a1  6a04                 push 4
// 00a532a3  8d4c2450             lea ecx, [esp + 0x50]
// 00a532a7  51                   push ecx
// 00a532a8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a532ac  56                   push esi
// 00a532ad  53                   push ebx
// 00a532ae  e8dde9ffff           call 0xa51c90
// 00a532b3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a532ba  83c109               add ecx, 9
// 00a532bd  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a532c4  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a532c8  33c9                 xor ecx, ecx
// 00a532ca  89442430             mov dword ptr [esp + 0x30], eax
// 00a532ce  bafeffffff           mov edx, 0xfffffffe
// 00a532d3  8d45ff               lea eax, [ebp - 1]
// 00a532d6  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a532da  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a532de  6a07                 push 7
// 00a532e0  89442430             mov dword ptr [esp + 0x30], eax
// 00a532e4  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a532e8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a532ec  8d4c2448             lea ecx, [esp + 0x48]
// 00a532f0  89542458             mov dword ptr [esp + 0x58], edx
// 00a532f4  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a532f8  89542478             mov dword ptr [esp + 0x78], edx
// 00a532fc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00a53303  51                   push ecx
// 00a53304  89442458             mov dword ptr [esp + 0x58], eax
// 00a53308  89442474             mov dword ptr [esp + 0x74], eax
// 00a5330c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a53310  52                   push edx
// 00a53311  53                   push ebx
// 00a53312  897c2454             mov dword ptr [esp + 0x54], edi
// 00a53316  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a5331e  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 00a53326  c744247802000000     mov dword ptr [esp + 0x78], 2
// 00a5332e  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a53335  e876e7ffff           call 0xa51ab0
// 00a5333a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5333e  8d47ff               lea eax, [edi - 1]
// 00a53341  89442454             mov dword ptr [esp + 0x54], eax
// 00a53345  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a53349  89442458             mov dword ptr [esp + 0x58], eax
// 00a5334d  b8feffffff           mov eax, 0xfffffffe
// 00a53352  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a5335a  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a5335e  89442464             mov dword ptr [esp + 0x64], eax
// 00a53362  89442468             mov dword ptr [esp + 0x68], eax
// 00a53366  6a03                 push 3
// 00a53368  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5336c  8d542458             lea edx, [esp + 0x58]
// 00a53370  52                   push edx
// 00a53371  50                   push eax
// 00a53372  53                   push ebx
// 00a53373  e838e7ffff           call 0xa51ab0
// 00a53378  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a5337f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a53383  8d4ffd               lea ecx, [edi - 3]
// 00a53386  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a5338a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5338e  42                   inc edx
// 00a5338f  83c104               add ecx, 4
// 00a53392  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a53396  6a04                 push 4
// 00a53398  8d442468             lea eax, [esp + 0x68]
// 00a5339c  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a533a0  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a533a4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a533ab  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a533af  50                   push eax
// 00a533b0  51                   push ecx
// 00a533b1  83c2fc               add edx, -4
// 00a533b4  53                   push ebx
// 00a533b5  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a533c0  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 00a533cb  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 00a533d6  89942490000000       mov dword ptr [esp + 0x90], edx
// 00a533dd  e8cee6ffff           call 0xa51ab0
// 00a533e2  8b5660               mov edx, dword ptr [esi + 0x60]
// 00a533e5  83c430               add esp, 0x30
// 00a533e8  397204               cmp dword ptr [edx + 4], esi
// 00a533eb  0f859b050000         jne 0xa5398c
// 00a533f1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a533f5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a533f9  50                   push eax
// 00a533fa  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a533fe  2bf8                 sub edi, eax
// 00a53400  2bf9                 sub edi, ecx
// 00a53402  8d542ffd             lea edx, [edi + ebp - 3]
// 00a53406  52                   push edx
// 00a53407  2bc5                 sub eax, ebp
// 00a53409  55                   push ebp
// 00a5340a  8d440804             lea eax, [eax + ecx + 4]
// 00a5340e  50                   push eax
// 00a5340f  53                   push ebx
// 00a53410  e85bdeffff           call 0xa51270
// 00a53415  e96f050000           jmp 0xa53989
// 00a5341a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5341e  33c9                 xor ecx, ecx
// 00a53420  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a53424  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a53428  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5342c  2bcd                 sub ecx, ebp
// 00a5342e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a53432  83c105               add ecx, 5
// 00a53435  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a53439  4f                   dec edi
// 00a5343a  8d45ff               lea eax, [ebp - 1]
// 00a5343d  89442448             mov dword ptr [esp + 0x48], eax
// 00a53441  8bcf                 mov ecx, edi
// 00a53443  2bca                 sub ecx, edx
// 00a53445  8bc2                 mov eax, edx
// 00a53447  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a5344b  2bc7                 sub eax, edi
// 00a5344d  83c1fe               add ecx, -2
// 00a53450  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a53457  83c002               add eax, 2
// 00a5345a  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a5345e  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a53461  8b11                 mov edx, dword ptr [ecx]
// 00a53463  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a53467  89442460             mov dword ptr [esp + 0x60], eax
// 00a5346b  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a5346e  6a00                 push 0
// 00a53470  897c2448             mov dword ptr [esp + 0x48], edi
// 00a53474  ffd0                 call eax
// 00a53476  50                   push eax
// 00a53477  6a04                 push 4
// 00a53479  8d4c2450             lea ecx, [esp + 0x50]
// 00a5347d  51                   push ecx
// 00a5347e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a53482  56                   push esi
// 00a53483  53                   push ebx
// 00a53484  e807e8ffff           call 0xa51c90
// 00a53489  89442424             mov dword ptr [esp + 0x24], eax
// 00a5348d  33c9                 xor ecx, ecx
// 00a5348f  8d47ff               lea eax, [edi - 1]
// 00a53492  89442430             mov dword ptr [esp + 0x30], eax
// 00a53496  89442444             mov dword ptr [esp + 0x44], eax
// 00a5349a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a534a1  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a534a5  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a534a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a534ad  bafeffffff           mov edx, 0xfffffffe
// 00a534b2  83c003               add eax, 3
// 00a534b5  83c109               add ecx, 9
// 00a534b8  89542454             mov dword ptr [esp + 0x54], edx
// 00a534bc  89542458             mov dword ptr [esp + 0x58], edx
// 00a534c0  89542478             mov dword ptr [esp + 0x78], edx
// 00a534c4  6a07                 push 7
// 00a534c6  8d542448             lea edx, [esp + 0x48]
// 00a534ca  89442430             mov dword ptr [esp + 0x30], eax
// 00a534ce  89442450             mov dword ptr [esp + 0x50], eax
// 00a534d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a534d6  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a534da  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a534de  89442474             mov dword ptr [esp + 0x74], eax
// 00a534e2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a534e9  52                   push edx
// 00a534ea  50                   push eax
// 00a534eb  83c1fd               add ecx, -3
// 00a534ee  53                   push ebx
// 00a534ef  896c2458             mov dword ptr [esp + 0x58], ebp
// 00a534f3  c744247402000000     mov dword ptr [esp + 0x74], 2
// 00a534fb  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 00a53503  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00a53507  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00a53512  e899e5ffff           call 0xa51ab0
// 00a53517  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5351b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5351f  8d45ff               lea eax, [ebp - 1]
// 00a53522  89442458             mov dword ptr [esp + 0x58], eax
// 00a53526  b8feffffff           mov eax, 0xfffffffe
// 00a5352b  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a5352f  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a53533  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00a5353b  89442464             mov dword ptr [esp + 0x64], eax
// 00a5353f  89442468             mov dword ptr [esp + 0x68], eax
// 00a53543  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a53547  6a03                 push 3
// 00a53549  8d442458             lea eax, [esp + 0x58]
// 00a5354d  50                   push eax
// 00a5354e  51                   push ecx
// 00a5354f  53                   push ebx
// 00a53550  e85be5ffff           call 0xa51ab0
// 00a53555  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a53559  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5355d  42                   inc edx
// 00a5355e  89542464             mov dword ptr [esp + 0x64], edx
// 00a53562  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a53566  83c2fc               add edx, -4
// 00a53569  894c2470             mov dword ptr [esp + 0x70], ecx
// 00a5356d  6a04                 push 4
// 00a5356f  8d45fd               lea eax, [ebp - 3]
// 00a53572  8d4c2468             lea ecx, [esp + 0x68]
// 00a53576  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a5357a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a53581  89942480000000       mov dword ptr [esp + 0x80], edx
// 00a53588  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5358c  51                   push ecx
// 00a5358d  52                   push edx
// 00a5358e  83c004               add eax, 4
// 00a53591  53                   push ebx
// 00a53592  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00a5359a  c784248400000003000000 mov dword ptr [esp + 0x84], 3
// 00a535a5  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 00a535b0  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a535b7  e8f4e4ffff           call 0xa51ab0
// 00a535bc  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a535bf  83c430               add esp, 0x30
// 00a535c2  397004               cmp dword ptr [eax + 4], esi
// 00a535c5  0f85c1030000         jne 0xa5398c
// 00a535cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a535cf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a535d3  51                   push ecx
// 00a535d4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a535d8  2bc1                 sub eax, ecx
// 00a535da  8d5428fd             lea edx, [eax + ebp - 3]
// 00a535de  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a535e5  52                   push edx
// 00a535e6  8d4c0104             lea ecx, [ecx + eax + 4]
// 00a535ea  51                   push ecx
// 00a535eb  57                   push edi
// 00a535ec  e992030000           jmp 0xa53983
// 00a535f1  8d47ff               lea eax, [edi - 1]
// 00a535f4  89442444             mov dword ptr [esp + 0x44], eax
// 00a535f8  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a535fc  8bcd                 mov ecx, ebp
// 00a535fe  2bc8                 sub ecx, eax
// 00a53600  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a53604  49                   dec ecx
// 00a53605  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a53609  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5360d  2bcf                 sub ecx, edi
// 00a5360f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a53616  89442448             mov dword ptr [esp + 0x48], eax
// 00a5361a  83c105               add ecx, 5
// 00a5361d  2bc5                 sub eax, ebp
// 00a5361f  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a53623  8d4803               lea ecx, [eax + 3]
// 00a53626  33d2                 xor edx, edx
// 00a53628  89442410             mov dword ptr [esp + 0x10], eax
// 00a5362c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a53630  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a53634  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a53637  83c002               add eax, 2
// 00a5363a  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a5363e  89542458             mov dword ptr [esp + 0x58], edx
// 00a53642  52                   push edx
// 00a53643  8b11                 mov edx, dword ptr [ecx]
// 00a53645  89442464             mov dword ptr [esp + 0x64], eax
// 00a53649  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a5364c  ffd0                 call eax
// 00a5364e  50                   push eax
// 00a5364f  6a04                 push 4
// 00a53651  8d4c2450             lea ecx, [esp + 0x50]
// 00a53655  51                   push ecx
// 00a53656  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5365a  56                   push esi
// 00a5365b  53                   push ebx
// 00a5365c  e82fe6ffff           call 0xa51c90
// 00a53661  89442430             mov dword ptr [esp + 0x30], eax
// 00a53665  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a53669  40                   inc eax
// 00a5366a  89442448             mov dword ptr [esp + 0x48], eax
// 00a5366e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a53672  83c0fd               add eax, -3
// 00a53675  89442428             mov dword ptr [esp + 0x28], eax
// 00a53679  89442450             mov dword ptr [esp + 0x50], eax
// 00a5367d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a53684  83c009               add eax, 9
// 00a53687  33d2                 xor edx, edx
// 00a53689  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a53690  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a53694  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a53698  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a5369c  89542460             mov dword ptr [esp + 0x60], edx
// 00a536a0  89542478             mov dword ptr [esp + 0x78], edx
// 00a536a4  6a07                 push 7
// 00a536a6  8d542448             lea edx, [esp + 0x48]
// 00a536aa  89442470             mov dword ptr [esp + 0x70], eax
// 00a536ae  89442474             mov dword ptr [esp + 0x74], eax
// 00a536b2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a536b9  52                   push edx
// 00a536ba  b9feffffff           mov ecx, 0xfffffffe
// 00a536bf  50                   push eax
// 00a536c0  53                   push ebx
// 00a536c1  897c2454             mov dword ptr [esp + 0x54], edi
// 00a536c5  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a536c9  c744246802000000     mov dword ptr [esp + 0x68], 2
// 00a536d1  c7442474fbffffff     mov dword ptr [esp + 0x74], 0xfffffffb
// 00a536d9  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a536dd  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a536e4  e8c7e3ffff           call 0xa51ab0
// 00a536e9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a536ed  8d47ff               lea eax, [edi - 1]
// 00a536f0  89442454             mov dword ptr [esp + 0x54], eax
// 00a536f4  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a536f8  40                   inc eax
// 00a536f9  89442458             mov dword ptr [esp + 0x58], eax
// 00a536fd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a53705  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a53709  c7442464feffffff     mov dword ptr [esp + 0x64], 0xfffffffe
// 00a53711  c744246802000000     mov dword ptr [esp + 0x68], 2
// 00a53719  6a03                 push 3
// 00a5371b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5371f  8d542458             lea edx, [esp + 0x58]
// 00a53723  52                   push edx
// 00a53724  50                   push eax
// 00a53725  53                   push ebx
// 00a53726  e885e3ffff           call 0xa51ab0
// 00a5372b  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a53732  8d4ffd               lea ecx, [edi - 3]
// 00a53735  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a53739  8d55ff               lea edx, [ebp - 1]
// 00a5373c  6a04                 push 4
// 00a5373e  8d4c2468             lea ecx, [esp + 0x68]
// 00a53742  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a53746  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5374a  89442470             mov dword ptr [esp + 0x70], eax
// 00a5374e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a53752  51                   push ecx
// 00a53753  83c004               add eax, 4
// 00a53756  52                   push edx
// 00a53757  53                   push ebx
// 00a53758  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a53763  c7842484000000fbffffff mov dword ptr [esp + 0x84], 0xfffffffb
// 00a5376e  c7842488000000fdffffff mov dword ptr [esp + 0x88], 0xfffffffd
// 00a53779  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00a53780  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a53787  e824e3ffff           call 0xa51ab0
// 00a5378c  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a5378f  83c430               add esp, 0x30
// 00a53792  397004               cmp dword ptr [eax + 4], esi
// 00a53795  0f85f1010000         jne 0xa5398c
// 00a5379b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5379f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a537a3  51                   push ecx
// 00a537a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a537a8  2bf8                 sub edi, eax
// 00a537aa  2bf9                 sub edi, ecx
// 00a537ac  8d542ffd             lea edx, [edi + ebp - 3]
// 00a537b0  52                   push edx
// 00a537b1  2bc5                 sub eax, ebp
// 00a537b3  51                   push ecx
// 00a537b4  8d440804             lea eax, [eax + ecx + 4]
// 00a537b8  50                   push eax
// 00a537b9  53                   push ebx
// 00a537ba  e8b1daffff           call 0xa51270
// 00a537bf  e9c5010000           jmp 0xa53989
// 00a537c4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a537c8  8d4101               lea eax, [ecx + 1]
// 00a537cb  89442444             mov dword ptr [esp + 0x44], eax
// 00a537cf  8d45ff               lea eax, [ebp - 1]
// 00a537d2  89442448             mov dword ptr [esp + 0x48], eax
// 00a537d6  8bc7                 mov eax, edi
// 00a537d8  2bc1                 sub eax, ecx
// 00a537da  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a537de  83c0fe               add eax, -2
// 00a537e1  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a537e5  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a537e9  2bc5                 sub eax, ebp
// 00a537eb  89442410             mov dword ptr [esp + 0x10], eax
// 00a537ef  83c005               add eax, 5
// 00a537f2  89442458             mov dword ptr [esp + 0x58], eax
// 00a537f6  8bc1                 mov eax, ecx
// 00a537f8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a537fb  33d2                 xor edx, edx
// 00a537fd  2bc7                 sub eax, edi
// 00a537ff  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a53806  83c002               add eax, 2
// 00a53809  89542450             mov dword ptr [esp + 0x50], edx
// 00a5380d  89542454             mov dword ptr [esp + 0x54], edx
// 00a53811  52                   push edx
// 00a53812  8b11                 mov edx, dword ptr [ecx]
// 00a53814  89442460             mov dword ptr [esp + 0x60], eax
// 00a53818  89442464             mov dword ptr [esp + 0x64], eax
// 00a5381c  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a5381f  ffd0                 call eax
// 00a53821  50                   push eax
// 00a53822  6a04                 push 4
// 00a53824  8d4c2450             lea ecx, [esp + 0x50]
// 00a53828  51                   push ecx
// 00a53829  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5382d  56                   push esi
// 00a5382e  53                   push ebx
// 00a5382f  e85ce4ffff           call 0xa51c90
// 00a53834  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a53838  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5383c  40                   inc eax
// 00a5383d  89442444             mov dword ptr [esp + 0x44], eax
// 00a53841  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a53845  83c0fd               add eax, -3
// 00a53848  89442430             mov dword ptr [esp + 0x30], eax
// 00a5384c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a53850  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a53854  83c009               add eax, 9
// 00a53857  33d2                 xor edx, edx
// 00a53859  89442428             mov dword ptr [esp + 0x28], eax
// 00a5385d  89442460             mov dword ptr [esp + 0x60], eax
// 00a53861  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a53868  83c003               add eax, 3
// 00a5386b  89542450             mov dword ptr [esp + 0x50], edx
// 00a5386f  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a53873  89542474             mov dword ptr [esp + 0x74], edx
// 00a53877  6a07                 push 7
// 00a53879  8d542448             lea edx, [esp + 0x48]
// 00a5387d  89442470             mov dword ptr [esp + 0x70], eax
// 00a53881  89442474             mov dword ptr [esp + 0x74], eax
// 00a53885  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a5388c  52                   push edx
// 00a5388d  b9feffffff           mov ecx, 0xfffffffe
// 00a53892  50                   push eax
// 00a53893  53                   push ebx
// 00a53894  896c2458             mov dword ptr [esp + 0x58], ebp
// 00a53898  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00a538a0  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a538a4  894c2474             mov dword ptr [esp + 0x74], ecx
// 00a538a8  c7442478fbffffff     mov dword ptr [esp + 0x78], 0xfffffffb
// 00a538b0  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a538b7  e8f4e1ffff           call 0xa51ab0
// 00a538bc  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a538c0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a538c4  40                   inc eax
// 00a538c5  89442454             mov dword ptr [esp + 0x54], eax
// 00a538c9  8d45ff               lea eax, [ebp - 1]
// 00a538cc  89442458             mov dword ptr [esp + 0x58], eax
// 00a538d0  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a538d4  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00a538dc  c744246402000000     mov dword ptr [esp + 0x64], 2
// 00a538e4  c7442468feffffff     mov dword ptr [esp + 0x68], 0xfffffffe
// 00a538ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a538f0  6a03                 push 3
// 00a538f2  8d542458             lea edx, [esp + 0x58]
// 00a538f6  52                   push edx
// 00a538f7  50                   push eax
// 00a538f8  53                   push ebx
// 00a538f9  e8b2e1ffff           call 0xa51ab0
// 00a538fe  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a53902  4f                   dec edi
// 00a53903  897c2464             mov dword ptr [esp + 0x64], edi
// 00a53907  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 00a5390e  8d4704               lea eax, [edi + 4]
// 00a53911  8d4dfd               lea ecx, [ebp - 3]
// 00a53914  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a53918  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a5391f  6a04                 push 4
// 00a53921  8d442468             lea eax, [esp + 0x68]
// 00a53925  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a53929  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5392d  50                   push eax
// 00a5392e  51                   push ecx
// 00a5392f  53                   push ebx
// 00a53930  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00a53938  89942480000000       mov dword ptr [esp + 0x80], edx
// 00a5393f  c7842484000000fdffffff mov dword ptr [esp + 0x84], 0xfffffffd
// 00a5394a  c7842488000000fbffffff mov dword ptr [esp + 0x88], 0xfffffffb
// 00a53955  e856e1ffff           call 0xa51ab0
// 00a5395a  8b5660               mov edx, dword ptr [esi + 0x60]
// 00a5395d  83c430               add esp, 0x30
// 00a53960  397204               cmp dword ptr [edx + 4], esi
// 00a53963  7527                 jne 0xa5398c
// 00a53965  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a53969  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5396d  50                   push eax
// 00a5396e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a53972  2bc1                 sub eax, ecx
// 00a53974  8d5428fd             lea edx, [eax + ebp - 3]
// 00a53978  52                   push edx
// 00a53979  8d443904             lea eax, [ecx + edi + 4]
// 00a5397d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a53981  50                   push eax
// 00a53982  51                   push ecx
// 00a53983  53                   push ebx
// 00a53984  e8b7d8ffff           call 0xa51240
// 00a53989  83c414               add esp, 0x14
// 00a5398c  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00a5398f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a53993  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00a53996  8b11                 mov edx, dword ptr [ecx]
// 00a53998  6a01                 push 1
// 00a5399a  83ec10               sub esp, 0x10
// 00a5399d  8bc4                 mov eax, esp
// 00a5399f  8938                 mov dword ptr [eax], edi
// 00a539a1  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00a539a4  897804               mov dword ptr [eax + 4], edi
// 00a539a7  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00a539aa  897808               mov dword ptr [eax + 8], edi
// 00a539ad  8b7e50               mov edi, dword ptr [esi + 0x50]
// 00a539b0  56                   push esi
// 00a539b1  89780c               mov dword ptr [eax + 0xc], edi
// 00a539b4  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a539b7  53                   push ebx
// 00a539b8  ffd0                 call eax
// 00a539ba  5f                   pop edi
// 00a539bb  5e                   pop esi
// 00a539bc  5d                   pop ebp
// 00a539bd  5b                   pop ebx
// 00a539be  83c46c               add esp, 0x6c
// 00a539c1  c20800               ret 8
// 00a539c4  3332                 xor esi, dword ptr [edx]
// 00a539c6  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a539c7  001a                 add byte ptr [edx], bl
// 00a539c9  34a5                 xor al, 0xa5
// 00a539cb  00f1                 add cl, dh
// 00a539cd  35a500c437           xor eax, 0x37c400a5
// 00a539d2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp