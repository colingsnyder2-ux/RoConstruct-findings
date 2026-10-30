// from server: 100% by auto
// roc 2007-08 0052b0b0  unit: seg_00520000  size: 1308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052b0b0
//
// 0052b0b0  81ec38010000         sub esp, 0x138
// 0052b0b6  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0052b0bd  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0052b0c3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0052b0ca  53                   push ebx
// 0052b0cb  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0052b0ce  55                   push ebp
// 0052b0cf  56                   push esi
// 0052b0d0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 0052b0d7  81c280000000         add edx, 0x80
// 0052b0dd  57                   push edi
// 0052b0de  8954243c             mov dword ptr [esp + 0x3c], edx
// 0052b0e2  89742424             mov dword ptr [esp + 0x24], esi
// 0052b0e6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b0ea  8d442448             lea eax, [esp + 0x48]
// 0052b0ee  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0052b0f6  eb08                 jmp 0x52b100
// 0052b0f8  8da42400000000       lea esp, [esp]
// 0052b0ff  90                   nop 
// 0052b100  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 0052b104  6685c9               test cx, cx
// 0052b107  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052b10b  7556                 jne 0x52b163
// 0052b10d  66394e20             cmp word ptr [esi + 0x20], cx
// 0052b111  7550                 jne 0x52b163
// 0052b113  66394e30             cmp word ptr [esi + 0x30], cx
// 0052b117  754a                 jne 0x52b163
// 0052b119  66394e40             cmp word ptr [esi + 0x40], cx
// 0052b11d  7544                 jne 0x52b163
// 0052b11f  66394e50             cmp word ptr [esi + 0x50], cx
// 0052b123  753e                 jne 0x52b163
// 0052b125  66394e60             cmp word ptr [esi + 0x60], cx
// 0052b129  7538                 jne 0x52b163
// 0052b12b  66394e70             cmp word ptr [esi + 0x70], cx
// 0052b12f  7532                 jne 0x52b163
// 0052b131  0fbf0e               movsx ecx, word ptr [esi]
// 0052b134  0faf0b               imul ecx, dword ptr [ebx]
// 0052b137  03c9                 add ecx, ecx
// 0052b139  03c9                 add ecx, ecx
// 0052b13b  8908                 mov dword ptr [eax], ecx
// 0052b13d  894820               mov dword ptr [eax + 0x20], ecx
// 0052b140  894840               mov dword ptr [eax + 0x40], ecx
// 0052b143  894860               mov dword ptr [eax + 0x60], ecx
// 0052b146  898880000000         mov dword ptr [eax + 0x80], ecx
// 0052b14c  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 0052b152  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0052b158  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0052b15e  e9bc010000           jmp 0x52b31f
// 0052b163  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0052b167  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0052b16b  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 0052b16f  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 0052b176  8d3c0a               lea edi, [edx + ecx]
// 0052b179  69d2213b0000         imul edx, edx, 0x3b21
// 0052b17f  69c97e180000         imul ecx, ecx, 0x187e
// 0052b185  69ff51110000         imul edi, edi, 0x1151
// 0052b18b  03cf                 add ecx, edi
// 0052b18d  8bef                 mov ebp, edi
// 0052b18f  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 0052b193  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0052b19a  2bea                 sub ebp, edx
// 0052b19c  0fbf16               movsx edx, word ptr [esi]
// 0052b19f  0faf13               imul edx, dword ptr [ebx]
// 0052b1a2  897c2418             mov dword ptr [esp + 0x18], edi
// 0052b1a6  03fa                 add edi, edx
// 0052b1a8  2b542418             sub edx, dword ptr [esp + 0x18]
// 0052b1ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052b1b0  c1e70d               shl edi, 0xd
// 0052b1b3  03cf                 add ecx, edi
// 0052b1b5  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0052b1b9  c1e20d               shl edx, 0xd
// 0052b1bc  894c2444             mov dword ptr [esp + 0x44], ecx
// 0052b1c0  8d0c2a               lea ecx, [edx + ebp]
// 0052b1c3  2bd5                 sub edx, ebp
// 0052b1c5  897c2440             mov dword ptr [esp + 0x40], edi
// 0052b1c9  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 0052b1ce  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 0052b1d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052b1d6  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0052b1da  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 0052b1e1  89542438             mov dword ptr [esp + 0x38], edx
// 0052b1e5  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0052b1e9  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 0052b1f0  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 0052b1f4  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0052b1f8  8d1c39               lea ebx, [ecx + edi]
// 0052b1fb  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052b1ff  8d1c32               lea ebx, [edx + esi]
// 0052b202  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b206  8d2c3a               lea ebp, [edx + edi]
// 0052b209  69ff0b300000         imul edi, edi, 0x300b
// 0052b20f  69d2b3410000         imul edx, edx, 0x41b3
// 0052b215  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0052b219  8d1c31               lea ebx, [ecx + esi]
// 0052b21c  69c98e090000         imul ecx, ecx, 0x98e
// 0052b222  69f654620000         imul esi, esi, 0x6254
// 0052b228  03eb                 add ebp, ebx
// 0052b22a  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 0052b230  69eda1250000         imul ebp, ebp, 0x25a1
// 0052b236  896c2430             mov dword ptr [esp + 0x30], ebp
// 0052b23a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052b23e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0052b244  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052b248  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052b24c  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0052b252  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b256  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052b25a  2beb                 sub ebp, ebx
// 0052b25c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0052b260  69db7c0c0000         imul ebx, ebx, 0xc7c
// 0052b266  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052b26a  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052b26e  03742418             add esi, dword ptr [esp + 0x18]
// 0052b272  2beb                 sub ebp, ebx
// 0052b274  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052b278  03742410             add esi, dword ptr [esp + 0x10]
// 0052b27c  03fd                 add edi, ebp
// 0052b27e  03cb                 add ecx, ebx
// 0052b280  034c2418             add ecx, dword ptr [esp + 0x18]
// 0052b284  03fb                 add edi, ebx
// 0052b286  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0052b28a  03d5                 add edx, ebp
// 0052b28c  03542410             add edx, dword ptr [esp + 0x10]
// 0052b290  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0052b297  2bdf                 sub ebx, edi
// 0052b299  c1fd0b               sar ebp, 0xb
// 0052b29c  81c300040000         add ebx, 0x400
// 0052b2a2  8928                 mov dword ptr [eax], ebp
// 0052b2a4  c1fb0b               sar ebx, 0xb
// 0052b2a7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052b2ab  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 0052b2b1  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0052b2b8  2bfe                 sub edi, esi
// 0052b2ba  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052b2be  81c700040000         add edi, 0x400
// 0052b2c4  c1ff0b               sar edi, 0xb
// 0052b2c7  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 0052b2cd  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 0052b2d4  2bf2                 sub esi, edx
// 0052b2d6  8b542440             mov edx, dword ptr [esp + 0x40]
// 0052b2da  81c600040000         add esi, 0x400
// 0052b2e0  c1fe0b               sar esi, 0xb
// 0052b2e3  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0052b2e9  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 0052b2f0  2bd1                 sub edx, ecx
// 0052b2f2  c1fb0b               sar ebx, 0xb
// 0052b2f5  c1fe0b               sar esi, 0xb
// 0052b2f8  81c200040000         add edx, 0x400
// 0052b2fe  c1ff0b               sar edi, 0xb
// 0052b301  c1fa0b               sar edx, 0xb
// 0052b304  895820               mov dword ptr [eax + 0x20], ebx
// 0052b307  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052b30b  897060               mov dword ptr [eax + 0x60], esi
// 0052b30e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052b312  899080000000         mov dword ptr [eax + 0x80], edx
// 0052b318  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052b31c  897840               mov dword ptr [eax + 0x40], edi
// 0052b31f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052b323  83e901               sub ecx, 1
// 0052b326  83c602               add esi, 2
// 0052b329  83c304               add ebx, 4
// 0052b32c  83c004               add eax, 4
// 0052b32f  85c9                 test ecx, ecx
// 0052b331  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b335  89742424             mov dword ptr [esp + 0x24], esi
// 0052b339  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052b33d  0f8fbdfdffff         jg 0x52b100
// 0052b343  33ff                 xor edi, edi
// 0052b345  8d4c2448             lea ecx, [esp + 0x48]
// 0052b349  897c2434             mov dword ptr [esp + 0x34], edi
// 0052b34d  8d4900               lea ecx, [ecx]
// 0052b350  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 0052b357  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052b35a  8b7104               mov esi, dword ptr [ecx + 4]
// 0052b35d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 0052b364  85f6                 test esi, esi
// 0052b366  7548                 jne 0x52b3b0
// 0052b368  397108               cmp dword ptr [ecx + 8], esi
// 0052b36b  7543                 jne 0x52b3b0
// 0052b36d  39710c               cmp dword ptr [ecx + 0xc], esi
// 0052b370  753e                 jne 0x52b3b0
// 0052b372  397110               cmp dword ptr [ecx + 0x10], esi
// 0052b375  7539                 jne 0x52b3b0
// 0052b377  397114               cmp dword ptr [ecx + 0x14], esi
// 0052b37a  7534                 jne 0x52b3b0
// 0052b37c  397118               cmp dword ptr [ecx + 0x18], esi
// 0052b37f  752f                 jne 0x52b3b0
// 0052b381  39711c               cmp dword ptr [ecx + 0x1c], esi
// 0052b384  752a                 jne 0x52b3b0
// 0052b386  8b31                 mov esi, dword ptr [ecx]
// 0052b388  83c610               add esi, 0x10
// 0052b38b  c1fe05               sar esi, 5
// 0052b38e  81e6ff030000         and esi, 0x3ff
// 0052b394  8a1c16               mov bl, byte ptr [esi + edx]
// 0052b397  8818                 mov byte ptr [eax], bl
// 0052b399  885801               mov byte ptr [eax + 1], bl
// 0052b39c  885802               mov byte ptr [eax + 2], bl
// 0052b39f  885803               mov byte ptr [eax + 3], bl
// 0052b3a2  885805               mov byte ptr [eax + 5], bl
// 0052b3a5  885806               mov byte ptr [eax + 6], bl
// 0052b3a8  885807               mov byte ptr [eax + 7], bl
// 0052b3ab  e9fb010000           jmp 0x52b5ab
// 0052b3b0  8b5108               mov edx, dword ptr [ecx + 8]
// 0052b3b3  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0052b3b6  8d3c16               lea edi, [esi + edx]
// 0052b3b9  69d27e180000         imul edx, edx, 0x187e
// 0052b3bf  69f6213b0000         imul esi, esi, 0x3b21
// 0052b3c5  69ff51110000         imul edi, edi, 0x1151
// 0052b3cb  03d7                 add edx, edi
// 0052b3cd  8bea                 mov ebp, edx
// 0052b3cf  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052b3d2  8bdf                 mov ebx, edi
// 0052b3d4  2bde                 sub ebx, esi
// 0052b3d6  8b31                 mov esi, dword ptr [ecx]
// 0052b3d8  8d3c16               lea edi, [esi + edx]
// 0052b3db  2bf2                 sub esi, edx
// 0052b3dd  c1e60d               shl esi, 0xd
// 0052b3e0  c1e70d               shl edi, 0xd
// 0052b3e3  8bd6                 mov edx, esi
// 0052b3e5  8d342f               lea esi, [edi + ebp]
// 0052b3e8  2bfd                 sub edi, ebp
// 0052b3ea  8d2c1a               lea ebp, [edx + ebx]
// 0052b3ed  2bd3                 sub edx, ebx
// 0052b3ef  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0052b3f2  89542438             mov dword ptr [esp + 0x38], edx
// 0052b3f6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0052b3f9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0052b3fd  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0052b400  89542424             mov dword ptr [esp + 0x24], edx
// 0052b404  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b408  8b5904               mov ebx, dword ptr [ecx + 4]
// 0052b40b  03d3                 add edx, ebx
// 0052b40d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052b411  89542420             mov dword ptr [esp + 0x20], edx
// 0052b415  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b419  03da                 add ebx, edx
// 0052b41b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b41f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052b423  03da                 add ebx, edx
// 0052b425  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052b429  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b42d  8b5904               mov ebx, dword ptr [ecx + 4]
// 0052b430  03da                 add ebx, edx
// 0052b432  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052b436  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b43a  03da                 add ebx, edx
// 0052b43c  69d2c53e0000         imul edx, edx, 0x3ec5
// 0052b442  69dba1250000         imul ebx, ebx, 0x25a1
// 0052b448  895c2430             mov dword ptr [esp + 0x30], ebx
// 0052b44c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052b450  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 0052b456  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052b45a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052b45e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 0052b464  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b468  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0052b46c  2bda                 sub ebx, edx
// 0052b46e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052b472  69d27c0c0000         imul edx, edx, 0xc7c
// 0052b478  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b47c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0052b480  2bda                 sub ebx, edx
// 0052b482  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052b486  69d28e090000         imul edx, edx, 0x98e
// 0052b48c  03542420             add edx, dword ptr [esp + 0x20]
// 0052b490  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b494  03542418             add edx, dword ptr [esp + 0x18]
// 0052b498  89542424             mov dword ptr [esp + 0x24], edx
// 0052b49c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052b4a0  69d2b3410000         imul edx, edx, 0x41b3
// 0052b4a6  03d3                 add edx, ebx
// 0052b4a8  03542410             add edx, dword ptr [esp + 0x10]
// 0052b4ac  89542428             mov dword ptr [esp + 0x28], edx
// 0052b4b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b4b4  69d254620000         imul edx, edx, 0x6254
// 0052b4ba  03542418             add edx, dword ptr [esp + 0x18]
// 0052b4be  03542410             add edx, dword ptr [esp + 0x10]
// 0052b4c2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052b4c6  8b5104               mov edx, dword ptr [ecx + 4]
// 0052b4c9  69d20b300000         imul edx, edx, 0x300b
// 0052b4cf  03d3                 add edx, ebx
// 0052b4d1  03542420             add edx, dword ptr [esp + 0x20]
// 0052b4d5  89542414             mov dword ptr [esp + 0x14], edx
// 0052b4d9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 0052b4e0  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052b4e4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052b4e8  c1fb12               sar ebx, 0x12
// 0052b4eb  81e3ff030000         and ebx, 0x3ff
// 0052b4f1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b4f5  8818                 mov byte ptr [eax], bl
// 0052b4f7  81c600000200         add esi, 0x20000
// 0052b4fd  c1fe12               sar esi, 0x12
// 0052b500  81e6ff030000         and esi, 0x3ff
// 0052b506  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0052b50a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052b50e  885807               mov byte ptr [eax + 7], bl
// 0052b511  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0052b518  c1fb12               sar ebx, 0x12
// 0052b51b  81e3ff030000         and ebx, 0x3ff
// 0052b521  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b525  2bee                 sub ebp, esi
// 0052b527  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052b52b  885801               mov byte ptr [eax + 1], bl
// 0052b52e  81c500000200         add ebp, 0x20000
// 0052b534  c1fd12               sar ebp, 0x12
// 0052b537  81e5ff030000         and ebp, 0x3ff
// 0052b53d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 0052b541  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052b545  885806               mov byte ptr [eax + 6], bl
// 0052b548  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0052b54f  c1fb12               sar ebx, 0x12
// 0052b552  81e3ff030000         and ebx, 0x3ff
// 0052b558  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b55c  2bf5                 sub esi, ebp
// 0052b55e  81c600000200         add esi, 0x20000
// 0052b564  885802               mov byte ptr [eax + 2], bl
// 0052b567  c1fe12               sar esi, 0x12
// 0052b56a  81e6ff030000         and esi, 0x3ff
// 0052b570  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0052b574  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052b578  885805               mov byte ptr [eax + 5], bl
// 0052b57b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 0052b582  c1fb12               sar ebx, 0x12
// 0052b585  2bfe                 sub edi, esi
// 0052b587  81e3ff030000         and ebx, 0x3ff
// 0052b58d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b591  81c700000200         add edi, 0x20000
// 0052b597  c1ff12               sar edi, 0x12
// 0052b59a  81e7ff030000         and edi, 0x3ff
// 0052b5a0  885803               mov byte ptr [eax + 3], bl
// 0052b5a3  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0052b5a7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0052b5ab  83c701               add edi, 1
// 0052b5ae  83c120               add ecx, 0x20
// 0052b5b1  83ff08               cmp edi, 8
// 0052b5b4  885804               mov byte ptr [eax + 4], bl
// 0052b5b7  897c2434             mov dword ptr [esp + 0x34], edi
// 0052b5bb  0f8c8ffdffff         jl 0x52b350
// 0052b5c1  5f                   pop edi
// 0052b5c2  5e                   pop esi
// 0052b5c3  5d                   pop ebp
// 0052b5c4  5b                   pop ebx
// 0052b5c5  81c438010000         add esp, 0x138
// 0052b5cb  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
