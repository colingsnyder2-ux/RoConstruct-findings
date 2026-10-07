// roc 2010-06 0058b0e0  unit: seg_00580000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058b0e0
//
// 0058b0e0  83ec44               sub esp, 0x44
// 0058b0e3  8b442448             mov eax, dword ptr [esp + 0x48]
// 0058b0e7  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0058b0ed  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0058b0f1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0058b0f4  83e880               sub eax, -0x80
// 0058b0f7  53                   push ebx
// 0058b0f8  89442404             mov dword ptr [esp + 4], eax
// 0058b0fc  8b442454             mov eax, dword ptr [esp + 0x54]
// 0058b100  55                   push ebp
// 0058b101  56                   push esi
// 0058b102  8bd1                 mov edx, ecx
// 0058b104  83c030               add eax, 0x30
// 0058b107  be06000000           mov esi, 6
// 0058b10c  2bd1                 sub edx, ecx
// 0058b10e  57                   push edi
// 0058b10f  89742458             mov dword ptr [esp + 0x58], esi
// 0058b113  8d7c1418             lea edi, [esp + edx + 0x18]
// 0058b117  eb07                 jmp 0x58b120
// 0058b119  8da42400000000       lea esp, [esp]
// 0058b120  8d5602               lea edx, [esi + 2]
// 0058b123  83fa06               cmp edx, 6
// 0058b126  0f84a7000000         je 0x58b1d3
// 0058b12c  83fa04               cmp edx, 4
// 0058b12f  0f849e000000         je 0x58b1d3
// 0058b135  83fa02               cmp edx, 2
// 0058b138  0f8495000000         je 0x58b1d3
// 0058b13e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 0058b142  6685db               test bx, bx
// 0058b145  7521                 jne 0x58b168
// 0058b147  663918               cmp word ptr [eax], bx
// 0058b14a  751c                 jne 0x58b168
// 0058b14c  66395820             cmp word ptr [eax + 0x20], bx
// 0058b150  7516                 jne 0x58b168
// 0058b152  66395840             cmp word ptr [eax + 0x40], bx
// 0058b156  7510                 jne 0x58b168
// 0058b158  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0058b15c  0faf11               imul edx, dword ptr [ecx]
// 0058b15f  03d2                 add edx, edx
// 0058b161  03d2                 add edx, edx
// 0058b163  8957fc               mov dword ptr [edi - 4], edx
// 0058b166  eb68                 jmp 0x58b1d0
// 0058b168  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0058b16c  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 0058b173  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 0058b177  69f6371b0000         imul esi, esi, 0x1b37
// 0058b17d  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 0058b184  0fbfdb               movsx ebx, bx
// 0058b187  69ed12170000         imul ebp, ebp, 0x1712
// 0058b18d  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 0058b191  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0058b195  69dbfc730000         imul ebx, ebx, 0x73fc
// 0058b19b  0faf11               imul edx, dword ptr [ecx]
// 0058b19e  2bf5                 sub esi, ebp
// 0058b1a0  03f3                 add esi, ebx
// 0058b1a2  0fbf18               movsx ebx, word ptr [eax]
// 0058b1a5  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 0058b1a9  69dbba280000         imul ebx, ebx, 0x28ba
// 0058b1af  2bf3                 sub esi, ebx
// 0058b1b1  c1e20f               shl edx, 0xf
// 0058b1b4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0058b1bb  2bd6                 sub edx, esi
// 0058b1bd  8b742458             mov esi, dword ptr [esp + 0x58]
// 0058b1c1  c1fb0d               sar ebx, 0xd
// 0058b1c4  81c200100000         add edx, 0x1000
// 0058b1ca  895ffc               mov dword ptr [edi - 4], ebx
// 0058b1cd  c1fa0d               sar edx, 0xd
// 0058b1d0  89571c               mov dword ptr [edi + 0x1c], edx
// 0058b1d3  8d5601               lea edx, [esi + 1]
// 0058b1d6  83fa06               cmp edx, 6
// 0058b1d9  0f84a9000000         je 0x58b288
// 0058b1df  83fa04               cmp edx, 4
// 0058b1e2  0f84a0000000         je 0x58b288
// 0058b1e8  83fa02               cmp edx, 2
// 0058b1eb  0f8497000000         je 0x58b288
// 0058b1f1  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 0058b1f5  6685db               test bx, bx
// 0058b1f8  7522                 jne 0x58b21c
// 0058b1fa  66395802             cmp word ptr [eax + 2], bx
// 0058b1fe  751c                 jne 0x58b21c
// 0058b200  66395822             cmp word ptr [eax + 0x22], bx
// 0058b204  7516                 jne 0x58b21c
// 0058b206  66395842             cmp word ptr [eax + 0x42], bx
// 0058b20a  7510                 jne 0x58b21c
// 0058b20c  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0058b210  0faf5104             imul edx, dword ptr [ecx + 4]
// 0058b214  03d2                 add edx, edx
// 0058b216  03d2                 add edx, edx
// 0058b218  8917                 mov dword ptr [edi], edx
// 0058b21a  eb69                 jmp 0x58b285
// 0058b21c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 0058b220  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 0058b227  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 0058b22b  69f6371b0000         imul esi, esi, 0x1b37
// 0058b231  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 0058b238  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0058b23c  69ed12170000         imul ebp, ebp, 0x1712
// 0058b242  0faf5104             imul edx, dword ptr [ecx + 4]
// 0058b246  2bf5                 sub esi, ebp
// 0058b248  0fbf6802             movsx ebp, word ptr [eax + 2]
// 0058b24c  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 0058b250  0fbfdb               movsx ebx, bx
// 0058b253  69edba280000         imul ebp, ebp, 0x28ba
// 0058b259  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 0058b25d  69dbfc730000         imul ebx, ebx, 0x73fc
// 0058b263  2bf5                 sub esi, ebp
// 0058b265  03f3                 add esi, ebx
// 0058b267  c1e20f               shl edx, 0xf
// 0058b26a  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0058b271  2bd6                 sub edx, esi
// 0058b273  8b742458             mov esi, dword ptr [esp + 0x58]
// 0058b277  c1fb0d               sar ebx, 0xd
// 0058b27a  81c200100000         add edx, 0x1000
// 0058b280  891f                 mov dword ptr [edi], ebx
// 0058b282  c1fa0d               sar edx, 0xd
// 0058b285  895720               mov dword ptr [edi + 0x20], edx
// 0058b288  83fe06               cmp esi, 6
// 0058b28b  0f84ab000000         je 0x58b33c
// 0058b291  83fe04               cmp esi, 4
// 0058b294  0f84a2000000         je 0x58b33c
// 0058b29a  83fe02               cmp esi, 2
// 0058b29d  0f8499000000         je 0x58b33c
// 0058b2a3  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 0058b2a7  6685db               test bx, bx
// 0058b2aa  7523                 jne 0x58b2cf
// 0058b2ac  66395804             cmp word ptr [eax + 4], bx
// 0058b2b0  751d                 jne 0x58b2cf
// 0058b2b2  66395824             cmp word ptr [eax + 0x24], bx
// 0058b2b6  7517                 jne 0x58b2cf
// 0058b2b8  66395844             cmp word ptr [eax + 0x44], bx
// 0058b2bc  7511                 jne 0x58b2cf
// 0058b2be  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0058b2c2  0faf5108             imul edx, dword ptr [ecx + 8]
// 0058b2c6  03d2                 add edx, edx
// 0058b2c8  03d2                 add edx, edx
// 0058b2ca  895704               mov dword ptr [edi + 4], edx
// 0058b2cd  eb6a                 jmp 0x58b339
// 0058b2cf  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 0058b2d3  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 0058b2da  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 0058b2de  69f6371b0000         imul esi, esi, 0x1b37
// 0058b2e4  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 0058b2eb  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0058b2ef  69ed12170000         imul ebp, ebp, 0x1712
// 0058b2f5  0faf5108             imul edx, dword ptr [ecx + 8]
// 0058b2f9  2bf5                 sub esi, ebp
// 0058b2fb  0fbf6804             movsx ebp, word ptr [eax + 4]
// 0058b2ff  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 0058b303  0fbfdb               movsx ebx, bx
// 0058b306  69edba280000         imul ebp, ebp, 0x28ba
// 0058b30c  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 0058b310  69dbfc730000         imul ebx, ebx, 0x73fc
// 0058b316  2bf5                 sub esi, ebp
// 0058b318  03f3                 add esi, ebx
// 0058b31a  c1e20f               shl edx, 0xf
// 0058b31d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0058b324  2bd6                 sub edx, esi
// 0058b326  8b742458             mov esi, dword ptr [esp + 0x58]
// 0058b32a  c1fb0d               sar ebx, 0xd
// 0058b32d  81c200100000         add edx, 0x1000
// 0058b333  895f04               mov dword ptr [edi + 4], ebx
// 0058b336  c1fa0d               sar edx, 0xd
// 0058b339  895724               mov dword ptr [edi + 0x24], edx
// 0058b33c  8d56ff               lea edx, [esi - 1]
// 0058b33f  83fa06               cmp edx, 6
// 0058b342  0f84ab000000         je 0x58b3f3
// 0058b348  83fa04               cmp edx, 4
// 0058b34b  0f84a2000000         je 0x58b3f3
// 0058b351  83fa02               cmp edx, 2
// 0058b354  0f8499000000         je 0x58b3f3
// 0058b35a  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 0058b35e  6685db               test bx, bx
// 0058b361  7523                 jne 0x58b386
// 0058b363  66395806             cmp word ptr [eax + 6], bx
// 0058b367  751d                 jne 0x58b386
// 0058b369  66395826             cmp word ptr [eax + 0x26], bx
// 0058b36d  7517                 jne 0x58b386
// 0058b36f  66395846             cmp word ptr [eax + 0x46], bx
// 0058b373  7511                 jne 0x58b386
// 0058b375  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0058b379  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0058b37d  03d2                 add edx, edx
// 0058b37f  03d2                 add edx, edx
// 0058b381  895708               mov dword ptr [edi + 8], edx
// 0058b384  eb6a                 jmp 0x58b3f0
// 0058b386  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0058b38a  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 0058b391  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 0058b395  69f6371b0000         imul esi, esi, 0x1b37
// 0058b39b  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 0058b3a2  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0058b3a6  69ed12170000         imul ebp, ebp, 0x1712
// 0058b3ac  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0058b3b0  2bf5                 sub esi, ebp
// 0058b3b2  0fbf6806             movsx ebp, word ptr [eax + 6]
// 0058b3b6  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 0058b3ba  0fbfdb               movsx ebx, bx
// 0058b3bd  69edba280000         imul ebp, ebp, 0x28ba
// 0058b3c3  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 0058b3c7  69dbfc730000         imul ebx, ebx, 0x73fc
// 0058b3cd  2bf5                 sub esi, ebp
// 0058b3cf  03f3                 add esi, ebx
// 0058b3d1  c1e20f               shl edx, 0xf
// 0058b3d4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0058b3db  2bd6                 sub edx, esi
// 0058b3dd  8b742458             mov esi, dword ptr [esp + 0x58]
// 0058b3e1  c1fb0d               sar ebx, 0xd
// 0058b3e4  81c200100000         add edx, 0x1000
// 0058b3ea  895f08               mov dword ptr [edi + 8], ebx
// 0058b3ed  c1fa0d               sar edx, 0xd
// 0058b3f0  895728               mov dword ptr [edi + 0x28], edx
// 0058b3f3  83ee04               sub esi, 4
// 0058b3f6  8d5602               lea edx, [esi + 2]
// 0058b3f9  83c008               add eax, 8
// 0058b3fc  83c110               add ecx, 0x10
// 0058b3ff  83c710               add edi, 0x10
// 0058b402  89742458             mov dword ptr [esp + 0x58], esi
// 0058b406  85d2                 test edx, edx
// 0058b408  0f8f12fdffff         jg 0x58b120
// 0058b40e  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0058b412  8b5500               mov edx, dword ptr [ebp]
// 0058b415  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058b419  03542468             add edx, dword ptr [esp + 0x68]
// 0058b41d  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058b421  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0058b425  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0058b429  85c9                 test ecx, ecx
// 0058b42b  7526                 jne 0x58b453
// 0058b42d  85db                 test ebx, ebx
// 0058b42f  7522                 jne 0x58b453
// 0058b431  85ff                 test edi, edi
// 0058b433  751e                 jne 0x58b453
// 0058b435  85f6                 test esi, esi
// 0058b437  751a                 jne 0x58b453
// 0058b439  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058b43d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058b441  83c010               add eax, 0x10
// 0058b444  c1f805               sar eax, 5
// 0058b447  25ff030000           and eax, 0x3ff
// 0058b44c  8a0408               mov al, byte ptr [eax + ecx]
// 0058b44f  8802                 mov byte ptr [edx], al
// 0058b451  eb52                 jmp 0x58b4a5
// 0058b453  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058b457  69c9fc730000         imul ecx, ecx, 0x73fc
// 0058b45d  69dbba280000         imul ebx, ebx, 0x28ba
// 0058b463  69ff371b0000         imul edi, edi, 0x1b37
// 0058b469  69f612170000         imul esi, esi, 0x1712
// 0058b46f  2bcb                 sub ecx, ebx
// 0058b471  03cf                 add ecx, edi
// 0058b473  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058b477  2bce                 sub ecx, esi
// 0058b479  c1e00f               shl eax, 0xf
// 0058b47c  8bf1                 mov esi, ecx
// 0058b47e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0058b485  2bc6                 sub eax, esi
// 0058b487  c1f914               sar ecx, 0x14
// 0058b48a  0500000800           add eax, 0x80000
// 0058b48f  81e1ff030000         and ecx, 0x3ff
// 0058b495  8a0c39               mov cl, byte ptr [ecx + edi]
// 0058b498  c1f814               sar eax, 0x14
// 0058b49b  25ff030000           and eax, 0x3ff
// 0058b4a0  880a                 mov byte ptr [edx], cl
// 0058b4a2  8a0438               mov al, byte ptr [eax + edi]
// 0058b4a5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0058b4a9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0058b4ad  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0058b4b1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0058b4b5  884201               mov byte ptr [edx + 1], al
// 0058b4b8  8b5504               mov edx, dword ptr [ebp + 4]
// 0058b4bb  03542468             add edx, dword ptr [esp + 0x68]
// 0058b4bf  85c9                 test ecx, ecx
// 0058b4c1  7530                 jne 0x58b4f3
// 0058b4c3  85db                 test ebx, ebx
// 0058b4c5  752c                 jne 0x58b4f3
// 0058b4c7  85ff                 test edi, edi
// 0058b4c9  7528                 jne 0x58b4f3
// 0058b4cb  85f6                 test esi, esi
// 0058b4cd  7524                 jne 0x58b4f3
// 0058b4cf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058b4d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058b4d7  83c110               add ecx, 0x10
// 0058b4da  5f                   pop edi
// 0058b4db  c1f905               sar ecx, 5
// 0058b4de  81e1ff030000         and ecx, 0x3ff
// 0058b4e4  8a0401               mov al, byte ptr [ecx + eax]
// 0058b4e7  5e                   pop esi
// 0058b4e8  5d                   pop ebp
// 0058b4e9  8802                 mov byte ptr [edx], al
// 0058b4eb  884201               mov byte ptr [edx + 1], al
// 0058b4ee  5b                   pop ebx
// 0058b4ef  83c444               add esp, 0x44
// 0058b4f2  c3                   ret 
// 0058b4f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0058b4f7  69c9fc730000         imul ecx, ecx, 0x73fc
// 0058b4fd  69ff371b0000         imul edi, edi, 0x1b37
// 0058b503  69f612170000         imul esi, esi, 0x1712
// 0058b509  69dbba280000         imul ebx, ebx, 0x28ba
// 0058b50f  03cf                 add ecx, edi
// 0058b511  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058b515  2bce                 sub ecx, esi
// 0058b517  2bcb                 sub ecx, ebx
// 0058b519  c1e00f               shl eax, 0xf
// 0058b51c  8bf1                 mov esi, ecx
// 0058b51e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0058b525  2bc6                 sub eax, esi
// 0058b527  c1f914               sar ecx, 0x14
// 0058b52a  0500000800           add eax, 0x80000
// 0058b52f  81e1ff030000         and ecx, 0x3ff
// 0058b535  8a0c39               mov cl, byte ptr [ecx + edi]
// 0058b538  c1f814               sar eax, 0x14
// 0058b53b  880a                 mov byte ptr [edx], cl
// 0058b53d  25ff030000           and eax, 0x3ff
// 0058b542  8a0438               mov al, byte ptr [eax + edi]
// 0058b545  5f                   pop edi
// 0058b546  5e                   pop esi
// 0058b547  5d                   pop ebp
// 0058b548  884201               mov byte ptr [edx + 1], al
// 0058b54b  5b                   pop ebx
// 0058b54c  83c444               add esp, 0x44
// 0058b54f  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
