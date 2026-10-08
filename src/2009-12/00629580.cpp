// roc 2009-12 00629580  unit: seg_00620000  size: 1136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00629580
//
// 00629580  83ec44               sub esp, 0x44
// 00629583  8b442448             mov eax, dword ptr [esp + 0x48]
// 00629587  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0062958d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00629591  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 00629594  83e880               sub eax, -0x80
// 00629597  53                   push ebx
// 00629598  89442404             mov dword ptr [esp + 4], eax
// 0062959c  8b442454             mov eax, dword ptr [esp + 0x54]
// 006295a0  55                   push ebp
// 006295a1  56                   push esi
// 006295a2  8bd1                 mov edx, ecx
// 006295a4  83c030               add eax, 0x30
// 006295a7  be06000000           mov esi, 6
// 006295ac  2bd1                 sub edx, ecx
// 006295ae  57                   push edi
// 006295af  89742458             mov dword ptr [esp + 0x58], esi
// 006295b3  8d7c1418             lea edi, [esp + edx + 0x18]
// 006295b7  eb07                 jmp 0x6295c0
// 006295b9  8da42400000000       lea esp, [esp]
// 006295c0  8d5602               lea edx, [esi + 2]
// 006295c3  83fa06               cmp edx, 6
// 006295c6  0f84a7000000         je 0x629673
// 006295cc  83fa04               cmp edx, 4
// 006295cf  0f849e000000         je 0x629673
// 006295d5  83fa02               cmp edx, 2
// 006295d8  0f8495000000         je 0x629673
// 006295de  0fb758e0             movzx ebx, word ptr [eax - 0x20]
// 006295e2  6685db               test bx, bx
// 006295e5  7521                 jne 0x629608
// 006295e7  663918               cmp word ptr [eax], bx
// 006295ea  751c                 jne 0x629608
// 006295ec  66395820             cmp word ptr [eax + 0x20], bx
// 006295f0  7516                 jne 0x629608
// 006295f2  66395840             cmp word ptr [eax + 0x40], bx
// 006295f6  7510                 jne 0x629608
// 006295f8  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 006295fc  0faf11               imul edx, dword ptr [ecx]
// 006295ff  03d2                 add edx, edx
// 00629601  03d2                 add edx, edx
// 00629603  8957fc               mov dword ptr [edi - 4], edx
// 00629606  eb68                 jmp 0x629670
// 00629608  0fbf7020             movsx esi, word ptr [eax + 0x20]
// 0062960c  0fafb1a0000000       imul esi, dword ptr [ecx + 0xa0]
// 00629613  0fbf6840             movsx ebp, word ptr [eax + 0x40]
// 00629617  69f6371b0000         imul esi, esi, 0x1b37
// 0062961d  0fafa9e0000000       imul ebp, dword ptr [ecx + 0xe0]
// 00629624  0fbfdb               movsx ebx, bx
// 00629627  69ed12170000         imul ebp, ebp, 0x1712
// 0062962d  0faf5920             imul ebx, dword ptr [ecx + 0x20]
// 00629631  0fbf50d0             movsx edx, word ptr [eax - 0x30]
// 00629635  69dbfc730000         imul ebx, ebx, 0x73fc
// 0062963b  0faf11               imul edx, dword ptr [ecx]
// 0062963e  2bf5                 sub esi, ebp
// 00629640  03f3                 add esi, ebx
// 00629642  0fbf18               movsx ebx, word ptr [eax]
// 00629645  0faf5960             imul ebx, dword ptr [ecx + 0x60]
// 00629649  69dbba280000         imul ebx, ebx, 0x28ba
// 0062964f  2bf3                 sub esi, ebx
// 00629651  c1e20f               shl edx, 0xf
// 00629654  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0062965b  2bd6                 sub edx, esi
// 0062965d  8b742458             mov esi, dword ptr [esp + 0x58]
// 00629661  c1fb0d               sar ebx, 0xd
// 00629664  81c200100000         add edx, 0x1000
// 0062966a  895ffc               mov dword ptr [edi - 4], ebx
// 0062966d  c1fa0d               sar edx, 0xd
// 00629670  89571c               mov dword ptr [edi + 0x1c], edx
// 00629673  8d5601               lea edx, [esi + 1]
// 00629676  83fa06               cmp edx, 6
// 00629679  0f84a9000000         je 0x629728
// 0062967f  83fa04               cmp edx, 4
// 00629682  0f84a0000000         je 0x629728
// 00629688  83fa02               cmp edx, 2
// 0062968b  0f8497000000         je 0x629728
// 00629691  0fb758e2             movzx ebx, word ptr [eax - 0x1e]
// 00629695  6685db               test bx, bx
// 00629698  7522                 jne 0x6296bc
// 0062969a  66395802             cmp word ptr [eax + 2], bx
// 0062969e  751c                 jne 0x6296bc
// 006296a0  66395822             cmp word ptr [eax + 0x22], bx
// 006296a4  7516                 jne 0x6296bc
// 006296a6  66395842             cmp word ptr [eax + 0x42], bx
// 006296aa  7510                 jne 0x6296bc
// 006296ac  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 006296b0  0faf5104             imul edx, dword ptr [ecx + 4]
// 006296b4  03d2                 add edx, edx
// 006296b6  03d2                 add edx, edx
// 006296b8  8917                 mov dword ptr [edi], edx
// 006296ba  eb69                 jmp 0x629725
// 006296bc  0fbf7022             movsx esi, word ptr [eax + 0x22]
// 006296c0  0fafb1a4000000       imul esi, dword ptr [ecx + 0xa4]
// 006296c7  0fbf6842             movsx ebp, word ptr [eax + 0x42]
// 006296cb  69f6371b0000         imul esi, esi, 0x1b37
// 006296d1  0fafa9e4000000       imul ebp, dword ptr [ecx + 0xe4]
// 006296d8  0fbf50d2             movsx edx, word ptr [eax - 0x2e]
// 006296dc  69ed12170000         imul ebp, ebp, 0x1712
// 006296e2  0faf5104             imul edx, dword ptr [ecx + 4]
// 006296e6  2bf5                 sub esi, ebp
// 006296e8  0fbf6802             movsx ebp, word ptr [eax + 2]
// 006296ec  0faf6964             imul ebp, dword ptr [ecx + 0x64]
// 006296f0  0fbfdb               movsx ebx, bx
// 006296f3  69edba280000         imul ebp, ebp, 0x28ba
// 006296f9  0faf5924             imul ebx, dword ptr [ecx + 0x24]
// 006296fd  69dbfc730000         imul ebx, ebx, 0x73fc
// 00629703  2bf5                 sub esi, ebp
// 00629705  03f3                 add esi, ebx
// 00629707  c1e20f               shl edx, 0xf
// 0062970a  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 00629711  2bd6                 sub edx, esi
// 00629713  8b742458             mov esi, dword ptr [esp + 0x58]
// 00629717  c1fb0d               sar ebx, 0xd
// 0062971a  81c200100000         add edx, 0x1000
// 00629720  891f                 mov dword ptr [edi], ebx
// 00629722  c1fa0d               sar edx, 0xd
// 00629725  895720               mov dword ptr [edi + 0x20], edx
// 00629728  83fe06               cmp esi, 6
// 0062972b  0f84ab000000         je 0x6297dc
// 00629731  83fe04               cmp esi, 4
// 00629734  0f84a2000000         je 0x6297dc
// 0062973a  83fe02               cmp esi, 2
// 0062973d  0f8499000000         je 0x6297dc
// 00629743  0fb758e4             movzx ebx, word ptr [eax - 0x1c]
// 00629747  6685db               test bx, bx
// 0062974a  7523                 jne 0x62976f
// 0062974c  66395804             cmp word ptr [eax + 4], bx
// 00629750  751d                 jne 0x62976f
// 00629752  66395824             cmp word ptr [eax + 0x24], bx
// 00629756  7517                 jne 0x62976f
// 00629758  66395844             cmp word ptr [eax + 0x44], bx
// 0062975c  7511                 jne 0x62976f
// 0062975e  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 00629762  0faf5108             imul edx, dword ptr [ecx + 8]
// 00629766  03d2                 add edx, edx
// 00629768  03d2                 add edx, edx
// 0062976a  895704               mov dword ptr [edi + 4], edx
// 0062976d  eb6a                 jmp 0x6297d9
// 0062976f  0fbf7024             movsx esi, word ptr [eax + 0x24]
// 00629773  0fafb1a8000000       imul esi, dword ptr [ecx + 0xa8]
// 0062977a  0fbf6844             movsx ebp, word ptr [eax + 0x44]
// 0062977e  69f6371b0000         imul esi, esi, 0x1b37
// 00629784  0fafa9e8000000       imul ebp, dword ptr [ecx + 0xe8]
// 0062978b  0fbf50d4             movsx edx, word ptr [eax - 0x2c]
// 0062978f  69ed12170000         imul ebp, ebp, 0x1712
// 00629795  0faf5108             imul edx, dword ptr [ecx + 8]
// 00629799  2bf5                 sub esi, ebp
// 0062979b  0fbf6804             movsx ebp, word ptr [eax + 4]
// 0062979f  0faf6968             imul ebp, dword ptr [ecx + 0x68]
// 006297a3  0fbfdb               movsx ebx, bx
// 006297a6  69edba280000         imul ebp, ebp, 0x28ba
// 006297ac  0faf5928             imul ebx, dword ptr [ecx + 0x28]
// 006297b0  69dbfc730000         imul ebx, ebx, 0x73fc
// 006297b6  2bf5                 sub esi, ebp
// 006297b8  03f3                 add esi, ebx
// 006297ba  c1e20f               shl edx, 0xf
// 006297bd  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 006297c4  2bd6                 sub edx, esi
// 006297c6  8b742458             mov esi, dword ptr [esp + 0x58]
// 006297ca  c1fb0d               sar ebx, 0xd
// 006297cd  81c200100000         add edx, 0x1000
// 006297d3  895f04               mov dword ptr [edi + 4], ebx
// 006297d6  c1fa0d               sar edx, 0xd
// 006297d9  895724               mov dword ptr [edi + 0x24], edx
// 006297dc  8d56ff               lea edx, [esi - 1]
// 006297df  83fa06               cmp edx, 6
// 006297e2  0f84ab000000         je 0x629893
// 006297e8  83fa04               cmp edx, 4
// 006297eb  0f84a2000000         je 0x629893
// 006297f1  83fa02               cmp edx, 2
// 006297f4  0f8499000000         je 0x629893
// 006297fa  0fb758e6             movzx ebx, word ptr [eax - 0x1a]
// 006297fe  6685db               test bx, bx
// 00629801  7523                 jne 0x629826
// 00629803  66395806             cmp word ptr [eax + 6], bx
// 00629807  751d                 jne 0x629826
// 00629809  66395826             cmp word ptr [eax + 0x26], bx
// 0062980d  7517                 jne 0x629826
// 0062980f  66395846             cmp word ptr [eax + 0x46], bx
// 00629813  7511                 jne 0x629826
// 00629815  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 00629819  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 0062981d  03d2                 add edx, edx
// 0062981f  03d2                 add edx, edx
// 00629821  895708               mov dword ptr [edi + 8], edx
// 00629824  eb6a                 jmp 0x629890
// 00629826  0fbf7026             movsx esi, word ptr [eax + 0x26]
// 0062982a  0fafb1ac000000       imul esi, dword ptr [ecx + 0xac]
// 00629831  0fbf6846             movsx ebp, word ptr [eax + 0x46]
// 00629835  69f6371b0000         imul esi, esi, 0x1b37
// 0062983b  0fafa9ec000000       imul ebp, dword ptr [ecx + 0xec]
// 00629842  0fbf50d6             movsx edx, word ptr [eax - 0x2a]
// 00629846  69ed12170000         imul ebp, ebp, 0x1712
// 0062984c  0faf510c             imul edx, dword ptr [ecx + 0xc]
// 00629850  2bf5                 sub esi, ebp
// 00629852  0fbf6806             movsx ebp, word ptr [eax + 6]
// 00629856  0faf696c             imul ebp, dword ptr [ecx + 0x6c]
// 0062985a  0fbfdb               movsx ebx, bx
// 0062985d  69edba280000         imul ebp, ebp, 0x28ba
// 00629863  0faf592c             imul ebx, dword ptr [ecx + 0x2c]
// 00629867  69dbfc730000         imul ebx, ebx, 0x73fc
// 0062986d  2bf5                 sub esi, ebp
// 0062986f  03f3                 add esi, ebx
// 00629871  c1e20f               shl edx, 0xf
// 00629874  8d9c1600100000       lea ebx, [esi + edx + 0x1000]
// 0062987b  2bd6                 sub edx, esi
// 0062987d  8b742458             mov esi, dword ptr [esp + 0x58]
// 00629881  c1fb0d               sar ebx, 0xd
// 00629884  81c200100000         add edx, 0x1000
// 0062988a  895f08               mov dword ptr [edi + 8], ebx
// 0062988d  c1fa0d               sar edx, 0xd
// 00629890  895728               mov dword ptr [edi + 0x28], edx
// 00629893  83ee04               sub esi, 4
// 00629896  8d5602               lea edx, [esi + 2]
// 00629899  83c008               add eax, 8
// 0062989c  83c110               add ecx, 0x10
// 0062989f  83c710               add edi, 0x10
// 006298a2  89742458             mov dword ptr [esp + 0x58], esi
// 006298a6  85d2                 test edx, edx
// 006298a8  0f8f12fdffff         jg 0x6295c0
// 006298ae  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 006298b2  8b5500               mov edx, dword ptr [ebp]
// 006298b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006298b9  03542468             add edx, dword ptr [esp + 0x68]
// 006298bd  8b742430             mov esi, dword ptr [esp + 0x30]
// 006298c1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006298c5  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006298c9  85c9                 test ecx, ecx
// 006298cb  7526                 jne 0x6298f3
// 006298cd  85db                 test ebx, ebx
// 006298cf  7522                 jne 0x6298f3
// 006298d1  85ff                 test edi, edi
// 006298d3  751e                 jne 0x6298f3
// 006298d5  85f6                 test esi, esi
// 006298d7  751a                 jne 0x6298f3
// 006298d9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006298dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006298e1  83c010               add eax, 0x10
// 006298e4  c1f805               sar eax, 5
// 006298e7  25ff030000           and eax, 0x3ff
// 006298ec  8a0408               mov al, byte ptr [eax + ecx]
// 006298ef  8802                 mov byte ptr [edx], al
// 006298f1  eb52                 jmp 0x629945
// 006298f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006298f7  69c9fc730000         imul ecx, ecx, 0x73fc
// 006298fd  69dbba280000         imul ebx, ebx, 0x28ba
// 00629903  69ff371b0000         imul edi, edi, 0x1b37
// 00629909  69f612170000         imul esi, esi, 0x1712
// 0062990f  2bcb                 sub ecx, ebx
// 00629911  03cf                 add ecx, edi
// 00629913  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00629917  2bce                 sub ecx, esi
// 00629919  c1e00f               shl eax, 0xf
// 0062991c  8bf1                 mov esi, ecx
// 0062991e  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 00629925  2bc6                 sub eax, esi
// 00629927  c1f914               sar ecx, 0x14
// 0062992a  0500000800           add eax, 0x80000
// 0062992f  81e1ff030000         and ecx, 0x3ff
// 00629935  8a0c39               mov cl, byte ptr [ecx + edi]
// 00629938  c1f814               sar eax, 0x14
// 0062993b  25ff030000           and eax, 0x3ff
// 00629940  880a                 mov byte ptr [edx], cl
// 00629942  8a0438               mov al, byte ptr [eax + edi]
// 00629945  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00629949  8b742450             mov esi, dword ptr [esp + 0x50]
// 0062994d  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00629951  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00629955  884201               mov byte ptr [edx + 1], al
// 00629958  8b5504               mov edx, dword ptr [ebp + 4]
// 0062995b  03542468             add edx, dword ptr [esp + 0x68]
// 0062995f  85c9                 test ecx, ecx
// 00629961  7530                 jne 0x629993
// 00629963  85db                 test ebx, ebx
// 00629965  752c                 jne 0x629993
// 00629967  85ff                 test edi, edi
// 00629969  7528                 jne 0x629993
// 0062996b  85f6                 test esi, esi
// 0062996d  7524                 jne 0x629993
// 0062996f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00629973  8b442410             mov eax, dword ptr [esp + 0x10]
// 00629977  83c110               add ecx, 0x10
// 0062997a  5f                   pop edi
// 0062997b  c1f905               sar ecx, 5
// 0062997e  81e1ff030000         and ecx, 0x3ff
// 00629984  8a0401               mov al, byte ptr [ecx + eax]
// 00629987  5e                   pop esi
// 00629988  5d                   pop ebp
// 00629989  8802                 mov byte ptr [edx], al
// 0062998b  884201               mov byte ptr [edx + 1], al
// 0062998e  5b                   pop ebx
// 0062998f  83c444               add esp, 0x44
// 00629992  c3                   ret 
// 00629993  8b442434             mov eax, dword ptr [esp + 0x34]
// 00629997  69c9fc730000         imul ecx, ecx, 0x73fc
// 0062999d  69ff371b0000         imul edi, edi, 0x1b37
// 006299a3  69f612170000         imul esi, esi, 0x1712
// 006299a9  69dbba280000         imul ebx, ebx, 0x28ba
// 006299af  03cf                 add ecx, edi
// 006299b1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006299b5  2bce                 sub ecx, esi
// 006299b7  2bcb                 sub ecx, ebx
// 006299b9  c1e00f               shl eax, 0xf
// 006299bc  8bf1                 mov esi, ecx
// 006299be  8d8c0600000800       lea ecx, [esi + eax + 0x80000]
// 006299c5  2bc6                 sub eax, esi
// 006299c7  c1f914               sar ecx, 0x14
// 006299ca  0500000800           add eax, 0x80000
// 006299cf  81e1ff030000         and ecx, 0x3ff
// 006299d5  8a0c39               mov cl, byte ptr [ecx + edi]
// 006299d8  c1f814               sar eax, 0x14
// 006299db  880a                 mov byte ptr [edx], cl
// 006299dd  25ff030000           and eax, 0x3ff
// 006299e2  8a0438               mov al, byte ptr [eax + edi]
// 006299e5  5f                   pop edi
// 006299e6  5e                   pop esi
// 006299e7  5d                   pop ebp
// 006299e8  884201               mov byte ptr [edx + 1], al
// 006299eb  5b                   pop ebx
// 006299ec  83c444               add esp, 0x44
// 006299ef  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_2x2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
