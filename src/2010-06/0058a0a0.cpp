// roc 2010-06 0058a0a0  unit: seg_00580000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058a0a0
//
// 0058a0a0  81ec38010000         sub esp, 0x138
// 0058a0a6  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0058a0ad  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0058a0b3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0058a0ba  53                   push ebx
// 0058a0bb  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0058a0be  55                   push ebp
// 0058a0bf  56                   push esi
// 0058a0c0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 0058a0c7  83ea80               sub edx, -0x80
// 0058a0ca  57                   push edi
// 0058a0cb  8954243c             mov dword ptr [esp + 0x3c], edx
// 0058a0cf  89742424             mov dword ptr [esp + 0x24], esi
// 0058a0d3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058a0d7  8d442448             lea eax, [esp + 0x48]
// 0058a0db  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0058a0e3  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 0058a0e7  894c2428             mov dword ptr [esp + 0x28], ecx
// 0058a0eb  6685c9               test cx, cx
// 0058a0ee  7556                 jne 0x58a146
// 0058a0f0  66394e20             cmp word ptr [esi + 0x20], cx
// 0058a0f4  7550                 jne 0x58a146
// 0058a0f6  66394e30             cmp word ptr [esi + 0x30], cx
// 0058a0fa  754a                 jne 0x58a146
// 0058a0fc  66394e40             cmp word ptr [esi + 0x40], cx
// 0058a100  7544                 jne 0x58a146
// 0058a102  66394e50             cmp word ptr [esi + 0x50], cx
// 0058a106  753e                 jne 0x58a146
// 0058a108  66394e60             cmp word ptr [esi + 0x60], cx
// 0058a10c  7538                 jne 0x58a146
// 0058a10e  66394e70             cmp word ptr [esi + 0x70], cx
// 0058a112  7532                 jne 0x58a146
// 0058a114  0fbf0e               movsx ecx, word ptr [esi]
// 0058a117  0faf0b               imul ecx, dword ptr [ebx]
// 0058a11a  03c9                 add ecx, ecx
// 0058a11c  03c9                 add ecx, ecx
// 0058a11e  8908                 mov dword ptr [eax], ecx
// 0058a120  894820               mov dword ptr [eax + 0x20], ecx
// 0058a123  894840               mov dword ptr [eax + 0x40], ecx
// 0058a126  894860               mov dword ptr [eax + 0x60], ecx
// 0058a129  898880000000         mov dword ptr [eax + 0x80], ecx
// 0058a12f  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 0058a135  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0058a13b  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0058a141  e9bc010000           jmp 0x58a302
// 0058a146  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0058a14a  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0058a14e  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 0058a152  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 0058a159  8d3c0a               lea edi, [edx + ecx]
// 0058a15c  69d2213b0000         imul edx, edx, 0x3b21
// 0058a162  69c97e180000         imul ecx, ecx, 0x187e
// 0058a168  69ff51110000         imul edi, edi, 0x1151
// 0058a16e  03cf                 add ecx, edi
// 0058a170  8bef                 mov ebp, edi
// 0058a172  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 0058a176  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0058a17d  2bea                 sub ebp, edx
// 0058a17f  0fbf16               movsx edx, word ptr [esi]
// 0058a182  0faf13               imul edx, dword ptr [ebx]
// 0058a185  897c2418             mov dword ptr [esp + 0x18], edi
// 0058a189  03fa                 add edi, edx
// 0058a18b  2b542418             sub edx, dword ptr [esp + 0x18]
// 0058a18f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058a193  c1e70d               shl edi, 0xd
// 0058a196  03cf                 add ecx, edi
// 0058a198  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0058a19c  c1e20d               shl edx, 0xd
// 0058a19f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0058a1a3  8d0c2a               lea ecx, [edx + ebp]
// 0058a1a6  2bd5                 sub edx, ebp
// 0058a1a8  897c2440             mov dword ptr [esp + 0x40], edi
// 0058a1ac  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 0058a1b1  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 0058a1b5  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058a1b9  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0058a1bd  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 0058a1c4  89542438             mov dword ptr [esp + 0x38], edx
// 0058a1c8  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0058a1cc  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 0058a1d3  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 0058a1d7  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0058a1db  8d1c39               lea ebx, [ecx + edi]
// 0058a1de  895c2420             mov dword ptr [esp + 0x20], ebx
// 0058a1e2  8d1c32               lea ebx, [edx + esi]
// 0058a1e5  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a1e9  8d2c3a               lea ebp, [edx + edi]
// 0058a1ec  69ff0b300000         imul edi, edi, 0x300b
// 0058a1f2  69d2b3410000         imul edx, edx, 0x41b3
// 0058a1f8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0058a1fc  8d1c31               lea ebx, [ecx + esi]
// 0058a1ff  69c98e090000         imul ecx, ecx, 0x98e
// 0058a205  69f654620000         imul esi, esi, 0x6254
// 0058a20b  03eb                 add ebp, ebx
// 0058a20d  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 0058a213  69eda1250000         imul ebp, ebp, 0x25a1
// 0058a219  896c2430             mov dword ptr [esp + 0x30], ebp
// 0058a21d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058a221  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0058a227  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058a22b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0058a22f  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0058a235  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058a239  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0058a23d  2beb                 sub ebp, ebx
// 0058a23f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0058a243  69db7c0c0000         imul ebx, ebx, 0xc7c
// 0058a249  896c2418             mov dword ptr [esp + 0x18], ebp
// 0058a24d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0058a251  03742418             add esi, dword ptr [esp + 0x18]
// 0058a255  2beb                 sub ebp, ebx
// 0058a257  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0058a25b  03742410             add esi, dword ptr [esp + 0x10]
// 0058a25f  03fd                 add edi, ebp
// 0058a261  03cb                 add ecx, ebx
// 0058a263  034c2418             add ecx, dword ptr [esp + 0x18]
// 0058a267  03fb                 add edi, ebx
// 0058a269  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0058a26d  03d5                 add edx, ebp
// 0058a26f  03542410             add edx, dword ptr [esp + 0x10]
// 0058a273  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0058a27a  2bdf                 sub ebx, edi
// 0058a27c  c1fd0b               sar ebp, 0xb
// 0058a27f  81c300040000         add ebx, 0x400
// 0058a285  8928                 mov dword ptr [eax], ebp
// 0058a287  c1fb0b               sar ebx, 0xb
// 0058a28a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0058a28e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 0058a294  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0058a29b  2bfe                 sub edi, esi
// 0058a29d  8b742438             mov esi, dword ptr [esp + 0x38]
// 0058a2a1  81c700040000         add edi, 0x400
// 0058a2a7  c1ff0b               sar edi, 0xb
// 0058a2aa  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 0058a2b0  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 0058a2b7  2bf2                 sub esi, edx
// 0058a2b9  8b542440             mov edx, dword ptr [esp + 0x40]
// 0058a2bd  81c600040000         add esi, 0x400
// 0058a2c3  c1fe0b               sar esi, 0xb
// 0058a2c6  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0058a2cc  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 0058a2d3  2bd1                 sub edx, ecx
// 0058a2d5  c1fb0b               sar ebx, 0xb
// 0058a2d8  c1fe0b               sar esi, 0xb
// 0058a2db  81c200040000         add edx, 0x400
// 0058a2e1  c1ff0b               sar edi, 0xb
// 0058a2e4  c1fa0b               sar edx, 0xb
// 0058a2e7  895820               mov dword ptr [eax + 0x20], ebx
// 0058a2ea  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058a2ee  897060               mov dword ptr [eax + 0x60], esi
// 0058a2f1  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058a2f5  899080000000         mov dword ptr [eax + 0x80], edx
// 0058a2fb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0058a2ff  897840               mov dword ptr [eax + 0x40], edi
// 0058a302  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058a306  49                   dec ecx
// 0058a307  83c602               add esi, 2
// 0058a30a  83c304               add ebx, 4
// 0058a30d  83c004               add eax, 4
// 0058a310  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058a314  89742424             mov dword ptr [esp + 0x24], esi
// 0058a318  894c2434             mov dword ptr [esp + 0x34], ecx
// 0058a31c  85c9                 test ecx, ecx
// 0058a31e  0f8fbffdffff         jg 0x58a0e3
// 0058a324  33ff                 xor edi, edi
// 0058a326  8d4c2448             lea ecx, [esp + 0x48]
// 0058a32a  897c2434             mov dword ptr [esp + 0x34], edi
// 0058a32e  8bff                 mov edi, edi
// 0058a330  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 0058a337  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0058a33a  8b7104               mov esi, dword ptr [ecx + 4]
// 0058a33d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 0058a344  85f6                 test esi, esi
// 0058a346  7548                 jne 0x58a390
// 0058a348  397108               cmp dword ptr [ecx + 8], esi
// 0058a34b  7543                 jne 0x58a390
// 0058a34d  39710c               cmp dword ptr [ecx + 0xc], esi
// 0058a350  753e                 jne 0x58a390
// 0058a352  397110               cmp dword ptr [ecx + 0x10], esi
// 0058a355  7539                 jne 0x58a390
// 0058a357  397114               cmp dword ptr [ecx + 0x14], esi
// 0058a35a  7534                 jne 0x58a390
// 0058a35c  397118               cmp dword ptr [ecx + 0x18], esi
// 0058a35f  752f                 jne 0x58a390
// 0058a361  39711c               cmp dword ptr [ecx + 0x1c], esi
// 0058a364  752a                 jne 0x58a390
// 0058a366  8b31                 mov esi, dword ptr [ecx]
// 0058a368  83c610               add esi, 0x10
// 0058a36b  c1fe05               sar esi, 5
// 0058a36e  81e6ff030000         and esi, 0x3ff
// 0058a374  8a1c16               mov bl, byte ptr [esi + edx]
// 0058a377  8818                 mov byte ptr [eax], bl
// 0058a379  885801               mov byte ptr [eax + 1], bl
// 0058a37c  885802               mov byte ptr [eax + 2], bl
// 0058a37f  885803               mov byte ptr [eax + 3], bl
// 0058a382  885805               mov byte ptr [eax + 5], bl
// 0058a385  885806               mov byte ptr [eax + 6], bl
// 0058a388  885807               mov byte ptr [eax + 7], bl
// 0058a38b  e9fb010000           jmp 0x58a58b
// 0058a390  8b5108               mov edx, dword ptr [ecx + 8]
// 0058a393  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0058a396  8d3c16               lea edi, [esi + edx]
// 0058a399  69d27e180000         imul edx, edx, 0x187e
// 0058a39f  69f6213b0000         imul esi, esi, 0x3b21
// 0058a3a5  69ff51110000         imul edi, edi, 0x1151
// 0058a3ab  03d7                 add edx, edi
// 0058a3ad  8bea                 mov ebp, edx
// 0058a3af  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0058a3b2  8bdf                 mov ebx, edi
// 0058a3b4  2bde                 sub ebx, esi
// 0058a3b6  8b31                 mov esi, dword ptr [ecx]
// 0058a3b8  8d3c16               lea edi, [esi + edx]
// 0058a3bb  2bf2                 sub esi, edx
// 0058a3bd  c1e60d               shl esi, 0xd
// 0058a3c0  c1e70d               shl edi, 0xd
// 0058a3c3  8bd6                 mov edx, esi
// 0058a3c5  8d342f               lea esi, [edi + ebp]
// 0058a3c8  2bfd                 sub edi, ebp
// 0058a3ca  8d2c1a               lea ebp, [edx + ebx]
// 0058a3cd  2bd3                 sub edx, ebx
// 0058a3cf  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0058a3d2  89542438             mov dword ptr [esp + 0x38], edx
// 0058a3d6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0058a3d9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0058a3dd  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0058a3e0  89542424             mov dword ptr [esp + 0x24], edx
// 0058a3e4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058a3e8  8b5904               mov ebx, dword ptr [ecx + 4]
// 0058a3eb  03d3                 add edx, ebx
// 0058a3ed  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0058a3f1  89542420             mov dword ptr [esp + 0x20], edx
// 0058a3f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058a3f9  03da                 add ebx, edx
// 0058a3fb  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a3ff  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058a403  03da                 add ebx, edx
// 0058a405  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058a409  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058a40d  8b5904               mov ebx, dword ptr [ecx + 4]
// 0058a410  03da                 add ebx, edx
// 0058a412  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058a416  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0058a41a  03da                 add ebx, edx
// 0058a41c  69d2c53e0000         imul edx, edx, 0x3ec5
// 0058a422  69dba1250000         imul ebx, ebx, 0x25a1
// 0058a428  895c2430             mov dword ptr [esp + 0x30], ebx
// 0058a42c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0058a430  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 0058a436  895c2420             mov dword ptr [esp + 0x20], ebx
// 0058a43a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058a43e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 0058a444  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a448  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0058a44c  2bda                 sub ebx, edx
// 0058a44e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058a452  69d27c0c0000         imul edx, edx, 0xc7c
// 0058a458  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058a45c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0058a460  2bda                 sub ebx, edx
// 0058a462  8b542424             mov edx, dword ptr [esp + 0x24]
// 0058a466  69d28e090000         imul edx, edx, 0x98e
// 0058a46c  03542420             add edx, dword ptr [esp + 0x20]
// 0058a470  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0058a474  03542418             add edx, dword ptr [esp + 0x18]
// 0058a478  89542424             mov dword ptr [esp + 0x24], edx
// 0058a47c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058a480  69d2b3410000         imul edx, edx, 0x41b3
// 0058a486  03d3                 add edx, ebx
// 0058a488  03542410             add edx, dword ptr [esp + 0x10]
// 0058a48c  89542428             mov dword ptr [esp + 0x28], edx
// 0058a490  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058a494  69d254620000         imul edx, edx, 0x6254
// 0058a49a  03542418             add edx, dword ptr [esp + 0x18]
// 0058a49e  03542410             add edx, dword ptr [esp + 0x10]
// 0058a4a2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0058a4a6  8b5104               mov edx, dword ptr [ecx + 4]
// 0058a4a9  69d20b300000         imul edx, edx, 0x300b
// 0058a4af  03d3                 add edx, ebx
// 0058a4b1  03542420             add edx, dword ptr [esp + 0x20]
// 0058a4b5  89542414             mov dword ptr [esp + 0x14], edx
// 0058a4b9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 0058a4c0  2b742414             sub esi, dword ptr [esp + 0x14]
// 0058a4c4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0058a4c8  c1fb12               sar ebx, 0x12
// 0058a4cb  81e3ff030000         and ebx, 0x3ff
// 0058a4d1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0058a4d5  8818                 mov byte ptr [eax], bl
// 0058a4d7  81c600000200         add esi, 0x20000
// 0058a4dd  c1fe12               sar esi, 0x12
// 0058a4e0  81e6ff030000         and esi, 0x3ff
// 0058a4e6  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0058a4ea  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058a4ee  885807               mov byte ptr [eax + 7], bl
// 0058a4f1  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0058a4f8  c1fb12               sar ebx, 0x12
// 0058a4fb  81e3ff030000         and ebx, 0x3ff
// 0058a501  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0058a505  2bee                 sub ebp, esi
// 0058a507  8b742438             mov esi, dword ptr [esp + 0x38]
// 0058a50b  885801               mov byte ptr [eax + 1], bl
// 0058a50e  81c500000200         add ebp, 0x20000
// 0058a514  c1fd12               sar ebp, 0x12
// 0058a517  81e5ff030000         and ebp, 0x3ff
// 0058a51d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 0058a521  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0058a525  885806               mov byte ptr [eax + 6], bl
// 0058a528  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0058a52f  c1fb12               sar ebx, 0x12
// 0058a532  81e3ff030000         and ebx, 0x3ff
// 0058a538  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0058a53c  2bf5                 sub esi, ebp
// 0058a53e  81c600000200         add esi, 0x20000
// 0058a544  885802               mov byte ptr [eax + 2], bl
// 0058a547  c1fe12               sar esi, 0x12
// 0058a54a  81e6ff030000         and esi, 0x3ff
// 0058a550  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0058a554  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058a558  885805               mov byte ptr [eax + 5], bl
// 0058a55b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 0058a562  c1fb12               sar ebx, 0x12
// 0058a565  2bfe                 sub edi, esi
// 0058a567  81e3ff030000         and ebx, 0x3ff
// 0058a56d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0058a571  81c700000200         add edi, 0x20000
// 0058a577  c1ff12               sar edi, 0x12
// 0058a57a  81e7ff030000         and edi, 0x3ff
// 0058a580  885803               mov byte ptr [eax + 3], bl
// 0058a583  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0058a587  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0058a58b  47                   inc edi
// 0058a58c  83c120               add ecx, 0x20
// 0058a58f  83ff08               cmp edi, 8
// 0058a592  885804               mov byte ptr [eax + 4], bl
// 0058a595  897c2434             mov dword ptr [esp + 0x34], edi
// 0058a599  0f8c91fdffff         jl 0x58a330
// 0058a59f  5f                   pop edi
// 0058a5a0  5e                   pop esi
// 0058a5a1  5d                   pop ebp
// 0058a5a2  5b                   pop ebx
// 0058a5a3  81c438010000         add esp, 0x138
// 0058a5a9  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
