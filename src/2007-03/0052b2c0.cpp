// roc 2007-03 0052b2c0  unit: seg_00520000  size: 1308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052b2c0
//
// 0052b2c0  81ec38010000         sub esp, 0x138
// 0052b2c6  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0052b2cd  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0052b2d3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0052b2da  53                   push ebx
// 0052b2db  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0052b2de  55                   push ebp
// 0052b2df  56                   push esi
// 0052b2e0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 0052b2e7  81c280000000         add edx, 0x80
// 0052b2ed  57                   push edi
// 0052b2ee  8954243c             mov dword ptr [esp + 0x3c], edx
// 0052b2f2  89742424             mov dword ptr [esp + 0x24], esi
// 0052b2f6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b2fa  8d442448             lea eax, [esp + 0x48]
// 0052b2fe  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0052b306  eb08                 jmp 0x52b310
// 0052b308  8da42400000000       lea esp, [esp]
// 0052b30f  90                   nop 
// 0052b310  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 0052b314  6685c9               test cx, cx
// 0052b317  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052b31b  7556                 jne 0x52b373
// 0052b31d  66394e20             cmp word ptr [esi + 0x20], cx
// 0052b321  7550                 jne 0x52b373
// 0052b323  66394e30             cmp word ptr [esi + 0x30], cx
// 0052b327  754a                 jne 0x52b373
// 0052b329  66394e40             cmp word ptr [esi + 0x40], cx
// 0052b32d  7544                 jne 0x52b373
// 0052b32f  66394e50             cmp word ptr [esi + 0x50], cx
// 0052b333  753e                 jne 0x52b373
// 0052b335  66394e60             cmp word ptr [esi + 0x60], cx
// 0052b339  7538                 jne 0x52b373
// 0052b33b  66394e70             cmp word ptr [esi + 0x70], cx
// 0052b33f  7532                 jne 0x52b373
// 0052b341  0fbf0e               movsx ecx, word ptr [esi]
// 0052b344  0faf0b               imul ecx, dword ptr [ebx]
// 0052b347  03c9                 add ecx, ecx
// 0052b349  03c9                 add ecx, ecx
// 0052b34b  8908                 mov dword ptr [eax], ecx
// 0052b34d  894820               mov dword ptr [eax + 0x20], ecx
// 0052b350  894840               mov dword ptr [eax + 0x40], ecx
// 0052b353  894860               mov dword ptr [eax + 0x60], ecx
// 0052b356  898880000000         mov dword ptr [eax + 0x80], ecx
// 0052b35c  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 0052b362  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0052b368  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0052b36e  e9bc010000           jmp 0x52b52f
// 0052b373  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0052b377  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0052b37b  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 0052b37f  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 0052b386  8d3c0a               lea edi, [edx + ecx]
// 0052b389  69d2213b0000         imul edx, edx, 0x3b21
// 0052b38f  69c97e180000         imul ecx, ecx, 0x187e
// 0052b395  69ff51110000         imul edi, edi, 0x1151
// 0052b39b  03cf                 add ecx, edi
// 0052b39d  8bef                 mov ebp, edi
// 0052b39f  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 0052b3a3  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0052b3aa  2bea                 sub ebp, edx
// 0052b3ac  0fbf16               movsx edx, word ptr [esi]
// 0052b3af  0faf13               imul edx, dword ptr [ebx]
// 0052b3b2  897c2418             mov dword ptr [esp + 0x18], edi
// 0052b3b6  03fa                 add edi, edx
// 0052b3b8  2b542418             sub edx, dword ptr [esp + 0x18]
// 0052b3bc  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052b3c0  c1e70d               shl edi, 0xd
// 0052b3c3  03cf                 add ecx, edi
// 0052b3c5  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0052b3c9  c1e20d               shl edx, 0xd
// 0052b3cc  894c2444             mov dword ptr [esp + 0x44], ecx
// 0052b3d0  8d0c2a               lea ecx, [edx + ebp]
// 0052b3d3  2bd5                 sub edx, ebp
// 0052b3d5  897c2440             mov dword ptr [esp + 0x40], edi
// 0052b3d9  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 0052b3de  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 0052b3e2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052b3e6  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0052b3ea  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 0052b3f1  89542438             mov dword ptr [esp + 0x38], edx
// 0052b3f5  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0052b3f9  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 0052b400  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 0052b404  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0052b408  8d1c39               lea ebx, [ecx + edi]
// 0052b40b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052b40f  8d1c32               lea ebx, [edx + esi]
// 0052b412  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b416  8d2c3a               lea ebp, [edx + edi]
// 0052b419  69ff0b300000         imul edi, edi, 0x300b
// 0052b41f  69d2b3410000         imul edx, edx, 0x41b3
// 0052b425  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0052b429  8d1c31               lea ebx, [ecx + esi]
// 0052b42c  69c98e090000         imul ecx, ecx, 0x98e
// 0052b432  69f654620000         imul esi, esi, 0x6254
// 0052b438  03eb                 add ebp, ebx
// 0052b43a  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 0052b440  69eda1250000         imul ebp, ebp, 0x25a1
// 0052b446  896c2430             mov dword ptr [esp + 0x30], ebp
// 0052b44a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052b44e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0052b454  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052b458  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052b45c  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0052b462  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b466  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052b46a  2beb                 sub ebp, ebx
// 0052b46c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0052b470  69db7c0c0000         imul ebx, ebx, 0xc7c
// 0052b476  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052b47a  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0052b47e  03742418             add esi, dword ptr [esp + 0x18]
// 0052b482  2beb                 sub ebp, ebx
// 0052b484  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052b488  03742410             add esi, dword ptr [esp + 0x10]
// 0052b48c  03fd                 add edi, ebp
// 0052b48e  03cb                 add ecx, ebx
// 0052b490  034c2418             add ecx, dword ptr [esp + 0x18]
// 0052b494  03fb                 add edi, ebx
// 0052b496  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0052b49a  03d5                 add edx, ebp
// 0052b49c  03542410             add edx, dword ptr [esp + 0x10]
// 0052b4a0  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0052b4a7  2bdf                 sub ebx, edi
// 0052b4a9  c1fd0b               sar ebp, 0xb
// 0052b4ac  81c300040000         add ebx, 0x400
// 0052b4b2  8928                 mov dword ptr [eax], ebp
// 0052b4b4  c1fb0b               sar ebx, 0xb
// 0052b4b7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052b4bb  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 0052b4c1  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0052b4c8  2bfe                 sub edi, esi
// 0052b4ca  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052b4ce  81c700040000         add edi, 0x400
// 0052b4d4  c1ff0b               sar edi, 0xb
// 0052b4d7  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 0052b4dd  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 0052b4e4  2bf2                 sub esi, edx
// 0052b4e6  8b542440             mov edx, dword ptr [esp + 0x40]
// 0052b4ea  81c600040000         add esi, 0x400
// 0052b4f0  c1fe0b               sar esi, 0xb
// 0052b4f3  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0052b4f9  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 0052b500  2bd1                 sub edx, ecx
// 0052b502  c1fb0b               sar ebx, 0xb
// 0052b505  c1fe0b               sar esi, 0xb
// 0052b508  81c200040000         add edx, 0x400
// 0052b50e  c1ff0b               sar edi, 0xb
// 0052b511  c1fa0b               sar edx, 0xb
// 0052b514  895820               mov dword ptr [eax + 0x20], ebx
// 0052b517  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052b51b  897060               mov dword ptr [eax + 0x60], esi
// 0052b51e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052b522  899080000000         mov dword ptr [eax + 0x80], edx
// 0052b528  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052b52c  897840               mov dword ptr [eax + 0x40], edi
// 0052b52f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052b533  83e901               sub ecx, 1
// 0052b536  83c602               add esi, 2
// 0052b539  83c304               add ebx, 4
// 0052b53c  83c004               add eax, 4
// 0052b53f  85c9                 test ecx, ecx
// 0052b541  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b545  89742424             mov dword ptr [esp + 0x24], esi
// 0052b549  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052b54d  0f8fbdfdffff         jg 0x52b310
// 0052b553  33ff                 xor edi, edi
// 0052b555  8d4c2448             lea ecx, [esp + 0x48]
// 0052b559  897c2434             mov dword ptr [esp + 0x34], edi
// 0052b55d  8d4900               lea ecx, [ecx]
// 0052b560  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 0052b567  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052b56a  8b7104               mov esi, dword ptr [ecx + 4]
// 0052b56d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 0052b574  85f6                 test esi, esi
// 0052b576  7548                 jne 0x52b5c0
// 0052b578  397108               cmp dword ptr [ecx + 8], esi
// 0052b57b  7543                 jne 0x52b5c0
// 0052b57d  39710c               cmp dword ptr [ecx + 0xc], esi
// 0052b580  753e                 jne 0x52b5c0
// 0052b582  397110               cmp dword ptr [ecx + 0x10], esi
// 0052b585  7539                 jne 0x52b5c0
// 0052b587  397114               cmp dword ptr [ecx + 0x14], esi
// 0052b58a  7534                 jne 0x52b5c0
// 0052b58c  397118               cmp dword ptr [ecx + 0x18], esi
// 0052b58f  752f                 jne 0x52b5c0
// 0052b591  39711c               cmp dword ptr [ecx + 0x1c], esi
// 0052b594  752a                 jne 0x52b5c0
// 0052b596  8b31                 mov esi, dword ptr [ecx]
// 0052b598  83c610               add esi, 0x10
// 0052b59b  c1fe05               sar esi, 5
// 0052b59e  81e6ff030000         and esi, 0x3ff
// 0052b5a4  8a1c16               mov bl, byte ptr [esi + edx]
// 0052b5a7  8818                 mov byte ptr [eax], bl
// 0052b5a9  885801               mov byte ptr [eax + 1], bl
// 0052b5ac  885802               mov byte ptr [eax + 2], bl
// 0052b5af  885803               mov byte ptr [eax + 3], bl
// 0052b5b2  885805               mov byte ptr [eax + 5], bl
// 0052b5b5  885806               mov byte ptr [eax + 6], bl
// 0052b5b8  885807               mov byte ptr [eax + 7], bl
// 0052b5bb  e9fb010000           jmp 0x52b7bb
// 0052b5c0  8b5108               mov edx, dword ptr [ecx + 8]
// 0052b5c3  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0052b5c6  8d3c16               lea edi, [esi + edx]
// 0052b5c9  69d27e180000         imul edx, edx, 0x187e
// 0052b5cf  69f6213b0000         imul esi, esi, 0x3b21
// 0052b5d5  69ff51110000         imul edi, edi, 0x1151
// 0052b5db  03d7                 add edx, edi
// 0052b5dd  8bea                 mov ebp, edx
// 0052b5df  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052b5e2  8bdf                 mov ebx, edi
// 0052b5e4  2bde                 sub ebx, esi
// 0052b5e6  8b31                 mov esi, dword ptr [ecx]
// 0052b5e8  8d3c16               lea edi, [esi + edx]
// 0052b5eb  2bf2                 sub esi, edx
// 0052b5ed  c1e60d               shl esi, 0xd
// 0052b5f0  c1e70d               shl edi, 0xd
// 0052b5f3  8bd6                 mov edx, esi
// 0052b5f5  8d342f               lea esi, [edi + ebp]
// 0052b5f8  2bfd                 sub edi, ebp
// 0052b5fa  8d2c1a               lea ebp, [edx + ebx]
// 0052b5fd  2bd3                 sub edx, ebx
// 0052b5ff  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0052b602  89542438             mov dword ptr [esp + 0x38], edx
// 0052b606  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0052b609  895c2428             mov dword ptr [esp + 0x28], ebx
// 0052b60d  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0052b610  89542424             mov dword ptr [esp + 0x24], edx
// 0052b614  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052b618  8b5904               mov ebx, dword ptr [ecx + 4]
// 0052b61b  03d3                 add edx, ebx
// 0052b61d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052b621  89542420             mov dword ptr [esp + 0x20], edx
// 0052b625  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b629  03da                 add ebx, edx
// 0052b62b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b62f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052b633  03da                 add ebx, edx
// 0052b635  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052b639  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b63d  8b5904               mov ebx, dword ptr [ecx + 4]
// 0052b640  03da                 add ebx, edx
// 0052b642  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052b646  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b64a  03da                 add ebx, edx
// 0052b64c  69d2c53e0000         imul edx, edx, 0x3ec5
// 0052b652  69dba1250000         imul ebx, ebx, 0x25a1
// 0052b658  895c2430             mov dword ptr [esp + 0x30], ebx
// 0052b65c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052b660  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 0052b666  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052b66a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052b66e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 0052b674  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b678  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0052b67c  2bda                 sub ebx, edx
// 0052b67e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052b682  69d27c0c0000         imul edx, edx, 0xc7c
// 0052b688  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b68c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0052b690  2bda                 sub ebx, edx
// 0052b692  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052b696  69d28e090000         imul edx, edx, 0x98e
// 0052b69c  03542420             add edx, dword ptr [esp + 0x20]
// 0052b6a0  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b6a4  03542418             add edx, dword ptr [esp + 0x18]
// 0052b6a8  89542424             mov dword ptr [esp + 0x24], edx
// 0052b6ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052b6b0  69d2b3410000         imul edx, edx, 0x41b3
// 0052b6b6  03d3                 add edx, ebx
// 0052b6b8  03542410             add edx, dword ptr [esp + 0x10]
// 0052b6bc  89542428             mov dword ptr [esp + 0x28], edx
// 0052b6c0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b6c4  69d254620000         imul edx, edx, 0x6254
// 0052b6ca  03542418             add edx, dword ptr [esp + 0x18]
// 0052b6ce  03542410             add edx, dword ptr [esp + 0x10]
// 0052b6d2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052b6d6  8b5104               mov edx, dword ptr [ecx + 4]
// 0052b6d9  69d20b300000         imul edx, edx, 0x300b
// 0052b6df  03d3                 add edx, ebx
// 0052b6e1  03542420             add edx, dword ptr [esp + 0x20]
// 0052b6e5  89542414             mov dword ptr [esp + 0x14], edx
// 0052b6e9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 0052b6f0  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052b6f4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0052b6f8  c1fb12               sar ebx, 0x12
// 0052b6fb  81e3ff030000         and ebx, 0x3ff
// 0052b701  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b705  8818                 mov byte ptr [eax], bl
// 0052b707  81c600000200         add esi, 0x20000
// 0052b70d  c1fe12               sar esi, 0x12
// 0052b710  81e6ff030000         and esi, 0x3ff
// 0052b716  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0052b71a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052b71e  885807               mov byte ptr [eax + 7], bl
// 0052b721  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0052b728  c1fb12               sar ebx, 0x12
// 0052b72b  81e3ff030000         and ebx, 0x3ff
// 0052b731  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b735  2bee                 sub ebp, esi
// 0052b737  8b742438             mov esi, dword ptr [esp + 0x38]
// 0052b73b  885801               mov byte ptr [eax + 1], bl
// 0052b73e  81c500000200         add ebp, 0x20000
// 0052b744  c1fd12               sar ebp, 0x12
// 0052b747  81e5ff030000         and ebp, 0x3ff
// 0052b74d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 0052b751  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052b755  885806               mov byte ptr [eax + 6], bl
// 0052b758  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0052b75f  c1fb12               sar ebx, 0x12
// 0052b762  81e3ff030000         and ebx, 0x3ff
// 0052b768  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b76c  2bf5                 sub esi, ebp
// 0052b76e  81c600000200         add esi, 0x20000
// 0052b774  885802               mov byte ptr [eax + 2], bl
// 0052b777  c1fe12               sar esi, 0x12
// 0052b77a  81e6ff030000         and esi, 0x3ff
// 0052b780  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0052b784  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052b788  885805               mov byte ptr [eax + 5], bl
// 0052b78b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 0052b792  c1fb12               sar ebx, 0x12
// 0052b795  2bfe                 sub edi, esi
// 0052b797  81e3ff030000         and ebx, 0x3ff
// 0052b79d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0052b7a1  81c700000200         add edi, 0x20000
// 0052b7a7  c1ff12               sar edi, 0x12
// 0052b7aa  81e7ff030000         and edi, 0x3ff
// 0052b7b0  885803               mov byte ptr [eax + 3], bl
// 0052b7b3  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0052b7b7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0052b7bb  83c701               add edi, 1
// 0052b7be  83c120               add ecx, 0x20
// 0052b7c1  83ff08               cmp edi, 8
// 0052b7c4  885804               mov byte ptr [eax + 4], bl
// 0052b7c7  897c2434             mov dword ptr [esp + 0x34], edi
// 0052b7cb  0f8c8ffdffff         jl 0x52b560
// 0052b7d1  5f                   pop edi
// 0052b7d2  5e                   pop esi
// 0052b7d3  5d                   pop ebp
// 0052b7d4  5b                   pop ebx
// 0052b7d5  81c438010000         add esp, 0x138
// 0052b7db  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
