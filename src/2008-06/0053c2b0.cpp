// roc 2008-06 0053c2b0  unit: seg_00530000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053c2b0
//
// 0053c2b0  81ec38010000         sub esp, 0x138
// 0053c2b6  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0053c2bd  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0053c2c3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0053c2ca  53                   push ebx
// 0053c2cb  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0053c2ce  55                   push ebp
// 0053c2cf  56                   push esi
// 0053c2d0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 0053c2d7  83ea80               sub edx, -0x80
// 0053c2da  57                   push edi
// 0053c2db  8954243c             mov dword ptr [esp + 0x3c], edx
// 0053c2df  89742424             mov dword ptr [esp + 0x24], esi
// 0053c2e3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053c2e7  8d442448             lea eax, [esp + 0x48]
// 0053c2eb  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0053c2f3  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 0053c2f7  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053c2fb  6685c9               test cx, cx
// 0053c2fe  7556                 jne 0x53c356
// 0053c300  66394e20             cmp word ptr [esi + 0x20], cx
// 0053c304  7550                 jne 0x53c356
// 0053c306  66394e30             cmp word ptr [esi + 0x30], cx
// 0053c30a  754a                 jne 0x53c356
// 0053c30c  66394e40             cmp word ptr [esi + 0x40], cx
// 0053c310  7544                 jne 0x53c356
// 0053c312  66394e50             cmp word ptr [esi + 0x50], cx
// 0053c316  753e                 jne 0x53c356
// 0053c318  66394e60             cmp word ptr [esi + 0x60], cx
// 0053c31c  7538                 jne 0x53c356
// 0053c31e  66394e70             cmp word ptr [esi + 0x70], cx
// 0053c322  7532                 jne 0x53c356
// 0053c324  0fbf0e               movsx ecx, word ptr [esi]
// 0053c327  0faf0b               imul ecx, dword ptr [ebx]
// 0053c32a  03c9                 add ecx, ecx
// 0053c32c  03c9                 add ecx, ecx
// 0053c32e  8908                 mov dword ptr [eax], ecx
// 0053c330  894820               mov dword ptr [eax + 0x20], ecx
// 0053c333  894840               mov dword ptr [eax + 0x40], ecx
// 0053c336  894860               mov dword ptr [eax + 0x60], ecx
// 0053c339  898880000000         mov dword ptr [eax + 0x80], ecx
// 0053c33f  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 0053c345  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0053c34b  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0053c351  e9bc010000           jmp 0x53c512
// 0053c356  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0053c35a  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0053c35e  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 0053c362  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 0053c369  8d3c0a               lea edi, [edx + ecx]
// 0053c36c  69d2213b0000         imul edx, edx, 0x3b21
// 0053c372  69c97e180000         imul ecx, ecx, 0x187e
// 0053c378  69ff51110000         imul edi, edi, 0x1151
// 0053c37e  03cf                 add ecx, edi
// 0053c380  8bef                 mov ebp, edi
// 0053c382  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 0053c386  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0053c38d  2bea                 sub ebp, edx
// 0053c38f  0fbf16               movsx edx, word ptr [esi]
// 0053c392  0faf13               imul edx, dword ptr [ebx]
// 0053c395  897c2418             mov dword ptr [esp + 0x18], edi
// 0053c399  03fa                 add edi, edx
// 0053c39b  2b542418             sub edx, dword ptr [esp + 0x18]
// 0053c39f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053c3a3  c1e70d               shl edi, 0xd
// 0053c3a6  03cf                 add ecx, edi
// 0053c3a8  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0053c3ac  c1e20d               shl edx, 0xd
// 0053c3af  894c2444             mov dword ptr [esp + 0x44], ecx
// 0053c3b3  8d0c2a               lea ecx, [edx + ebp]
// 0053c3b6  2bd5                 sub edx, ebp
// 0053c3b8  897c2440             mov dword ptr [esp + 0x40], edi
// 0053c3bc  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 0053c3c1  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 0053c3c5  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053c3c9  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0053c3cd  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 0053c3d4  89542438             mov dword ptr [esp + 0x38], edx
// 0053c3d8  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0053c3dc  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 0053c3e3  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 0053c3e7  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0053c3eb  8d1c39               lea ebx, [ecx + edi]
// 0053c3ee  895c2420             mov dword ptr [esp + 0x20], ebx
// 0053c3f2  8d1c32               lea ebx, [edx + esi]
// 0053c3f5  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053c3f9  8d2c3a               lea ebp, [edx + edi]
// 0053c3fc  69ff0b300000         imul edi, edi, 0x300b
// 0053c402  69d2b3410000         imul edx, edx, 0x41b3
// 0053c408  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0053c40c  8d1c31               lea ebx, [ecx + esi]
// 0053c40f  69c98e090000         imul ecx, ecx, 0x98e
// 0053c415  69f654620000         imul esi, esi, 0x6254
// 0053c41b  03eb                 add ebp, ebx
// 0053c41d  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 0053c423  69eda1250000         imul ebp, ebp, 0x25a1
// 0053c429  896c2430             mov dword ptr [esp + 0x30], ebp
// 0053c42d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053c431  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0053c437  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053c43b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053c43f  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0053c445  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053c449  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0053c44d  2beb                 sub ebp, ebx
// 0053c44f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0053c453  69db7c0c0000         imul ebx, ebx, 0xc7c
// 0053c459  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053c45d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0053c461  03742418             add esi, dword ptr [esp + 0x18]
// 0053c465  2beb                 sub ebp, ebx
// 0053c467  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053c46b  03742410             add esi, dword ptr [esp + 0x10]
// 0053c46f  03fd                 add edi, ebp
// 0053c471  03cb                 add ecx, ebx
// 0053c473  034c2418             add ecx, dword ptr [esp + 0x18]
// 0053c477  03fb                 add edi, ebx
// 0053c479  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0053c47d  03d5                 add edx, ebp
// 0053c47f  03542410             add edx, dword ptr [esp + 0x10]
// 0053c483  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0053c48a  2bdf                 sub ebx, edi
// 0053c48c  c1fd0b               sar ebp, 0xb
// 0053c48f  81c300040000         add ebx, 0x400
// 0053c495  8928                 mov dword ptr [eax], ebp
// 0053c497  c1fb0b               sar ebx, 0xb
// 0053c49a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0053c49e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 0053c4a4  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0053c4ab  2bfe                 sub edi, esi
// 0053c4ad  8b742438             mov esi, dword ptr [esp + 0x38]
// 0053c4b1  81c700040000         add edi, 0x400
// 0053c4b7  c1ff0b               sar edi, 0xb
// 0053c4ba  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 0053c4c0  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 0053c4c7  2bf2                 sub esi, edx
// 0053c4c9  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053c4cd  81c600040000         add esi, 0x400
// 0053c4d3  c1fe0b               sar esi, 0xb
// 0053c4d6  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0053c4dc  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 0053c4e3  2bd1                 sub edx, ecx
// 0053c4e5  c1fb0b               sar ebx, 0xb
// 0053c4e8  c1fe0b               sar esi, 0xb
// 0053c4eb  81c200040000         add edx, 0x400
// 0053c4f1  c1ff0b               sar edi, 0xb
// 0053c4f4  c1fa0b               sar edx, 0xb
// 0053c4f7  895820               mov dword ptr [eax + 0x20], ebx
// 0053c4fa  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053c4fe  897060               mov dword ptr [eax + 0x60], esi
// 0053c501  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053c505  899080000000         mov dword ptr [eax + 0x80], edx
// 0053c50b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0053c50f  897840               mov dword ptr [eax + 0x40], edi
// 0053c512  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053c516  49                   dec ecx
// 0053c517  83c602               add esi, 2
// 0053c51a  83c304               add ebx, 4
// 0053c51d  83c004               add eax, 4
// 0053c520  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053c524  89742424             mov dword ptr [esp + 0x24], esi
// 0053c528  894c2434             mov dword ptr [esp + 0x34], ecx
// 0053c52c  85c9                 test ecx, ecx
// 0053c52e  0f8fbffdffff         jg 0x53c2f3
// 0053c534  33ff                 xor edi, edi
// 0053c536  8d4c2448             lea ecx, [esp + 0x48]
// 0053c53a  897c2434             mov dword ptr [esp + 0x34], edi
// 0053c53e  8bff                 mov edi, edi
// 0053c540  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 0053c547  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053c54a  8b7104               mov esi, dword ptr [ecx + 4]
// 0053c54d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 0053c554  85f6                 test esi, esi
// 0053c556  7548                 jne 0x53c5a0
// 0053c558  397108               cmp dword ptr [ecx + 8], esi
// 0053c55b  7543                 jne 0x53c5a0
// 0053c55d  39710c               cmp dword ptr [ecx + 0xc], esi
// 0053c560  753e                 jne 0x53c5a0
// 0053c562  397110               cmp dword ptr [ecx + 0x10], esi
// 0053c565  7539                 jne 0x53c5a0
// 0053c567  397114               cmp dword ptr [ecx + 0x14], esi
// 0053c56a  7534                 jne 0x53c5a0
// 0053c56c  397118               cmp dword ptr [ecx + 0x18], esi
// 0053c56f  752f                 jne 0x53c5a0
// 0053c571  39711c               cmp dword ptr [ecx + 0x1c], esi
// 0053c574  752a                 jne 0x53c5a0
// 0053c576  8b31                 mov esi, dword ptr [ecx]
// 0053c578  83c610               add esi, 0x10
// 0053c57b  c1fe05               sar esi, 5
// 0053c57e  81e6ff030000         and esi, 0x3ff
// 0053c584  8a1c16               mov bl, byte ptr [esi + edx]
// 0053c587  8818                 mov byte ptr [eax], bl
// 0053c589  885801               mov byte ptr [eax + 1], bl
// 0053c58c  885802               mov byte ptr [eax + 2], bl
// 0053c58f  885803               mov byte ptr [eax + 3], bl
// 0053c592  885805               mov byte ptr [eax + 5], bl
// 0053c595  885806               mov byte ptr [eax + 6], bl
// 0053c598  885807               mov byte ptr [eax + 7], bl
// 0053c59b  e9fb010000           jmp 0x53c79b
// 0053c5a0  8b5108               mov edx, dword ptr [ecx + 8]
// 0053c5a3  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0053c5a6  8d3c16               lea edi, [esi + edx]
// 0053c5a9  69d27e180000         imul edx, edx, 0x187e
// 0053c5af  69f6213b0000         imul esi, esi, 0x3b21
// 0053c5b5  69ff51110000         imul edi, edi, 0x1151
// 0053c5bb  03d7                 add edx, edi
// 0053c5bd  8bea                 mov ebp, edx
// 0053c5bf  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0053c5c2  8bdf                 mov ebx, edi
// 0053c5c4  2bde                 sub ebx, esi
// 0053c5c6  8b31                 mov esi, dword ptr [ecx]
// 0053c5c8  8d3c16               lea edi, [esi + edx]
// 0053c5cb  2bf2                 sub esi, edx
// 0053c5cd  c1e60d               shl esi, 0xd
// 0053c5d0  c1e70d               shl edi, 0xd
// 0053c5d3  8bd6                 mov edx, esi
// 0053c5d5  8d342f               lea esi, [edi + ebp]
// 0053c5d8  2bfd                 sub edi, ebp
// 0053c5da  8d2c1a               lea ebp, [edx + ebx]
// 0053c5dd  2bd3                 sub edx, ebx
// 0053c5df  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0053c5e2  89542438             mov dword ptr [esp + 0x38], edx
// 0053c5e6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0053c5e9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0053c5ed  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0053c5f0  89542424             mov dword ptr [esp + 0x24], edx
// 0053c5f4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053c5f8  8b5904               mov ebx, dword ptr [ecx + 4]
// 0053c5fb  03d3                 add edx, ebx
// 0053c5fd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0053c601  89542420             mov dword ptr [esp + 0x20], edx
// 0053c605  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053c609  03da                 add ebx, edx
// 0053c60b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053c60f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053c613  03da                 add ebx, edx
// 0053c615  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053c619  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053c61d  8b5904               mov ebx, dword ptr [ecx + 4]
// 0053c620  03da                 add ebx, edx
// 0053c622  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053c626  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0053c62a  03da                 add ebx, edx
// 0053c62c  69d2c53e0000         imul edx, edx, 0x3ec5
// 0053c632  69dba1250000         imul ebx, ebx, 0x25a1
// 0053c638  895c2430             mov dword ptr [esp + 0x30], ebx
// 0053c63c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053c640  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 0053c646  895c2420             mov dword ptr [esp + 0x20], ebx
// 0053c64a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053c64e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 0053c654  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053c658  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0053c65c  2bda                 sub ebx, edx
// 0053c65e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053c662  69d27c0c0000         imul edx, edx, 0xc7c
// 0053c668  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053c66c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0053c670  2bda                 sub ebx, edx
// 0053c672  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053c676  69d28e090000         imul edx, edx, 0x98e
// 0053c67c  03542420             add edx, dword ptr [esp + 0x20]
// 0053c680  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0053c684  03542418             add edx, dword ptr [esp + 0x18]
// 0053c688  89542424             mov dword ptr [esp + 0x24], edx
// 0053c68c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053c690  69d2b3410000         imul edx, edx, 0x41b3
// 0053c696  03d3                 add edx, ebx
// 0053c698  03542410             add edx, dword ptr [esp + 0x10]
// 0053c69c  89542428             mov dword ptr [esp + 0x28], edx
// 0053c6a0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053c6a4  69d254620000         imul edx, edx, 0x6254
// 0053c6aa  03542418             add edx, dword ptr [esp + 0x18]
// 0053c6ae  03542410             add edx, dword ptr [esp + 0x10]
// 0053c6b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0053c6b6  8b5104               mov edx, dword ptr [ecx + 4]
// 0053c6b9  69d20b300000         imul edx, edx, 0x300b
// 0053c6bf  03d3                 add edx, ebx
// 0053c6c1  03542420             add edx, dword ptr [esp + 0x20]
// 0053c6c5  89542414             mov dword ptr [esp + 0x14], edx
// 0053c6c9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 0053c6d0  2b742414             sub esi, dword ptr [esp + 0x14]
// 0053c6d4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0053c6d8  c1fb12               sar ebx, 0x12
// 0053c6db  81e3ff030000         and ebx, 0x3ff
// 0053c6e1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0053c6e5  8818                 mov byte ptr [eax], bl
// 0053c6e7  81c600000200         add esi, 0x20000
// 0053c6ed  c1fe12               sar esi, 0x12
// 0053c6f0  81e6ff030000         and esi, 0x3ff
// 0053c6f6  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0053c6fa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0053c6fe  885807               mov byte ptr [eax + 7], bl
// 0053c701  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0053c708  c1fb12               sar ebx, 0x12
// 0053c70b  81e3ff030000         and ebx, 0x3ff
// 0053c711  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0053c715  2bee                 sub ebp, esi
// 0053c717  8b742438             mov esi, dword ptr [esp + 0x38]
// 0053c71b  885801               mov byte ptr [eax + 1], bl
// 0053c71e  81c500000200         add ebp, 0x20000
// 0053c724  c1fd12               sar ebp, 0x12
// 0053c727  81e5ff030000         and ebp, 0x3ff
// 0053c72d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 0053c731  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053c735  885806               mov byte ptr [eax + 6], bl
// 0053c738  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0053c73f  c1fb12               sar ebx, 0x12
// 0053c742  81e3ff030000         and ebx, 0x3ff
// 0053c748  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0053c74c  2bf5                 sub esi, ebp
// 0053c74e  81c600000200         add esi, 0x20000
// 0053c754  885802               mov byte ptr [eax + 2], bl
// 0053c757  c1fe12               sar esi, 0x12
// 0053c75a  81e6ff030000         and esi, 0x3ff
// 0053c760  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0053c764  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053c768  885805               mov byte ptr [eax + 5], bl
// 0053c76b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 0053c772  c1fb12               sar ebx, 0x12
// 0053c775  2bfe                 sub edi, esi
// 0053c777  81e3ff030000         and ebx, 0x3ff
// 0053c77d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0053c781  81c700000200         add edi, 0x20000
// 0053c787  c1ff12               sar edi, 0x12
// 0053c78a  81e7ff030000         and edi, 0x3ff
// 0053c790  885803               mov byte ptr [eax + 3], bl
// 0053c793  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0053c797  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0053c79b  47                   inc edi
// 0053c79c  83c120               add ecx, 0x20
// 0053c79f  83ff08               cmp edi, 8
// 0053c7a2  885804               mov byte ptr [eax + 4], bl
// 0053c7a5  897c2434             mov dword ptr [esp + 0x34], edi
// 0053c7a9  0f8c91fdffff         jl 0x53c540
// 0053c7af  5f                   pop edi
// 0053c7b0  5e                   pop esi
// 0053c7b1  5d                   pop ebp
// 0053c7b2  5b                   pop ebx
// 0053c7b3  81c438010000         add esp, 0x138
// 0053c7b9  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
