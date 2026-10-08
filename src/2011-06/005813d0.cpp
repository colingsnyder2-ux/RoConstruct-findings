// from server: 100% by auto
// roc 2011-06 005813d0  unit: seg_00580000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005813d0
//
// 005813d0  83ec44               sub esp, 0x44
// 005813d3  8b442448             mov eax, dword ptr [esp + 0x48]
// 005813d7  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 005813dd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005813e1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 005813e4  83e880               sub eax, -0x80
// 005813e7  53                   push ebx
// 005813e8  89442404             mov dword ptr [esp + 4], eax
// 005813ec  8b442454             mov eax, dword ptr [esp + 0x54]
// 005813f0  55                   push ebp
// 005813f1  56                   push esi
// 005813f2  8bd1                 mov edx, ecx
// 005813f4  83c030               add eax, 0x30
// 005813f7  be06000000           mov esi, 6
// 005813fc  2bd1                 sub edx, ecx
// 005813fe  57                   push edi
// 005813ff  89742458             mov dword ptr [esp + 0x58], esi
// 00581403  8d7c1418             lea edi, [esp + edx + 0x18]
// 00581407  eb07                 jmp 0x581410
// 00581409  8da42400000000       lea esp, [esp]
// 00581410  8d5602               lea edx, [esi + 2]
// 00581413  83fa06               cmp edx, 6
// 00581416  0f84a7000000         je 0x5814c3
// 0058141c  83fa04               cmp edx, 4
// 0058141f  0f849e000000         je 0x5814c3
// 00581425  83fa02               cmp edx, 2
// 00581428  0f8495000000         je 0x5814c3
// 0058142e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 00581432  6685db               test bx, bx
// 00581435  7521                 jne 0x581458
// 00581437  663918               cmp word ptr [eax], bx
// 0058143a  751c                 jne 0x581458
// 0058143c  66395820             cmp word ptr [eax + 0x20], bx
// 00581440  7516                 jne 0x581458
// 00581442  66395840             cmp word ptr [eax + 0x40], bx
// 00581446  7510                 jne 0x581458
// 00581448  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0058144c  0faf11               imul edx, dword ptr [ecx]
// 0058144f  03d2                 add edx, edx
// 00581451  03d2                 add edx, edx
// 00581453  8957fc               mov dword ptr [edi - 4], edx
// 00581456  eb68                 jmp 0x5814c0
// 00581458  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0058145c  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 00581463  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 00581467  69f6371b0000         imul esi, esi, 0x1b37
// 0058146d  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 00581474  0fbfdb               movsx ebx, bx
// 00581477  69ed12170000         imul ebp, ebp, 0x1712
// 0058147d  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 00581481  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 00581485  69dbfc730000         imul ebx, ebx, 0x73fc
// 0058148b  0faf11               imul edx, dword ptr [ecx]
// 0058148e  2bf5                 sub esi, ebp
// 00581490  03f3                 add esi, ebx
// 00581492  0fbf18               movsx ebx, word ptr [eax]
// 00581495  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 00581499  69dbba280000         imul ebx, ebx, 0x28ba
// 0058149f  2bf3                 sub esi, ebx
// 005814a1  c1e20f               shl edx, 0xf
// 005814a4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005814ab  2bd6                 sub edx, esi
// 005814ad  8b742458             mov esi, dword ptr [esp + 0x58]
// 005814b1  c1fb0d               sar ebx, 0xd
// 005814b4  81c200100000         add edx, 0x1000
// 005814ba  895ffc               mov dword ptr [edi - 4], ebx
// 005814bd  c1fa0d               sar edx, 0xd
// 005814c0  89571c               mov dword ptr [edi + 0x1c], edx
// 005814c3  8d5601               lea edx, [esi + 1]
// 005814c6  83fa06               cmp edx, 6
// 005814c9  0f84a9000000         je 0x581578
// 005814cf  83fa04               cmp edx, 4
// 005814d2  0f84a0000000         je 0x581578
// 005814d8  83fa02               cmp edx, 2
// 005814db  0f8497000000         je 0x581578
// 005814e1  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 005814e5  6685db               test bx, bx
// 005814e8  7522                 jne 0x58150c
// 005814ea  66395802             cmp word ptr [eax + 2], bx
// 005814ee  751c                 jne 0x58150c
// 005814f0  66395822             cmp word ptr [eax + 0x22], bx
// 005814f4  7516                 jne 0x58150c
// 005814f6  66395842             cmp word ptr [eax + 0x42], bx
// 005814fa  7510                 jne 0x58150c
// 005814fc  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 00581500  0faf5104             imul edx, dword ptr [ecx + 4]
// 00581504  03d2                 add edx, edx
// 00581506  03d2                 add edx, edx
// 00581508  8917                 mov dword ptr [edi], edx
// 0058150a  eb69                 jmp 0x581575
// 0058150c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 00581510  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 00581517  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 0058151b  69f6371b0000         imul esi, esi, 0x1b37
// 00581521  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 00581528  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0058152c  69ed12170000         imul ebp, ebp, 0x1712
// 00581532  0faf5104             imul edx, dword ptr [ecx + 4]
// 00581536  2bf5                 sub esi, ebp
// 00581538  0fbf6802             movsx ebp, word ptr [eax + 2]
// 0058153c  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 00581540  0fbfdb               movsx ebx, bx
// 00581543  69edba280000         imul ebp, ebp, 0x28ba
// 00581549  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 0058154d  69dbfc730000         imul ebx, ebx, 0x73fc
// 00581553  2bf5                 sub esi, ebp
// 00581555  03f3                 add esi, ebx
// 00581557  c1e20f               shl edx, 0xf
// 0058155a  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 00581561  2bd6                 sub edx, esi
// 00581563  8b742458             mov esi, dword ptr [esp + 0x58]
// 00581567  c1fb0d               sar ebx, 0xd
// 0058156a  81c200100000         add edx, 0x1000
// 00581570  891f                 mov dword ptr [edi], ebx
// 00581572  c1fa0d               sar edx, 0xd
// 00581575  895720               mov dword ptr [edi + 0x20], edx
// 00581578  83fe06               cmp esi, 6
// 0058157b  0f84ab000000         je 0x58162c
// 00581581  83fe04               cmp esi, 4
// 00581584  0f84a2000000         je 0x58162c
// 0058158a  83fe02               cmp esi, 2
// 0058158d  0f8499000000         je 0x58162c
// 00581593  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 00581597  6685db               test bx, bx
// 0058159a  7523                 jne 0x5815bf
// 0058159c  66395804             cmp word ptr [eax + 4], bx
// 005815a0  751d                 jne 0x5815bf
// 005815a2  66395824             cmp word ptr [eax + 0x24], bx
// 005815a6  7517                 jne 0x5815bf
// 005815a8  66395844             cmp word ptr [eax + 0x44], bx
// 005815ac  7511                 jne 0x5815bf
// 005815ae  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 005815b2  0faf5108             imul edx, dword ptr [ecx + 8]
// 005815b6  03d2                 add edx, edx
// 005815b8  03d2                 add edx, edx
// 005815ba  895704               mov dword ptr [edi + 4], edx
// 005815bd  eb6a                 jmp 0x581629
// 005815bf  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 005815c3  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 005815ca  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 005815ce  69f6371b0000         imul esi, esi, 0x1b37
// 005815d4  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 005815db  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 005815df  69ed12170000         imul ebp, ebp, 0x1712
// 005815e5  0faf5108             imul edx, dword ptr [ecx + 8]
// 005815e9  2bf5                 sub esi, ebp
// 005815eb  0fbf6804             movsx ebp, word ptr [eax + 4]
// 005815ef  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 005815f3  0fbfdb               movsx ebx, bx
// 005815f6  69edba280000         imul ebp, ebp, 0x28ba
// 005815fc  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 00581600  69dbfc730000         imul ebx, ebx, 0x73fc
// 00581606  2bf5                 sub esi, ebp
// 00581608  03f3                 add esi, ebx
// 0058160a  c1e20f               shl edx, 0xf
// 0058160d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 00581614  2bd6                 sub edx, esi
// 00581616  8b742458             mov esi, dword ptr [esp + 0x58]
// 0058161a  c1fb0d               sar ebx, 0xd
// 0058161d  81c200100000         add edx, 0x1000
// 00581623  895f04               mov dword ptr [edi + 4], ebx
// 00581626  c1fa0d               sar edx, 0xd
// 00581629  895724               mov dword ptr [edi + 0x24], edx
// 0058162c  8d56ff               lea edx, [esi - 1]
// 0058162f  83fa06               cmp edx, 6
// 00581632  0f84ab000000         je 0x5816e3
// 00581638  83fa04               cmp edx, 4
// 0058163b  0f84a2000000         je 0x5816e3
// 00581641  83fa02               cmp edx, 2
// 00581644  0f8499000000         je 0x5816e3
// 0058164a  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 0058164e  6685db               test bx, bx
// 00581651  7523                 jne 0x581676
// 00581653  66395806             cmp word ptr [eax + 6], bx
// 00581657  751d                 jne 0x581676
// 00581659  66395826             cmp word ptr [eax + 0x26], bx
// 0058165d  7517                 jne 0x581676
// 0058165f  66395846             cmp word ptr [eax + 0x46], bx
// 00581663  7511                 jne 0x581676
// 00581665  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 00581669  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0058166d  03d2                 add edx, edx
// 0058166f  03d2                 add edx, edx
// 00581671  895708               mov dword ptr [edi + 8], edx
// 00581674  eb6a                 jmp 0x5816e0
// 00581676  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0058167a  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 00581681  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 00581685  69f6371b0000         imul esi, esi, 0x1b37
// 0058168b  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 00581692  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 00581696  69ed12170000         imul ebp, ebp, 0x1712
// 0058169c  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 005816a0  2bf5                 sub esi, ebp
// 005816a2  0fbf6806             movsx ebp, word ptr [eax + 6]
// 005816a6  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 005816aa  0fbfdb               movsx ebx, bx
// 005816ad  69edba280000         imul ebp, ebp, 0x28ba
// 005816b3  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 005816b7  69dbfc730000         imul ebx, ebx, 0x73fc
// 005816bd  2bf5                 sub esi, ebp
// 005816bf  03f3                 add esi, ebx
// 005816c1  c1e20f               shl edx, 0xf
// 005816c4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005816cb  2bd6                 sub edx, esi
// 005816cd  8b742458             mov esi, dword ptr [esp + 0x58]
// 005816d1  c1fb0d               sar ebx, 0xd
// 005816d4  81c200100000         add edx, 0x1000
// 005816da  895f08               mov dword ptr [edi + 8], ebx
// 005816dd  c1fa0d               sar edx, 0xd
// 005816e0  895728               mov dword ptr [edi + 0x28], edx
// 005816e3  83ee04               sub esi, 4
// 005816e6  8d5602               lea edx, [esi + 2]
// 005816e9  83c008               add eax, 8
// 005816ec  83c110               add ecx, 0x10
// 005816ef  83c710               add edi, 0x10
// 005816f2  89742458             mov dword ptr [esp + 0x58], esi
// 005816f6  85d2                 test edx, edx
// 005816f8  0f8f12fdffff         jg 0x581410
// 005816fe  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00581702  8b5500               mov edx, dword ptr [ebp]
// 00581705  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581709  03542468             add edx, dword ptr [esp + 0x68]
// 0058170d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00581711  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00581715  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00581719  85c9                 test ecx, ecx
// 0058171b  7526                 jne 0x581743
// 0058171d  85db                 test ebx, ebx
// 0058171f  7522                 jne 0x581743
// 00581721  85ff                 test edi, edi
// 00581723  751e                 jne 0x581743
// 00581725  85f6                 test esi, esi
// 00581727  751a                 jne 0x581743
// 00581729  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058172d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581731  83c010               add eax, 0x10
// 00581734  c1f805               sar eax, 5
// 00581737  25ff030000           and eax, 0x3ff
// 0058173c  8a0408               mov al, byte ptr [eax + ecx]
// 0058173f  8802                 mov byte ptr [edx], al
// 00581741  eb52                 jmp 0x581795
// 00581743  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581747  69c9fc730000         imul ecx, ecx, 0x73fc
// 0058174d  69dbba280000         imul ebx, ebx, 0x28ba
// 00581753  69ff371b0000         imul edi, edi, 0x1b37
// 00581759  69f612170000         imul esi, esi, 0x1712
// 0058175f  2bcb                 sub ecx, ebx
// 00581761  03cf                 add ecx, edi
// 00581763  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00581767  2bce                 sub ecx, esi
// 00581769  c1e00f               shl eax, 0xf
// 0058176c  8bf1                 mov esi, ecx
// 0058176e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 00581775  2bc6                 sub eax, esi
// 00581777  c1f914               sar ecx, 0x14
// 0058177a  0500000800           add eax, 0x80000
// 0058177f  81e1ff030000         and ecx, 0x3ff
// 00581785  8a0c39               mov cl, byte ptr [ecx + edi]
// 00581788  c1f814               sar eax, 0x14
// 0058178b  25ff030000           and eax, 0x3ff
// 00581790  880a                 mov byte ptr [edx], cl
// 00581792  8a0438               mov al, byte ptr [eax + edi]
// 00581795  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00581799  8b742450             mov esi, dword ptr [esp + 0x50]
// 0058179d  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005817a1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005817a5  884201               mov byte ptr [edx + 1], al
// 005817a8  8b5504               mov edx, dword ptr [ebp + 4]
// 005817ab  03542468             add edx, dword ptr [esp + 0x68]
// 005817af  85c9                 test ecx, ecx
// 005817b1  7530                 jne 0x5817e3
// 005817b3  85db                 test ebx, ebx
// 005817b5  752c                 jne 0x5817e3
// 005817b7  85ff                 test edi, edi
// 005817b9  7528                 jne 0x5817e3
// 005817bb  85f6                 test esi, esi
// 005817bd  7524                 jne 0x5817e3
// 005817bf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005817c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005817c7  83c110               add ecx, 0x10
// 005817ca  5f                   pop edi
// 005817cb  c1f905               sar ecx, 5
// 005817ce  81e1ff030000         and ecx, 0x3ff
// 005817d4  8a0401               mov al, byte ptr [ecx + eax]
// 005817d7  5e                   pop esi
// 005817d8  5d                   pop ebp
// 005817d9  8802                 mov byte ptr [edx], al
// 005817db  884201               mov byte ptr [edx + 1], al
// 005817de  5b                   pop ebx
// 005817df  83c444               add esp, 0x44
// 005817e2  c3                   ret 
// 005817e3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005817e7  69c9fc730000         imul ecx, ecx, 0x73fc
// 005817ed  69ff371b0000         imul edi, edi, 0x1b37
// 005817f3  69f612170000         imul esi, esi, 0x1712
// 005817f9  69dbba280000         imul ebx, ebx, 0x28ba
// 005817ff  03cf                 add ecx, edi
// 00581801  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00581805  2bce                 sub ecx, esi
// 00581807  2bcb                 sub ecx, ebx
// 00581809  c1e00f               shl eax, 0xf
// 0058180c  8bf1                 mov esi, ecx
// 0058180e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 00581815  2bc6                 sub eax, esi
// 00581817  c1f914               sar ecx, 0x14
// 0058181a  0500000800           add eax, 0x80000
// 0058181f  81e1ff030000         and ecx, 0x3ff
// 00581825  8a0c39               mov cl, byte ptr [ecx + edi]
// 00581828  c1f814               sar eax, 0x14
// 0058182b  880a                 mov byte ptr [edx], cl
// 0058182d  25ff030000           and eax, 0x3ff
// 00581832  8a0438               mov al, byte ptr [eax + edi]
// 00581835  5f                   pop edi
// 00581836  5e                   pop esi
// 00581837  5d                   pop ebp
// 00581838  884201               mov byte ptr [edx + 1], al
// 0058183b  5b                   pop ebx
// 0058183c  83c444               add esp, 0x44
// 0058183f  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
