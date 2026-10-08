// roc 2008-06 005dfa20  unit: RBX::VLighting::?$FactoryProduct  size: 1408 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dfa20
//
// 005dfa20  83ec0c               sub esp, 0xc
// 005dfa23  53                   push ebx
// 005dfa24  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005dfa2a  55                   push ebp
// 005dfa2b  56                   push esi
// 005dfa2c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005dfa30  8be9                 mov ebp, ecx
// 005dfa32  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 005dfa36  57                   push edi
// 005dfa37  bf10000000           mov edi, 0x10
// 005dfa3c  0f85bf000000         jne 0x5dfb01
// 005dfa42  8b06                 mov eax, dword ptr [esi]
// 005dfa44  83f8fc               cmp eax, -4
// 005dfa47  740c                 je 0x5dfa55
// 005dfa49  85c0                 test eax, eax
// 005dfa4b  7406                 je 0x5dfa53
// 005dfa4d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005dfa51  7402                 je 0x5dfa55
// 005dfa53  ffd3                 call ebx
// 005dfa55  8b4604               mov eax, dword ptr [esi + 4]
// 005dfa58  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005dfa5c  0f849f000000         je 0x5dfb01
// 005dfa62  8b06                 mov eax, dword ptr [esi]
// 005dfa64  83f8fc               cmp eax, -4
// 005dfa67  7421                 je 0x5dfa8a
// 005dfa69  85c0                 test eax, eax
// 005dfa6b  7502                 jne 0x5dfa6f
// 005dfa6d  ffd3                 call ebx
// 005dfa6f  8b06                 mov eax, dword ptr [esi]
// 005dfa71  397818               cmp dword ptr [eax + 0x18], edi
// 005dfa74  7205                 jb 0x5dfa7b
// 005dfa76  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfa79  eb03                 jmp 0x5dfa7e
// 005dfa7b  8d4804               lea ecx, [eax + 4]
// 005dfa7e  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfa81  03d1                 add edx, ecx
// 005dfa83  395604               cmp dword ptr [esi + 4], edx
// 005dfa86  7202                 jb 0x5dfa8a
// 005dfa88  ffd3                 call ebx
// 005dfa8a  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005dfa8e  8b4604               mov eax, dword ptr [esi + 4]
// 005dfa91  8a00                 mov al, byte ptr [eax]
// 005dfa93  7420                 je 0x5dfab5
// 005dfa95  6a01                 push 1
// 005dfa97  6a00                 push 0
// 005dfa99  8d4c2428             lea ecx, [esp + 0x28]
// 005dfa9d  51                   push ecx
// 005dfa9e  8d4d1c               lea ecx, [ebp + 0x1c]
// 005dfaa1  8844242c             mov byte ptr [esp + 0x2c], al
// 005dfaa5  ff1598248000         call dword ptr [0x802498]
// 005dfaab  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005dfab1  3b02                 cmp eax, dword ptr [edx]
// 005dfab3  eb15                 jmp 0x5dfaca
// 005dfab5  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005dfab9  7446                 je 0x5dfb01
// 005dfabb  0fbec0               movsx eax, al
// 005dfabe  50                   push eax
// 005dfabf  ff1584278000         call dword ptr [0x802784]
// 005dfac5  83c404               add esp, 4
// 005dfac8  85c0                 test eax, eax
// 005dfaca  0f95c0               setne al
// 005dfacd  84c0                 test al, al
// 005dfacf  7430                 je 0x5dfb01
// 005dfad1  8b06                 mov eax, dword ptr [esi]
// 005dfad3  83f8fc               cmp eax, -4
// 005dfad6  7421                 je 0x5dfaf9
// 005dfad8  85c0                 test eax, eax
// 005dfada  7502                 jne 0x5dfade
// 005dfadc  ffd3                 call ebx
// 005dfade  8b06                 mov eax, dword ptr [esi]
// 005dfae0  397818               cmp dword ptr [eax + 0x18], edi
// 005dfae3  7205                 jb 0x5dfaea
// 005dfae5  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfae8  eb03                 jmp 0x5dfaed
// 005dfaea  8d4804               lea ecx, [eax + 4]
// 005dfaed  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfaf0  03d1                 add edx, ecx
// 005dfaf2  395604               cmp dword ptr [esi + 4], edx
// 005dfaf5  7202                 jb 0x5dfaf9
// 005dfaf7  ffd3                 call ebx
// 005dfaf9  ff4604               inc dword ptr [esi + 4]
// 005dfafc  e941ffffff           jmp 0x5dfa42
// 005dfb01  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 005dfb05  8b4604               mov eax, dword ptr [esi + 4]
// 005dfb08  8b3e                 mov edi, dword ptr [esi]
// 005dfb0a  89442418             mov dword ptr [esp + 0x18], eax
// 005dfb0e  897c2414             mov dword ptr [esp + 0x14], edi
// 005dfb12  8bc7                 mov eax, edi
// 005dfb14  0f8523020000         jne 0x5dfd3d
// 005dfb1a  83f8fc               cmp eax, -4
// 005dfb1d  740c                 je 0x5dfb2b
// 005dfb1f  85c0                 test eax, eax
// 005dfb21  7406                 je 0x5dfb29
// 005dfb23  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005dfb27  7402                 je 0x5dfb2b
// 005dfb29  ffd3                 call ebx
// 005dfb2b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dfb2f  394e04               cmp dword ptr [esi + 4], ecx
// 005dfb32  750c                 jne 0x5dfb40
// 005dfb34  5f                   pop edi
// 005dfb35  5e                   pop esi
// 005dfb36  5d                   pop ebp
// 005dfb37  32c0                 xor al, al
// 005dfb39  5b                   pop ebx
// 005dfb3a  83c40c               add esp, 0xc
// 005dfb3d  c21000               ret 0x10
// 005dfb40  8b06                 mov eax, dword ptr [esi]
// 005dfb42  83f8fc               cmp eax, -4
// 005dfb45  7422                 je 0x5dfb69
// 005dfb47  85c0                 test eax, eax
// 005dfb49  7502                 jne 0x5dfb4d
// 005dfb4b  ffd3                 call ebx
// 005dfb4d  8b06                 mov eax, dword ptr [esi]
// 005dfb4f  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfb53  7205                 jb 0x5dfb5a
// 005dfb55  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfb58  eb03                 jmp 0x5dfb5d
// 005dfb5a  8d4804               lea ecx, [eax + 4]
// 005dfb5d  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfb60  03d1                 add edx, ecx
// 005dfb62  395604               cmp dword ptr [esi + 4], edx
// 005dfb65  7202                 jb 0x5dfb69
// 005dfb67  ffd3                 call ebx
// 005dfb69  8b4604               mov eax, dword ptr [esi + 4]
// 005dfb6c  0fb600               movzx eax, byte ptr [eax]
// 005dfb6f  50                   push eax
// 005dfb70  8bcd                 mov ecx, ebp
// 005dfb72  e809fcffff           call 0x5df780
// 005dfb77  84c0                 test al, al
// 005dfb79  745d                 je 0x5dfbd8
// 005dfb7b  8b06                 mov eax, dword ptr [esi]
// 005dfb7d  83f8fc               cmp eax, -4
// 005dfb80  744e                 je 0x5dfbd0
// 005dfb82  85c0                 test eax, eax
// 005dfb84  7502                 jne 0x5dfb88
// 005dfb86  ffd3                 call ebx
// 005dfb88  8b06                 mov eax, dword ptr [esi]
// 005dfb8a  bf10000000           mov edi, 0x10
// 005dfb8f  397818               cmp dword ptr [eax + 0x18], edi
// 005dfb92  7205                 jb 0x5dfb99
// 005dfb94  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfb97  eb03                 jmp 0x5dfb9c
// 005dfb99  8d4804               lea ecx, [eax + 4]
// 005dfb9c  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfb9f  03d1                 add edx, ecx
// 005dfba1  395604               cmp dword ptr [esi + 4], edx
// 005dfba4  7202                 jb 0x5dfba8
// 005dfba6  ffd3                 call ebx
// 005dfba8  8b06                 mov eax, dword ptr [esi]
// 005dfbaa  83f8fc               cmp eax, -4
// 005dfbad  7421                 je 0x5dfbd0
// 005dfbaf  85c0                 test eax, eax
// 005dfbb1  7502                 jne 0x5dfbb5
// 005dfbb3  ffd3                 call ebx
// 005dfbb5  8b06                 mov eax, dword ptr [esi]
// 005dfbb7  397818               cmp dword ptr [eax + 0x18], edi
// 005dfbba  7205                 jb 0x5dfbc1
// 005dfbbc  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfbbf  eb03                 jmp 0x5dfbc4
// 005dfbc1  8d4804               lea ecx, [eax + 4]
// 005dfbc4  8b4014               mov eax, dword ptr [eax + 0x14]
// 005dfbc7  03c1                 add eax, ecx
// 005dfbc9  394604               cmp dword ptr [esi + 4], eax
// 005dfbcc  7202                 jb 0x5dfbd0
// 005dfbce  ffd3                 call ebx
// 005dfbd0  ff4604               inc dword ptr [esi + 4]
// 005dfbd3  e9a1030000           jmp 0x5dff79
// 005dfbd8  8b3d20278000         mov edi, dword ptr [0x802720]
// 005dfbde  8bff                 mov edi, edi
// 005dfbe0  8b06                 mov eax, dword ptr [esi]
// 005dfbe2  83f8fc               cmp eax, -4
// 005dfbe5  740c                 je 0x5dfbf3
// 005dfbe7  85c0                 test eax, eax
// 005dfbe9  7406                 je 0x5dfbf1
// 005dfbeb  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005dfbef  7402                 je 0x5dfbf3
// 005dfbf1  ffd3                 call ebx
// 005dfbf3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005dfbf6  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005dfbfa  0f8479030000         je 0x5dff79
// 005dfc00  8b06                 mov eax, dword ptr [esi]
// 005dfc02  83f8fc               cmp eax, -4
// 005dfc05  7422                 je 0x5dfc29
// 005dfc07  85c0                 test eax, eax
// 005dfc09  7502                 jne 0x5dfc0d
// 005dfc0b  ffd3                 call ebx
// 005dfc0d  8b06                 mov eax, dword ptr [esi]
// 005dfc0f  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfc13  7205                 jb 0x5dfc1a
// 005dfc15  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfc18  eb03                 jmp 0x5dfc1d
// 005dfc1a  8d4804               lea ecx, [eax + 4]
// 005dfc1d  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfc20  03d1                 add edx, ecx
// 005dfc22  395604               cmp dword ptr [esi + 4], edx
// 005dfc25  7202                 jb 0x5dfc29
// 005dfc27  ffd3                 call ebx
// 005dfc29  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005dfc2d  8b4604               mov eax, dword ptr [esi + 4]
// 005dfc30  8a00                 mov al, byte ptr [eax]
// 005dfc32  7420                 je 0x5dfc54
// 005dfc34  6a01                 push 1
// 005dfc36  6a00                 push 0
// 005dfc38  8d4c2428             lea ecx, [esp + 0x28]
// 005dfc3c  51                   push ecx
// 005dfc3d  8d4d1c               lea ecx, [ebp + 0x1c]
// 005dfc40  8844242c             mov byte ptr [esp + 0x2c], al
// 005dfc44  ff1598248000         call dword ptr [0x802498]
// 005dfc4a  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005dfc50  3b02                 cmp eax, dword ptr [edx]
// 005dfc52  eb15                 jmp 0x5dfc69
// 005dfc54  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005dfc58  741a                 je 0x5dfc74
// 005dfc5a  0fbec0               movsx eax, al
// 005dfc5d  50                   push eax
// 005dfc5e  ff1584278000         call dword ptr [0x802784]
// 005dfc64  83c404               add esp, 4
// 005dfc67  85c0                 test eax, eax
// 005dfc69  0f95c0               setne al
// 005dfc6c  84c0                 test al, al
// 005dfc6e  0f8505030000         jne 0x5dff79
// 005dfc74  8b06                 mov eax, dword ptr [esi]
// 005dfc76  83f8fc               cmp eax, -4
// 005dfc79  7422                 je 0x5dfc9d
// 005dfc7b  85c0                 test eax, eax
// 005dfc7d  7502                 jne 0x5dfc81
// 005dfc7f  ffd3                 call ebx
// 005dfc81  8b06                 mov eax, dword ptr [esi]
// 005dfc83  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfc87  7205                 jb 0x5dfc8e
// 005dfc89  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfc8c  eb03                 jmp 0x5dfc91
// 005dfc8e  8d4804               lea ecx, [eax + 4]
// 005dfc91  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfc94  03d1                 add edx, ecx
// 005dfc96  395604               cmp dword ptr [esi + 4], edx
// 005dfc99  7202                 jb 0x5dfc9d
// 005dfc9b  ffd3                 call ebx
// 005dfc9d  837d1400             cmp dword ptr [ebp + 0x14], 0
// 005dfca1  8b4604               mov eax, dword ptr [esi + 4]
// 005dfca4  8a00                 mov al, byte ptr [eax]
// 005dfca6  741f                 je 0x5dfcc7
// 005dfca8  6a01                 push 1
// 005dfcaa  6a00                 push 0
// 005dfcac  8d4c2418             lea ecx, [esp + 0x18]
// 005dfcb0  51                   push ecx
// 005dfcb1  8bcd                 mov ecx, ebp
// 005dfcb3  8844241c             mov byte ptr [esp + 0x1c], al
// 005dfcb7  ff1598248000         call dword ptr [0x802498]
// 005dfcbd  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005dfcc3  3b02                 cmp eax, dword ptr [edx]
// 005dfcc5  eb11                 jmp 0x5dfcd8
// 005dfcc7  807d3800             cmp byte ptr [ebp + 0x38], 0
// 005dfccb  7416                 je 0x5dfce3
// 005dfccd  0fbec0               movsx eax, al
// 005dfcd0  50                   push eax
// 005dfcd1  ffd7                 call edi
// 005dfcd3  83c404               add esp, 4
// 005dfcd6  85c0                 test eax, eax
// 005dfcd8  0f95c0               setne al
// 005dfcdb  84c0                 test al, al
// 005dfcdd  0f8596020000         jne 0x5dff79
// 005dfce3  8b06                 mov eax, dword ptr [esi]
// 005dfce5  83f8fc               cmp eax, -4
// 005dfce8  744b                 je 0x5dfd35
// 005dfcea  85c0                 test eax, eax
// 005dfcec  7502                 jne 0x5dfcf0
// 005dfcee  ffd3                 call ebx
// 005dfcf0  8b06                 mov eax, dword ptr [esi]
// 005dfcf2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfcf6  7205                 jb 0x5dfcfd
// 005dfcf8  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfcfb  eb03                 jmp 0x5dfd00
// 005dfcfd  8d4804               lea ecx, [eax + 4]
// 005dfd00  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfd03  03d1                 add edx, ecx
// 005dfd05  395604               cmp dword ptr [esi + 4], edx
// 005dfd08  7202                 jb 0x5dfd0c
// 005dfd0a  ffd3                 call ebx
// 005dfd0c  8b06                 mov eax, dword ptr [esi]
// 005dfd0e  83f8fc               cmp eax, -4
// 005dfd11  7422                 je 0x5dfd35
// 005dfd13  85c0                 test eax, eax
// 005dfd15  7502                 jne 0x5dfd19
// 005dfd17  ffd3                 call ebx
// 005dfd19  8b06                 mov eax, dword ptr [esi]
// 005dfd1b  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfd1f  7205                 jb 0x5dfd26
// 005dfd21  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfd24  eb03                 jmp 0x5dfd29
// 005dfd26  8d4804               lea ecx, [eax + 4]
// 005dfd29  8b4014               mov eax, dword ptr [eax + 0x14]
// 005dfd2c  03c1                 add eax, ecx
// 005dfd2e  394604               cmp dword ptr [esi + 4], eax
// 005dfd31  7202                 jb 0x5dfd35
// 005dfd33  ffd3                 call ebx
// 005dfd35  ff4604               inc dword ptr [esi + 4]
// 005dfd38  e9a3feffff           jmp 0x5dfbe0
// 005dfd3d  83f8fc               cmp eax, -4
// 005dfd40  740c                 je 0x5dfd4e
// 005dfd42  85c0                 test eax, eax
// 005dfd44  7406                 je 0x5dfd4c
// 005dfd46  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005dfd4a  7402                 je 0x5dfd4e
// 005dfd4c  ffd3                 call ebx
// 005dfd4e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dfd52  394e04               cmp dword ptr [esi + 4], ecx
// 005dfd55  7520                 jne 0x5dfd77
// 005dfd57  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005dfd5b  0f85d3fdffff         jne 0x5dfb34
// 005dfd61  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005dfd65  c6454001             mov byte ptr [ebp + 0x40], 1
// 005dfd69  8b5604               mov edx, dword ptr [esi + 4]
// 005dfd6c  8b06                 mov eax, dword ptr [esi]
// 005dfd6e  52                   push edx
// 005dfd6f  50                   push eax
// 005dfd70  51                   push ecx
// 005dfd71  57                   push edi
// 005dfd72  e913020000           jmp 0x5dff8a
// 005dfd77  8b06                 mov eax, dword ptr [esi]
// 005dfd79  83f8fc               cmp eax, -4
// 005dfd7c  7422                 je 0x5dfda0
// 005dfd7e  85c0                 test eax, eax
// 005dfd80  7502                 jne 0x5dfd84
// 005dfd82  ffd3                 call ebx
// 005dfd84  8b06                 mov eax, dword ptr [esi]
// 005dfd86  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005dfd8a  7205                 jb 0x5dfd91
// 005dfd8c  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfd8f  eb03                 jmp 0x5dfd94
// 005dfd91  8d4804               lea ecx, [eax + 4]
// 005dfd94  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfd97  03d1                 add edx, ecx
// 005dfd99  395604               cmp dword ptr [esi + 4], edx
// 005dfd9c  7202                 jb 0x5dfda0
// 005dfd9e  ffd3                 call ebx
// 005dfda0  8b4604               mov eax, dword ptr [esi + 4]
// 005dfda3  0fb600               movzx eax, byte ptr [eax]
// 005dfda6  50                   push eax
// 005dfda7  8bcd                 mov ecx, ebp
// 005dfda9  e8d2f9ffff           call 0x5df780
// 005dfdae  84c0                 test al, al
// 005dfdb0  7421                 je 0x5dfdd3
// 005dfdb2  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005dfdb6  0f84b9010000         je 0x5dff75
// 005dfdbc  8bce                 mov ecx, esi
// 005dfdbe  e87dfbe8ff           call 0x46f940
// 005dfdc3  8bce                 mov ecx, esi
// 005dfdc5  e8b6fbe8ff           call 0x46f980
// 005dfdca  c6454000             mov byte ptr [ebp + 0x40], 0
// 005dfdce  e9a6010000           jmp 0x5dff79
// 005dfdd3  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005dfdd7  751a                 jne 0x5dfdf3
// 005dfdd9  8bce                 mov ecx, esi
// 005dfddb  e860fbe8ff           call 0x46f940
// 005dfde0  0fb608               movzx ecx, byte ptr [eax]
// 005dfde3  51                   push ecx
// 005dfde4  8bcd                 mov ecx, ebp
// 005dfde6  e8f5f9ffff           call 0x5df7e0
// 005dfdeb  84c0                 test al, al
// 005dfded  0f8582010000         jne 0x5dff75
// 005dfdf3  8b06                 mov eax, dword ptr [esi]
// 005dfdf5  83f8fc               cmp eax, -4
// 005dfdf8  7428                 je 0x5dfe22
// 005dfdfa  85c0                 test eax, eax
// 005dfdfc  7502                 jne 0x5dfe00
// 005dfdfe  ffd3                 call ebx
// 005dfe00  8b06                 mov eax, dword ptr [esi]
// 005dfe02  bf10000000           mov edi, 0x10
// 005dfe07  397818               cmp dword ptr [eax + 0x18], edi
// 005dfe0a  7205                 jb 0x5dfe11
// 005dfe0c  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfe0f  eb03                 jmp 0x5dfe14
// 005dfe11  8d4804               lea ecx, [eax + 4]
// 005dfe14  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfe17  03d1                 add edx, ecx
// 005dfe19  395604               cmp dword ptr [esi + 4], edx
// 005dfe1c  7209                 jb 0x5dfe27
// 005dfe1e  ffd3                 call ebx
// 005dfe20  eb05                 jmp 0x5dfe27
// 005dfe22  bf10000000           mov edi, 0x10
// 005dfe27  8b4604               mov eax, dword ptr [esi + 4]
// 005dfe2a  0fb600               movzx eax, byte ptr [eax]
// 005dfe2d  50                   push eax
// 005dfe2e  8bcd                 mov ecx, ebp
// 005dfe30  e8abf9ffff           call 0x5df7e0
// 005dfe35  84c0                 test al, al
// 005dfe37  7417                 je 0x5dfe50
// 005dfe39  8bce                 mov ecx, esi
// 005dfe3b  e840fbe8ff           call 0x46f980
// 005dfe40  8b08                 mov ecx, dword ptr [eax]
// 005dfe42  8b5004               mov edx, dword ptr [eax + 4]
// 005dfe45  894c2414             mov dword ptr [esp + 0x14], ecx
// 005dfe49  89542418             mov dword ptr [esp + 0x18], edx
// 005dfe4d  8d4900               lea ecx, [ecx]
// 005dfe50  8b06                 mov eax, dword ptr [esi]
// 005dfe52  83f8fc               cmp eax, -4
// 005dfe55  740c                 je 0x5dfe63
// 005dfe57  85c0                 test eax, eax
// 005dfe59  7406                 je 0x5dfe61
// 005dfe5b  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005dfe5f  7402                 je 0x5dfe63
// 005dfe61  ffd3                 call ebx
// 005dfe63  8b4604               mov eax, dword ptr [esi + 4]
// 005dfe66  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005dfe6a  0f8405010000         je 0x5dff75
// 005dfe70  8b06                 mov eax, dword ptr [esi]
// 005dfe72  83f8fc               cmp eax, -4
// 005dfe75  7421                 je 0x5dfe98
// 005dfe77  85c0                 test eax, eax
// 005dfe79  7502                 jne 0x5dfe7d
// 005dfe7b  ffd3                 call ebx
// 005dfe7d  8b06                 mov eax, dword ptr [esi]
// 005dfe7f  397818               cmp dword ptr [eax + 0x18], edi
// 005dfe82  7205                 jb 0x5dfe89
// 005dfe84  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfe87  eb03                 jmp 0x5dfe8c
// 005dfe89  8d4804               lea ecx, [eax + 4]
// 005dfe8c  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dfe8f  03d1                 add edx, ecx
// 005dfe91  395604               cmp dword ptr [esi + 4], edx
// 005dfe94  7202                 jb 0x5dfe98
// 005dfe96  ffd3                 call ebx
// 005dfe98  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005dfe9c  8b4604               mov eax, dword ptr [esi + 4]
// 005dfe9f  8a00                 mov al, byte ptr [eax]
// 005dfea1  7420                 je 0x5dfec3
// 005dfea3  6a01                 push 1
// 005dfea5  6a00                 push 0
// 005dfea7  8d4c2428             lea ecx, [esp + 0x28]
// 005dfeab  51                   push ecx
// 005dfeac  8d4d1c               lea ecx, [ebp + 0x1c]
// 005dfeaf  8844242c             mov byte ptr [esp + 0x2c], al
// 005dfeb3  ff1598248000         call dword ptr [0x802498]
// 005dfeb9  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005dfebf  3b02                 cmp eax, dword ptr [edx]
// 005dfec1  eb15                 jmp 0x5dfed8
// 005dfec3  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005dfec7  741a                 je 0x5dfee3
// 005dfec9  0fbec0               movsx eax, al
// 005dfecc  50                   push eax
// 005dfecd  ff1584278000         call dword ptr [0x802784]
// 005dfed3  83c404               add esp, 4
// 005dfed6  85c0                 test eax, eax
// 005dfed8  0f95c0               setne al
// 005dfedb  84c0                 test al, al
// 005dfedd  0f8592000000         jne 0x5dff75
// 005dfee3  8b06                 mov eax, dword ptr [esi]
// 005dfee5  83f8fc               cmp eax, -4
// 005dfee8  7421                 je 0x5dff0b
// 005dfeea  85c0                 test eax, eax
// 005dfeec  7502                 jne 0x5dfef0
// 005dfeee  ffd3                 call ebx
// 005dfef0  8b06                 mov eax, dword ptr [esi]
// 005dfef2  397818               cmp dword ptr [eax + 0x18], edi
// 005dfef5  7205                 jb 0x5dfefc
// 005dfef7  8b4804               mov ecx, dword ptr [eax + 4]
// 005dfefa  eb03                 jmp 0x5dfeff
// 005dfefc  8d4804               lea ecx, [eax + 4]
// 005dfeff  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dff02  03d1                 add edx, ecx
// 005dff04  395604               cmp dword ptr [esi + 4], edx
// 005dff07  7202                 jb 0x5dff0b
// 005dff09  ffd3                 call ebx
// 005dff0b  8b4604               mov eax, dword ptr [esi + 4]
// 005dff0e  0fb600               movzx eax, byte ptr [eax]
// 005dff11  50                   push eax
// 005dff12  8bcd                 mov ecx, ebp
// 005dff14  e867f8ffff           call 0x5df780
// 005dff19  84c0                 test al, al
// 005dff1b  7558                 jne 0x5dff75
// 005dff1d  8b06                 mov eax, dword ptr [esi]
// 005dff1f  83f8fc               cmp eax, -4
// 005dff22  7449                 je 0x5dff6d
// 005dff24  85c0                 test eax, eax
// 005dff26  7502                 jne 0x5dff2a
// 005dff28  ffd3                 call ebx
// 005dff2a  8b06                 mov eax, dword ptr [esi]
// 005dff2c  397818               cmp dword ptr [eax + 0x18], edi
// 005dff2f  7205                 jb 0x5dff36
// 005dff31  8b4804               mov ecx, dword ptr [eax + 4]
// 005dff34  eb03                 jmp 0x5dff39
// 005dff36  8d4804               lea ecx, [eax + 4]
// 005dff39  8b5014               mov edx, dword ptr [eax + 0x14]
// 005dff3c  03d1                 add edx, ecx
// 005dff3e  395604               cmp dword ptr [esi + 4], edx
// 005dff41  7202                 jb 0x5dff45
// 005dff43  ffd3                 call ebx
// 005dff45  8b06                 mov eax, dword ptr [esi]
// 005dff47  83f8fc               cmp eax, -4
// 005dff4a  7421                 je 0x5dff6d
// 005dff4c  85c0                 test eax, eax
// 005dff4e  7502                 jne 0x5dff52
// 005dff50  ffd3                 call ebx
// 005dff52  8b06                 mov eax, dword ptr [esi]
// 005dff54  397818               cmp dword ptr [eax + 0x18], edi
// 005dff57  7205                 jb 0x5dff5e
// 005dff59  8b4804               mov ecx, dword ptr [eax + 4]
// 005dff5c  eb03                 jmp 0x5dff61
// 005dff5e  8d4804               lea ecx, [eax + 4]
// 005dff61  8b4014               mov eax, dword ptr [eax + 0x14]
// 005dff64  03c1                 add eax, ecx
// 005dff66  394604               cmp dword ptr [esi + 4], eax
// 005dff69  7202                 jb 0x5dff6d
// 005dff6b  ffd3                 call ebx
// 005dff6d  ff4604               inc dword ptr [esi + 4]
// 005dff70  e9dbfeffff           jmp 0x5dfe50
// 005dff75  c6454001             mov byte ptr [ebp + 0x40], 1
// 005dff79  8b4e04               mov ecx, dword ptr [esi + 4]
// 005dff7c  8b16                 mov edx, dword ptr [esi]
// 005dff7e  8b442418             mov eax, dword ptr [esp + 0x18]
// 005dff82  51                   push ecx
// 005dff83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005dff87  52                   push edx
// 005dff88  50                   push eax
// 005dff89  51                   push ecx
// 005dff8a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005dff8e  ff1528258000         call dword ptr [0x802528]
// 005dff94  5f                   pop edi
// 005dff95  5e                   pop esi
// 005dff96  5d                   pop ebp
// 005dff97  b001                 mov al, 1
// 005dff99  5b                   pop ebx
// 005dff9a  83c40c               add esp, 0xc
// 005dff9d  c21000               ret 0x10
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?RV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@?$char_separator@DU?$char_traits@D@std@@@boost@@QAE_NAAV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
