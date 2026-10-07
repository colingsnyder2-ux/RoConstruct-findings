// roc 2011-06 0055d060  unit: seg_00550000  size: 1859 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055d060
//
// 0055d060  83ec2c               sub esp, 0x2c
// 0055d063  8b542434             mov edx, dword ptr [esp + 0x34]
// 0055d067  8b0a                 mov ecx, dword ptr [edx]
// 0055d069  8a5208               mov dl, byte ptr [edx + 8]
// 0055d06c  33c0                 xor eax, eax
// 0055d06e  894c2408             mov dword ptr [esp + 8], ecx
// 0055d072  89442404             mov dword ptr [esp + 4], eax
// 0055d076  f6c202               test dl, 2
// 0055d079  0f8420070000         je 0x55d79f
// 0055d07f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055d083  53                   push ebx
// 0055d084  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 0055d08b  55                   push ebp
// 0055d08c  56                   push esi
// 0055d08d  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 0055d094  57                   push edi
// 0055d095  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 0055d09c  897c2434             mov dword ptr [esp + 0x34], edi
// 0055d0a0  8974241c             mov dword ptr [esp + 0x1c], esi
// 0055d0a4  895c2430             mov dword ptr [esp + 0x30], ebx
// 0055d0a8  80fa02               cmp dl, 2
// 0055d0ab  0f8559030000         jne 0x55d40a
// 0055d0b1  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055d0b5  807a0908             cmp byte ptr [edx + 9], 8
// 0055d0b9  0f853a010000         jne 0x55d1f9
// 0055d0bf  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 0055d0c6  0f84b5000000         je 0x55d181
// 0055d0cc  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 0055d0d3  0f84a8000000         je 0x55d181
// 0055d0d9  8b742448             mov esi, dword ptr [esp + 0x48]
// 0055d0dd  89742420             mov dword ptr [esp + 0x20], esi
// 0055d0e1  85c9                 test ecx, ecx
// 0055d0e3  0f8625030000         jbe 0x55d40e
// 0055d0e9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0055d0ed  8d4900               lea ecx, [ecx]
// 0055d0f0  0fb60e               movzx ecx, byte ptr [esi]
// 0055d0f3  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 0055d0f9  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0055d0fd  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0055d101  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0055d104  46                   inc esi
// 0055d105  46                   inc esi
// 0055d106  88542412             mov byte ptr [esp + 0x12], dl
// 0055d10a  0fb616               movzx edx, byte ptr [esi]
// 0055d10d  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0055d111  88542411             mov byte ptr [esp + 0x11], dl
// 0055d115  8a542412             mov dl, byte ptr [esp + 0x12]
// 0055d119  46                   inc esi
// 0055d11a  884c2413             mov byte ptr [esp + 0x13], cl
// 0055d11e  3ad1                 cmp dl, cl
// 0055d120  7516                 jne 0x55d138
// 0055d122  3a542411             cmp dl, byte ptr [esp + 0x11]
// 0055d126  750c                 jne 0x55d134
// 0055d128  8a4eff               mov cl, byte ptr [esi - 1]
// 0055d12b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0055d12f  884d00               mov byte ptr [ebp], cl
// 0055d132  eb38                 jmp 0x55d16c
// 0055d134  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0055d138  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0055d13d  0fb6c9               movzx ecx, cl
// 0055d140  0fafd3               imul edx, ebx
// 0055d143  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 0055d148  834c241401           or dword ptr [esp + 0x14], 1
// 0055d14d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0055d151  03d1                 add edx, ecx
// 0055d153  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 0055d158  0fafcf               imul ecx, edi
// 0055d15b  03d1                 add edx, ecx
// 0055d15d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 0055d163  c1ea0f               shr edx, 0xf
// 0055d166  8a140a               mov dl, byte ptr [edx + ecx]
// 0055d169  885500               mov byte ptr [ebp], dl
// 0055d16c  45                   inc ebp
// 0055d16d  836c242401           sub dword ptr [esp + 0x24], 1
// 0055d172  896c2420             mov dword ptr [esp + 0x20], ebp
// 0055d176  0f8574ffffff         jne 0x55d0f0
// 0055d17c  e985020000           jmp 0x55d406
// 0055d181  8b742448             mov esi, dword ptr [esp + 0x48]
// 0055d185  8bee                 mov ebp, esi
// 0055d187  85c9                 test ecx, ecx
// 0055d189  0f867b020000         jbe 0x55d40a
// 0055d18f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0055d193  0fb60e               movzx ecx, byte ptr [esi]
// 0055d196  46                   inc esi
// 0055d197  0fb65601             movzx edx, byte ptr [esi + 1]
// 0055d19b  884c2411             mov byte ptr [esp + 0x11], cl
// 0055d19f  8a0e                 mov cl, byte ptr [esi]
// 0055d1a1  46                   inc esi
// 0055d1a2  88542412             mov byte ptr [esp + 0x12], dl
// 0055d1a6  8a542411             mov dl, byte ptr [esp + 0x11]
// 0055d1aa  46                   inc esi
// 0055d1ab  884c2413             mov byte ptr [esp + 0x13], cl
// 0055d1af  3ad1                 cmp dl, cl
// 0055d1b1  7512                 jne 0x55d1c5
// 0055d1b3  3a542412             cmp dl, byte ptr [esp + 0x12]
// 0055d1b7  7508                 jne 0x55d1c1
// 0055d1b9  8a4eff               mov cl, byte ptr [esi - 1]
// 0055d1bc  884d00               mov byte ptr [ebp], cl
// 0055d1bf  eb2b                 jmp 0x55d1ec
// 0055d1c1  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0055d1c5  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0055d1ca  0fb6c9               movzx ecx, cl
// 0055d1cd  0fafd3               imul edx, ebx
// 0055d1d0  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 0055d1d5  834c241401           or dword ptr [esp + 0x14], 1
// 0055d1da  03d1                 add edx, ecx
// 0055d1dc  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0055d1e1  0fafcf               imul ecx, edi
// 0055d1e4  03d1                 add edx, ecx
// 0055d1e6  c1ea0f               shr edx, 0xf
// 0055d1e9  885500               mov byte ptr [ebp], dl
// 0055d1ec  45                   inc ebp
// 0055d1ed  836c242401           sub dword ptr [esp + 0x24], 1
// 0055d1f2  759f                 jne 0x55d193
// 0055d1f4  e90d020000           jmp 0x55d406
// 0055d1f9  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 0055d200  0f843e010000         je 0x55d344
// 0055d206  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 0055d20d  0f8431010000         je 0x55d344
// 0055d213  8b542448             mov edx, dword ptr [esp + 0x48]
// 0055d217  89542420             mov dword ptr [esp + 0x20], edx
// 0055d21b  85c9                 test ecx, ecx
// 0055d21d  0f86e7010000         jbe 0x55d40a
// 0055d223  894c2428             mov dword ptr [esp + 0x28], ecx
// 0055d227  eb07                 jmp 0x55d230
// 0055d229  8da42400000000       lea esp, [esp]
// 0055d230  0fb60a               movzx ecx, byte ptr [edx]
// 0055d233  0fb67201             movzx esi, byte ptr [edx + 1]
// 0055d237  66c1e108             shl cx, 8
// 0055d23b  660bce               or cx, si
// 0055d23e  0fb67203             movzx esi, byte ptr [edx + 3]
// 0055d242  0fb7e9               movzx ebp, cx
// 0055d245  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0055d249  83c202               add edx, 2
// 0055d24c  66c1e108             shl cx, 8
// 0055d250  660bce               or cx, si
// 0055d253  0fb67203             movzx esi, byte ptr [edx + 3]
// 0055d257  0fb7c9               movzx ecx, cx
// 0055d25a  83c202               add edx, 2
// 0055d25d  894c2424             mov dword ptr [esp + 0x24], ecx
// 0055d261  0fb60a               movzx ecx, byte ptr [edx]
// 0055d264  66c1e108             shl cx, 8
// 0055d268  660bce               or cx, si
// 0055d26b  83c202               add edx, 2
// 0055d26e  0fb7f1               movzx esi, cx
// 0055d271  89542438             mov dword ptr [esp + 0x38], edx
// 0055d275  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 0055d27a  750d                 jne 0x55d289
// 0055d27c  663bee               cmp bp, si
// 0055d27f  7508                 jne 0x55d289
// 0055d281  0fb7f5               movzx esi, bp
// 0055d284  e989000000           jmp 0x55d312
// 0055d289  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 0055d28e  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 0055d295  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0055d299  0fb7dd               movzx ebx, bp
// 0055d29c  0fb6eb               movzx ebp, bl
// 0055d29f  d3ed                 shr ebp, cl
// 0055d2a1  0fb7d6               movzx edx, si
// 0055d2a4  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0055d2aa  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0055d2ad  c1eb08               shr ebx, 8
// 0055d2b0  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 0055d2b5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0055d2b9  0fafef               imul ebp, edi
// 0055d2bc  0fb6fb               movzx edi, bl
// 0055d2bf  d3ef                 shr edi, cl
// 0055d2c1  c1eb08               shr ebx, 8
// 0055d2c4  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 0055d2c7  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0055d2cb  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0055d2d0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0055d2d4  03ef                 add ebp, edi
// 0055d2d6  0fb6fa               movzx edi, dl
// 0055d2d9  d3ef                 shr edi, cl
// 0055d2db  c1ea08               shr edx, 8
// 0055d2de  8b34be               mov esi, dword ptr [esi + edi*4]
// 0055d2e1  0fb71456             movzx edx, word ptr [esi + edx*2]
// 0055d2e5  0fafd3               imul edx, ebx
// 0055d2e8  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0055d2ec  03ea                 add ebp, edx
// 0055d2ee  c1ed0f               shr ebp, 0xf
// 0055d2f1  0fb7d5               movzx edx, bp
// 0055d2f4  0fb6f2               movzx esi, dl
// 0055d2f7  d3ee                 shr esi, cl
// 0055d2f9  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0055d2ff  c1ea08               shr edx, 8
// 0055d302  834c241401           or dword ptr [esp + 0x14], 1
// 0055d307  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0055d30a  0fb73451             movzx esi, word ptr [ecx + edx*2]
// 0055d30e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0055d312  8bce                 mov ecx, esi
// 0055d314  89742424             mov dword ptr [esp + 0x24], esi
// 0055d318  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055d31c  c1e908               shr ecx, 8
// 0055d31f  880e                 mov byte ptr [esi], cl
// 0055d321  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 0055d325  46                   inc esi
// 0055d326  880e                 mov byte ptr [esi], cl
// 0055d328  b901000000           mov ecx, 1
// 0055d32d  89742420             mov dword ptr [esp + 0x20], esi
// 0055d331  014c2420             add dword ptr [esp + 0x20], ecx
// 0055d335  294c2428             sub dword ptr [esp + 0x28], ecx
// 0055d339  0f85f1feffff         jne 0x55d230
// 0055d33f  e9c2000000           jmp 0x55d406
// 0055d344  8b542448             mov edx, dword ptr [esp + 0x48]
// 0055d348  8bf2                 mov esi, edx
// 0055d34a  85c9                 test ecx, ecx
// 0055d34c  0f86b8000000         jbe 0x55d40a
// 0055d352  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0055d356  eb08                 jmp 0x55d360
// 0055d358  8da42400000000       lea esp, [esp]
// 0055d35f  90                   nop 
// 0055d360  0fb60a               movzx ecx, byte ptr [edx]
// 0055d363  660fb66a01           movzx bp, byte ptr [edx + 1]
// 0055d368  66c1e108             shl cx, 8
// 0055d36c  660bcd               or cx, bp
// 0055d36f  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0055d374  0fb7c9               movzx ecx, cx
// 0055d377  894c2420             mov dword ptr [esp + 0x20], ecx
// 0055d37b  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0055d37f  83c202               add edx, 2
// 0055d382  66c1e108             shl cx, 8
// 0055d386  660bcd               or cx, bp
// 0055d389  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0055d38e  0fb7c9               movzx ecx, cx
// 0055d391  894c2424             mov dword ptr [esp + 0x24], ecx
// 0055d395  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0055d399  83c202               add edx, 2
// 0055d39c  66c1e108             shl cx, 8
// 0055d3a0  660bcd               or cx, bp
// 0055d3a3  0fb7c9               movzx ecx, cx
// 0055d3a6  894c2428             mov dword ptr [esp + 0x28], ecx
// 0055d3aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055d3ae  83c202               add edx, 2
// 0055d3b1  663b4c2424           cmp cx, word ptr [esp + 0x24]
// 0055d3b6  7507                 jne 0x55d3bf
// 0055d3b8  663b4c2428           cmp cx, word ptr [esp + 0x28]
// 0055d3bd  7405                 je 0x55d3c4
// 0055d3bf  834c241401           or dword ptr [esp + 0x14], 1
// 0055d3c4  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 0055d3c9  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 0055d3ce  0fafcb               imul ecx, ebx
// 0055d3d1  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 0055d3d6  03cd                 add ecx, ebp
// 0055d3d8  0fb76c2420           movzx ebp, word ptr [esp + 0x20]
// 0055d3dd  0fafef               imul ebp, edi
// 0055d3e0  03cd                 add ecx, ebp
// 0055d3e2  c1e90f               shr ecx, 0xf
// 0055d3e5  0fb7e9               movzx ebp, cx
// 0055d3e8  8bcd                 mov ecx, ebp
// 0055d3ea  c1e908               shr ecx, 8
// 0055d3ed  880e                 mov byte ptr [esi], cl
// 0055d3ef  896c2438             mov dword ptr [esp + 0x38], ebp
// 0055d3f3  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0055d3f7  46                   inc esi
// 0055d3f8  880e                 mov byte ptr [esi], cl
// 0055d3fa  46                   inc esi
// 0055d3fb  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0055d400  0f855affffff         jne 0x55d360
// 0055d406  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055d40a  8b742448             mov esi, dword ptr [esp + 0x48]
// 0055d40e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055d412  807a0806             cmp byte ptr [edx + 8], 6
// 0055d416  0f853c030000         jne 0x55d758
// 0055d41c  807a0908             cmp byte ptr [edx + 9], 8
// 0055d420  0f8527010000         jne 0x55d54d
// 0055d426  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 0055d42d  0f84ad000000         je 0x55d4e0
// 0055d433  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 0055d43a  0f84a0000000         je 0x55d4e0
// 0055d440  837c241800           cmp dword ptr [esp + 0x18], 0
// 0055d445  8bee                 mov ebp, esi
// 0055d447  0f8607030000         jbe 0x55d754
// 0055d44d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055d451  8954242c             mov dword ptr [esp + 0x2c], edx
// 0055d455  eb09                 jmp 0x55d460
// 0055d457  8da42400000000       lea esp, [esp]
// 0055d45e  8bff                 mov edi, edi
// 0055d460  0fb616               movzx edx, byte ptr [esi]
// 0055d463  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 0055d469  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0055d46d  46                   inc esi
// 0055d46e  88542413             mov byte ptr [esp + 0x13], dl
// 0055d472  0fb616               movzx edx, byte ptr [esi]
// 0055d475  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0055d479  46                   inc esi
// 0055d47a  88542411             mov byte ptr [esp + 0x11], dl
// 0055d47e  0fb616               movzx edx, byte ptr [esi]
// 0055d481  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 0055d485  884c2412             mov byte ptr [esp + 0x12], cl
// 0055d489  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0055d48d  46                   inc esi
// 0055d48e  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 0055d492  7506                 jne 0x55d49a
// 0055d494  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 0055d498  7405                 je 0x55d49f
// 0055d49a  834c241401           or dword ptr [esp + 0x14], 1
// 0055d49f  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0055d4a4  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0055d4a9  0fafd3               imul edx, ebx
// 0055d4ac  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 0055d4b1  03d1                 add edx, ecx
// 0055d4b3  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0055d4b8  0fafcf               imul ecx, edi
// 0055d4bb  03d1                 add edx, ecx
// 0055d4bd  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 0055d4c3  c1ea0f               shr edx, 0xf
// 0055d4c6  8a140a               mov dl, byte ptr [edx + ecx]
// 0055d4c9  885500               mov byte ptr [ebp], dl
// 0055d4cc  8a0e                 mov cl, byte ptr [esi]
// 0055d4ce  45                   inc ebp
// 0055d4cf  884d00               mov byte ptr [ebp], cl
// 0055d4d2  45                   inc ebp
// 0055d4d3  46                   inc esi
// 0055d4d4  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0055d4d9  7585                 jne 0x55d460
// 0055d4db  e974020000           jmp 0x55d754
// 0055d4e0  8bc6                 mov eax, esi
// 0055d4e2  85c9                 test ecx, ecx
// 0055d4e4  0f866e020000         jbe 0x55d758
// 0055d4ea  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0055d4ee  8bff                 mov edi, edi
// 0055d4f0  8a08                 mov cl, byte ptr [eax]
// 0055d4f2  0fb65001             movzx edx, byte ptr [eax + 1]
// 0055d4f6  40                   inc eax
// 0055d4f7  40                   inc eax
// 0055d4f8  88542412             mov byte ptr [esp + 0x12], dl
// 0055d4fc  0fb610               movzx edx, byte ptr [eax]
// 0055d4ff  40                   inc eax
// 0055d500  884c2411             mov byte ptr [esp + 0x11], cl
// 0055d504  88542413             mov byte ptr [esp + 0x13], dl
// 0055d508  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 0055d50c  7504                 jne 0x55d512
// 0055d50e  3aca                 cmp cl, dl
// 0055d510  7405                 je 0x55d517
// 0055d512  834c241401           or dword ptr [esp + 0x14], 1
// 0055d517  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0055d51c  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0055d521  0fafcb               imul ecx, ebx
// 0055d524  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0055d529  03ca                 add ecx, edx
// 0055d52b  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0055d530  0fafd7               imul edx, edi
// 0055d533  03ca                 add ecx, edx
// 0055d535  c1e90f               shr ecx, 0xf
// 0055d538  880e                 mov byte ptr [esi], cl
// 0055d53a  8a08                 mov cl, byte ptr [eax]
// 0055d53c  46                   inc esi
// 0055d53d  880e                 mov byte ptr [esi], cl
// 0055d53f  46                   inc esi
// 0055d540  40                   inc eax
// 0055d541  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0055d546  75a8                 jne 0x55d4f0
// 0055d548  e907020000           jmp 0x55d754
// 0055d54d  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 0055d554  0f8439010000         je 0x55d693
// 0055d55a  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 0055d561  0f842c010000         je 0x55d693
// 0055d567  837c241800           cmp dword ptr [esp + 0x18], 0
// 0055d56c  8bce                 mov ecx, esi
// 0055d56e  89742428             mov dword ptr [esp + 0x28], esi
// 0055d572  0f86dc010000         jbe 0x55d754
// 0055d578  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055d57c  89542424             mov dword ptr [esp + 0x24], edx
// 0055d580  0fb611               movzx edx, byte ptr [ecx]
// 0055d583  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0055d587  66c1e208             shl dx, 8
// 0055d58b  660bd3               or dx, bx
// 0055d58e  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 0055d592  0fb7ea               movzx ebp, dx
// 0055d595  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0055d599  83c102               add ecx, 2
// 0055d59c  66c1e208             shl dx, 8
// 0055d5a0  660bd3               or dx, bx
// 0055d5a3  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 0055d5a7  0fb7d2               movzx edx, dx
// 0055d5aa  8954242c             mov dword ptr [esp + 0x2c], edx
// 0055d5ae  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0055d5b2  83c102               add ecx, 2
// 0055d5b5  66c1e208             shl dx, 8
// 0055d5b9  660bd3               or dx, bx
// 0055d5bc  83c102               add ecx, 2
// 0055d5bf  0fb7d2               movzx edx, dx
// 0055d5c2  894c2420             mov dword ptr [esp + 0x20], ecx
// 0055d5c6  663b6c242c           cmp bp, word ptr [esp + 0x2c]
// 0055d5cb  750d                 jne 0x55d5da
// 0055d5cd  663bea               cmp bp, dx
// 0055d5d0  7508                 jne 0x55d5da
// 0055d5d2  0fb7d5               movzx edx, bp
// 0055d5d5  e98b000000           jmp 0x55d665
// 0055d5da  0fb75c242c           movzx ebx, word ptr [esp + 0x2c]
// 0055d5df  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 0055d5e6  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0055d5ec  895c2438             mov dword ptr [esp + 0x38], ebx
// 0055d5f0  0fb7dd               movzx ebx, bp
// 0055d5f3  0fb6eb               movzx ebp, bl
// 0055d5f6  d3ed                 shr ebp, cl
// 0055d5f8  c1eb08               shr ebx, 8
// 0055d5fb  0fb7d2               movzx edx, dx
// 0055d5fe  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0055d601  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 0055d606  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0055d60a  0fafef               imul ebp, edi
// 0055d60d  0fb6fb               movzx edi, bl
// 0055d610  d3ef                 shr edi, cl
// 0055d612  c1eb08               shr ebx, 8
// 0055d615  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 0055d618  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0055d61c  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0055d621  03ef                 add ebp, edi
// 0055d623  0fb6fa               movzx edi, dl
// 0055d626  d3ef                 shr edi, cl
// 0055d628  c1ea08               shr edx, 8
// 0055d62b  8b34be               mov esi, dword ptr [esi + edi*4]
// 0055d62e  0fb71456             movzx edx, word ptr [esi + edx*2]
// 0055d632  0faf542430           imul edx, dword ptr [esp + 0x30]
// 0055d637  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0055d63b  03ea                 add ebp, edx
// 0055d63d  c1ed0f               shr ebp, 0xf
// 0055d640  0fb7d5               movzx edx, bp
// 0055d643  0fb6f2               movzx esi, dl
// 0055d646  d3ee                 shr esi, cl
// 0055d648  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0055d64e  c1ea08               shr edx, 8
// 0055d651  834c241401           or dword ptr [esp + 0x14], 1
// 0055d656  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0055d659  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 0055d65d  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055d661  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055d665  8bda                 mov ebx, edx
// 0055d667  c1eb08               shr ebx, 8
// 0055d66a  881e                 mov byte ptr [esi], bl
// 0055d66c  46                   inc esi
// 0055d66d  8816                 mov byte ptr [esi], dl
// 0055d66f  0fb611               movzx edx, byte ptr [ecx]
// 0055d672  46                   inc esi
// 0055d673  8816                 mov byte ptr [esi], dl
// 0055d675  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0055d679  41                   inc ecx
// 0055d67a  46                   inc esi
// 0055d67b  8816                 mov byte ptr [esi], dl
// 0055d67d  46                   inc esi
// 0055d67e  41                   inc ecx
// 0055d67f  836c242401           sub dword ptr [esp + 0x24], 1
// 0055d684  89742428             mov dword ptr [esp + 0x28], esi
// 0055d688  0f85f2feffff         jne 0x55d580
// 0055d68e  e9c1000000           jmp 0x55d754
// 0055d693  837c241800           cmp dword ptr [esp + 0x18], 0
// 0055d698  8bc6                 mov eax, esi
// 0055d69a  8bce                 mov ecx, esi
// 0055d69c  0f86b2000000         jbe 0x55d754
// 0055d6a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055d6a6  89542430             mov dword ptr [esp + 0x30], edx
// 0055d6aa  8d9b00000000         lea ebx, [ebx]
// 0055d6b0  0fb630               movzx esi, byte ptr [eax]
// 0055d6b3  0fb65001             movzx edx, byte ptr [eax + 1]
// 0055d6b7  66c1e608             shl si, 8
// 0055d6bb  660bd6               or dx, si
// 0055d6be  0fb67002             movzx esi, byte ptr [eax + 2]
// 0055d6c2  0fb7d2               movzx edx, dx
// 0055d6c5  83c002               add eax, 2
// 0055d6c8  660fb66802           movzx bp, byte ptr [eax + 2]
// 0055d6cd  89542434             mov dword ptr [esp + 0x34], edx
// 0055d6d1  0fb65001             movzx edx, byte ptr [eax + 1]
// 0055d6d5  66c1e608             shl si, 8
// 0055d6d9  83c002               add eax, 2
// 0055d6dc  660bd6               or dx, si
// 0055d6df  0fb67001             movzx esi, byte ptr [eax + 1]
// 0055d6e3  66c1e508             shl bp, 8
// 0055d6e7  660bf5               or si, bp
// 0055d6ea  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0055d6ee  0fb7d2               movzx edx, dx
// 0055d6f1  83c002               add eax, 2
// 0055d6f4  0fb7f6               movzx esi, si
// 0055d6f7  663bea               cmp bp, dx
// 0055d6fa  7505                 jne 0x55d701
// 0055d6fc  663bee               cmp bp, si
// 0055d6ff  7405                 je 0x55d706
// 0055d701  834c241401           or dword ptr [esp + 0x14], 1
// 0055d706  0fb7d2               movzx edx, dx
// 0055d709  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0055d70e  0fb7f6               movzx esi, si
// 0055d711  0faff3               imul esi, ebx
// 0055d714  03f2                 add esi, edx
// 0055d716  0fb7542434           movzx edx, word ptr [esp + 0x34]
// 0055d71b  0fafd7               imul edx, edi
// 0055d71e  03f2                 add esi, edx
// 0055d720  c1ee0f               shr esi, 0xf
// 0055d723  0fb7f6               movzx esi, si
// 0055d726  8bd6                 mov edx, esi
// 0055d728  c1ea08               shr edx, 8
// 0055d72b  8811                 mov byte ptr [ecx], dl
// 0055d72d  89742438             mov dword ptr [esp + 0x38], esi
// 0055d731  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 0055d736  41                   inc ecx
// 0055d737  8811                 mov byte ptr [ecx], dl
// 0055d739  0fb610               movzx edx, byte ptr [eax]
// 0055d73c  41                   inc ecx
// 0055d73d  8811                 mov byte ptr [ecx], dl
// 0055d73f  0fb65001             movzx edx, byte ptr [eax + 1]
// 0055d743  40                   inc eax
// 0055d744  41                   inc ecx
// 0055d745  8811                 mov byte ptr [ecx], dl
// 0055d747  41                   inc ecx
// 0055d748  40                   inc eax
// 0055d749  836c243001           sub dword ptr [esp + 0x30], 1
// 0055d74e  0f855cffffff         jne 0x55d6b0
// 0055d754  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055d758  8b742444             mov esi, dword ptr [esp + 0x44]
// 0055d75c  80460afe             add byte ptr [esi + 0xa], 0xfe
// 0055d760  8a4609               mov al, byte ptr [esi + 9]
// 0055d763  8a560a               mov dl, byte ptr [esi + 0xa]
// 0055d766  806608fd             and byte ptr [esi + 8], 0xfd
// 0055d76a  f6ea                 imul dl
// 0055d76c  88460b               mov byte ptr [esi + 0xb], al
// 0055d76f  3c08                 cmp al, 8
// 0055d771  0fb6c0               movzx eax, al
// 0055d774  7215                 jb 0x55d78b
// 0055d776  c1e803               shr eax, 3
// 0055d779  0fafc1               imul eax, ecx
// 0055d77c  5f                   pop edi
// 0055d77d  894604               mov dword ptr [esi + 4], eax
// 0055d780  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055d784  5e                   pop esi
// 0055d785  5d                   pop ebp
// 0055d786  5b                   pop ebx
// 0055d787  83c42c               add esp, 0x2c
// 0055d78a  c3                   ret 
// 0055d78b  0fafc1               imul eax, ecx
// 0055d78e  83c007               add eax, 7
// 0055d791  c1e803               shr eax, 3
// 0055d794  5f                   pop edi
// 0055d795  894604               mov dword ptr [esi + 4], eax
// 0055d798  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055d79c  5e                   pop esi
// 0055d79d  5d                   pop ebp
// 0055d79e  5b                   pop ebx
// 0055d79f  83c42c               add esp, 0x2c
// 0055d7a2  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
