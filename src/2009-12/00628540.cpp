// roc 2009-12 00628540  unit: seg_00620000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00628540
//
// 00628540  81ec38010000         sub esp, 0x138
// 00628546  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0062854d  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00628553  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0062855a  53                   push ebx
// 0062855b  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0062855e  55                   push ebp
// 0062855f  56                   push esi
// 00628560  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 00628567  83ea80               sub edx, -0x80
// 0062856a  57                   push edi
// 0062856b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0062856f  89742424             mov dword ptr [esp + 0x24], esi
// 00628573  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00628577  8d442448             lea eax, [esp + 0x48]
// 0062857b  c744243408000000     mov dword ptr [esp + 0x34], 8
// 00628583  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 00628587  894c2428             mov dword ptr [esp + 0x28], ecx
// 0062858b  6685c9               test cx, cx
// 0062858e  7556                 jne 0x6285e6
// 00628590  66394e20             cmp word ptr [esi + 0x20], cx
// 00628594  7550                 jne 0x6285e6
// 00628596  66394e30             cmp word ptr [esi + 0x30], cx
// 0062859a  754a                 jne 0x6285e6
// 0062859c  66394e40             cmp word ptr [esi + 0x40], cx
// 006285a0  7544                 jne 0x6285e6
// 006285a2  66394e50             cmp word ptr [esi + 0x50], cx
// 006285a6  753e                 jne 0x6285e6
// 006285a8  66394e60             cmp word ptr [esi + 0x60], cx
// 006285ac  7538                 jne 0x6285e6
// 006285ae  66394e70             cmp word ptr [esi + 0x70], cx
// 006285b2  7532                 jne 0x6285e6
// 006285b4  0fbf0e               movsx ecx, word ptr [esi]
// 006285b7  0faf0b               imul ecx, dword ptr [ebx]
// 006285ba  03c9                 add ecx, ecx
// 006285bc  03c9                 add ecx, ecx
// 006285be  8908                 mov dword ptr [eax], ecx
// 006285c0  894820               mov dword ptr [eax + 0x20], ecx
// 006285c3  894840               mov dword ptr [eax + 0x40], ecx
// 006285c6  894860               mov dword ptr [eax + 0x60], ecx
// 006285c9  898880000000         mov dword ptr [eax + 0x80], ecx
// 006285cf  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 006285d5  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 006285db  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 006285e1  e9bc010000           jmp 0x6287a2
// 006285e6  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 006285ea  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 006285ee  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 006285f2  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 006285f9  8d3c0a               lea edi, [edx + ecx]
// 006285fc  69d2213b0000         imul edx, edx, 0x3b21
// 00628602  69c97e180000         imul ecx, ecx, 0x187e
// 00628608  69ff51110000         imul edi, edi, 0x1151
// 0062860e  03cf                 add ecx, edi
// 00628610  8bef                 mov ebp, edi
// 00628612  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 00628616  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0062861d  2bea                 sub ebp, edx
// 0062861f  0fbf16               movsx edx, word ptr [esi]
// 00628622  0faf13               imul edx, dword ptr [ebx]
// 00628625  897c2418             mov dword ptr [esp + 0x18], edi
// 00628629  03fa                 add edi, edx
// 0062862b  2b542418             sub edx, dword ptr [esp + 0x18]
// 0062862f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00628633  c1e70d               shl edi, 0xd
// 00628636  03cf                 add ecx, edi
// 00628638  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0062863c  c1e20d               shl edx, 0xd
// 0062863f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00628643  8d0c2a               lea ecx, [edx + ebp]
// 00628646  2bd5                 sub edx, ebp
// 00628648  897c2440             mov dword ptr [esp + 0x40], edi
// 0062864c  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 00628651  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 00628655  894c2414             mov dword ptr [esp + 0x14], ecx
// 00628659  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0062865d  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 00628664  89542438             mov dword ptr [esp + 0x38], edx
// 00628668  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0062866c  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 00628673  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 00628677  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0062867b  8d1c39               lea ebx, [ecx + edi]
// 0062867e  895c2420             mov dword ptr [esp + 0x20], ebx
// 00628682  8d1c32               lea ebx, [edx + esi]
// 00628685  895c2410             mov dword ptr [esp + 0x10], ebx
// 00628689  8d2c3a               lea ebp, [edx + edi]
// 0062868c  69ff0b300000         imul edi, edi, 0x300b
// 00628692  69d2b3410000         imul edx, edx, 0x41b3
// 00628698  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0062869c  8d1c31               lea ebx, [ecx + esi]
// 0062869f  69c98e090000         imul ecx, ecx, 0x98e
// 006286a5  69f654620000         imul esi, esi, 0x6254
// 006286ab  03eb                 add ebp, ebx
// 006286ad  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 006286b3  69eda1250000         imul ebp, ebp, 0x25a1
// 006286b9  896c2430             mov dword ptr [esp + 0x30], ebp
// 006286bd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006286c1  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 006286c7  896c2420             mov dword ptr [esp + 0x20], ebp
// 006286cb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006286cf  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 006286d5  896c2410             mov dword ptr [esp + 0x10], ebp
// 006286d9  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 006286dd  2beb                 sub ebp, ebx
// 006286df  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006286e3  69db7c0c0000         imul ebx, ebx, 0xc7c
// 006286e9  896c2418             mov dword ptr [esp + 0x18], ebp
// 006286ed  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 006286f1  03742418             add esi, dword ptr [esp + 0x18]
// 006286f5  2beb                 sub ebp, ebx
// 006286f7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006286fb  03742410             add esi, dword ptr [esp + 0x10]
// 006286ff  03fd                 add edi, ebp
// 00628701  03cb                 add ecx, ebx
// 00628703  034c2418             add ecx, dword ptr [esp + 0x18]
// 00628707  03fb                 add edi, ebx
// 00628709  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0062870d  03d5                 add edx, ebp
// 0062870f  03542410             add edx, dword ptr [esp + 0x10]
// 00628713  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0062871a  2bdf                 sub ebx, edi
// 0062871c  c1fd0b               sar ebp, 0xb
// 0062871f  81c300040000         add ebx, 0x400
// 00628725  8928                 mov dword ptr [eax], ebp
// 00628727  c1fb0b               sar ebx, 0xb
// 0062872a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0062872e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 00628734  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0062873b  2bfe                 sub edi, esi
// 0062873d  8b742438             mov esi, dword ptr [esp + 0x38]
// 00628741  81c700040000         add edi, 0x400
// 00628747  c1ff0b               sar edi, 0xb
// 0062874a  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 00628750  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 00628757  2bf2                 sub esi, edx
// 00628759  8b542440             mov edx, dword ptr [esp + 0x40]
// 0062875d  81c600040000         add esi, 0x400
// 00628763  c1fe0b               sar esi, 0xb
// 00628766  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0062876c  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 00628773  2bd1                 sub edx, ecx
// 00628775  c1fb0b               sar ebx, 0xb
// 00628778  c1fe0b               sar esi, 0xb
// 0062877b  81c200040000         add edx, 0x400
// 00628781  c1ff0b               sar edi, 0xb
// 00628784  c1fa0b               sar edx, 0xb
// 00628787  895820               mov dword ptr [eax + 0x20], ebx
// 0062878a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062878e  897060               mov dword ptr [eax + 0x60], esi
// 00628791  8b742424             mov esi, dword ptr [esp + 0x24]
// 00628795  899080000000         mov dword ptr [eax + 0x80], edx
// 0062879b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0062879f  897840               mov dword ptr [eax + 0x40], edi
// 006287a2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006287a6  49                   dec ecx
// 006287a7  83c602               add esi, 2
// 006287aa  83c304               add ebx, 4
// 006287ad  83c004               add eax, 4
// 006287b0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006287b4  89742424             mov dword ptr [esp + 0x24], esi
// 006287b8  894c2434             mov dword ptr [esp + 0x34], ecx
// 006287bc  85c9                 test ecx, ecx
// 006287be  0f8fbffdffff         jg 0x628583
// 006287c4  33ff                 xor edi, edi
// 006287c6  8d4c2448             lea ecx, [esp + 0x48]
// 006287ca  897c2434             mov dword ptr [esp + 0x34], edi
// 006287ce  8bff                 mov edi, edi
// 006287d0  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 006287d7  8b04b8               mov eax, dword ptr [eax + edi*4]
// 006287da  8b7104               mov esi, dword ptr [ecx + 4]
// 006287dd  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 006287e4  85f6                 test esi, esi
// 006287e6  7548                 jne 0x628830
// 006287e8  397108               cmp dword ptr [ecx + 8], esi
// 006287eb  7543                 jne 0x628830
// 006287ed  39710c               cmp dword ptr [ecx + 0xc], esi
// 006287f0  753e                 jne 0x628830
// 006287f2  397110               cmp dword ptr [ecx + 0x10], esi
// 006287f5  7539                 jne 0x628830
// 006287f7  397114               cmp dword ptr [ecx + 0x14], esi
// 006287fa  7534                 jne 0x628830
// 006287fc  397118               cmp dword ptr [ecx + 0x18], esi
// 006287ff  752f                 jne 0x628830
// 00628801  39711c               cmp dword ptr [ecx + 0x1c], esi
// 00628804  752a                 jne 0x628830
// 00628806  8b31                 mov esi, dword ptr [ecx]
// 00628808  83c610               add esi, 0x10
// 0062880b  c1fe05               sar esi, 5
// 0062880e  81e6ff030000         and esi, 0x3ff
// 00628814  8a1c16               mov bl, byte ptr [esi + edx]
// 00628817  8818                 mov byte ptr [eax], bl
// 00628819  885801               mov byte ptr [eax + 1], bl
// 0062881c  885802               mov byte ptr [eax + 2], bl
// 0062881f  885803               mov byte ptr [eax + 3], bl
// 00628822  885805               mov byte ptr [eax + 5], bl
// 00628825  885806               mov byte ptr [eax + 6], bl
// 00628828  885807               mov byte ptr [eax + 7], bl
// 0062882b  e9fb010000           jmp 0x628a2b
// 00628830  8b5108               mov edx, dword ptr [ecx + 8]
// 00628833  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00628836  8d3c16               lea edi, [esi + edx]
// 00628839  69d27e180000         imul edx, edx, 0x187e
// 0062883f  69f6213b0000         imul esi, esi, 0x3b21
// 00628845  69ff51110000         imul edi, edi, 0x1151
// 0062884b  03d7                 add edx, edi
// 0062884d  8bea                 mov ebp, edx
// 0062884f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00628852  8bdf                 mov ebx, edi
// 00628854  2bde                 sub ebx, esi
// 00628856  8b31                 mov esi, dword ptr [ecx]
// 00628858  8d3c16               lea edi, [esi + edx]
// 0062885b  2bf2                 sub esi, edx
// 0062885d  c1e60d               shl esi, 0xd
// 00628860  c1e70d               shl edi, 0xd
// 00628863  8bd6                 mov edx, esi
// 00628865  8d342f               lea esi, [edi + ebp]
// 00628868  2bfd                 sub edi, ebp
// 0062886a  8d2c1a               lea ebp, [edx + ebx]
// 0062886d  2bd3                 sub edx, ebx
// 0062886f  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 00628872  89542438             mov dword ptr [esp + 0x38], edx
// 00628876  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00628879  895c2428             mov dword ptr [esp + 0x28], ebx
// 0062887d  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00628880  89542424             mov dword ptr [esp + 0x24], edx
// 00628884  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00628888  8b5904               mov ebx, dword ptr [ecx + 4]
// 0062888b  03d3                 add edx, ebx
// 0062888d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00628891  89542420             mov dword ptr [esp + 0x20], edx
// 00628895  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00628899  03da                 add ebx, edx
// 0062889b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0062889f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006288a3  03da                 add ebx, edx
// 006288a5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006288a9  895c2418             mov dword ptr [esp + 0x18], ebx
// 006288ad  8b5904               mov ebx, dword ptr [ecx + 4]
// 006288b0  03da                 add ebx, edx
// 006288b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006288b6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006288ba  03da                 add ebx, edx
// 006288bc  69d2c53e0000         imul edx, edx, 0x3ec5
// 006288c2  69dba1250000         imul ebx, ebx, 0x25a1
// 006288c8  895c2430             mov dword ptr [esp + 0x30], ebx
// 006288cc  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006288d0  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 006288d6  895c2420             mov dword ptr [esp + 0x20], ebx
// 006288da  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006288de  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 006288e4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006288e8  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006288ec  2bda                 sub ebx, edx
// 006288ee  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006288f2  69d27c0c0000         imul edx, edx, 0xc7c
// 006288f8  895c2418             mov dword ptr [esp + 0x18], ebx
// 006288fc  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00628900  2bda                 sub ebx, edx
// 00628902  8b542424             mov edx, dword ptr [esp + 0x24]
// 00628906  69d28e090000         imul edx, edx, 0x98e
// 0062890c  03542420             add edx, dword ptr [esp + 0x20]
// 00628910  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00628914  03542418             add edx, dword ptr [esp + 0x18]
// 00628918  89542424             mov dword ptr [esp + 0x24], edx
// 0062891c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00628920  69d2b3410000         imul edx, edx, 0x41b3
// 00628926  03d3                 add edx, ebx
// 00628928  03542410             add edx, dword ptr [esp + 0x10]
// 0062892c  89542428             mov dword ptr [esp + 0x28], edx
// 00628930  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00628934  69d254620000         imul edx, edx, 0x6254
// 0062893a  03542418             add edx, dword ptr [esp + 0x18]
// 0062893e  03542410             add edx, dword ptr [esp + 0x10]
// 00628942  8954241c             mov dword ptr [esp + 0x1c], edx
// 00628946  8b5104               mov edx, dword ptr [ecx + 4]
// 00628949  69d20b300000         imul edx, edx, 0x300b
// 0062894f  03d3                 add edx, ebx
// 00628951  03542420             add edx, dword ptr [esp + 0x20]
// 00628955  89542414             mov dword ptr [esp + 0x14], edx
// 00628959  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 00628960  2b742414             sub esi, dword ptr [esp + 0x14]
// 00628964  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00628968  c1fb12               sar ebx, 0x12
// 0062896b  81e3ff030000         and ebx, 0x3ff
// 00628971  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00628975  8818                 mov byte ptr [eax], bl
// 00628977  81c600000200         add esi, 0x20000
// 0062897d  c1fe12               sar esi, 0x12
// 00628980  81e6ff030000         and esi, 0x3ff
// 00628986  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0062898a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0062898e  885807               mov byte ptr [eax + 7], bl
// 00628991  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 00628998  c1fb12               sar ebx, 0x12
// 0062899b  81e3ff030000         and ebx, 0x3ff
// 006289a1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 006289a5  2bee                 sub ebp, esi
// 006289a7  8b742438             mov esi, dword ptr [esp + 0x38]
// 006289ab  885801               mov byte ptr [eax + 1], bl
// 006289ae  81c500000200         add ebp, 0x20000
// 006289b4  c1fd12               sar ebp, 0x12
// 006289b7  81e5ff030000         and ebp, 0x3ff
// 006289bd  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 006289c1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006289c5  885806               mov byte ptr [eax + 6], bl
// 006289c8  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 006289cf  c1fb12               sar ebx, 0x12
// 006289d2  81e3ff030000         and ebx, 0x3ff
// 006289d8  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 006289dc  2bf5                 sub esi, ebp
// 006289de  81c600000200         add esi, 0x20000
// 006289e4  885802               mov byte ptr [eax + 2], bl
// 006289e7  c1fe12               sar esi, 0x12
// 006289ea  81e6ff030000         and esi, 0x3ff
// 006289f0  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 006289f4  8b742424             mov esi, dword ptr [esp + 0x24]
// 006289f8  885805               mov byte ptr [eax + 5], bl
// 006289fb  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 00628a02  c1fb12               sar ebx, 0x12
// 00628a05  2bfe                 sub edi, esi
// 00628a07  81e3ff030000         and ebx, 0x3ff
// 00628a0d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00628a11  81c700000200         add edi, 0x20000
// 00628a17  c1ff12               sar edi, 0x12
// 00628a1a  81e7ff030000         and edi, 0x3ff
// 00628a20  885803               mov byte ptr [eax + 3], bl
// 00628a23  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00628a27  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00628a2b  47                   inc edi
// 00628a2c  83c120               add ecx, 0x20
// 00628a2f  83ff08               cmp edi, 8
// 00628a32  885804               mov byte ptr [eax + 4], bl
// 00628a35  897c2434             mov dword ptr [esp + 0x34], edi
// 00628a39  0f8c91fdffff         jl 0x6287d0
// 00628a3f  5f                   pop edi
// 00628a40  5e                   pop esi
// 00628a41  5d                   pop ebp
// 00628a42  5b                   pop ebx
// 00628a43  81c438010000         add esp, 0x138
// 00628a49  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
