// roc 2008-06 0053d240  unit: seg_00530000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053d240
//
// 0053d240  83ec44               sub esp, 0x44
// 0053d243  8b442448             mov eax, dword ptr [esp + 0x48]
// 0053d247  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0053d24d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0053d251  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0053d254  83e880               sub eax, -0x80
// 0053d257  53                   push ebx
// 0053d258  89442404             mov dword ptr [esp + 4], eax
// 0053d25c  8b442454             mov eax, dword ptr [esp + 0x54]
// 0053d260  55                   push ebp
// 0053d261  56                   push esi
// 0053d262  8bd1                 mov edx, ecx
// 0053d264  83c030               add eax, 0x30
// 0053d267  be06000000           mov esi, 6
// 0053d26c  2bd1                 sub edx, ecx
// 0053d26e  57                   push edi
// 0053d26f  89742458             mov dword ptr [esp + 0x58], esi
// 0053d273  8d7c1418             lea edi, [esp + edx + 0x18]
// 0053d277  eb07                 jmp 0x53d280
// 0053d279  8da42400000000       lea esp, [esp]
// 0053d280  8d5602               lea edx, [esi + 2]
// 0053d283  83fa06               cmp edx, 6
// 0053d286  0f84a7000000         je 0x53d333
// 0053d28c  83fa04               cmp edx, 4
// 0053d28f  0f849e000000         je 0x53d333
// 0053d295  83fa02               cmp edx, 2
// 0053d298  0f8495000000         je 0x53d333
// 0053d29e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 0053d2a2  6685db               test bx, bx
// 0053d2a5  7521                 jne 0x53d2c8
// 0053d2a7  663918               cmp word ptr [eax], bx
// 0053d2aa  751c                 jne 0x53d2c8
// 0053d2ac  66395820             cmp word ptr [eax + 0x20], bx
// 0053d2b0  7516                 jne 0x53d2c8
// 0053d2b2  66395840             cmp word ptr [eax + 0x40], bx
// 0053d2b6  7510                 jne 0x53d2c8
// 0053d2b8  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0053d2bc  0faf11               imul edx, dword ptr [ecx]
// 0053d2bf  03d2                 add edx, edx
// 0053d2c1  03d2                 add edx, edx
// 0053d2c3  8957fc               mov dword ptr [edi - 4], edx
// 0053d2c6  eb68                 jmp 0x53d330
// 0053d2c8  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0053d2cc  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 0053d2d3  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 0053d2d7  69f6371b0000         imul esi, esi, 0x1b37
// 0053d2dd  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 0053d2e4  0fbfdb               movsx ebx, bx
// 0053d2e7  69ed12170000         imul ebp, ebp, 0x1712
// 0053d2ed  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 0053d2f1  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0053d2f5  69dbfc730000         imul ebx, ebx, 0x73fc
// 0053d2fb  0faf11               imul edx, dword ptr [ecx]
// 0053d2fe  2bf5                 sub esi, ebp
// 0053d300  03f3                 add esi, ebx
// 0053d302  0fbf18               movsx ebx, word ptr [eax]
// 0053d305  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 0053d309  69dbba280000         imul ebx, ebx, 0x28ba
// 0053d30f  2bf3                 sub esi, ebx
// 0053d311  c1e20f               shl edx, 0xf
// 0053d314  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0053d31b  2bd6                 sub edx, esi
// 0053d31d  8b742458             mov esi, dword ptr [esp + 0x58]
// 0053d321  c1fb0d               sar ebx, 0xd
// 0053d324  81c200100000         add edx, 0x1000
// 0053d32a  895ffc               mov dword ptr [edi - 4], ebx
// 0053d32d  c1fa0d               sar edx, 0xd
// 0053d330  89571c               mov dword ptr [edi + 0x1c], edx
// 0053d333  8d5601               lea edx, [esi + 1]
// 0053d336  83fa06               cmp edx, 6
// 0053d339  0f84a9000000         je 0x53d3e8
// 0053d33f  83fa04               cmp edx, 4
// 0053d342  0f84a0000000         je 0x53d3e8
// 0053d348  83fa02               cmp edx, 2
// 0053d34b  0f8497000000         je 0x53d3e8
// 0053d351  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 0053d355  6685db               test bx, bx
// 0053d358  7522                 jne 0x53d37c
// 0053d35a  66395802             cmp word ptr [eax + 2], bx
// 0053d35e  751c                 jne 0x53d37c
// 0053d360  66395822             cmp word ptr [eax + 0x22], bx
// 0053d364  7516                 jne 0x53d37c
// 0053d366  66395842             cmp word ptr [eax + 0x42], bx
// 0053d36a  7510                 jne 0x53d37c
// 0053d36c  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0053d370  0faf5104             imul edx, dword ptr [ecx + 4]
// 0053d374  03d2                 add edx, edx
// 0053d376  03d2                 add edx, edx
// 0053d378  8917                 mov dword ptr [edi], edx
// 0053d37a  eb69                 jmp 0x53d3e5
// 0053d37c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 0053d380  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 0053d387  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 0053d38b  69f6371b0000         imul esi, esi, 0x1b37
// 0053d391  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 0053d398  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0053d39c  69ed12170000         imul ebp, ebp, 0x1712
// 0053d3a2  0faf5104             imul edx, dword ptr [ecx + 4]
// 0053d3a6  2bf5                 sub esi, ebp
// 0053d3a8  0fbf6802             movsx ebp, word ptr [eax + 2]
// 0053d3ac  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 0053d3b0  0fbfdb               movsx ebx, bx
// 0053d3b3  69edba280000         imul ebp, ebp, 0x28ba
// 0053d3b9  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 0053d3bd  69dbfc730000         imul ebx, ebx, 0x73fc
// 0053d3c3  2bf5                 sub esi, ebp
// 0053d3c5  03f3                 add esi, ebx
// 0053d3c7  c1e20f               shl edx, 0xf
// 0053d3ca  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0053d3d1  2bd6                 sub edx, esi
// 0053d3d3  8b742458             mov esi, dword ptr [esp + 0x58]
// 0053d3d7  c1fb0d               sar ebx, 0xd
// 0053d3da  81c200100000         add edx, 0x1000
// 0053d3e0  891f                 mov dword ptr [edi], ebx
// 0053d3e2  c1fa0d               sar edx, 0xd
// 0053d3e5  895720               mov dword ptr [edi + 0x20], edx
// 0053d3e8  83fe06               cmp esi, 6
// 0053d3eb  0f84ab000000         je 0x53d49c
// 0053d3f1  83fe04               cmp esi, 4
// 0053d3f4  0f84a2000000         je 0x53d49c
// 0053d3fa  83fe02               cmp esi, 2
// 0053d3fd  0f8499000000         je 0x53d49c
// 0053d403  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 0053d407  6685db               test bx, bx
// 0053d40a  7523                 jne 0x53d42f
// 0053d40c  66395804             cmp word ptr [eax + 4], bx
// 0053d410  751d                 jne 0x53d42f
// 0053d412  66395824             cmp word ptr [eax + 0x24], bx
// 0053d416  7517                 jne 0x53d42f
// 0053d418  66395844             cmp word ptr [eax + 0x44], bx
// 0053d41c  7511                 jne 0x53d42f
// 0053d41e  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0053d422  0faf5108             imul edx, dword ptr [ecx + 8]
// 0053d426  03d2                 add edx, edx
// 0053d428  03d2                 add edx, edx
// 0053d42a  895704               mov dword ptr [edi + 4], edx
// 0053d42d  eb6a                 jmp 0x53d499
// 0053d42f  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 0053d433  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 0053d43a  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 0053d43e  69f6371b0000         imul esi, esi, 0x1b37
// 0053d444  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 0053d44b  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0053d44f  69ed12170000         imul ebp, ebp, 0x1712
// 0053d455  0faf5108             imul edx, dword ptr [ecx + 8]
// 0053d459  2bf5                 sub esi, ebp
// 0053d45b  0fbf6804             movsx ebp, word ptr [eax + 4]
// 0053d45f  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 0053d463  0fbfdb               movsx ebx, bx
// 0053d466  69edba280000         imul ebp, ebp, 0x28ba
// 0053d46c  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 0053d470  69dbfc730000         imul ebx, ebx, 0x73fc
// 0053d476  2bf5                 sub esi, ebp
// 0053d478  03f3                 add esi, ebx
// 0053d47a  c1e20f               shl edx, 0xf
// 0053d47d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0053d484  2bd6                 sub edx, esi
// 0053d486  8b742458             mov esi, dword ptr [esp + 0x58]
// 0053d48a  c1fb0d               sar ebx, 0xd
// 0053d48d  81c200100000         add edx, 0x1000
// 0053d493  895f04               mov dword ptr [edi + 4], ebx
// 0053d496  c1fa0d               sar edx, 0xd
// 0053d499  895724               mov dword ptr [edi + 0x24], edx
// 0053d49c  8d56ff               lea edx, [esi - 1]
// 0053d49f  83fa06               cmp edx, 6
// 0053d4a2  0f84ab000000         je 0x53d553
// 0053d4a8  83fa04               cmp edx, 4
// 0053d4ab  0f84a2000000         je 0x53d553
// 0053d4b1  83fa02               cmp edx, 2
// 0053d4b4  0f8499000000         je 0x53d553
// 0053d4ba  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 0053d4be  6685db               test bx, bx
// 0053d4c1  7523                 jne 0x53d4e6
// 0053d4c3  66395806             cmp word ptr [eax + 6], bx
// 0053d4c7  751d                 jne 0x53d4e6
// 0053d4c9  66395826             cmp word ptr [eax + 0x26], bx
// 0053d4cd  7517                 jne 0x53d4e6
// 0053d4cf  66395846             cmp word ptr [eax + 0x46], bx
// 0053d4d3  7511                 jne 0x53d4e6
// 0053d4d5  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0053d4d9  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0053d4dd  03d2                 add edx, edx
// 0053d4df  03d2                 add edx, edx
// 0053d4e1  895708               mov dword ptr [edi + 8], edx
// 0053d4e4  eb6a                 jmp 0x53d550
// 0053d4e6  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0053d4ea  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 0053d4f1  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 0053d4f5  69f6371b0000         imul esi, esi, 0x1b37
// 0053d4fb  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 0053d502  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0053d506  69ed12170000         imul ebp, ebp, 0x1712
// 0053d50c  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0053d510  2bf5                 sub esi, ebp
// 0053d512  0fbf6806             movsx ebp, word ptr [eax + 6]
// 0053d516  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 0053d51a  0fbfdb               movsx ebx, bx
// 0053d51d  69edba280000         imul ebp, ebp, 0x28ba
// 0053d523  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 0053d527  69dbfc730000         imul ebx, ebx, 0x73fc
// 0053d52d  2bf5                 sub esi, ebp
// 0053d52f  03f3                 add esi, ebx
// 0053d531  c1e20f               shl edx, 0xf
// 0053d534  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0053d53b  2bd6                 sub edx, esi
// 0053d53d  8b742458             mov esi, dword ptr [esp + 0x58]
// 0053d541  c1fb0d               sar ebx, 0xd
// 0053d544  81c200100000         add edx, 0x1000
// 0053d54a  895f08               mov dword ptr [edi + 8], ebx
// 0053d54d  c1fa0d               sar edx, 0xd
// 0053d550  895728               mov dword ptr [edi + 0x28], edx
// 0053d553  83ee04               sub esi, 4
// 0053d556  8d5602               lea edx, [esi + 2]
// 0053d559  83c008               add eax, 8
// 0053d55c  83c110               add ecx, 0x10
// 0053d55f  83c710               add edi, 0x10
// 0053d562  89742458             mov dword ptr [esp + 0x58], esi
// 0053d566  85d2                 test edx, edx
// 0053d568  0f8f12fdffff         jg 0x53d280
// 0053d56e  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0053d572  8b5500               mov edx, dword ptr [ebp]
// 0053d575  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053d579  03542468             add edx, dword ptr [esp + 0x68]
// 0053d57d  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053d581  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0053d585  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053d589  85c9                 test ecx, ecx
// 0053d58b  7526                 jne 0x53d5b3
// 0053d58d  85db                 test ebx, ebx
// 0053d58f  7522                 jne 0x53d5b3
// 0053d591  85ff                 test edi, edi
// 0053d593  751e                 jne 0x53d5b3
// 0053d595  85f6                 test esi, esi
// 0053d597  751a                 jne 0x53d5b3
// 0053d599  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053d59d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053d5a1  83c010               add eax, 0x10
// 0053d5a4  c1f805               sar eax, 5
// 0053d5a7  25ff030000           and eax, 0x3ff
// 0053d5ac  8a0408               mov al, byte ptr [eax + ecx]
// 0053d5af  8802                 mov byte ptr [edx], al
// 0053d5b1  eb52                 jmp 0x53d605
// 0053d5b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053d5b7  69c9fc730000         imul ecx, ecx, 0x73fc
// 0053d5bd  69dbba280000         imul ebx, ebx, 0x28ba
// 0053d5c3  69ff371b0000         imul edi, edi, 0x1b37
// 0053d5c9  69f612170000         imul esi, esi, 0x1712
// 0053d5cf  2bcb                 sub ecx, ebx
// 0053d5d1  03cf                 add ecx, edi
// 0053d5d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053d5d7  2bce                 sub ecx, esi
// 0053d5d9  c1e00f               shl eax, 0xf
// 0053d5dc  8bf1                 mov esi, ecx
// 0053d5de  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0053d5e5  2bc6                 sub eax, esi
// 0053d5e7  c1f914               sar ecx, 0x14
// 0053d5ea  0500000800           add eax, 0x80000
// 0053d5ef  81e1ff030000         and ecx, 0x3ff
// 0053d5f5  8a0c39               mov cl, byte ptr [ecx + edi]
// 0053d5f8  c1f814               sar eax, 0x14
// 0053d5fb  25ff030000           and eax, 0x3ff
// 0053d600  880a                 mov byte ptr [edx], cl
// 0053d602  8a0438               mov al, byte ptr [eax + edi]
// 0053d605  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053d609  8b742450             mov esi, dword ptr [esp + 0x50]
// 0053d60d  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0053d611  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0053d615  884201               mov byte ptr [edx + 1], al
// 0053d618  8b5504               mov edx, dword ptr [ebp + 4]
// 0053d61b  03542468             add edx, dword ptr [esp + 0x68]
// 0053d61f  85c9                 test ecx, ecx
// 0053d621  7530                 jne 0x53d653
// 0053d623  85db                 test ebx, ebx
// 0053d625  752c                 jne 0x53d653
// 0053d627  85ff                 test edi, edi
// 0053d629  7528                 jne 0x53d653
// 0053d62b  85f6                 test esi, esi
// 0053d62d  7524                 jne 0x53d653
// 0053d62f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053d633  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053d637  83c110               add ecx, 0x10
// 0053d63a  5f                   pop edi
// 0053d63b  c1f905               sar ecx, 5
// 0053d63e  81e1ff030000         and ecx, 0x3ff
// 0053d644  8a0401               mov al, byte ptr [ecx + eax]
// 0053d647  5e                   pop esi
// 0053d648  5d                   pop ebp
// 0053d649  8802                 mov byte ptr [edx], al
// 0053d64b  884201               mov byte ptr [edx + 1], al
// 0053d64e  5b                   pop ebx
// 0053d64f  83c444               add esp, 0x44
// 0053d652  c3                   ret 
// 0053d653  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053d657  69c9fc730000         imul ecx, ecx, 0x73fc
// 0053d65d  69ff371b0000         imul edi, edi, 0x1b37
// 0053d663  69f612170000         imul esi, esi, 0x1712
// 0053d669  69dbba280000         imul ebx, ebx, 0x28ba
// 0053d66f  03cf                 add ecx, edi
// 0053d671  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053d675  2bce                 sub ecx, esi
// 0053d677  2bcb                 sub ecx, ebx
// 0053d679  c1e00f               shl eax, 0xf
// 0053d67c  8bf1                 mov esi, ecx
// 0053d67e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0053d685  2bc6                 sub eax, esi
// 0053d687  c1f914               sar ecx, 0x14
// 0053d68a  0500000800           add eax, 0x80000
// 0053d68f  81e1ff030000         and ecx, 0x3ff
// 0053d695  8a0c39               mov cl, byte ptr [ecx + edi]
// 0053d698  c1f814               sar eax, 0x14
// 0053d69b  880a                 mov byte ptr [edx], cl
// 0053d69d  25ff030000           and eax, 0x3ff
// 0053d6a2  8a0438               mov al, byte ptr [eax + edi]
// 0053d6a5  5f                   pop edi
// 0053d6a6  5e                   pop esi
// 0053d6a7  5d                   pop ebp
// 0053d6a8  884201               mov byte ptr [edx + 1], al
// 0053d6ab  5b                   pop ebx
// 0053d6ac  83c444               add esp, 0x44
// 0053d6af  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
