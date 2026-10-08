// from server: 100% by auto
// roc 2011-06 00580390  unit: seg_00580000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00580390
//
// 00580390  81ec38010000         sub esp, 0x138
// 00580396  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0058039d  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 005803a3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 005803aa  53                   push ebx
// 005803ab  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 005803ae  55                   push ebp
// 005803af  56                   push esi
// 005803b0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 005803b7  83ea80               sub edx, -0x80
// 005803ba  57                   push edi
// 005803bb  8954243c             mov dword ptr [esp + 0x3c], edx
// 005803bf  89742424             mov dword ptr [esp + 0x24], esi
// 005803c3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005803c7  8d442448             lea eax, [esp + 0x48]
// 005803cb  c744243408000000     mov dword ptr [esp + 0x34], 8
// 005803d3  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 005803d7  894c2428             mov dword ptr [esp + 0x28], ecx
// 005803db  6685c9               test cx, cx
// 005803de  7556                 jne 0x580436
// 005803e0  66394e20             cmp word ptr [esi + 0x20], cx
// 005803e4  7550                 jne 0x580436
// 005803e6  66394e30             cmp word ptr [esi + 0x30], cx
// 005803ea  754a                 jne 0x580436
// 005803ec  66394e40             cmp word ptr [esi + 0x40], cx
// 005803f0  7544                 jne 0x580436
// 005803f2  66394e50             cmp word ptr [esi + 0x50], cx
// 005803f6  753e                 jne 0x580436
// 005803f8  66394e60             cmp word ptr [esi + 0x60], cx
// 005803fc  7538                 jne 0x580436
// 005803fe  66394e70             cmp word ptr [esi + 0x70], cx
// 00580402  7532                 jne 0x580436
// 00580404  0fbf0e               movsx ecx, word ptr [esi]
// 00580407  0faf0b               imul ecx, dword ptr [ebx]
// 0058040a  03c9                 add ecx, ecx
// 0058040c  03c9                 add ecx, ecx
// 0058040e  8908                 mov dword ptr [eax], ecx
// 00580410  894820               mov dword ptr [eax + 0x20], ecx
// 00580413  894840               mov dword ptr [eax + 0x40], ecx
// 00580416  894860               mov dword ptr [eax + 0x60], ecx
// 00580419  898880000000         mov dword ptr [eax + 0x80], ecx
// 0058041f  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 00580425  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0058042b  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 00580431  e9bc010000           jmp 0x5805f2
// 00580436  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0058043a  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0058043e  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 00580442  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 00580449  8d3c0a               lea edi, [edx + ecx]
// 0058044c  69d2213b0000         imul edx, edx, 0x3b21
// 00580452  69c97e180000         imul ecx, ecx, 0x187e
// 00580458  69ff51110000         imul edi, edi, 0x1151
// 0058045e  03cf                 add ecx, edi
// 00580460  8bef                 mov ebp, edi
// 00580462  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 00580466  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0058046d  2bea                 sub ebp, edx
// 0058046f  0fbf16               movsx edx, word ptr [esi]
// 00580472  0faf13               imul edx, dword ptr [ebx]
// 00580475  897c2418             mov dword ptr [esp + 0x18], edi
// 00580479  03fa                 add edi, edx
// 0058047b  2b542418             sub edx, dword ptr [esp + 0x18]
// 0058047f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00580483  c1e70d               shl edi, 0xd
// 00580486  03cf                 add ecx, edi
// 00580488  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0058048c  c1e20d               shl edx, 0xd
// 0058048f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00580493  8d0c2a               lea ecx, [edx + ebp]
// 00580496  2bd5                 sub edx, ebp
// 00580498  897c2440             mov dword ptr [esp + 0x40], edi
// 0058049c  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 005804a1  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 005804a5  894c2414             mov dword ptr [esp + 0x14], ecx
// 005804a9  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 005804ad  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 005804b4  89542438             mov dword ptr [esp + 0x38], edx
// 005804b8  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 005804bc  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 005804c3  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 005804c7  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 005804cb  8d1c39               lea ebx, [ecx + edi]
// 005804ce  895c2420             mov dword ptr [esp + 0x20], ebx
// 005804d2  8d1c32               lea ebx, [edx + esi]
// 005804d5  895c2410             mov dword ptr [esp + 0x10], ebx
// 005804d9  8d2c3a               lea ebp, [edx + edi]
// 005804dc  69ff0b300000         imul edi, edi, 0x300b
// 005804e2  69d2b3410000         imul edx, edx, 0x41b3
// 005804e8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 005804ec  8d1c31               lea ebx, [ecx + esi]
// 005804ef  69c98e090000         imul ecx, ecx, 0x98e
// 005804f5  69f654620000         imul esi, esi, 0x6254
// 005804fb  03eb                 add ebp, ebx
// 005804fd  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 00580503  69eda1250000         imul ebp, ebp, 0x25a1
// 00580509  896c2430             mov dword ptr [esp + 0x30], ebp
// 0058050d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00580511  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 00580517  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058051b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0058051f  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 00580525  896c2410             mov dword ptr [esp + 0x10], ebp
// 00580529  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0058052d  2beb                 sub ebp, ebx
// 0058052f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00580533  69db7c0c0000         imul ebx, ebx, 0xc7c
// 00580539  896c2418             mov dword ptr [esp + 0x18], ebp
// 0058053d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00580541  03742418             add esi, dword ptr [esp + 0x18]
// 00580545  2beb                 sub ebp, ebx
// 00580547  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0058054b  03742410             add esi, dword ptr [esp + 0x10]
// 0058054f  03fd                 add edi, ebp
// 00580551  03cb                 add ecx, ebx
// 00580553  034c2418             add ecx, dword ptr [esp + 0x18]
// 00580557  03fb                 add edi, ebx
// 00580559  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0058055d  03d5                 add edx, ebp
// 0058055f  03542410             add edx, dword ptr [esp + 0x10]
// 00580563  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0058056a  2bdf                 sub ebx, edi
// 0058056c  c1fd0b               sar ebp, 0xb
// 0058056f  81c300040000         add ebx, 0x400
// 00580575  8928                 mov dword ptr [eax], ebp
// 00580577  c1fb0b               sar ebx, 0xb
// 0058057a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0058057e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 00580584  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0058058b  2bfe                 sub edi, esi
// 0058058d  8b742438             mov esi, dword ptr [esp + 0x38]
// 00580591  81c700040000         add edi, 0x400
// 00580597  c1ff0b               sar edi, 0xb
// 0058059a  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 005805a0  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 005805a7  2bf2                 sub esi, edx
// 005805a9  8b542440             mov edx, dword ptr [esp + 0x40]
// 005805ad  81c600040000         add esi, 0x400
// 005805b3  c1fe0b               sar esi, 0xb
// 005805b6  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 005805bc  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 005805c3  2bd1                 sub edx, ecx
// 005805c5  c1fb0b               sar ebx, 0xb
// 005805c8  c1fe0b               sar esi, 0xb
// 005805cb  81c200040000         add edx, 0x400
// 005805d1  c1ff0b               sar edi, 0xb
// 005805d4  c1fa0b               sar edx, 0xb
// 005805d7  895820               mov dword ptr [eax + 0x20], ebx
// 005805da  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005805de  897060               mov dword ptr [eax + 0x60], esi
// 005805e1  8b742424             mov esi, dword ptr [esp + 0x24]
// 005805e5  899080000000         mov dword ptr [eax + 0x80], edx
// 005805eb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005805ef  897840               mov dword ptr [eax + 0x40], edi
// 005805f2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005805f6  49                   dec ecx
// 005805f7  83c602               add esi, 2
// 005805fa  83c304               add ebx, 4
// 005805fd  83c004               add eax, 4
// 00580600  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00580604  89742424             mov dword ptr [esp + 0x24], esi
// 00580608  894c2434             mov dword ptr [esp + 0x34], ecx
// 0058060c  85c9                 test ecx, ecx
// 0058060e  0f8fbffdffff         jg 0x5803d3
// 00580614  33ff                 xor edi, edi
// 00580616  8d4c2448             lea ecx, [esp + 0x48]
// 0058061a  897c2434             mov dword ptr [esp + 0x34], edi
// 0058061e  8bff                 mov edi, edi
// 00580620  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 00580627  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0058062a  8b7104               mov esi, dword ptr [ecx + 4]
// 0058062d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 00580634  85f6                 test esi, esi
// 00580636  7548                 jne 0x580680
// 00580638  397108               cmp dword ptr [ecx + 8], esi
// 0058063b  7543                 jne 0x580680
// 0058063d  39710c               cmp dword ptr [ecx + 0xc], esi
// 00580640  753e                 jne 0x580680
// 00580642  397110               cmp dword ptr [ecx + 0x10], esi
// 00580645  7539                 jne 0x580680
// 00580647  397114               cmp dword ptr [ecx + 0x14], esi
// 0058064a  7534                 jne 0x580680
// 0058064c  397118               cmp dword ptr [ecx + 0x18], esi
// 0058064f  752f                 jne 0x580680
// 00580651  39711c               cmp dword ptr [ecx + 0x1c], esi
// 00580654  752a                 jne 0x580680
// 00580656  8b31                 mov esi, dword ptr [ecx]
// 00580658  83c610               add esi, 0x10
// 0058065b  c1fe05               sar esi, 5
// 0058065e  81e6ff030000         and esi, 0x3ff
// 00580664  8a1c16               mov bl, byte ptr [esi + edx]
// 00580667  8818                 mov byte ptr [eax], bl
// 00580669  885801               mov byte ptr [eax + 1], bl
// 0058066c  885802               mov byte ptr [eax + 2], bl
// 0058066f  885803               mov byte ptr [eax + 3], bl
// 00580672  885805               mov byte ptr [eax + 5], bl
// 00580675  885806               mov byte ptr [eax + 6], bl
// 00580678  885807               mov byte ptr [eax + 7], bl
// 0058067b  e9fb010000           jmp 0x58087b
// 00580680  8b5108               mov edx, dword ptr [ecx + 8]
// 00580683  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00580686  8d3c16               lea edi, [esi + edx]
// 00580689  69d27e180000         imul edx, edx, 0x187e
// 0058068f  69f6213b0000         imul esi, esi, 0x3b21
// 00580695  69ff51110000         imul edi, edi, 0x1151
// 0058069b  03d7                 add edx, edi
// 0058069d  8bea                 mov ebp, edx
// 0058069f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005806a2  8bdf                 mov ebx, edi
// 005806a4  2bde                 sub ebx, esi
// 005806a6  8b31                 mov esi, dword ptr [ecx]
// 005806a8  8d3c16               lea edi, [esi + edx]
// 005806ab  2bf2                 sub esi, edx
// 005806ad  c1e60d               shl esi, 0xd
// 005806b0  c1e70d               shl edi, 0xd
// 005806b3  8bd6                 mov edx, esi
// 005806b5  8d342f               lea esi, [edi + ebp]
// 005806b8  2bfd                 sub edi, ebp
// 005806ba  8d2c1a               lea ebp, [edx + ebx]
// 005806bd  2bd3                 sub edx, ebx
// 005806bf  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 005806c2  89542438             mov dword ptr [esp + 0x38], edx
// 005806c6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 005806c9  895c2428             mov dword ptr [esp + 0x28], ebx
// 005806cd  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 005806d0  89542424             mov dword ptr [esp + 0x24], edx
// 005806d4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005806d8  8b5904               mov ebx, dword ptr [ecx + 4]
// 005806db  03d3                 add edx, ebx
// 005806dd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005806e1  89542420             mov dword ptr [esp + 0x20], edx
// 005806e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005806e9  03da                 add ebx, edx
// 005806eb  895c2410             mov dword ptr [esp + 0x10], ebx
// 005806ef  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005806f3  03da                 add ebx, edx
// 005806f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005806f9  895c2418             mov dword ptr [esp + 0x18], ebx
// 005806fd  8b5904               mov ebx, dword ptr [ecx + 4]
// 00580700  03da                 add ebx, edx
// 00580702  8b542418             mov edx, dword ptr [esp + 0x18]
// 00580706  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0058070a  03da                 add ebx, edx
// 0058070c  69d2c53e0000         imul edx, edx, 0x3ec5
// 00580712  69dba1250000         imul ebx, ebx, 0x25a1
// 00580718  895c2430             mov dword ptr [esp + 0x30], ebx
// 0058071c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00580720  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 00580726  895c2420             mov dword ptr [esp + 0x20], ebx
// 0058072a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058072e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 00580734  895c2410             mov dword ptr [esp + 0x10], ebx
// 00580738  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0058073c  2bda                 sub ebx, edx
// 0058073e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00580742  69d27c0c0000         imul edx, edx, 0xc7c
// 00580748  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058074c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00580750  2bda                 sub ebx, edx
// 00580752  8b542424             mov edx, dword ptr [esp + 0x24]
// 00580756  69d28e090000         imul edx, edx, 0x98e
// 0058075c  03542420             add edx, dword ptr [esp + 0x20]
// 00580760  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00580764  03542418             add edx, dword ptr [esp + 0x18]
// 00580768  89542424             mov dword ptr [esp + 0x24], edx
// 0058076c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00580770  69d2b3410000         imul edx, edx, 0x41b3
// 00580776  03d3                 add edx, ebx
// 00580778  03542410             add edx, dword ptr [esp + 0x10]
// 0058077c  89542428             mov dword ptr [esp + 0x28], edx
// 00580780  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00580784  69d254620000         imul edx, edx, 0x6254
// 0058078a  03542418             add edx, dword ptr [esp + 0x18]
// 0058078e  03542410             add edx, dword ptr [esp + 0x10]
// 00580792  8954241c             mov dword ptr [esp + 0x1c], edx
// 00580796  8b5104               mov edx, dword ptr [ecx + 4]
// 00580799  69d20b300000         imul edx, edx, 0x300b
// 0058079f  03d3                 add edx, ebx
// 005807a1  03542420             add edx, dword ptr [esp + 0x20]
// 005807a5  89542414             mov dword ptr [esp + 0x14], edx
// 005807a9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 005807b0  2b742414             sub esi, dword ptr [esp + 0x14]
// 005807b4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005807b8  c1fb12               sar ebx, 0x12
// 005807bb  81e3ff030000         and ebx, 0x3ff
// 005807c1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005807c5  8818                 mov byte ptr [eax], bl
// 005807c7  81c600000200         add esi, 0x20000
// 005807cd  c1fe12               sar esi, 0x12
// 005807d0  81e6ff030000         and esi, 0x3ff
// 005807d6  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 005807da  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005807de  885807               mov byte ptr [eax + 7], bl
// 005807e1  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 005807e8  c1fb12               sar ebx, 0x12
// 005807eb  81e3ff030000         and ebx, 0x3ff
// 005807f1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 005807f5  2bee                 sub ebp, esi
// 005807f7  8b742438             mov esi, dword ptr [esp + 0x38]
// 005807fb  885801               mov byte ptr [eax + 1], bl
// 005807fe  81c500000200         add ebp, 0x20000
// 00580804  c1fd12               sar ebp, 0x12
// 00580807  81e5ff030000         and ebp, 0x3ff
// 0058080d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 00580811  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00580815  885806               mov byte ptr [eax + 6], bl
// 00580818  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0058081f  c1fb12               sar ebx, 0x12
// 00580822  81e3ff030000         and ebx, 0x3ff
// 00580828  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0058082c  2bf5                 sub esi, ebp
// 0058082e  81c600000200         add esi, 0x20000
// 00580834  885802               mov byte ptr [eax + 2], bl
// 00580837  c1fe12               sar esi, 0x12
// 0058083a  81e6ff030000         and esi, 0x3ff
// 00580840  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 00580844  8b742424             mov esi, dword ptr [esp + 0x24]
// 00580848  885805               mov byte ptr [eax + 5], bl
// 0058084b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 00580852  c1fb12               sar ebx, 0x12
// 00580855  2bfe                 sub edi, esi
// 00580857  81e3ff030000         and ebx, 0x3ff
// 0058085d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 00580861  81c700000200         add edi, 0x20000
// 00580867  c1ff12               sar edi, 0x12
// 0058086a  81e7ff030000         and edi, 0x3ff
// 00580870  885803               mov byte ptr [eax + 3], bl
// 00580873  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 00580877  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0058087b  47                   inc edi
// 0058087c  83c120               add ecx, 0x20
// 0058087f  83ff08               cmp edi, 8
// 00580882  885804               mov byte ptr [eax + 4], bl
// 00580885  897c2434             mov dword ptr [esp + 0x34], edi
// 00580889  0f8c91fdffff         jl 0x580620
// 0058088f  5f                   pop edi
// 00580890  5e                   pop esi
// 00580891  5d                   pop ebp
// 00580892  5b                   pop ebx
// 00580893  81c438010000         add esp, 0x138
// 00580899  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
