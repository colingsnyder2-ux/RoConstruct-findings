// roc 2012-06 00649ee0  unit: seg_00640000  size: 1859 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00649ee0
//
// 00649ee0  83ec2c               sub esp, 0x2c
// 00649ee3  8b542434             mov edx, dword ptr [esp + 0x34]
// 00649ee7  8b0a                 mov ecx, dword ptr [edx]
// 00649ee9  8a5208               mov dl, byte ptr [edx + 8]
// 00649eec  33c0                 xor eax, eax
// 00649eee  894c2408             mov dword ptr [esp + 8], ecx
// 00649ef2  89442404             mov dword ptr [esp + 4], eax
// 00649ef6  f6c202               test dl, 2
// 00649ef9  0f8420070000         je 0x64a61f
// 00649eff  8b442430             mov eax, dword ptr [esp + 0x30]
// 00649f03  53                   push ebx
// 00649f04  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 00649f0b  55                   push ebp
// 00649f0c  56                   push esi
// 00649f0d  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 00649f14  57                   push edi
// 00649f15  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 00649f1c  897c2434             mov dword ptr [esp + 0x34], edi
// 00649f20  8974241c             mov dword ptr [esp + 0x1c], esi
// 00649f24  895c2430             mov dword ptr [esp + 0x30], ebx
// 00649f28  80fa02               cmp dl, 2
// 00649f2b  0f8559030000         jne 0x64a28a
// 00649f31  8b542444             mov edx, dword ptr [esp + 0x44]
// 00649f35  807a0908             cmp byte ptr [edx + 9], 8
// 00649f39  0f853a010000         jne 0x64a079
// 00649f3f  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00649f46  0f84b5000000         je 0x64a001
// 00649f4c  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00649f53  0f84a8000000         je 0x64a001
// 00649f59  8b742448             mov esi, dword ptr [esp + 0x48]
// 00649f5d  89742420             mov dword ptr [esp + 0x20], esi
// 00649f61  85c9                 test ecx, ecx
// 00649f63  0f8625030000         jbe 0x64a28e
// 00649f69  894c2424             mov dword ptr [esp + 0x24], ecx
// 00649f6d  8d4900               lea ecx, [ecx]
// 00649f70  0fb60e               movzx ecx, byte ptr [esi]
// 00649f73  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 00649f79  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00649f7d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00649f81  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00649f84  46                   inc esi
// 00649f85  46                   inc esi
// 00649f86  88542412             mov byte ptr [esp + 0x12], dl
// 00649f8a  0fb616               movzx edx, byte ptr [esi]
// 00649f8d  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00649f91  88542411             mov byte ptr [esp + 0x11], dl
// 00649f95  8a542412             mov dl, byte ptr [esp + 0x12]
// 00649f99  46                   inc esi
// 00649f9a  884c2413             mov byte ptr [esp + 0x13], cl
// 00649f9e  3ad1                 cmp dl, cl
// 00649fa0  7516                 jne 0x649fb8
// 00649fa2  3a542411             cmp dl, byte ptr [esp + 0x11]
// 00649fa6  750c                 jne 0x649fb4
// 00649fa8  8a4eff               mov cl, byte ptr [esi - 1]
// 00649fab  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00649faf  884d00               mov byte ptr [ebp], cl
// 00649fb2  eb38                 jmp 0x649fec
// 00649fb4  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00649fb8  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00649fbd  0fb6c9               movzx ecx, cl
// 00649fc0  0fafd3               imul edx, ebx
// 00649fc3  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00649fc8  834c241401           or dword ptr [esp + 0x14], 1
// 00649fcd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00649fd1  03d1                 add edx, ecx
// 00649fd3  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 00649fd8  0fafcf               imul ecx, edi
// 00649fdb  03d1                 add edx, ecx
// 00649fdd  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00649fe3  c1ea0f               shr edx, 0xf
// 00649fe6  8a140a               mov dl, byte ptr [edx + ecx]
// 00649fe9  885500               mov byte ptr [ebp], dl
// 00649fec  45                   inc ebp
// 00649fed  836c242401           sub dword ptr [esp + 0x24], 1
// 00649ff2  896c2420             mov dword ptr [esp + 0x20], ebp
// 00649ff6  0f8574ffffff         jne 0x649f70
// 00649ffc  e985020000           jmp 0x64a286
// 0064a001  8b742448             mov esi, dword ptr [esp + 0x48]
// 0064a005  8bee                 mov ebp, esi
// 0064a007  85c9                 test ecx, ecx
// 0064a009  0f867b020000         jbe 0x64a28a
// 0064a00f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0064a013  0fb60e               movzx ecx, byte ptr [esi]
// 0064a016  46                   inc esi
// 0064a017  0fb65601             movzx edx, byte ptr [esi + 1]
// 0064a01b  884c2411             mov byte ptr [esp + 0x11], cl
// 0064a01f  8a0e                 mov cl, byte ptr [esi]
// 0064a021  46                   inc esi
// 0064a022  88542412             mov byte ptr [esp + 0x12], dl
// 0064a026  8a542411             mov dl, byte ptr [esp + 0x11]
// 0064a02a  46                   inc esi
// 0064a02b  884c2413             mov byte ptr [esp + 0x13], cl
// 0064a02f  3ad1                 cmp dl, cl
// 0064a031  7512                 jne 0x64a045
// 0064a033  3a542412             cmp dl, byte ptr [esp + 0x12]
// 0064a037  7508                 jne 0x64a041
// 0064a039  8a4eff               mov cl, byte ptr [esi - 1]
// 0064a03c  884d00               mov byte ptr [ebp], cl
// 0064a03f  eb2b                 jmp 0x64a06c
// 0064a041  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0064a045  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0064a04a  0fb6c9               movzx ecx, cl
// 0064a04d  0fafd3               imul edx, ebx
// 0064a050  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 0064a055  834c241401           or dword ptr [esp + 0x14], 1
// 0064a05a  03d1                 add edx, ecx
// 0064a05c  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0064a061  0fafcf               imul ecx, edi
// 0064a064  03d1                 add edx, ecx
// 0064a066  c1ea0f               shr edx, 0xf
// 0064a069  885500               mov byte ptr [ebp], dl
// 0064a06c  45                   inc ebp
// 0064a06d  836c242401           sub dword ptr [esp + 0x24], 1
// 0064a072  759f                 jne 0x64a013
// 0064a074  e90d020000           jmp 0x64a286
// 0064a079  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 0064a080  0f843e010000         je 0x64a1c4
// 0064a086  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 0064a08d  0f8431010000         je 0x64a1c4
// 0064a093  8b542448             mov edx, dword ptr [esp + 0x48]
// 0064a097  89542420             mov dword ptr [esp + 0x20], edx
// 0064a09b  85c9                 test ecx, ecx
// 0064a09d  0f86e7010000         jbe 0x64a28a
// 0064a0a3  894c2428             mov dword ptr [esp + 0x28], ecx
// 0064a0a7  eb07                 jmp 0x64a0b0
// 0064a0a9  8da42400000000       lea esp, [esp]
// 0064a0b0  0fb60a               movzx ecx, byte ptr [edx]
// 0064a0b3  0fb67201             movzx esi, byte ptr [edx + 1]
// 0064a0b7  66c1e108             shl cx, 8
// 0064a0bb  660bce               or cx, si
// 0064a0be  0fb67203             movzx esi, byte ptr [edx + 3]
// 0064a0c2  0fb7e9               movzx ebp, cx
// 0064a0c5  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0064a0c9  83c202               add edx, 2
// 0064a0cc  66c1e108             shl cx, 8
// 0064a0d0  660bce               or cx, si
// 0064a0d3  0fb67203             movzx esi, byte ptr [edx + 3]
// 0064a0d7  0fb7c9               movzx ecx, cx
// 0064a0da  83c202               add edx, 2
// 0064a0dd  894c2424             mov dword ptr [esp + 0x24], ecx
// 0064a0e1  0fb60a               movzx ecx, byte ptr [edx]
// 0064a0e4  66c1e108             shl cx, 8
// 0064a0e8  660bce               or cx, si
// 0064a0eb  83c202               add edx, 2
// 0064a0ee  0fb7f1               movzx esi, cx
// 0064a0f1  89542438             mov dword ptr [esp + 0x38], edx
// 0064a0f5  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 0064a0fa  750d                 jne 0x64a109
// 0064a0fc  663bee               cmp bp, si
// 0064a0ff  7508                 jne 0x64a109
// 0064a101  0fb7f5               movzx esi, bp
// 0064a104  e989000000           jmp 0x64a192
// 0064a109  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 0064a10e  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 0064a115  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0064a119  0fb7dd               movzx ebx, bp
// 0064a11c  0fb6eb               movzx ebp, bl
// 0064a11f  d3ed                 shr ebp, cl
// 0064a121  0fb7d6               movzx edx, si
// 0064a124  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0064a12a  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0064a12d  c1eb08               shr ebx, 8
// 0064a130  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 0064a135  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0064a139  0fafef               imul ebp, edi
// 0064a13c  0fb6fb               movzx edi, bl
// 0064a13f  d3ef                 shr edi, cl
// 0064a141  c1eb08               shr ebx, 8
// 0064a144  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 0064a147  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0064a14b  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0064a150  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0064a154  03ef                 add ebp, edi
// 0064a156  0fb6fa               movzx edi, dl
// 0064a159  d3ef                 shr edi, cl
// 0064a15b  c1ea08               shr edx, 8
// 0064a15e  8b34be               mov esi, dword ptr [esi + edi*4]
// 0064a161  0fb71456             movzx edx, word ptr [esi + edx*2]
// 0064a165  0fafd3               imul edx, ebx
// 0064a168  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0064a16c  03ea                 add ebp, edx
// 0064a16e  c1ed0f               shr ebp, 0xf
// 0064a171  0fb7d5               movzx edx, bp
// 0064a174  0fb6f2               movzx esi, dl
// 0064a177  d3ee                 shr esi, cl
// 0064a179  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0064a17f  c1ea08               shr edx, 8
// 0064a182  834c241401           or dword ptr [esp + 0x14], 1
// 0064a187  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064a18a  0fb73451             movzx esi, word ptr [ecx + edx*2]
// 0064a18e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0064a192  8bce                 mov ecx, esi
// 0064a194  89742424             mov dword ptr [esp + 0x24], esi
// 0064a198  8b742420             mov esi, dword ptr [esp + 0x20]
// 0064a19c  c1e908               shr ecx, 8
// 0064a19f  880e                 mov byte ptr [esi], cl
// 0064a1a1  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 0064a1a5  46                   inc esi
// 0064a1a6  880e                 mov byte ptr [esi], cl
// 0064a1a8  b901000000           mov ecx, 1
// 0064a1ad  89742420             mov dword ptr [esp + 0x20], esi
// 0064a1b1  014c2420             add dword ptr [esp + 0x20], ecx
// 0064a1b5  294c2428             sub dword ptr [esp + 0x28], ecx
// 0064a1b9  0f85f1feffff         jne 0x64a0b0
// 0064a1bf  e9c2000000           jmp 0x64a286
// 0064a1c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0064a1c8  8bf2                 mov esi, edx
// 0064a1ca  85c9                 test ecx, ecx
// 0064a1cc  0f86b8000000         jbe 0x64a28a
// 0064a1d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0064a1d6  eb08                 jmp 0x64a1e0
// 0064a1d8  8da42400000000       lea esp, [esp]
// 0064a1df  90                   nop 
// 0064a1e0  0fb60a               movzx ecx, byte ptr [edx]
// 0064a1e3  660fb66a01           movzx bp, byte ptr [edx + 1]
// 0064a1e8  66c1e108             shl cx, 8
// 0064a1ec  660bcd               or cx, bp
// 0064a1ef  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0064a1f4  0fb7c9               movzx ecx, cx
// 0064a1f7  894c2420             mov dword ptr [esp + 0x20], ecx
// 0064a1fb  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0064a1ff  83c202               add edx, 2
// 0064a202  66c1e108             shl cx, 8
// 0064a206  660bcd               or cx, bp
// 0064a209  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0064a20e  0fb7c9               movzx ecx, cx
// 0064a211  894c2424             mov dword ptr [esp + 0x24], ecx
// 0064a215  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0064a219  83c202               add edx, 2
// 0064a21c  66c1e108             shl cx, 8
// 0064a220  660bcd               or cx, bp
// 0064a223  0fb7c9               movzx ecx, cx
// 0064a226  894c2428             mov dword ptr [esp + 0x28], ecx
// 0064a22a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064a22e  83c202               add edx, 2
// 0064a231  663b4c2424           cmp cx, word ptr [esp + 0x24]
// 0064a236  7507                 jne 0x64a23f
// 0064a238  663b4c2428           cmp cx, word ptr [esp + 0x28]
// 0064a23d  7405                 je 0x64a244
// 0064a23f  834c241401           or dword ptr [esp + 0x14], 1
// 0064a244  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 0064a249  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 0064a24e  0fafcb               imul ecx, ebx
// 0064a251  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 0064a256  03cd                 add ecx, ebp
// 0064a258  0fb76c2420           movzx ebp, word ptr [esp + 0x20]
// 0064a25d  0fafef               imul ebp, edi
// 0064a260  03cd                 add ecx, ebp
// 0064a262  c1e90f               shr ecx, 0xf
// 0064a265  0fb7e9               movzx ebp, cx
// 0064a268  8bcd                 mov ecx, ebp
// 0064a26a  c1e908               shr ecx, 8
// 0064a26d  880e                 mov byte ptr [esi], cl
// 0064a26f  896c2438             mov dword ptr [esp + 0x38], ebp
// 0064a273  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0064a277  46                   inc esi
// 0064a278  880e                 mov byte ptr [esi], cl
// 0064a27a  46                   inc esi
// 0064a27b  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0064a280  0f855affffff         jne 0x64a1e0
// 0064a286  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064a28a  8b742448             mov esi, dword ptr [esp + 0x48]
// 0064a28e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0064a292  807a0806             cmp byte ptr [edx + 8], 6
// 0064a296  0f853c030000         jne 0x64a5d8
// 0064a29c  807a0908             cmp byte ptr [edx + 9], 8
// 0064a2a0  0f8527010000         jne 0x64a3cd
// 0064a2a6  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 0064a2ad  0f84ad000000         je 0x64a360
// 0064a2b3  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 0064a2ba  0f84a0000000         je 0x64a360
// 0064a2c0  837c241800           cmp dword ptr [esp + 0x18], 0
// 0064a2c5  8bee                 mov ebp, esi
// 0064a2c7  0f8607030000         jbe 0x64a5d4
// 0064a2cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a2d1  8954242c             mov dword ptr [esp + 0x2c], edx
// 0064a2d5  eb09                 jmp 0x64a2e0
// 0064a2d7  8da42400000000       lea esp, [esp]
// 0064a2de  8bff                 mov edi, edi
// 0064a2e0  0fb616               movzx edx, byte ptr [esi]
// 0064a2e3  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 0064a2e9  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0064a2ed  46                   inc esi
// 0064a2ee  88542413             mov byte ptr [esp + 0x13], dl
// 0064a2f2  0fb616               movzx edx, byte ptr [esi]
// 0064a2f5  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0064a2f9  46                   inc esi
// 0064a2fa  88542411             mov byte ptr [esp + 0x11], dl
// 0064a2fe  0fb616               movzx edx, byte ptr [esi]
// 0064a301  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 0064a305  884c2412             mov byte ptr [esp + 0x12], cl
// 0064a309  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0064a30d  46                   inc esi
// 0064a30e  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 0064a312  7506                 jne 0x64a31a
// 0064a314  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 0064a318  7405                 je 0x64a31f
// 0064a31a  834c241401           or dword ptr [esp + 0x14], 1
// 0064a31f  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0064a324  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 0064a329  0fafd3               imul edx, ebx
// 0064a32c  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 0064a331  03d1                 add edx, ecx
// 0064a333  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0064a338  0fafcf               imul ecx, edi
// 0064a33b  03d1                 add edx, ecx
// 0064a33d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 0064a343  c1ea0f               shr edx, 0xf
// 0064a346  8a140a               mov dl, byte ptr [edx + ecx]
// 0064a349  885500               mov byte ptr [ebp], dl
// 0064a34c  8a0e                 mov cl, byte ptr [esi]
// 0064a34e  45                   inc ebp
// 0064a34f  884d00               mov byte ptr [ebp], cl
// 0064a352  45                   inc ebp
// 0064a353  46                   inc esi
// 0064a354  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0064a359  7585                 jne 0x64a2e0
// 0064a35b  e974020000           jmp 0x64a5d4
// 0064a360  8bc6                 mov eax, esi
// 0064a362  85c9                 test ecx, ecx
// 0064a364  0f866e020000         jbe 0x64a5d8
// 0064a36a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0064a36e  8bff                 mov edi, edi
// 0064a370  8a08                 mov cl, byte ptr [eax]
// 0064a372  0fb65001             movzx edx, byte ptr [eax + 1]
// 0064a376  40                   inc eax
// 0064a377  40                   inc eax
// 0064a378  88542412             mov byte ptr [esp + 0x12], dl
// 0064a37c  0fb610               movzx edx, byte ptr [eax]
// 0064a37f  40                   inc eax
// 0064a380  884c2411             mov byte ptr [esp + 0x11], cl
// 0064a384  88542413             mov byte ptr [esp + 0x13], dl
// 0064a388  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 0064a38c  7504                 jne 0x64a392
// 0064a38e  3aca                 cmp cl, dl
// 0064a390  7405                 je 0x64a397
// 0064a392  834c241401           or dword ptr [esp + 0x14], 1
// 0064a397  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0064a39c  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 0064a3a1  0fafcb               imul ecx, ebx
// 0064a3a4  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0064a3a9  03ca                 add ecx, edx
// 0064a3ab  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 0064a3b0  0fafd7               imul edx, edi
// 0064a3b3  03ca                 add ecx, edx
// 0064a3b5  c1e90f               shr ecx, 0xf
// 0064a3b8  880e                 mov byte ptr [esi], cl
// 0064a3ba  8a08                 mov cl, byte ptr [eax]
// 0064a3bc  46                   inc esi
// 0064a3bd  880e                 mov byte ptr [esi], cl
// 0064a3bf  46                   inc esi
// 0064a3c0  40                   inc eax
// 0064a3c1  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0064a3c6  75a8                 jne 0x64a370
// 0064a3c8  e907020000           jmp 0x64a5d4
// 0064a3cd  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 0064a3d4  0f8439010000         je 0x64a513
// 0064a3da  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 0064a3e1  0f842c010000         je 0x64a513
// 0064a3e7  837c241800           cmp dword ptr [esp + 0x18], 0
// 0064a3ec  8bce                 mov ecx, esi
// 0064a3ee  89742428             mov dword ptr [esp + 0x28], esi
// 0064a3f2  0f86dc010000         jbe 0x64a5d4
// 0064a3f8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a3fc  89542424             mov dword ptr [esp + 0x24], edx
// 0064a400  0fb611               movzx edx, byte ptr [ecx]
// 0064a403  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0064a407  66c1e208             shl dx, 8
// 0064a40b  660bd3               or dx, bx
// 0064a40e  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 0064a412  0fb7ea               movzx ebp, dx
// 0064a415  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0064a419  83c102               add ecx, 2
// 0064a41c  66c1e208             shl dx, 8
// 0064a420  660bd3               or dx, bx
// 0064a423  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 0064a427  0fb7d2               movzx edx, dx
// 0064a42a  8954242c             mov dword ptr [esp + 0x2c], edx
// 0064a42e  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0064a432  83c102               add ecx, 2
// 0064a435  66c1e208             shl dx, 8
// 0064a439  660bd3               or dx, bx
// 0064a43c  83c102               add ecx, 2
// 0064a43f  0fb7d2               movzx edx, dx
// 0064a442  894c2420             mov dword ptr [esp + 0x20], ecx
// 0064a446  663b6c242c           cmp bp, word ptr [esp + 0x2c]
// 0064a44b  750d                 jne 0x64a45a
// 0064a44d  663bea               cmp bp, dx
// 0064a450  7508                 jne 0x64a45a
// 0064a452  0fb7d5               movzx edx, bp
// 0064a455  e98b000000           jmp 0x64a4e5
// 0064a45a  0fb75c242c           movzx ebx, word ptr [esp + 0x2c]
// 0064a45f  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 0064a466  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0064a46c  895c2438             mov dword ptr [esp + 0x38], ebx
// 0064a470  0fb7dd               movzx ebx, bp
// 0064a473  0fb6eb               movzx ebp, bl
// 0064a476  d3ed                 shr ebp, cl
// 0064a478  c1eb08               shr ebx, 8
// 0064a47b  0fb7d2               movzx edx, dx
// 0064a47e  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0064a481  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 0064a486  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0064a48a  0fafef               imul ebp, edi
// 0064a48d  0fb6fb               movzx edi, bl
// 0064a490  d3ef                 shr edi, cl
// 0064a492  c1eb08               shr ebx, 8
// 0064a495  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 0064a498  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0064a49c  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0064a4a1  03ef                 add ebp, edi
// 0064a4a3  0fb6fa               movzx edi, dl
// 0064a4a6  d3ef                 shr edi, cl
// 0064a4a8  c1ea08               shr edx, 8
// 0064a4ab  8b34be               mov esi, dword ptr [esi + edi*4]
// 0064a4ae  0fb71456             movzx edx, word ptr [esi + edx*2]
// 0064a4b2  0faf542430           imul edx, dword ptr [esp + 0x30]
// 0064a4b7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0064a4bb  03ea                 add ebp, edx
// 0064a4bd  c1ed0f               shr ebp, 0xf
// 0064a4c0  0fb7d5               movzx edx, bp
// 0064a4c3  0fb6f2               movzx esi, dl
// 0064a4c6  d3ee                 shr esi, cl
// 0064a4c8  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0064a4ce  c1ea08               shr edx, 8
// 0064a4d1  834c241401           or dword ptr [esp + 0x14], 1
// 0064a4d6  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064a4d9  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 0064a4dd  8b742428             mov esi, dword ptr [esp + 0x28]
// 0064a4e1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064a4e5  8bda                 mov ebx, edx
// 0064a4e7  c1eb08               shr ebx, 8
// 0064a4ea  881e                 mov byte ptr [esi], bl
// 0064a4ec  46                   inc esi
// 0064a4ed  8816                 mov byte ptr [esi], dl
// 0064a4ef  0fb611               movzx edx, byte ptr [ecx]
// 0064a4f2  46                   inc esi
// 0064a4f3  8816                 mov byte ptr [esi], dl
// 0064a4f5  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0064a4f9  41                   inc ecx
// 0064a4fa  46                   inc esi
// 0064a4fb  8816                 mov byte ptr [esi], dl
// 0064a4fd  46                   inc esi
// 0064a4fe  41                   inc ecx
// 0064a4ff  836c242401           sub dword ptr [esp + 0x24], 1
// 0064a504  89742428             mov dword ptr [esp + 0x28], esi
// 0064a508  0f85f2feffff         jne 0x64a400
// 0064a50e  e9c1000000           jmp 0x64a5d4
// 0064a513  837c241800           cmp dword ptr [esp + 0x18], 0
// 0064a518  8bc6                 mov eax, esi
// 0064a51a  8bce                 mov ecx, esi
// 0064a51c  0f86b2000000         jbe 0x64a5d4
// 0064a522  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a526  89542430             mov dword ptr [esp + 0x30], edx
// 0064a52a  8d9b00000000         lea ebx, [ebx]
// 0064a530  0fb630               movzx esi, byte ptr [eax]
// 0064a533  0fb65001             movzx edx, byte ptr [eax + 1]
// 0064a537  66c1e608             shl si, 8
// 0064a53b  660bd6               or dx, si
// 0064a53e  0fb67002             movzx esi, byte ptr [eax + 2]
// 0064a542  0fb7d2               movzx edx, dx
// 0064a545  83c002               add eax, 2
// 0064a548  660fb66802           movzx bp, byte ptr [eax + 2]
// 0064a54d  89542434             mov dword ptr [esp + 0x34], edx
// 0064a551  0fb65001             movzx edx, byte ptr [eax + 1]
// 0064a555  66c1e608             shl si, 8
// 0064a559  83c002               add eax, 2
// 0064a55c  660bd6               or dx, si
// 0064a55f  0fb67001             movzx esi, byte ptr [eax + 1]
// 0064a563  66c1e508             shl bp, 8
// 0064a567  660bf5               or si, bp
// 0064a56a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0064a56e  0fb7d2               movzx edx, dx
// 0064a571  83c002               add eax, 2
// 0064a574  0fb7f6               movzx esi, si
// 0064a577  663bea               cmp bp, dx
// 0064a57a  7505                 jne 0x64a581
// 0064a57c  663bee               cmp bp, si
// 0064a57f  7405                 je 0x64a586
// 0064a581  834c241401           or dword ptr [esp + 0x14], 1
// 0064a586  0fb7d2               movzx edx, dx
// 0064a589  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0064a58e  0fb7f6               movzx esi, si
// 0064a591  0faff3               imul esi, ebx
// 0064a594  03f2                 add esi, edx
// 0064a596  0fb7542434           movzx edx, word ptr [esp + 0x34]
// 0064a59b  0fafd7               imul edx, edi
// 0064a59e  03f2                 add esi, edx
// 0064a5a0  c1ee0f               shr esi, 0xf
// 0064a5a3  0fb7f6               movzx esi, si
// 0064a5a6  8bd6                 mov edx, esi
// 0064a5a8  c1ea08               shr edx, 8
// 0064a5ab  8811                 mov byte ptr [ecx], dl
// 0064a5ad  89742438             mov dword ptr [esp + 0x38], esi
// 0064a5b1  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 0064a5b6  41                   inc ecx
// 0064a5b7  8811                 mov byte ptr [ecx], dl
// 0064a5b9  0fb610               movzx edx, byte ptr [eax]
// 0064a5bc  41                   inc ecx
// 0064a5bd  8811                 mov byte ptr [ecx], dl
// 0064a5bf  0fb65001             movzx edx, byte ptr [eax + 1]
// 0064a5c3  40                   inc eax
// 0064a5c4  41                   inc ecx
// 0064a5c5  8811                 mov byte ptr [ecx], dl
// 0064a5c7  41                   inc ecx
// 0064a5c8  40                   inc eax
// 0064a5c9  836c243001           sub dword ptr [esp + 0x30], 1
// 0064a5ce  0f855cffffff         jne 0x64a530
// 0064a5d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064a5d8  8b742444             mov esi, dword ptr [esp + 0x44]
// 0064a5dc  80460afe             add byte ptr [esi + 0xa], 0xfe
// 0064a5e0  8a4609               mov al, byte ptr [esi + 9]
// 0064a5e3  8a560a               mov dl, byte ptr [esi + 0xa]
// 0064a5e6  806608fd             and byte ptr [esi + 8], 0xfd
// 0064a5ea  f6ea                 imul dl
// 0064a5ec  88460b               mov byte ptr [esi + 0xb], al
// 0064a5ef  3c08                 cmp al, 8
// 0064a5f1  0fb6c0               movzx eax, al
// 0064a5f4  7215                 jb 0x64a60b
// 0064a5f6  c1e803               shr eax, 3
// 0064a5f9  0fafc1               imul eax, ecx
// 0064a5fc  5f                   pop edi
// 0064a5fd  894604               mov dword ptr [esi + 4], eax
// 0064a600  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064a604  5e                   pop esi
// 0064a605  5d                   pop ebp
// 0064a606  5b                   pop ebx
// 0064a607  83c42c               add esp, 0x2c
// 0064a60a  c3                   ret 
// 0064a60b  0fafc1               imul eax, ecx
// 0064a60e  83c007               add eax, 7
// 0064a611  c1e803               shr eax, 3
// 0064a614  5f                   pop edi
// 0064a615  894604               mov dword ptr [esi + 4], eax
// 0064a618  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064a61c  5e                   pop esi
// 0064a61d  5d                   pop ebp
// 0064a61e  5b                   pop ebx
// 0064a61f  83c42c               add esp, 0x2c
// 0064a622  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
