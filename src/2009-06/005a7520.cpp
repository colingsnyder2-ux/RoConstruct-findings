// roc 2009-06 005a7520  unit: seg_005a0000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a7520
//
// 005a7520  83ec44               sub esp, 0x44
// 005a7523  8b442448             mov eax, dword ptr [esp + 0x48]
// 005a7527  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 005a752d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005a7531  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 005a7534  83e880               sub eax, -0x80
// 005a7537  53                   push ebx
// 005a7538  89442404             mov dword ptr [esp + 4], eax
// 005a753c  8b442454             mov eax, dword ptr [esp + 0x54]
// 005a7540  55                   push ebp
// 005a7541  56                   push esi
// 005a7542  8bd1                 mov edx, ecx
// 005a7544  83c030               add eax, 0x30
// 005a7547  be06000000           mov esi, 6
// 005a754c  2bd1                 sub edx, ecx
// 005a754e  57                   push edi
// 005a754f  89742458             mov dword ptr [esp + 0x58], esi
// 005a7553  8d7c1418             lea edi, [esp + edx + 0x18]
// 005a7557  eb07                 jmp 0x5a7560
// 005a7559  8da42400000000       lea esp, [esp]
// 005a7560  8d5602               lea edx, [esi + 2]
// 005a7563  83fa06               cmp edx, 6
// 005a7566  0f84a7000000         je 0x5a7613
// 005a756c  83fa04               cmp edx, 4
// 005a756f  0f849e000000         je 0x5a7613
// 005a7575  83fa02               cmp edx, 2
// 005a7578  0f8495000000         je 0x5a7613
// 005a757e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 005a7582  6685db               test bx, bx
// 005a7585  7521                 jne 0x5a75a8
// 005a7587  663918               cmp word ptr [eax], bx
// 005a758a  751c                 jne 0x5a75a8
// 005a758c  66395820             cmp word ptr [eax + 0x20], bx
// 005a7590  7516                 jne 0x5a75a8
// 005a7592  66395840             cmp word ptr [eax + 0x40], bx
// 005a7596  7510                 jne 0x5a75a8
// 005a7598  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 005a759c  0faf11               imul edx, dword ptr [ecx]
// 005a759f  03d2                 add edx, edx
// 005a75a1  03d2                 add edx, edx
// 005a75a3  8957fc               mov dword ptr [edi - 4], edx
// 005a75a6  eb68                 jmp 0x5a7610
// 005a75a8  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 005a75ac  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 005a75b3  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 005a75b7  69f6371b0000         imul esi, esi, 0x1b37
// 005a75bd  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 005a75c4  0fbfdb               movsx ebx, bx
// 005a75c7  69ed12170000         imul ebp, ebp, 0x1712
// 005a75cd  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 005a75d1  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 005a75d5  69dbfc730000         imul ebx, ebx, 0x73fc
// 005a75db  0faf11               imul edx, dword ptr [ecx]
// 005a75de  2bf5                 sub esi, ebp
// 005a75e0  03f3                 add esi, ebx
// 005a75e2  0fbf18               movsx ebx, word ptr [eax]
// 005a75e5  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 005a75e9  69dbba280000         imul ebx, ebx, 0x28ba
// 005a75ef  2bf3                 sub esi, ebx
// 005a75f1  c1e20f               shl edx, 0xf
// 005a75f4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005a75fb  2bd6                 sub edx, esi
// 005a75fd  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a7601  c1fb0d               sar ebx, 0xd
// 005a7604  81c200100000         add edx, 0x1000
// 005a760a  895ffc               mov dword ptr [edi - 4], ebx
// 005a760d  c1fa0d               sar edx, 0xd
// 005a7610  89571c               mov dword ptr [edi + 0x1c], edx
// 005a7613  8d5601               lea edx, [esi + 1]
// 005a7616  83fa06               cmp edx, 6
// 005a7619  0f84a9000000         je 0x5a76c8
// 005a761f  83fa04               cmp edx, 4
// 005a7622  0f84a0000000         je 0x5a76c8
// 005a7628  83fa02               cmp edx, 2
// 005a762b  0f8497000000         je 0x5a76c8
// 005a7631  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 005a7635  6685db               test bx, bx
// 005a7638  7522                 jne 0x5a765c
// 005a763a  66395802             cmp word ptr [eax + 2], bx
// 005a763e  751c                 jne 0x5a765c
// 005a7640  66395822             cmp word ptr [eax + 0x22], bx
// 005a7644  7516                 jne 0x5a765c
// 005a7646  66395842             cmp word ptr [eax + 0x42], bx
// 005a764a  7510                 jne 0x5a765c
// 005a764c  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 005a7650  0faf5104             imul edx, dword ptr [ecx + 4]
// 005a7654  03d2                 add edx, edx
// 005a7656  03d2                 add edx, edx
// 005a7658  8917                 mov dword ptr [edi], edx
// 005a765a  eb69                 jmp 0x5a76c5
// 005a765c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 005a7660  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 005a7667  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 005a766b  69f6371b0000         imul esi, esi, 0x1b37
// 005a7671  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 005a7678  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 005a767c  69ed12170000         imul ebp, ebp, 0x1712
// 005a7682  0faf5104             imul edx, dword ptr [ecx + 4]
// 005a7686  2bf5                 sub esi, ebp
// 005a7688  0fbf6802             movsx ebp, word ptr [eax + 2]
// 005a768c  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 005a7690  0fbfdb               movsx ebx, bx
// 005a7693  69edba280000         imul ebp, ebp, 0x28ba
// 005a7699  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 005a769d  69dbfc730000         imul ebx, ebx, 0x73fc
// 005a76a3  2bf5                 sub esi, ebp
// 005a76a5  03f3                 add esi, ebx
// 005a76a7  c1e20f               shl edx, 0xf
// 005a76aa  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005a76b1  2bd6                 sub edx, esi
// 005a76b3  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a76b7  c1fb0d               sar ebx, 0xd
// 005a76ba  81c200100000         add edx, 0x1000
// 005a76c0  891f                 mov dword ptr [edi], ebx
// 005a76c2  c1fa0d               sar edx, 0xd
// 005a76c5  895720               mov dword ptr [edi + 0x20], edx
// 005a76c8  83fe06               cmp esi, 6
// 005a76cb  0f84ab000000         je 0x5a777c
// 005a76d1  83fe04               cmp esi, 4
// 005a76d4  0f84a2000000         je 0x5a777c
// 005a76da  83fe02               cmp esi, 2
// 005a76dd  0f8499000000         je 0x5a777c
// 005a76e3  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 005a76e7  6685db               test bx, bx
// 005a76ea  7523                 jne 0x5a770f
// 005a76ec  66395804             cmp word ptr [eax + 4], bx
// 005a76f0  751d                 jne 0x5a770f
// 005a76f2  66395824             cmp word ptr [eax + 0x24], bx
// 005a76f6  7517                 jne 0x5a770f
// 005a76f8  66395844             cmp word ptr [eax + 0x44], bx
// 005a76fc  7511                 jne 0x5a770f
// 005a76fe  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 005a7702  0faf5108             imul edx, dword ptr [ecx + 8]
// 005a7706  03d2                 add edx, edx
// 005a7708  03d2                 add edx, edx
// 005a770a  895704               mov dword ptr [edi + 4], edx
// 005a770d  eb6a                 jmp 0x5a7779
// 005a770f  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 005a7713  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 005a771a  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 005a771e  69f6371b0000         imul esi, esi, 0x1b37
// 005a7724  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 005a772b  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 005a772f  69ed12170000         imul ebp, ebp, 0x1712
// 005a7735  0faf5108             imul edx, dword ptr [ecx + 8]
// 005a7739  2bf5                 sub esi, ebp
// 005a773b  0fbf6804             movsx ebp, word ptr [eax + 4]
// 005a773f  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 005a7743  0fbfdb               movsx ebx, bx
// 005a7746  69edba280000         imul ebp, ebp, 0x28ba
// 005a774c  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 005a7750  69dbfc730000         imul ebx, ebx, 0x73fc
// 005a7756  2bf5                 sub esi, ebp
// 005a7758  03f3                 add esi, ebx
// 005a775a  c1e20f               shl edx, 0xf
// 005a775d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005a7764  2bd6                 sub edx, esi
// 005a7766  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a776a  c1fb0d               sar ebx, 0xd
// 005a776d  81c200100000         add edx, 0x1000
// 005a7773  895f04               mov dword ptr [edi + 4], ebx
// 005a7776  c1fa0d               sar edx, 0xd
// 005a7779  895724               mov dword ptr [edi + 0x24], edx
// 005a777c  8d56ff               lea edx, [esi - 1]
// 005a777f  83fa06               cmp edx, 6
// 005a7782  0f84ab000000         je 0x5a7833
// 005a7788  83fa04               cmp edx, 4
// 005a778b  0f84a2000000         je 0x5a7833
// 005a7791  83fa02               cmp edx, 2
// 005a7794  0f8499000000         je 0x5a7833
// 005a779a  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 005a779e  6685db               test bx, bx
// 005a77a1  7523                 jne 0x5a77c6
// 005a77a3  66395806             cmp word ptr [eax + 6], bx
// 005a77a7  751d                 jne 0x5a77c6
// 005a77a9  66395826             cmp word ptr [eax + 0x26], bx
// 005a77ad  7517                 jne 0x5a77c6
// 005a77af  66395846             cmp word ptr [eax + 0x46], bx
// 005a77b3  7511                 jne 0x5a77c6
// 005a77b5  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 005a77b9  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 005a77bd  03d2                 add edx, edx
// 005a77bf  03d2                 add edx, edx
// 005a77c1  895708               mov dword ptr [edi + 8], edx
// 005a77c4  eb6a                 jmp 0x5a7830
// 005a77c6  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 005a77ca  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 005a77d1  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 005a77d5  69f6371b0000         imul esi, esi, 0x1b37
// 005a77db  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 005a77e2  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 005a77e6  69ed12170000         imul ebp, ebp, 0x1712
// 005a77ec  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 005a77f0  2bf5                 sub esi, ebp
// 005a77f2  0fbf6806             movsx ebp, word ptr [eax + 6]
// 005a77f6  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 005a77fa  0fbfdb               movsx ebx, bx
// 005a77fd  69edba280000         imul ebp, ebp, 0x28ba
// 005a7803  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 005a7807  69dbfc730000         imul ebx, ebx, 0x73fc
// 005a780d  2bf5                 sub esi, ebp
// 005a780f  03f3                 add esi, ebx
// 005a7811  c1e20f               shl edx, 0xf
// 005a7814  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 005a781b  2bd6                 sub edx, esi
// 005a781d  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a7821  c1fb0d               sar ebx, 0xd
// 005a7824  81c200100000         add edx, 0x1000
// 005a782a  895f08               mov dword ptr [edi + 8], ebx
// 005a782d  c1fa0d               sar edx, 0xd
// 005a7830  895728               mov dword ptr [edi + 0x28], edx
// 005a7833  83ee04               sub esi, 4
// 005a7836  8d5602               lea edx, [esi + 2]
// 005a7839  83c008               add eax, 8
// 005a783c  83c110               add ecx, 0x10
// 005a783f  83c710               add edi, 0x10
// 005a7842  89742458             mov dword ptr [esp + 0x58], esi
// 005a7846  85d2                 test edx, edx
// 005a7848  0f8f12fdffff         jg 0x5a7560
// 005a784e  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 005a7852  8b5500               mov edx, dword ptr [ebp]
// 005a7855  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7859  03542468             add edx, dword ptr [esp + 0x68]
// 005a785d  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a7861  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005a7865  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005a7869  85c9                 test ecx, ecx
// 005a786b  7526                 jne 0x5a7893
// 005a786d  85db                 test ebx, ebx
// 005a786f  7522                 jne 0x5a7893
// 005a7871  85ff                 test edi, edi
// 005a7873  751e                 jne 0x5a7893
// 005a7875  85f6                 test esi, esi
// 005a7877  751a                 jne 0x5a7893
// 005a7879  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a787d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a7881  83c010               add eax, 0x10
// 005a7884  c1f805               sar eax, 5
// 005a7887  25ff030000           and eax, 0x3ff
// 005a788c  8a0408               mov al, byte ptr [eax + ecx]
// 005a788f  8802                 mov byte ptr [edx], al
// 005a7891  eb52                 jmp 0x5a78e5
// 005a7893  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a7897  69c9fc730000         imul ecx, ecx, 0x73fc
// 005a789d  69dbba280000         imul ebx, ebx, 0x28ba
// 005a78a3  69ff371b0000         imul edi, edi, 0x1b37
// 005a78a9  69f612170000         imul esi, esi, 0x1712
// 005a78af  2bcb                 sub ecx, ebx
// 005a78b1  03cf                 add ecx, edi
// 005a78b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a78b7  2bce                 sub ecx, esi
// 005a78b9  c1e00f               shl eax, 0xf
// 005a78bc  8bf1                 mov esi, ecx
// 005a78be  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 005a78c5  2bc6                 sub eax, esi
// 005a78c7  c1f914               sar ecx, 0x14
// 005a78ca  0500000800           add eax, 0x80000
// 005a78cf  81e1ff030000         and ecx, 0x3ff
// 005a78d5  8a0c39               mov cl, byte ptr [ecx + edi]
// 005a78d8  c1f814               sar eax, 0x14
// 005a78db  25ff030000           and eax, 0x3ff
// 005a78e0  880a                 mov byte ptr [edx], cl
// 005a78e2  8a0438               mov al, byte ptr [eax + edi]
// 005a78e5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a78e9  8b742450             mov esi, dword ptr [esp + 0x50]
// 005a78ed  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005a78f1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005a78f5  884201               mov byte ptr [edx + 1], al
// 005a78f8  8b5504               mov edx, dword ptr [ebp + 4]
// 005a78fb  03542468             add edx, dword ptr [esp + 0x68]
// 005a78ff  85c9                 test ecx, ecx
// 005a7901  7530                 jne 0x5a7933
// 005a7903  85db                 test ebx, ebx
// 005a7905  752c                 jne 0x5a7933
// 005a7907  85ff                 test edi, edi
// 005a7909  7528                 jne 0x5a7933
// 005a790b  85f6                 test esi, esi
// 005a790d  7524                 jne 0x5a7933
// 005a790f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a7913  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a7917  83c110               add ecx, 0x10
// 005a791a  5f                   pop edi
// 005a791b  c1f905               sar ecx, 5
// 005a791e  81e1ff030000         and ecx, 0x3ff
// 005a7924  8a0401               mov al, byte ptr [ecx + eax]
// 005a7927  5e                   pop esi
// 005a7928  5d                   pop ebp
// 005a7929  8802                 mov byte ptr [edx], al
// 005a792b  884201               mov byte ptr [edx + 1], al
// 005a792e  5b                   pop ebx
// 005a792f  83c444               add esp, 0x44
// 005a7932  c3                   ret 
// 005a7933  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a7937  69c9fc730000         imul ecx, ecx, 0x73fc
// 005a793d  69ff371b0000         imul edi, edi, 0x1b37
// 005a7943  69f612170000         imul esi, esi, 0x1712
// 005a7949  69dbba280000         imul ebx, ebx, 0x28ba
// 005a794f  03cf                 add ecx, edi
// 005a7951  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a7955  2bce                 sub ecx, esi
// 005a7957  2bcb                 sub ecx, ebx
// 005a7959  c1e00f               shl eax, 0xf
// 005a795c  8bf1                 mov esi, ecx
// 005a795e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 005a7965  2bc6                 sub eax, esi
// 005a7967  c1f914               sar ecx, 0x14
// 005a796a  0500000800           add eax, 0x80000
// 005a796f  81e1ff030000         and ecx, 0x3ff
// 005a7975  8a0c39               mov cl, byte ptr [ecx + edi]
// 005a7978  c1f814               sar eax, 0x14
// 005a797b  880a                 mov byte ptr [edx], cl
// 005a797d  25ff030000           and eax, 0x3ff
// 005a7982  8a0438               mov al, byte ptr [eax + edi]
// 005a7985  5f                   pop edi
// 005a7986  5e                   pop esi
// 005a7987  5d                   pop ebp
// 005a7988  884201               mov byte ptr [edx + 1], al
// 005a798b  5b                   pop ebx
// 005a798c  83c444               add esp, 0x44
// 005a798f  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
