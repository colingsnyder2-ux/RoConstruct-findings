// roc 2010-06 00568510  unit: seg_00560000  size: 1859 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00568510
//
// 00568510  83ec2c               sub esp, 0x2c
// 00568513  8b542434             mov edx, dword ptr [esp + 0x34]
// 00568517  8b0a                 mov ecx, dword ptr [edx]
// 00568519  8a5208               mov dl, byte ptr [edx + 8]
// 0056851c  33c0                 xor eax, eax
// 0056851e  894c2408             mov dword ptr [esp + 8], ecx
// 00568522  89442404             mov dword ptr [esp + 4], eax
// 00568526  f6c202               test dl, 2
// 00568529  0f8420070000         je 0x568c4f
// 0056852f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00568533  53                   push ebx
// 00568534  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 0056853b  55                   push ebp
// 0056853c  56                   push esi
// 0056853d  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 00568544  57                   push edi
// 00568545  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 0056854c  897c2434             mov dword ptr [esp + 0x34], edi
// 00568550  8974241c             mov dword ptr [esp + 0x1c], esi
// 00568554  895c2430             mov dword ptr [esp + 0x30], ebx
// 00568558  80fa02               cmp dl, 2
// 0056855b  0f8559030000         jne 0x5688ba
// 00568561  8b542444             mov edx, dword ptr [esp + 0x44]
// 00568565  807a0908             cmp byte ptr [edx + 9], 8
// 00568569  0f853a010000         jne 0x5686a9
// 0056856f  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00568576  0f84b5000000         je 0x568631
// 0056857c  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00568583  0f84a8000000         je 0x568631
// 00568589  8b742448             mov esi, dword ptr [esp + 0x48]
// 0056858d  89742420             mov dword ptr [esp + 0x20], esi
// 00568591  85c9                 test ecx, ecx
// 00568593  0f8625030000         jbe 0x5688be
// 00568599  894c2424             mov dword ptr [esp + 0x24], ecx
// 0056859d  8d4900               lea ecx, [ecx]
// 005685a0  0fb60e               movzx ecx, byte ptr [esi]
// 005685a3  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 005685a9  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 005685ad  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 005685b1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 005685b4  46                   inc esi
// 005685b5  46                   inc esi
// 005685b6  88542412             mov byte ptr [esp + 0x12], dl
// 005685ba  0fb616               movzx edx, byte ptr [esi]
// 005685bd  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 005685c1  88542411             mov byte ptr [esp + 0x11], dl
// 005685c5  8a542412             mov dl, byte ptr [esp + 0x12]
// 005685c9  46                   inc esi
// 005685ca  884c2413             mov byte ptr [esp + 0x13], cl
// 005685ce  3ad1                 cmp dl, cl
// 005685d0  7516                 jne 0x5685e8
// 005685d2  3a542411             cmp dl, byte ptr [esp + 0x11]
// 005685d6  750c                 jne 0x5685e4
// 005685d8  8a4eff               mov cl, byte ptr [esi - 1]
// 005685db  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005685df  884d00               mov byte ptr [ebp], cl
// 005685e2  eb38                 jmp 0x56861c
// 005685e4  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 005685e8  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 005685ed  0fb6c9               movzx ecx, cl
// 005685f0  0fafd3               imul edx, ebx
// 005685f3  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 005685f8  834c241401           or dword ptr [esp + 0x14], 1
// 005685fd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00568601  03d1                 add edx, ecx
// 00568603  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 00568608  0fafcf               imul ecx, edi
// 0056860b  03d1                 add edx, ecx
// 0056860d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00568613  c1ea0f               shr edx, 0xf
// 00568616  8a140a               mov dl, byte ptr [edx + ecx]
// 00568619  885500               mov byte ptr [ebp], dl
// 0056861c  45                   inc ebp
// 0056861d  836c242401           sub dword ptr [esp + 0x24], 1
// 00568622  896c2420             mov dword ptr [esp + 0x20], ebp
// 00568626  0f8574ffffff         jne 0x5685a0
// 0056862c  e985020000           jmp 0x5688b6
// 00568631  8b742448             mov esi, dword ptr [esp + 0x48]
// 00568635  8bee                 mov ebp, esi
// 00568637  85c9                 test ecx, ecx
// 00568639  0f867b020000         jbe 0x5688ba
// 0056863f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00568643  0fb60e               movzx ecx, byte ptr [esi]
// 00568646  46                   inc esi
// 00568647  0fb65601             movzx edx, byte ptr [esi + 1]
// 0056864b  884c2411             mov byte ptr [esp + 0x11], cl
// 0056864f  8a0e                 mov cl, byte ptr [esi]
// 00568651  46                   inc esi
// 00568652  88542412             mov byte ptr [esp + 0x12], dl
// 00568656  8a542411             mov dl, byte ptr [esp + 0x11]
// 0056865a  46                   inc esi
// 0056865b  884c2413             mov byte ptr [esp + 0x13], cl
// 0056865f  3ad1                 cmp dl, cl
// 00568661  7512                 jne 0x568675
// 00568663  3a542412             cmp dl, byte ptr [esp + 0x12]
// 00568667  7508                 jne 0x568671
// 00568669  8a4eff               mov cl, byte ptr [esi - 1]
// 0056866c  884d00               mov byte ptr [ebp], cl
// 0056866f  eb2b                 jmp 0x56869c
// 00568671  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00568675  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0056867a  0fb6c9               movzx ecx, cl
// 0056867d  0fafd3               imul edx, ebx
// 00568680  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00568685  834c241401           or dword ptr [esp + 0x14], 1
// 0056868a  03d1                 add edx, ecx
// 0056868c  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00568691  0fafcf               imul ecx, edi
// 00568694  03d1                 add edx, ecx
// 00568696  c1ea0f               shr edx, 0xf
// 00568699  885500               mov byte ptr [ebp], dl
// 0056869c  45                   inc ebp
// 0056869d  836c242401           sub dword ptr [esp + 0x24], 1
// 005686a2  759f                 jne 0x568643
// 005686a4  e90d020000           jmp 0x5688b6
// 005686a9  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 005686b0  0f843e010000         je 0x5687f4
// 005686b6  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 005686bd  0f8431010000         je 0x5687f4
// 005686c3  8b542448             mov edx, dword ptr [esp + 0x48]
// 005686c7  89542420             mov dword ptr [esp + 0x20], edx
// 005686cb  85c9                 test ecx, ecx
// 005686cd  0f86e7010000         jbe 0x5688ba
// 005686d3  894c2428             mov dword ptr [esp + 0x28], ecx
// 005686d7  eb07                 jmp 0x5686e0
// 005686d9  8da42400000000       lea esp, [esp]
// 005686e0  0fb60a               movzx ecx, byte ptr [edx]
// 005686e3  0fb67201             movzx esi, byte ptr [edx + 1]
// 005686e7  66c1e108             shl cx, 8
// 005686eb  660bce               or cx, si
// 005686ee  0fb67203             movzx esi, byte ptr [edx + 3]
// 005686f2  0fb7e9               movzx ebp, cx
// 005686f5  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 005686f9  83c202               add edx, 2
// 005686fc  66c1e108             shl cx, 8
// 00568700  660bce               or cx, si
// 00568703  0fb67203             movzx esi, byte ptr [edx + 3]
// 00568707  0fb7c9               movzx ecx, cx
// 0056870a  83c202               add edx, 2
// 0056870d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00568711  0fb60a               movzx ecx, byte ptr [edx]
// 00568714  66c1e108             shl cx, 8
// 00568718  660bce               or cx, si
// 0056871b  83c202               add edx, 2
// 0056871e  0fb7f1               movzx esi, cx
// 00568721  89542438             mov dword ptr [esp + 0x38], edx
// 00568725  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 0056872a  750d                 jne 0x568739
// 0056872c  663bee               cmp bp, si
// 0056872f  7508                 jne 0x568739
// 00568731  0fb7f5               movzx esi, bp
// 00568734  e989000000           jmp 0x5687c2
// 00568739  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 0056873e  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00568745  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00568749  0fb7dd               movzx ebx, bp
// 0056874c  0fb6eb               movzx ebp, bl
// 0056874f  d3ed                 shr ebp, cl
// 00568751  0fb7d6               movzx edx, si
// 00568754  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0056875a  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0056875d  c1eb08               shr ebx, 8
// 00568760  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00568765  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00568769  0fafef               imul ebp, edi
// 0056876c  0fb6fb               movzx edi, bl
// 0056876f  d3ef                 shr edi, cl
// 00568771  c1eb08               shr ebx, 8
// 00568774  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00568777  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0056877b  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00568780  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00568784  03ef                 add ebp, edi
// 00568786  0fb6fa               movzx edi, dl
// 00568789  d3ef                 shr edi, cl
// 0056878b  c1ea08               shr edx, 8
// 0056878e  8b34be               mov esi, dword ptr [esi + edi*4]
// 00568791  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00568795  0fafd3               imul edx, ebx
// 00568798  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0056879c  03ea                 add ebp, edx
// 0056879e  c1ed0f               shr ebp, 0xf
// 005687a1  0fb7d5               movzx edx, bp
// 005687a4  0fb6f2               movzx esi, dl
// 005687a7  d3ee                 shr esi, cl
// 005687a9  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 005687af  c1ea08               shr edx, 8
// 005687b2  834c241401           or dword ptr [esp + 0x14], 1
// 005687b7  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 005687ba  0fb73451             movzx esi, word ptr [ecx + edx*2]
// 005687be  8b542438             mov edx, dword ptr [esp + 0x38]
// 005687c2  8bce                 mov ecx, esi
// 005687c4  89742424             mov dword ptr [esp + 0x24], esi
// 005687c8  8b742420             mov esi, dword ptr [esp + 0x20]
// 005687cc  c1e908               shr ecx, 8
// 005687cf  880e                 mov byte ptr [esi], cl
// 005687d1  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 005687d5  46                   inc esi
// 005687d6  880e                 mov byte ptr [esi], cl
// 005687d8  b901000000           mov ecx, 1
// 005687dd  89742420             mov dword ptr [esp + 0x20], esi
// 005687e1  014c2420             add dword ptr [esp + 0x20], ecx
// 005687e5  294c2428             sub dword ptr [esp + 0x28], ecx
// 005687e9  0f85f1feffff         jne 0x5686e0
// 005687ef  e9c2000000           jmp 0x5688b6
// 005687f4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005687f8  8bf2                 mov esi, edx
// 005687fa  85c9                 test ecx, ecx
// 005687fc  0f86b8000000         jbe 0x5688ba
// 00568802  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00568806  eb08                 jmp 0x568810
// 00568808  8da42400000000       lea esp, [esp]
// 0056880f  90                   nop 
// 00568810  0fb60a               movzx ecx, byte ptr [edx]
// 00568813  660fb66a01           movzx bp, byte ptr [edx + 1]
// 00568818  66c1e108             shl cx, 8
// 0056881c  660bcd               or cx, bp
// 0056881f  660fb66a03           movzx bp, byte ptr [edx + 3]
// 00568824  0fb7c9               movzx ecx, cx
// 00568827  894c2420             mov dword ptr [esp + 0x20], ecx
// 0056882b  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0056882f  83c202               add edx, 2
// 00568832  66c1e108             shl cx, 8
// 00568836  660bcd               or cx, bp
// 00568839  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0056883e  0fb7c9               movzx ecx, cx
// 00568841  894c2424             mov dword ptr [esp + 0x24], ecx
// 00568845  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00568849  83c202               add edx, 2
// 0056884c  66c1e108             shl cx, 8
// 00568850  660bcd               or cx, bp
// 00568853  0fb7c9               movzx ecx, cx
// 00568856  894c2428             mov dword ptr [esp + 0x28], ecx
// 0056885a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056885e  83c202               add edx, 2
// 00568861  663b4c2424           cmp cx, word ptr [esp + 0x24]
// 00568866  7507                 jne 0x56886f
// 00568868  663b4c2428           cmp cx, word ptr [esp + 0x28]
// 0056886d  7405                 je 0x568874
// 0056886f  834c241401           or dword ptr [esp + 0x14], 1
// 00568874  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 00568879  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 0056887e  0fafcb               imul ecx, ebx
// 00568881  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 00568886  03cd                 add ecx, ebp
// 00568888  0fb76c2420           movzx ebp, word ptr [esp + 0x20]
// 0056888d  0fafef               imul ebp, edi
// 00568890  03cd                 add ecx, ebp
// 00568892  c1e90f               shr ecx, 0xf
// 00568895  0fb7e9               movzx ebp, cx
// 00568898  8bcd                 mov ecx, ebp
// 0056889a  c1e908               shr ecx, 8
// 0056889d  880e                 mov byte ptr [esi], cl
// 0056889f  896c2438             mov dword ptr [esp + 0x38], ebp
// 005688a3  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 005688a7  46                   inc esi
// 005688a8  880e                 mov byte ptr [esi], cl
// 005688aa  46                   inc esi
// 005688ab  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005688b0  0f855affffff         jne 0x568810
// 005688b6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005688ba  8b742448             mov esi, dword ptr [esp + 0x48]
// 005688be  8b542444             mov edx, dword ptr [esp + 0x44]
// 005688c2  807a0806             cmp byte ptr [edx + 8], 6
// 005688c6  0f853c030000         jne 0x568c08
// 005688cc  807a0908             cmp byte ptr [edx + 9], 8
// 005688d0  0f8527010000         jne 0x5689fd
// 005688d6  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 005688dd  0f84ad000000         je 0x568990
// 005688e3  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 005688ea  0f84a0000000         je 0x568990
// 005688f0  837c241800           cmp dword ptr [esp + 0x18], 0
// 005688f5  8bee                 mov ebp, esi
// 005688f7  0f8607030000         jbe 0x568c04
// 005688fd  8b542418             mov edx, dword ptr [esp + 0x18]
// 00568901  8954242c             mov dword ptr [esp + 0x2c], edx
// 00568905  eb09                 jmp 0x568910
// 00568907  8da42400000000       lea esp, [esp]
// 0056890e  8bff                 mov edi, edi
// 00568910  0fb616               movzx edx, byte ptr [esi]
// 00568913  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00568919  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0056891d  46                   inc esi
// 0056891e  88542413             mov byte ptr [esp + 0x13], dl
// 00568922  0fb616               movzx edx, byte ptr [esi]
// 00568925  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00568929  46                   inc esi
// 0056892a  88542411             mov byte ptr [esp + 0x11], dl
// 0056892e  0fb616               movzx edx, byte ptr [esi]
// 00568931  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 00568935  884c2412             mov byte ptr [esp + 0x12], cl
// 00568939  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0056893d  46                   inc esi
// 0056893e  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 00568942  7506                 jne 0x56894a
// 00568944  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 00568948  7405                 je 0x56894f
// 0056894a  834c241401           or dword ptr [esp + 0x14], 1
// 0056894f  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00568954  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00568959  0fafd3               imul edx, ebx
// 0056895c  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00568961  03d1                 add edx, ecx
// 00568963  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 00568968  0fafcf               imul ecx, edi
// 0056896b  03d1                 add edx, ecx
// 0056896d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00568973  c1ea0f               shr edx, 0xf
// 00568976  8a140a               mov dl, byte ptr [edx + ecx]
// 00568979  885500               mov byte ptr [ebp], dl
// 0056897c  8a0e                 mov cl, byte ptr [esi]
// 0056897e  45                   inc ebp
// 0056897f  884d00               mov byte ptr [ebp], cl
// 00568982  45                   inc ebp
// 00568983  46                   inc esi
// 00568984  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00568989  7585                 jne 0x568910
// 0056898b  e974020000           jmp 0x568c04
// 00568990  8bc6                 mov eax, esi
// 00568992  85c9                 test ecx, ecx
// 00568994  0f866e020000         jbe 0x568c08
// 0056899a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0056899e  8bff                 mov edi, edi
// 005689a0  8a08                 mov cl, byte ptr [eax]
// 005689a2  0fb65001             movzx edx, byte ptr [eax + 1]
// 005689a6  40                   inc eax
// 005689a7  40                   inc eax
// 005689a8  88542412             mov byte ptr [esp + 0x12], dl
// 005689ac  0fb610               movzx edx, byte ptr [eax]
// 005689af  40                   inc eax
// 005689b0  884c2411             mov byte ptr [esp + 0x11], cl
// 005689b4  88542413             mov byte ptr [esp + 0x13], dl
// 005689b8  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 005689bc  7504                 jne 0x5689c2
// 005689be  3aca                 cmp cl, dl
// 005689c0  7405                 je 0x5689c7
// 005689c2  834c241401           or dword ptr [esp + 0x14], 1
// 005689c7  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 005689cc  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 005689d1  0fafcb               imul ecx, ebx
// 005689d4  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 005689d9  03ca                 add ecx, edx
// 005689db  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 005689e0  0fafd7               imul edx, edi
// 005689e3  03ca                 add ecx, edx
// 005689e5  c1e90f               shr ecx, 0xf
// 005689e8  880e                 mov byte ptr [esi], cl
// 005689ea  8a08                 mov cl, byte ptr [eax]
// 005689ec  46                   inc esi
// 005689ed  880e                 mov byte ptr [esi], cl
// 005689ef  46                   inc esi
// 005689f0  40                   inc eax
// 005689f1  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005689f6  75a8                 jne 0x5689a0
// 005689f8  e907020000           jmp 0x568c04
// 005689fd  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00568a04  0f8439010000         je 0x568b43
// 00568a0a  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00568a11  0f842c010000         je 0x568b43
// 00568a17  837c241800           cmp dword ptr [esp + 0x18], 0
// 00568a1c  8bce                 mov ecx, esi
// 00568a1e  89742428             mov dword ptr [esp + 0x28], esi
// 00568a22  0f86dc010000         jbe 0x568c04
// 00568a28  8b542418             mov edx, dword ptr [esp + 0x18]
// 00568a2c  89542424             mov dword ptr [esp + 0x24], edx
// 00568a30  0fb611               movzx edx, byte ptr [ecx]
// 00568a33  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00568a37  66c1e208             shl dx, 8
// 00568a3b  660bd3               or dx, bx
// 00568a3e  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00568a42  0fb7ea               movzx ebp, dx
// 00568a45  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00568a49  83c102               add ecx, 2
// 00568a4c  66c1e208             shl dx, 8
// 00568a50  660bd3               or dx, bx
// 00568a53  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00568a57  0fb7d2               movzx edx, dx
// 00568a5a  8954242c             mov dword ptr [esp + 0x2c], edx
// 00568a5e  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00568a62  83c102               add ecx, 2
// 00568a65  66c1e208             shl dx, 8
// 00568a69  660bd3               or dx, bx
// 00568a6c  83c102               add ecx, 2
// 00568a6f  0fb7d2               movzx edx, dx
// 00568a72  894c2420             mov dword ptr [esp + 0x20], ecx
// 00568a76  663b6c242c           cmp bp, word ptr [esp + 0x2c]
// 00568a7b  750d                 jne 0x568a8a
// 00568a7d  663bea               cmp bp, dx
// 00568a80  7508                 jne 0x568a8a
// 00568a82  0fb7d5               movzx edx, bp
// 00568a85  e98b000000           jmp 0x568b15
// 00568a8a  0fb75c242c           movzx ebx, word ptr [esp + 0x2c]
// 00568a8f  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00568a96  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 00568a9c  895c2438             mov dword ptr [esp + 0x38], ebx
// 00568aa0  0fb7dd               movzx ebx, bp
// 00568aa3  0fb6eb               movzx ebp, bl
// 00568aa6  d3ed                 shr ebp, cl
// 00568aa8  c1eb08               shr ebx, 8
// 00568aab  0fb7d2               movzx edx, dx
// 00568aae  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 00568ab1  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00568ab6  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00568aba  0fafef               imul ebp, edi
// 00568abd  0fb6fb               movzx edi, bl
// 00568ac0  d3ef                 shr edi, cl
// 00568ac2  c1eb08               shr ebx, 8
// 00568ac5  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00568ac8  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 00568acc  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00568ad1  03ef                 add ebp, edi
// 00568ad3  0fb6fa               movzx edi, dl
// 00568ad6  d3ef                 shr edi, cl
// 00568ad8  c1ea08               shr edx, 8
// 00568adb  8b34be               mov esi, dword ptr [esi + edi*4]
// 00568ade  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00568ae2  0faf542430           imul edx, dword ptr [esp + 0x30]
// 00568ae7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00568aeb  03ea                 add ebp, edx
// 00568aed  c1ed0f               shr ebp, 0xf
// 00568af0  0fb7d5               movzx edx, bp
// 00568af3  0fb6f2               movzx esi, dl
// 00568af6  d3ee                 shr esi, cl
// 00568af8  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 00568afe  c1ea08               shr edx, 8
// 00568b01  834c241401           or dword ptr [esp + 0x14], 1
// 00568b06  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00568b09  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 00568b0d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00568b11  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00568b15  8bda                 mov ebx, edx
// 00568b17  c1eb08               shr ebx, 8
// 00568b1a  881e                 mov byte ptr [esi], bl
// 00568b1c  46                   inc esi
// 00568b1d  8816                 mov byte ptr [esi], dl
// 00568b1f  0fb611               movzx edx, byte ptr [ecx]
// 00568b22  46                   inc esi
// 00568b23  8816                 mov byte ptr [esi], dl
// 00568b25  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00568b29  41                   inc ecx
// 00568b2a  46                   inc esi
// 00568b2b  8816                 mov byte ptr [esi], dl
// 00568b2d  46                   inc esi
// 00568b2e  41                   inc ecx
// 00568b2f  836c242401           sub dword ptr [esp + 0x24], 1
// 00568b34  89742428             mov dword ptr [esp + 0x28], esi
// 00568b38  0f85f2feffff         jne 0x568a30
// 00568b3e  e9c1000000           jmp 0x568c04
// 00568b43  837c241800           cmp dword ptr [esp + 0x18], 0
// 00568b48  8bc6                 mov eax, esi
// 00568b4a  8bce                 mov ecx, esi
// 00568b4c  0f86b2000000         jbe 0x568c04
// 00568b52  8b542418             mov edx, dword ptr [esp + 0x18]
// 00568b56  89542430             mov dword ptr [esp + 0x30], edx
// 00568b5a  8d9b00000000         lea ebx, [ebx]
// 00568b60  0fb630               movzx esi, byte ptr [eax]
// 00568b63  0fb65001             movzx edx, byte ptr [eax + 1]
// 00568b67  66c1e608             shl si, 8
// 00568b6b  660bd6               or dx, si
// 00568b6e  0fb67002             movzx esi, byte ptr [eax + 2]
// 00568b72  0fb7d2               movzx edx, dx
// 00568b75  83c002               add eax, 2
// 00568b78  660fb66802           movzx bp, byte ptr [eax + 2]
// 00568b7d  89542434             mov dword ptr [esp + 0x34], edx
// 00568b81  0fb65001             movzx edx, byte ptr [eax + 1]
// 00568b85  66c1e608             shl si, 8
// 00568b89  83c002               add eax, 2
// 00568b8c  660bd6               or dx, si
// 00568b8f  0fb67001             movzx esi, byte ptr [eax + 1]
// 00568b93  66c1e508             shl bp, 8
// 00568b97  660bf5               or si, bp
// 00568b9a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00568b9e  0fb7d2               movzx edx, dx
// 00568ba1  83c002               add eax, 2
// 00568ba4  0fb7f6               movzx esi, si
// 00568ba7  663bea               cmp bp, dx
// 00568baa  7505                 jne 0x568bb1
// 00568bac  663bee               cmp bp, si
// 00568baf  7405                 je 0x568bb6
// 00568bb1  834c241401           or dword ptr [esp + 0x14], 1
// 00568bb6  0fb7d2               movzx edx, dx
// 00568bb9  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 00568bbe  0fb7f6               movzx esi, si
// 00568bc1  0faff3               imul esi, ebx
// 00568bc4  03f2                 add esi, edx
// 00568bc6  0fb7542434           movzx edx, word ptr [esp + 0x34]
// 00568bcb  0fafd7               imul edx, edi
// 00568bce  03f2                 add esi, edx
// 00568bd0  c1ee0f               shr esi, 0xf
// 00568bd3  0fb7f6               movzx esi, si
// 00568bd6  8bd6                 mov edx, esi
// 00568bd8  c1ea08               shr edx, 8
// 00568bdb  8811                 mov byte ptr [ecx], dl
// 00568bdd  89742438             mov dword ptr [esp + 0x38], esi
// 00568be1  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 00568be6  41                   inc ecx
// 00568be7  8811                 mov byte ptr [ecx], dl
// 00568be9  0fb610               movzx edx, byte ptr [eax]
// 00568bec  41                   inc ecx
// 00568bed  8811                 mov byte ptr [ecx], dl
// 00568bef  0fb65001             movzx edx, byte ptr [eax + 1]
// 00568bf3  40                   inc eax
// 00568bf4  41                   inc ecx
// 00568bf5  8811                 mov byte ptr [ecx], dl
// 00568bf7  41                   inc ecx
// 00568bf8  40                   inc eax
// 00568bf9  836c243001           sub dword ptr [esp + 0x30], 1
// 00568bfe  0f855cffffff         jne 0x568b60
// 00568c04  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00568c08  8b742444             mov esi, dword ptr [esp + 0x44]
// 00568c0c  80460afe             add byte ptr [esi + 0xa], 0xfe
// 00568c10  8a4609               mov al, byte ptr [esi + 9]
// 00568c13  8a560a               mov dl, byte ptr [esi + 0xa]
// 00568c16  806608fd             and byte ptr [esi + 8], 0xfd
// 00568c1a  f6ea                 imul dl
// 00568c1c  88460b               mov byte ptr [esi + 0xb], al
// 00568c1f  3c08                 cmp al, 8
// 00568c21  0fb6c0               movzx eax, al
// 00568c24  7215                 jb 0x568c3b
// 00568c26  c1e803               shr eax, 3
// 00568c29  0fafc1               imul eax, ecx
// 00568c2c  5f                   pop edi
// 00568c2d  894604               mov dword ptr [esi + 4], eax
// 00568c30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568c34  5e                   pop esi
// 00568c35  5d                   pop ebp
// 00568c36  5b                   pop ebx
// 00568c37  83c42c               add esp, 0x2c
// 00568c3a  c3                   ret 
// 00568c3b  0fafc1               imul eax, ecx
// 00568c3e  83c007               add eax, 7
// 00568c41  c1e803               shr eax, 3
// 00568c44  5f                   pop edi
// 00568c45  894604               mov dword ptr [esi + 4], eax
// 00568c48  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568c4c  5e                   pop esi
// 00568c4d  5d                   pop ebp
// 00568c4e  5b                   pop ebx
// 00568c4f  83c42c               add esp, 0x2c
// 00568c52  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
