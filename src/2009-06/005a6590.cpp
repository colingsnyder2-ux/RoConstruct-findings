// roc 2009-06 005a6590  unit: seg_005a0000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a6590
//
// 005a6590  81ec38010000         sub esp, 0x138
// 005a6596  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 005a659d  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 005a65a3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 005a65aa  53                   push ebx
// 005a65ab  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 005a65ae  55                   push ebp
// 005a65af  56                   push esi
// 005a65b0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 005a65b7  83ea80               sub edx, -0x80
// 005a65ba  57                   push edi
// 005a65bb  8954243c             mov dword ptr [esp + 0x3c], edx
// 005a65bf  89742424             mov dword ptr [esp + 0x24], esi
// 005a65c3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a65c7  8d442448             lea eax, [esp + 0x48]
// 005a65cb  c744243408000000     mov dword ptr [esp + 0x34], 8
// 005a65d3  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 005a65d7  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a65db  6685c9               test cx, cx
// 005a65de  7556                 jne 0x5a6636
// 005a65e0  66394e20             cmp word ptr [esi + 0x20], cx
// 005a65e4  7550                 jne 0x5a6636
// 005a65e6  66394e30             cmp word ptr [esi + 0x30], cx
// 005a65ea  754a                 jne 0x5a6636
// 005a65ec  66394e40             cmp word ptr [esi + 0x40], cx
// 005a65f0  7544                 jne 0x5a6636
// 005a65f2  66394e50             cmp word ptr [esi + 0x50], cx
// 005a65f6  753e                 jne 0x5a6636
// 005a65f8  66394e60             cmp word ptr [esi + 0x60], cx
// 005a65fc  7538                 jne 0x5a6636
// 005a65fe  66394e70             cmp word ptr [esi + 0x70], cx
// 005a6602  7532                 jne 0x5a6636
// 005a6604  0fbf0e               movsx ecx, word ptr [esi]
// 005a6607  0faf0b               imul ecx, dword ptr [ebx]
// 005a660a  03c9                 add ecx, ecx
// 005a660c  03c9                 add ecx, ecx
// 005a660e  8908                 mov dword ptr [eax], ecx
// 005a6610  894820               mov dword ptr [eax + 0x20], ecx
// 005a6613  894840               mov dword ptr [eax + 0x40], ecx
// 005a6616  894860               mov dword ptr [eax + 0x60], ecx
// 005a6619  898880000000         mov dword ptr [eax + 0x80], ecx
// 005a661f  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 005a6625  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 005a662b  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 005a6631  e9bc010000           jmp 0x5a67f2
// 005a6636  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 005a663a  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 005a663e  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 005a6642  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 005a6649  8d3c0a               lea edi, [edx + ecx]
// 005a664c  69d2213b0000         imul edx, edx, 0x3b21
// 005a6652  69c97e180000         imul ecx, ecx, 0x187e
// 005a6658  69ff51110000         imul edi, edi, 0x1151
// 005a665e  03cf                 add ecx, edi
// 005a6660  8bef                 mov ebp, edi
// 005a6662  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 005a6666  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 005a666d  2bea                 sub ebp, edx
// 005a666f  0fbf16               movsx edx, word ptr [esi]
// 005a6672  0faf13               imul edx, dword ptr [ebx]
// 005a6675  897c2418             mov dword ptr [esp + 0x18], edi
// 005a6679  03fa                 add edi, edx
// 005a667b  2b542418             sub edx, dword ptr [esp + 0x18]
// 005a667f  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a6683  c1e70d               shl edi, 0xd
// 005a6686  03cf                 add ecx, edi
// 005a6688  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 005a668c  c1e20d               shl edx, 0xd
// 005a668f  894c2444             mov dword ptr [esp + 0x44], ecx
// 005a6693  8d0c2a               lea ecx, [edx + ebp]
// 005a6696  2bd5                 sub edx, ebp
// 005a6698  897c2440             mov dword ptr [esp + 0x40], edi
// 005a669c  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 005a66a1  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 005a66a5  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a66a9  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 005a66ad  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 005a66b4  89542438             mov dword ptr [esp + 0x38], edx
// 005a66b8  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 005a66bc  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 005a66c3  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 005a66c7  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 005a66cb  8d1c39               lea ebx, [ecx + edi]
// 005a66ce  895c2420             mov dword ptr [esp + 0x20], ebx
// 005a66d2  8d1c32               lea ebx, [edx + esi]
// 005a66d5  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a66d9  8d2c3a               lea ebp, [edx + edi]
// 005a66dc  69ff0b300000         imul edi, edi, 0x300b
// 005a66e2  69d2b3410000         imul edx, edx, 0x41b3
// 005a66e8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 005a66ec  8d1c31               lea ebx, [ecx + esi]
// 005a66ef  69c98e090000         imul ecx, ecx, 0x98e
// 005a66f5  69f654620000         imul esi, esi, 0x6254
// 005a66fb  03eb                 add ebp, ebx
// 005a66fd  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 005a6703  69eda1250000         imul ebp, ebp, 0x25a1
// 005a6709  896c2430             mov dword ptr [esp + 0x30], ebp
// 005a670d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a6711  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 005a6717  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a671b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a671f  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 005a6725  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a6729  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005a672d  2beb                 sub ebp, ebx
// 005a672f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005a6733  69db7c0c0000         imul ebx, ebx, 0xc7c
// 005a6739  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a673d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005a6741  03742418             add esi, dword ptr [esp + 0x18]
// 005a6745  2beb                 sub ebp, ebx
// 005a6747  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005a674b  03742410             add esi, dword ptr [esp + 0x10]
// 005a674f  03fd                 add edi, ebp
// 005a6751  03cb                 add ecx, ebx
// 005a6753  034c2418             add ecx, dword ptr [esp + 0x18]
// 005a6757  03fb                 add edi, ebx
// 005a6759  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005a675d  03d5                 add edx, ebp
// 005a675f  03542410             add edx, dword ptr [esp + 0x10]
// 005a6763  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 005a676a  2bdf                 sub ebx, edi
// 005a676c  c1fd0b               sar ebp, 0xb
// 005a676f  81c300040000         add ebx, 0x400
// 005a6775  8928                 mov dword ptr [eax], ebp
// 005a6777  c1fb0b               sar ebx, 0xb
// 005a677a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005a677e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 005a6784  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 005a678b  2bfe                 sub edi, esi
// 005a678d  8b742438             mov esi, dword ptr [esp + 0x38]
// 005a6791  81c700040000         add edi, 0x400
// 005a6797  c1ff0b               sar edi, 0xb
// 005a679a  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 005a67a0  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 005a67a7  2bf2                 sub esi, edx
// 005a67a9  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a67ad  81c600040000         add esi, 0x400
// 005a67b3  c1fe0b               sar esi, 0xb
// 005a67b6  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 005a67bc  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 005a67c3  2bd1                 sub edx, ecx
// 005a67c5  c1fb0b               sar ebx, 0xb
// 005a67c8  c1fe0b               sar esi, 0xb
// 005a67cb  81c200040000         add edx, 0x400
// 005a67d1  c1ff0b               sar edi, 0xb
// 005a67d4  c1fa0b               sar edx, 0xb
// 005a67d7  895820               mov dword ptr [eax + 0x20], ebx
// 005a67da  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a67de  897060               mov dword ptr [eax + 0x60], esi
// 005a67e1  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a67e5  899080000000         mov dword ptr [eax + 0x80], edx
// 005a67eb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005a67ef  897840               mov dword ptr [eax + 0x40], edi
// 005a67f2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a67f6  49                   dec ecx
// 005a67f7  83c602               add esi, 2
// 005a67fa  83c304               add ebx, 4
// 005a67fd  83c004               add eax, 4
// 005a6800  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a6804  89742424             mov dword ptr [esp + 0x24], esi
// 005a6808  894c2434             mov dword ptr [esp + 0x34], ecx
// 005a680c  85c9                 test ecx, ecx
// 005a680e  0f8fbffdffff         jg 0x5a65d3
// 005a6814  33ff                 xor edi, edi
// 005a6816  8d4c2448             lea ecx, [esp + 0x48]
// 005a681a  897c2434             mov dword ptr [esp + 0x34], edi
// 005a681e  8bff                 mov edi, edi
// 005a6820  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 005a6827  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005a682a  8b7104               mov esi, dword ptr [ecx + 4]
// 005a682d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 005a6834  85f6                 test esi, esi
// 005a6836  7548                 jne 0x5a6880
// 005a6838  397108               cmp dword ptr [ecx + 8], esi
// 005a683b  7543                 jne 0x5a6880
// 005a683d  39710c               cmp dword ptr [ecx + 0xc], esi
// 005a6840  753e                 jne 0x5a6880
// 005a6842  397110               cmp dword ptr [ecx + 0x10], esi
// 005a6845  7539                 jne 0x5a6880
// 005a6847  397114               cmp dword ptr [ecx + 0x14], esi
// 005a684a  7534                 jne 0x5a6880
// 005a684c  397118               cmp dword ptr [ecx + 0x18], esi
// 005a684f  752f                 jne 0x5a6880
// 005a6851  39711c               cmp dword ptr [ecx + 0x1c], esi
// 005a6854  752a                 jne 0x5a6880
// 005a6856  8b31                 mov esi, dword ptr [ecx]
// 005a6858  83c610               add esi, 0x10
// 005a685b  c1fe05               sar esi, 5
// 005a685e  81e6ff030000         and esi, 0x3ff
// 005a6864  8a1c16               mov bl, byte ptr [esi + edx]
// 005a6867  8818                 mov byte ptr [eax], bl
// 005a6869  885801               mov byte ptr [eax + 1], bl
// 005a686c  885802               mov byte ptr [eax + 2], bl
// 005a686f  885803               mov byte ptr [eax + 3], bl
// 005a6872  885805               mov byte ptr [eax + 5], bl
// 005a6875  885806               mov byte ptr [eax + 6], bl
// 005a6878  885807               mov byte ptr [eax + 7], bl
// 005a687b  e9fb010000           jmp 0x5a6a7b
// 005a6880  8b5108               mov edx, dword ptr [ecx + 8]
// 005a6883  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005a6886  8d3c16               lea edi, [esi + edx]
// 005a6889  69d27e180000         imul edx, edx, 0x187e
// 005a688f  69f6213b0000         imul esi, esi, 0x3b21
// 005a6895  69ff51110000         imul edi, edi, 0x1151
// 005a689b  03d7                 add edx, edi
// 005a689d  8bea                 mov ebp, edx
// 005a689f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005a68a2  8bdf                 mov ebx, edi
// 005a68a4  2bde                 sub ebx, esi
// 005a68a6  8b31                 mov esi, dword ptr [ecx]
// 005a68a8  8d3c16               lea edi, [esi + edx]
// 005a68ab  2bf2                 sub esi, edx
// 005a68ad  c1e60d               shl esi, 0xd
// 005a68b0  c1e70d               shl edi, 0xd
// 005a68b3  8bd6                 mov edx, esi
// 005a68b5  8d342f               lea esi, [edi + ebp]
// 005a68b8  2bfd                 sub edi, ebp
// 005a68ba  8d2c1a               lea ebp, [edx + ebx]
// 005a68bd  2bd3                 sub edx, ebx
// 005a68bf  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 005a68c2  89542438             mov dword ptr [esp + 0x38], edx
// 005a68c6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 005a68c9  895c2428             mov dword ptr [esp + 0x28], ebx
// 005a68cd  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 005a68d0  89542424             mov dword ptr [esp + 0x24], edx
// 005a68d4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a68d8  8b5904               mov ebx, dword ptr [ecx + 4]
// 005a68db  03d3                 add edx, ebx
// 005a68dd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005a68e1  89542420             mov dword ptr [esp + 0x20], edx
// 005a68e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a68e9  03da                 add ebx, edx
// 005a68eb  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a68ef  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a68f3  03da                 add ebx, edx
// 005a68f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a68f9  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a68fd  8b5904               mov ebx, dword ptr [ecx + 4]
// 005a6900  03da                 add ebx, edx
// 005a6902  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a6906  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005a690a  03da                 add ebx, edx
// 005a690c  69d2c53e0000         imul edx, edx, 0x3ec5
// 005a6912  69dba1250000         imul ebx, ebx, 0x25a1
// 005a6918  895c2430             mov dword ptr [esp + 0x30], ebx
// 005a691c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005a6920  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 005a6926  895c2420             mov dword ptr [esp + 0x20], ebx
// 005a692a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a692e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 005a6934  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a6938  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005a693c  2bda                 sub ebx, edx
// 005a693e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a6942  69d27c0c0000         imul edx, edx, 0xc7c
// 005a6948  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a694c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005a6950  2bda                 sub ebx, edx
// 005a6952  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a6956  69d28e090000         imul edx, edx, 0x98e
// 005a695c  03542420             add edx, dword ptr [esp + 0x20]
// 005a6960  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005a6964  03542418             add edx, dword ptr [esp + 0x18]
// 005a6968  89542424             mov dword ptr [esp + 0x24], edx
// 005a696c  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a6970  69d2b3410000         imul edx, edx, 0x41b3
// 005a6976  03d3                 add edx, ebx
// 005a6978  03542410             add edx, dword ptr [esp + 0x10]
// 005a697c  89542428             mov dword ptr [esp + 0x28], edx
// 005a6980  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a6984  69d254620000         imul edx, edx, 0x6254
// 005a698a  03542418             add edx, dword ptr [esp + 0x18]
// 005a698e  03542410             add edx, dword ptr [esp + 0x10]
// 005a6992  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a6996  8b5104               mov edx, dword ptr [ecx + 4]
// 005a6999  69d20b300000         imul edx, edx, 0x300b
// 005a699f  03d3                 add edx, ebx
// 005a69a1  03542420             add edx, dword ptr [esp + 0x20]
// 005a69a5  89542414             mov dword ptr [esp + 0x14], edx
// 005a69a9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 005a69b0  2b742414             sub esi, dword ptr [esp + 0x14]
// 005a69b4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005a69b8  c1fb12               sar ebx, 0x12
// 005a69bb  81e3ff030000         and ebx, 0x3ff
// 005a69c1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005a69c5  8818                 mov byte ptr [eax], bl
// 005a69c7  81c600000200         add esi, 0x20000
// 005a69cd  c1fe12               sar esi, 0x12
// 005a69d0  81e6ff030000         and esi, 0x3ff
// 005a69d6  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 005a69da  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a69de  885807               mov byte ptr [eax + 7], bl
// 005a69e1  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 005a69e8  c1fb12               sar ebx, 0x12
// 005a69eb  81e3ff030000         and ebx, 0x3ff
// 005a69f1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005a69f5  2bee                 sub ebp, esi
// 005a69f7  8b742438             mov esi, dword ptr [esp + 0x38]
// 005a69fb  885801               mov byte ptr [eax + 1], bl
// 005a69fe  81c500000200         add ebp, 0x20000
// 005a6a04  c1fd12               sar ebp, 0x12
// 005a6a07  81e5ff030000         and ebp, 0x3ff
// 005a6a0d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 005a6a11  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a6a15  885806               mov byte ptr [eax + 6], bl
// 005a6a18  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 005a6a1f  c1fb12               sar ebx, 0x12
// 005a6a22  81e3ff030000         and ebx, 0x3ff
// 005a6a28  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005a6a2c  2bf5                 sub esi, ebp
// 005a6a2e  81c600000200         add esi, 0x20000
// 005a6a34  885802               mov byte ptr [eax + 2], bl
// 005a6a37  c1fe12               sar esi, 0x12
// 005a6a3a  81e6ff030000         and esi, 0x3ff
// 005a6a40  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 005a6a44  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a6a48  885805               mov byte ptr [eax + 5], bl
// 005a6a4b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 005a6a52  c1fb12               sar ebx, 0x12
// 005a6a55  2bfe                 sub edi, esi
// 005a6a57  81e3ff030000         and ebx, 0x3ff
// 005a6a5d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005a6a61  81c700000200         add edi, 0x20000
// 005a6a67  c1ff12               sar edi, 0x12
// 005a6a6a  81e7ff030000         and edi, 0x3ff
// 005a6a70  885803               mov byte ptr [eax + 3], bl
// 005a6a73  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 005a6a77  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005a6a7b  47                   inc edi
// 005a6a7c  83c120               add ecx, 0x20
// 005a6a7f  83ff08               cmp edi, 8
// 005a6a82  885804               mov byte ptr [eax + 4], bl
// 005a6a85  897c2434             mov dword ptr [esp + 0x34], edi
// 005a6a89  0f8c91fdffff         jl 0x5a6820
// 005a6a8f  5f                   pop edi
// 005a6a90  5e                   pop esi
// 005a6a91  5d                   pop ebp
// 005a6a92  5b                   pop ebx
// 005a6a93  81c438010000         add esp, 0x138
// 005a6a99  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
