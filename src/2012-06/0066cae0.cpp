// roc 2012-06 0066cae0  unit: seg_00660000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066cae0
//
// 0066cae0  83ec44               sub esp, 0x44
// 0066cae3  8b442448             mov eax, dword ptr [esp + 0x48]
// 0066cae7  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0066caed  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0066caf1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0066caf4  83e880               sub eax, -0x80
// 0066caf7  53                   push ebx
// 0066caf8  89442404             mov dword ptr [esp + 4], eax
// 0066cafc  8b442454             mov eax, dword ptr [esp + 0x54]
// 0066cb00  55                   push ebp
// 0066cb01  56                   push esi
// 0066cb02  8bd1                 mov edx, ecx
// 0066cb04  83c030               add eax, 0x30
// 0066cb07  be06000000           mov esi, 6
// 0066cb0c  2bd1                 sub edx, ecx
// 0066cb0e  57                   push edi
// 0066cb0f  89742458             mov dword ptr [esp + 0x58], esi
// 0066cb13  8d7c1418             lea edi, [esp + edx + 0x18]
// 0066cb17  eb07                 jmp 0x66cb20
// 0066cb19  8da42400000000       lea esp, [esp]
// 0066cb20  8d5602               lea edx, [esi + 2]
// 0066cb23  83fa06               cmp edx, 6
// 0066cb26  0f84a7000000         je 0x66cbd3
// 0066cb2c  83fa04               cmp edx, 4
// 0066cb2f  0f849e000000         je 0x66cbd3
// 0066cb35  83fa02               cmp edx, 2
// 0066cb38  0f8495000000         je 0x66cbd3
// 0066cb3e  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 0066cb42  6685db               test bx, bx
// 0066cb45  7521                 jne 0x66cb68
// 0066cb47  663918               cmp word ptr [eax], bx
// 0066cb4a  751c                 jne 0x66cb68
// 0066cb4c  66395820             cmp word ptr [eax + 0x20], bx
// 0066cb50  7516                 jne 0x66cb68
// 0066cb52  66395840             cmp word ptr [eax + 0x40], bx
// 0066cb56  7510                 jne 0x66cb68
// 0066cb58  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0066cb5c  0faf11               imul edx, dword ptr [ecx]
// 0066cb5f  03d2                 add edx, edx
// 0066cb61  03d2                 add edx, edx
// 0066cb63  8957fc               mov dword ptr [edi - 4], edx
// 0066cb66  eb68                 jmp 0x66cbd0
// 0066cb68  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0066cb6c  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 0066cb73  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 0066cb77  69f6371b0000         imul esi, esi, 0x1b37
// 0066cb7d  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 0066cb84  0fbfdb               movsx ebx, bx
// 0066cb87  69ed12170000         imul ebp, ebp, 0x1712
// 0066cb8d  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 0066cb91  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 0066cb95  69dbfc730000         imul ebx, ebx, 0x73fc
// 0066cb9b  0faf11               imul edx, dword ptr [ecx]
// 0066cb9e  2bf5                 sub esi, ebp
// 0066cba0  03f3                 add esi, ebx
// 0066cba2  0fbf18               movsx ebx, word ptr [eax]
// 0066cba5  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 0066cba9  69dbba280000         imul ebx, ebx, 0x28ba
// 0066cbaf  2bf3                 sub esi, ebx
// 0066cbb1  c1e20f               shl edx, 0xf
// 0066cbb4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0066cbbb  2bd6                 sub edx, esi
// 0066cbbd  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066cbc1  c1fb0d               sar ebx, 0xd
// 0066cbc4  81c200100000         add edx, 0x1000
// 0066cbca  895ffc               mov dword ptr [edi - 4], ebx
// 0066cbcd  c1fa0d               sar edx, 0xd
// 0066cbd0  89571c               mov dword ptr [edi + 0x1c], edx
// 0066cbd3  8d5601               lea edx, [esi + 1]
// 0066cbd6  83fa06               cmp edx, 6
// 0066cbd9  0f84a9000000         je 0x66cc88
// 0066cbdf  83fa04               cmp edx, 4
// 0066cbe2  0f84a0000000         je 0x66cc88
// 0066cbe8  83fa02               cmp edx, 2
// 0066cbeb  0f8497000000         je 0x66cc88
// 0066cbf1  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 0066cbf5  6685db               test bx, bx
// 0066cbf8  7522                 jne 0x66cc1c
// 0066cbfa  66395802             cmp word ptr [eax + 2], bx
// 0066cbfe  751c                 jne 0x66cc1c
// 0066cc00  66395822             cmp word ptr [eax + 0x22], bx
// 0066cc04  7516                 jne 0x66cc1c
// 0066cc06  66395842             cmp word ptr [eax + 0x42], bx
// 0066cc0a  7510                 jne 0x66cc1c
// 0066cc0c  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0066cc10  0faf5104             imul edx, dword ptr [ecx + 4]
// 0066cc14  03d2                 add edx, edx
// 0066cc16  03d2                 add edx, edx
// 0066cc18  8917                 mov dword ptr [edi], edx
// 0066cc1a  eb69                 jmp 0x66cc85
// 0066cc1c  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 0066cc20  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 0066cc27  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 0066cc2b  69f6371b0000         imul esi, esi, 0x1b37
// 0066cc31  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 0066cc38  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 0066cc3c  69ed12170000         imul ebp, ebp, 0x1712
// 0066cc42  0faf5104             imul edx, dword ptr [ecx + 4]
// 0066cc46  2bf5                 sub esi, ebp
// 0066cc48  0fbf6802             movsx ebp, word ptr [eax + 2]
// 0066cc4c  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 0066cc50  0fbfdb               movsx ebx, bx
// 0066cc53  69edba280000         imul ebp, ebp, 0x28ba
// 0066cc59  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 0066cc5d  69dbfc730000         imul ebx, ebx, 0x73fc
// 0066cc63  2bf5                 sub esi, ebp
// 0066cc65  03f3                 add esi, ebx
// 0066cc67  c1e20f               shl edx, 0xf
// 0066cc6a  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0066cc71  2bd6                 sub edx, esi
// 0066cc73  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066cc77  c1fb0d               sar ebx, 0xd
// 0066cc7a  81c200100000         add edx, 0x1000
// 0066cc80  891f                 mov dword ptr [edi], ebx
// 0066cc82  c1fa0d               sar edx, 0xd
// 0066cc85  895720               mov dword ptr [edi + 0x20], edx
// 0066cc88  83fe06               cmp esi, 6
// 0066cc8b  0f84ab000000         je 0x66cd3c
// 0066cc91  83fe04               cmp esi, 4
// 0066cc94  0f84a2000000         je 0x66cd3c
// 0066cc9a  83fe02               cmp esi, 2
// 0066cc9d  0f8499000000         je 0x66cd3c
// 0066cca3  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 0066cca7  6685db               test bx, bx
// 0066ccaa  7523                 jne 0x66cccf
// 0066ccac  66395804             cmp word ptr [eax + 4], bx
// 0066ccb0  751d                 jne 0x66cccf
// 0066ccb2  66395824             cmp word ptr [eax + 0x24], bx
// 0066ccb6  7517                 jne 0x66cccf
// 0066ccb8  66395844             cmp word ptr [eax + 0x44], bx
// 0066ccbc  7511                 jne 0x66cccf
// 0066ccbe  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0066ccc2  0faf5108             imul edx, dword ptr [ecx + 8]
// 0066ccc6  03d2                 add edx, edx
// 0066ccc8  03d2                 add edx, edx
// 0066ccca  895704               mov dword ptr [edi + 4], edx
// 0066cccd  eb6a                 jmp 0x66cd39
// 0066cccf  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 0066ccd3  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 0066ccda  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 0066ccde  69f6371b0000         imul esi, esi, 0x1b37
// 0066cce4  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 0066cceb  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0066ccef  69ed12170000         imul ebp, ebp, 0x1712
// 0066ccf5  0faf5108             imul edx, dword ptr [ecx + 8]
// 0066ccf9  2bf5                 sub esi, ebp
// 0066ccfb  0fbf6804             movsx ebp, word ptr [eax + 4]
// 0066ccff  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 0066cd03  0fbfdb               movsx ebx, bx
// 0066cd06  69edba280000         imul ebp, ebp, 0x28ba
// 0066cd0c  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 0066cd10  69dbfc730000         imul ebx, ebx, 0x73fc
// 0066cd16  2bf5                 sub esi, ebp
// 0066cd18  03f3                 add esi, ebx
// 0066cd1a  c1e20f               shl edx, 0xf
// 0066cd1d  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0066cd24  2bd6                 sub edx, esi
// 0066cd26  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066cd2a  c1fb0d               sar ebx, 0xd
// 0066cd2d  81c200100000         add edx, 0x1000
// 0066cd33  895f04               mov dword ptr [edi + 4], ebx
// 0066cd36  c1fa0d               sar edx, 0xd
// 0066cd39  895724               mov dword ptr [edi + 0x24], edx
// 0066cd3c  8d56ff               lea edx, [esi - 1]
// 0066cd3f  83fa06               cmp edx, 6
// 0066cd42  0f84ab000000         je 0x66cdf3
// 0066cd48  83fa04               cmp edx, 4
// 0066cd4b  0f84a2000000         je 0x66cdf3
// 0066cd51  83fa02               cmp edx, 2
// 0066cd54  0f8499000000         je 0x66cdf3
// 0066cd5a  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 0066cd5e  6685db               test bx, bx
// 0066cd61  7523                 jne 0x66cd86
// 0066cd63  66395806             cmp word ptr [eax + 6], bx
// 0066cd67  751d                 jne 0x66cd86
// 0066cd69  66395826             cmp word ptr [eax + 0x26], bx
// 0066cd6d  7517                 jne 0x66cd86
// 0066cd6f  66395846             cmp word ptr [eax + 0x46], bx
// 0066cd73  7511                 jne 0x66cd86
// 0066cd75  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0066cd79  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0066cd7d  03d2                 add edx, edx
// 0066cd7f  03d2                 add edx, edx
// 0066cd81  895708               mov dword ptr [edi + 8], edx
// 0066cd84  eb6a                 jmp 0x66cdf0
// 0066cd86  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0066cd8a  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 0066cd91  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 0066cd95  69f6371b0000         imul esi, esi, 0x1b37
// 0066cd9b  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 0066cda2  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 0066cda6  69ed12170000         imul ebp, ebp, 0x1712
// 0066cdac  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0066cdb0  2bf5                 sub esi, ebp
// 0066cdb2  0fbf6806             movsx ebp, word ptr [eax + 6]
// 0066cdb6  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 0066cdba  0fbfdb               movsx ebx, bx
// 0066cdbd  69edba280000         imul ebp, ebp, 0x28ba
// 0066cdc3  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 0066cdc7  69dbfc730000         imul ebx, ebx, 0x73fc
// 0066cdcd  2bf5                 sub esi, ebp
// 0066cdcf  03f3                 add esi, ebx
// 0066cdd1  c1e20f               shl edx, 0xf
// 0066cdd4  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0066cddb  2bd6                 sub edx, esi
// 0066cddd  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066cde1  c1fb0d               sar ebx, 0xd
// 0066cde4  81c200100000         add edx, 0x1000
// 0066cdea  895f08               mov dword ptr [edi + 8], ebx
// 0066cded  c1fa0d               sar edx, 0xd
// 0066cdf0  895728               mov dword ptr [edi + 0x28], edx
// 0066cdf3  83ee04               sub esi, 4
// 0066cdf6  8d5602               lea edx, [esi + 2]
// 0066cdf9  83c008               add eax, 8
// 0066cdfc  83c110               add ecx, 0x10
// 0066cdff  83c710               add edi, 0x10
// 0066ce02  89742458             mov dword ptr [esp + 0x58], esi
// 0066ce06  85d2                 test edx, edx
// 0066ce08  0f8f12fdffff         jg 0x66cb20
// 0066ce0e  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0066ce12  8b5500               mov edx, dword ptr [ebp]
// 0066ce15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066ce19  03542468             add edx, dword ptr [esp + 0x68]
// 0066ce1d  8b742430             mov esi, dword ptr [esp + 0x30]
// 0066ce21  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0066ce25  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066ce29  85c9                 test ecx, ecx
// 0066ce2b  7526                 jne 0x66ce53
// 0066ce2d  85db                 test ebx, ebx
// 0066ce2f  7522                 jne 0x66ce53
// 0066ce31  85ff                 test edi, edi
// 0066ce33  751e                 jne 0x66ce53
// 0066ce35  85f6                 test esi, esi
// 0066ce37  751a                 jne 0x66ce53
// 0066ce39  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066ce3d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066ce41  83c010               add eax, 0x10
// 0066ce44  c1f805               sar eax, 5
// 0066ce47  25ff030000           and eax, 0x3ff
// 0066ce4c  8a0408               mov al, byte ptr [eax + ecx]
// 0066ce4f  8802                 mov byte ptr [edx], al
// 0066ce51  eb52                 jmp 0x66cea5
// 0066ce53  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066ce57  69c9fc730000         imul ecx, ecx, 0x73fc
// 0066ce5d  69dbba280000         imul ebx, ebx, 0x28ba
// 0066ce63  69ff371b0000         imul edi, edi, 0x1b37
// 0066ce69  69f612170000         imul esi, esi, 0x1712
// 0066ce6f  2bcb                 sub ecx, ebx
// 0066ce71  03cf                 add ecx, edi
// 0066ce73  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066ce77  2bce                 sub ecx, esi
// 0066ce79  c1e00f               shl eax, 0xf
// 0066ce7c  8bf1                 mov esi, ecx
// 0066ce7e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0066ce85  2bc6                 sub eax, esi
// 0066ce87  c1f914               sar ecx, 0x14
// 0066ce8a  0500000800           add eax, 0x80000
// 0066ce8f  81e1ff030000         and ecx, 0x3ff
// 0066ce95  8a0c39               mov cl, byte ptr [ecx + edi]
// 0066ce98  c1f814               sar eax, 0x14
// 0066ce9b  25ff030000           and eax, 0x3ff
// 0066cea0  880a                 mov byte ptr [edx], cl
// 0066cea2  8a0438               mov al, byte ptr [eax + edi]
// 0066cea5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0066cea9  8b742450             mov esi, dword ptr [esp + 0x50]
// 0066cead  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0066ceb1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0066ceb5  884201               mov byte ptr [edx + 1], al
// 0066ceb8  8b5504               mov edx, dword ptr [ebp + 4]
// 0066cebb  03542468             add edx, dword ptr [esp + 0x68]
// 0066cebf  85c9                 test ecx, ecx
// 0066cec1  7530                 jne 0x66cef3
// 0066cec3  85db                 test ebx, ebx
// 0066cec5  752c                 jne 0x66cef3
// 0066cec7  85ff                 test edi, edi
// 0066cec9  7528                 jne 0x66cef3
// 0066cecb  85f6                 test esi, esi
// 0066cecd  7524                 jne 0x66cef3
// 0066cecf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0066ced3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066ced7  83c110               add ecx, 0x10
// 0066ceda  5f                   pop edi
// 0066cedb  c1f905               sar ecx, 5
// 0066cede  81e1ff030000         and ecx, 0x3ff
// 0066cee4  8a0401               mov al, byte ptr [ecx + eax]
// 0066cee7  5e                   pop esi
// 0066cee8  5d                   pop ebp
// 0066cee9  8802                 mov byte ptr [edx], al
// 0066ceeb  884201               mov byte ptr [edx + 1], al
// 0066ceee  5b                   pop ebx
// 0066ceef  83c444               add esp, 0x44
// 0066cef2  c3                   ret 
// 0066cef3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0066cef7  69c9fc730000         imul ecx, ecx, 0x73fc
// 0066cefd  69ff371b0000         imul edi, edi, 0x1b37
// 0066cf03  69f612170000         imul esi, esi, 0x1712
// 0066cf09  69dbba280000         imul ebx, ebx, 0x28ba
// 0066cf0f  03cf                 add ecx, edi
// 0066cf11  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066cf15  2bce                 sub ecx, esi
// 0066cf17  2bcb                 sub ecx, ebx
// 0066cf19  c1e00f               shl eax, 0xf
// 0066cf1c  8bf1                 mov esi, ecx
// 0066cf1e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 0066cf25  2bc6                 sub eax, esi
// 0066cf27  c1f914               sar ecx, 0x14
// 0066cf2a  0500000800           add eax, 0x80000
// 0066cf2f  81e1ff030000         and ecx, 0x3ff
// 0066cf35  8a0c39               mov cl, byte ptr [ecx + edi]
// 0066cf38  c1f814               sar eax, 0x14
// 0066cf3b  880a                 mov byte ptr [edx], cl
// 0066cf3d  25ff030000           and eax, 0x3ff
// 0066cf42  8a0438               mov al, byte ptr [eax + edi]
// 0066cf45  5f                   pop edi
// 0066cf46  5e                   pop esi
// 0066cf47  5d                   pop ebp
// 0066cf48  884201               mov byte ptr [edx + 1], al
// 0066cf4b  5b                   pop ebx
// 0066cf4c  83c444               add esp, 0x44
// 0066cf4f  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
