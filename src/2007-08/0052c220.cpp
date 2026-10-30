// from server: 100% by auto
// roc 2007-08 0052c220  unit: seg_00520000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c220
//
// 0052c220  83ec44               sub esp, 0x44
// 0052c223  8b442448             mov eax, dword ptr [esp + 0x48]
// 0052c227  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0052c22d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0052c231  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0052c234  0580000000           add eax, 0x80
// 0052c239  53                   push ebx
// 0052c23a  89442404             mov dword ptr [esp + 4], eax
// 0052c23e  8b442454             mov eax, dword ptr [esp + 0x54]
// 0052c242  55                   push ebp
// 0052c243  56                   push esi
// 0052c244  8bd1                 mov edx, ecx
// 0052c246  83c030               add eax, 0x30
// 0052c249  be06000000           mov esi, 6
// 0052c24e  2bd1                 sub edx, ecx
// 0052c250  57                   push edi
// 0052c251  89742458             mov dword ptr [esp + 0x58], esi
// 0052c255  8d7c1418             lea edi, [esp + edx + 0x18]
// 0052c259  8da42400000000       lea esp, [esp]
// 0052c260  8d5602               lea edx, [esi + 2]
// 0052c263  83fa06               cmp edx, 6
// 0052c266  0f84a7000000         je 0x52c313
// 0052c26c  83fa04               cmp edx, 4
// 0052c26f  0f849e000000         je 0x52c313
// 0052c275  83fa02               cmp edx, 2
// 0052c278  0f8495000000         je 0x52c313
// 0052c27e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 0052c282  6685db               test bx, bx
// 0052c285  7521                 jne 0x52c2a8
// 0052c287  663918               cmp word ptr [eax], bx
// 0052c28a  751c                 jne 0x52c2a8
// 0052c28c  66395820             cmp word ptr [eax + 0x20], bx
// 0052c290  7516                 jne 0x52c2a8
// 0052c292  66395840             cmp word ptr [eax + 0x40], bx
// 0052c296  7510                 jne 0x52c2a8
// 0052c298  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0052c29c  0faf11               imul edx, dword ptr [ecx]
// 0052c29f  03d2                 add edx, edx
// 0052c2a1  03d2                 add edx, edx
// 0052c2a3  8957fc               mov dword ptr [edi - 4], edx
// 0052c2a6  eb68                 jmp 0x52c310
// 0052c2a8  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0052c2ac  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 0052c2b3  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 0052c2b7  69f6371b0000         imul esi, esi, 0x1b37
// 0052c2bd  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 0052c2c4  0fbfdb               movsx ebx, bx
// 0052c2c7  69ed12170000         imul ebp, ebp, 0x1712
// 0052c2cd  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 0052c2d1  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0052c2d5  69dbfc730000         imul ebx, ebx, 0x73fc
// 0052c2db  0faf11               imul edx, dword ptr [ecx]
// 0052c2de  2bf5                 sub esi, ebp
// 0052c2e0  03f3                 add esi, ebx
// 0052c2e2  0fbf18               movsx ebx, word ptr [eax]
// 0052c2e5  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 0052c2e9  69dbba280000         imul ebx, ebx, 0x28ba
// 0052c2ef  2bf3                 sub esi, ebx
// 0052c2f1  c1e20f               shl edx, 0xf
// 0052c2f4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0052c2fb  2bd6                 sub edx, esi
// 0052c2fd  8b742458             mov esi, dword ptr [esp + 0x58]
// 0052c301  c1fb0d               sar ebx, 0xd
// 0052c304  81c200100000         add edx, 0x1000
// 0052c30a  895ffc               mov dword ptr [edi - 4], ebx
// 0052c30d  c1fa0d               sar edx, 0xd
// 0052c310  89571c               mov dword ptr [edi + 0x1c], edx
// 0052c313  8d5601               lea edx, [esi + 1]
// 0052c316  83fa06               cmp edx, 6
// 0052c319  0f84a9000000         je 0x52c3c8
// 0052c31f  83fa04               cmp edx, 4
// 0052c322  0f84a0000000         je 0x52c3c8
// 0052c328  83fa02               cmp edx, 2
// 0052c32b  0f8497000000         je 0x52c3c8
// 0052c331  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 0052c335  6685db               test bx, bx
// 0052c338  7522                 jne 0x52c35c
// 0052c33a  66395802             cmp word ptr [eax + 2], bx
// 0052c33e  751c                 jne 0x52c35c
// 0052c340  66395822             cmp word ptr [eax + 0x22], bx
// 0052c344  7516                 jne 0x52c35c
// 0052c346  66395842             cmp word ptr [eax + 0x42], bx
// 0052c34a  7510                 jne 0x52c35c
// 0052c34c  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0052c350  0faf5104             imul edx, dword ptr [ecx + 4]
// 0052c354  03d2                 add edx, edx
// 0052c356  03d2                 add edx, edx
// 0052c358  8917                 mov dword ptr [edi], edx
// 0052c35a  eb69                 jmp 0x52c3c5
// 0052c35c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 0052c360  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 0052c367  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 0052c36b  69f6371b0000         imul esi, esi, 0x1b37
// 0052c371  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 0052c378  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0052c37c  69ed12170000         imul ebp, ebp, 0x1712
// 0052c382  0faf5104             imul edx, dword ptr [ecx + 4]
// 0052c386  2bf5                 sub esi, ebp
// 0052c388  0fbf6802             movsx ebp, word ptr [eax + 2]
// 0052c38c  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 0052c390  0fbfdb               movsx ebx, bx
// 0052c393  69edba280000         imul ebp, ebp, 0x28ba
// 0052c399  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 0052c39d  69dbfc730000         imul ebx, ebx, 0x73fc
// 0052c3a3  2bf5                 sub esi, ebp
// 0052c3a5  03f3                 add esi, ebx
// 0052c3a7  c1e20f               shl edx, 0xf
// 0052c3aa  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0052c3b1  2bd6                 sub edx, esi
// 0052c3b3  8b742458             mov esi, dword ptr [esp + 0x58]
// 0052c3b7  c1fb0d               sar ebx, 0xd
// 0052c3ba  81c200100000         add edx, 0x1000
// 0052c3c0  891f                 mov dword ptr [edi], ebx
// 0052c3c2  c1fa0d               sar edx, 0xd
// 0052c3c5  895720               mov dword ptr [edi + 0x20], edx
// 0052c3c8  83fe06               cmp esi, 6
// 0052c3cb  0f84ab000000         je 0x52c47c
// 0052c3d1  83fe04               cmp esi, 4
// 0052c3d4  0f84a2000000         je 0x52c47c
// 0052c3da  83fe02               cmp esi, 2
// 0052c3dd  0f8499000000         je 0x52c47c
// 0052c3e3  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 0052c3e7  6685db               test bx, bx
// 0052c3ea  7523                 jne 0x52c40f
// 0052c3ec  66395804             cmp word ptr [eax + 4], bx
// 0052c3f0  751d                 jne 0x52c40f
// 0052c3f2  66395824             cmp word ptr [eax + 0x24], bx
// 0052c3f6  7517                 jne 0x52c40f
// 0052c3f8  66395844             cmp word ptr [eax + 0x44], bx
// 0052c3fc  7511                 jne 0x52c40f
// 0052c3fe  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0052c402  0faf5108             imul edx, dword ptr [ecx + 8]
// 0052c406  03d2                 add edx, edx
// 0052c408  03d2                 add edx, edx
// 0052c40a  895704               mov dword ptr [edi + 4], edx
// 0052c40d  eb6a                 jmp 0x52c479
// 0052c40f  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 0052c413  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 0052c41a  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 0052c41e  69f6371b0000         imul esi, esi, 0x1b37
// 0052c424  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 0052c42b  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0052c42f  69ed12170000         imul ebp, ebp, 0x1712
// 0052c435  0faf5108             imul edx, dword ptr [ecx + 8]
// 0052c439  2bf5                 sub esi, ebp
// 0052c43b  0fbf6804             movsx ebp, word ptr [eax + 4]
// 0052c43f  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 0052c443  0fbfdb               movsx ebx, bx
// 0052c446  69edba280000         imul ebp, ebp, 0x28ba
// 0052c44c  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 0052c450  69dbfc730000         imul ebx, ebx, 0x73fc
// 0052c456  2bf5                 sub esi, ebp
// 0052c458  03f3                 add esi, ebx
// 0052c45a  c1e20f               shl edx, 0xf
// 0052c45d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0052c464  2bd6                 sub edx, esi
// 0052c466  8b742458             mov esi, dword ptr [esp + 0x58]
// 0052c46a  c1fb0d               sar ebx, 0xd
// 0052c46d  81c200100000         add edx, 0x1000
// 0052c473  895f04               mov dword ptr [edi + 4], ebx
// 0052c476  c1fa0d               sar edx, 0xd
// 0052c479  895724               mov dword ptr [edi + 0x24], edx
// 0052c47c  8d56ff               lea edx, [esi - 1]
// 0052c47f  83fa06               cmp edx, 6
// 0052c482  0f84ab000000         je 0x52c533
// 0052c488  83fa04               cmp edx, 4
// 0052c48b  0f84a2000000         je 0x52c533
// 0052c491  83fa02               cmp edx, 2
// 0052c494  0f8499000000         je 0x52c533
// 0052c49a  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 0052c49e  6685db               test bx, bx
// 0052c4a1  7523                 jne 0x52c4c6
// 0052c4a3  66395806             cmp word ptr [eax + 6], bx
// 0052c4a7  751d                 jne 0x52c4c6
// 0052c4a9  66395826             cmp word ptr [eax + 0x26], bx
// 0052c4ad  7517                 jne 0x52c4c6
// 0052c4af  66395846             cmp word ptr [eax + 0x46], bx
// 0052c4b3  7511                 jne 0x52c4c6
// 0052c4b5  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0052c4b9  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0052c4bd  03d2                 add edx, edx
// 0052c4bf  03d2                 add edx, edx
// 0052c4c1  895708               mov dword ptr [edi + 8], edx
// 0052c4c4  eb6a                 jmp 0x52c530
// 0052c4c6  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0052c4ca  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 0052c4d1  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 0052c4d5  69f6371b0000         imul esi, esi, 0x1b37
// 0052c4db  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 0052c4e2  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0052c4e6  69ed12170000         imul ebp, ebp, 0x1712
// 0052c4ec  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0052c4f0  2bf5                 sub esi, ebp
// 0052c4f2  0fbf6806             movsx ebp, word ptr [eax + 6]
// 0052c4f6  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 0052c4fa  0fbfdb               movsx ebx, bx
// 0052c4fd  69edba280000         imul ebp, ebp, 0x28ba
// 0052c503  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 0052c507  69dbfc730000         imul ebx, ebx, 0x73fc
// 0052c50d  2bf5                 sub esi, ebp
// 0052c50f  03f3                 add esi, ebx
// 0052c511  c1e20f               shl edx, 0xf
// 0052c514  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0052c51b  2bd6                 sub edx, esi
// 0052c51d  8b742458             mov esi, dword ptr [esp + 0x58]
// 0052c521  c1fb0d               sar ebx, 0xd
// 0052c524  81c200100000         add edx, 0x1000
// 0052c52a  895f08               mov dword ptr [edi + 8], ebx
// 0052c52d  c1fa0d               sar edx, 0xd
// 0052c530  895728               mov dword ptr [edi + 0x28], edx
// 0052c533  83ee04               sub esi, 4
// 0052c536  8d5602               lea edx, [esi + 2]
// 0052c539  83c008               add eax, 8
// 0052c53c  83c110               add ecx, 0x10
// 0052c53f  83c710               add edi, 0x10
// 0052c542  85d2                 test edx, edx
// 0052c544  89742458             mov dword ptr [esp + 0x58], esi
// 0052c548  0f8f12fdffff         jg 0x52c260
// 0052c54e  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0052c552  8b5500               mov edx, dword ptr [ebp]
// 0052c555  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052c559  03542468             add edx, dword ptr [esp + 0x68]
// 0052c55d  85c9                 test ecx, ecx
// 0052c55f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052c563  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052c567  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052c56b  7526                 jne 0x52c593
// 0052c56d  85db                 test ebx, ebx
// 0052c56f  7522                 jne 0x52c593
// 0052c571  85ff                 test edi, edi
// 0052c573  751e                 jne 0x52c593
// 0052c575  85f6                 test esi, esi
// 0052c577  751a                 jne 0x52c593
// 0052c579  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052c57d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c581  83c010               add eax, 0x10
// 0052c584  c1f805               sar eax, 5
// 0052c587  25ff030000           and eax, 0x3ff
// 0052c58c  8a0408               mov al, byte ptr [eax + ecx]
// 0052c58f  8802                 mov byte ptr [edx], al
// 0052c591  eb52                 jmp 0x52c5e5
// 0052c593  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052c597  69c9fc730000         imul ecx, ecx, 0x73fc
// 0052c59d  69dbba280000         imul ebx, ebx, 0x28ba
// 0052c5a3  69ff371b0000         imul edi, edi, 0x1b37
// 0052c5a9  69f612170000         imul esi, esi, 0x1712
// 0052c5af  2bcb                 sub ecx, ebx
// 0052c5b1  03cf                 add ecx, edi
// 0052c5b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052c5b7  2bce                 sub ecx, esi
// 0052c5b9  c1e00f               shl eax, 0xf
// 0052c5bc  8bf1                 mov esi, ecx
// 0052c5be  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0052c5c5  2bc6                 sub eax, esi
// 0052c5c7  c1f914               sar ecx, 0x14
// 0052c5ca  0500000800           add eax, 0x80000
// 0052c5cf  81e1ff030000         and ecx, 0x3ff
// 0052c5d5  8a0c39               mov cl, byte ptr [ecx + edi]
// 0052c5d8  c1f814               sar eax, 0x14
// 0052c5db  25ff030000           and eax, 0x3ff
// 0052c5e0  880a                 mov byte ptr [edx], cl
// 0052c5e2  8a0438               mov al, byte ptr [eax + edi]
// 0052c5e5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0052c5e9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0052c5ed  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0052c5f1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0052c5f5  884201               mov byte ptr [edx + 1], al
// 0052c5f8  8b5504               mov edx, dword ptr [ebp + 4]
// 0052c5fb  03542468             add edx, dword ptr [esp + 0x68]
// 0052c5ff  85c9                 test ecx, ecx
// 0052c601  7530                 jne 0x52c633
// 0052c603  85db                 test ebx, ebx
// 0052c605  752c                 jne 0x52c633
// 0052c607  85ff                 test edi, edi
// 0052c609  7528                 jne 0x52c633
// 0052c60b  85f6                 test esi, esi
// 0052c60d  7524                 jne 0x52c633
// 0052c60f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052c613  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052c617  83c110               add ecx, 0x10
// 0052c61a  5f                   pop edi
// 0052c61b  c1f905               sar ecx, 5
// 0052c61e  81e1ff030000         and ecx, 0x3ff
// 0052c624  8a0401               mov al, byte ptr [ecx + eax]
// 0052c627  5e                   pop esi
// 0052c628  5d                   pop ebp
// 0052c629  8802                 mov byte ptr [edx], al
// 0052c62b  884201               mov byte ptr [edx + 1], al
// 0052c62e  5b                   pop ebx
// 0052c62f  83c444               add esp, 0x44
// 0052c632  c3                   ret 
// 0052c633  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052c637  69c9fc730000         imul ecx, ecx, 0x73fc
// 0052c63d  69ff371b0000         imul edi, edi, 0x1b37
// 0052c643  69f612170000         imul esi, esi, 0x1712
// 0052c649  69dbba280000         imul ebx, ebx, 0x28ba
// 0052c64f  03cf                 add ecx, edi
// 0052c651  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052c655  2bce                 sub ecx, esi
// 0052c657  2bcb                 sub ecx, ebx
// 0052c659  c1e00f               shl eax, 0xf
// 0052c65c  8bf1                 mov esi, ecx
// 0052c65e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0052c665  2bc6                 sub eax, esi
// 0052c667  c1f914               sar ecx, 0x14
// 0052c66a  0500000800           add eax, 0x80000
// 0052c66f  81e1ff030000         and ecx, 0x3ff
// 0052c675  8a0c39               mov cl, byte ptr [ecx + edi]
// 0052c678  c1f814               sar eax, 0x14
// 0052c67b  880a                 mov byte ptr [edx], cl
// 0052c67d  25ff030000           and eax, 0x3ff
// 0052c682  8a0438               mov al, byte ptr [eax + edi]
// 0052c685  5f                   pop edi
// 0052c686  5e                   pop esi
// 0052c687  5d                   pop ebp
// 0052c688  884201               mov byte ptr [edx + 1], al
// 0052c68b  5b                   pop ebx
// 0052c68c  83c444               add esp, 0x44
// 0052c68f  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
