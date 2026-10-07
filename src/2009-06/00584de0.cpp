// roc 2009-06 00584de0  unit: seg_00580000  size: 1859 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584de0
//
// 00584de0  83ec2c               sub esp, 0x2c
// 00584de3  8b542434             mov edx, dword ptr [esp + 0x34]
// 00584de7  8b0a                 mov ecx, dword ptr [edx]
// 00584de9  8a5208               mov dl, byte ptr [edx + 8]
// 00584dec  33c0                 xor eax, eax
// 00584dee  894c2408             mov dword ptr [esp + 8], ecx
// 00584df2  89442404             mov dword ptr [esp + 4], eax
// 00584df6  f6c202               test dl, 2
// 00584df9  0f8420070000         je 0x58551f
// 00584dff  8b442430             mov eax, dword ptr [esp + 0x30]
// 00584e03  53                   push ebx
// 00584e04  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 00584e0b  55                   push ebp
// 00584e0c  56                   push esi
// 00584e0d  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 00584e14  57                   push edi
// 00584e15  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 00584e1c  897c2434             mov dword ptr [esp + 0x34], edi
// 00584e20  8974241c             mov dword ptr [esp + 0x1c], esi
// 00584e24  895c2430             mov dword ptr [esp + 0x30], ebx
// 00584e28  80fa02               cmp dl, 2
// 00584e2b  0f8559030000         jne 0x58518a
// 00584e31  8b542444             mov edx, dword ptr [esp + 0x44]
// 00584e35  807a0908             cmp byte ptr [edx + 9], 8
// 00584e39  0f853a010000         jne 0x584f79
// 00584e3f  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00584e46  0f84b5000000         je 0x584f01
// 00584e4c  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00584e53  0f84a8000000         je 0x584f01
// 00584e59  8b742448             mov esi, dword ptr [esp + 0x48]
// 00584e5d  89742420             mov dword ptr [esp + 0x20], esi
// 00584e61  85c9                 test ecx, ecx
// 00584e63  0f8625030000         jbe 0x58518e
// 00584e69  894c2424             mov dword ptr [esp + 0x24], ecx
// 00584e6d  8d4900               lea ecx, [ecx]
// 00584e70  0fb60e               movzx ecx, byte ptr [esi]
// 00584e73  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 00584e79  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00584e7d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00584e81  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00584e84  46                   inc esi
// 00584e85  46                   inc esi
// 00584e86  88542412             mov byte ptr [esp + 0x12], dl
// 00584e8a  0fb616               movzx edx, byte ptr [esi]
// 00584e8d  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00584e91  88542411             mov byte ptr [esp + 0x11], dl
// 00584e95  8a542412             mov dl, byte ptr [esp + 0x12]
// 00584e99  46                   inc esi
// 00584e9a  884c2413             mov byte ptr [esp + 0x13], cl
// 00584e9e  3ad1                 cmp dl, cl
// 00584ea0  7516                 jne 0x584eb8
// 00584ea2  3a542411             cmp dl, byte ptr [esp + 0x11]
// 00584ea6  750c                 jne 0x584eb4
// 00584ea8  8a4eff               mov cl, byte ptr [esi - 1]
// 00584eab  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00584eaf  884d00               mov byte ptr [ebp], cl
// 00584eb2  eb38                 jmp 0x584eec
// 00584eb4  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00584eb8  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00584ebd  0fb6c9               movzx ecx, cl
// 00584ec0  0fafd3               imul edx, ebx
// 00584ec3  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00584ec8  834c241401           or dword ptr [esp + 0x14], 1
// 00584ecd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00584ed1  03d1                 add edx, ecx
// 00584ed3  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 00584ed8  0fafcf               imul ecx, edi
// 00584edb  03d1                 add edx, ecx
// 00584edd  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00584ee3  c1ea0f               shr edx, 0xf
// 00584ee6  8a140a               mov dl, byte ptr [edx + ecx]
// 00584ee9  885500               mov byte ptr [ebp], dl
// 00584eec  45                   inc ebp
// 00584eed  836c242401           sub dword ptr [esp + 0x24], 1
// 00584ef2  896c2420             mov dword ptr [esp + 0x20], ebp
// 00584ef6  0f8574ffffff         jne 0x584e70
// 00584efc  e985020000           jmp 0x585186
// 00584f01  8b742448             mov esi, dword ptr [esp + 0x48]
// 00584f05  8bee                 mov ebp, esi
// 00584f07  85c9                 test ecx, ecx
// 00584f09  0f867b020000         jbe 0x58518a
// 00584f0f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00584f13  0fb60e               movzx ecx, byte ptr [esi]
// 00584f16  46                   inc esi
// 00584f17  0fb65601             movzx edx, byte ptr [esi + 1]
// 00584f1b  884c2411             mov byte ptr [esp + 0x11], cl
// 00584f1f  8a0e                 mov cl, byte ptr [esi]
// 00584f21  46                   inc esi
// 00584f22  88542412             mov byte ptr [esp + 0x12], dl
// 00584f26  8a542411             mov dl, byte ptr [esp + 0x11]
// 00584f2a  46                   inc esi
// 00584f2b  884c2413             mov byte ptr [esp + 0x13], cl
// 00584f2f  3ad1                 cmp dl, cl
// 00584f31  7512                 jne 0x584f45
// 00584f33  3a542412             cmp dl, byte ptr [esp + 0x12]
// 00584f37  7508                 jne 0x584f41
// 00584f39  8a4eff               mov cl, byte ptr [esi - 1]
// 00584f3c  884d00               mov byte ptr [ebp], cl
// 00584f3f  eb2b                 jmp 0x584f6c
// 00584f41  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00584f45  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00584f4a  0fb6c9               movzx ecx, cl
// 00584f4d  0fafd3               imul edx, ebx
// 00584f50  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00584f55  834c241401           or dword ptr [esp + 0x14], 1
// 00584f5a  03d1                 add edx, ecx
// 00584f5c  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00584f61  0fafcf               imul ecx, edi
// 00584f64  03d1                 add edx, ecx
// 00584f66  c1ea0f               shr edx, 0xf
// 00584f69  885500               mov byte ptr [ebp], dl
// 00584f6c  45                   inc ebp
// 00584f6d  836c242401           sub dword ptr [esp + 0x24], 1
// 00584f72  759f                 jne 0x584f13
// 00584f74  e90d020000           jmp 0x585186
// 00584f79  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00584f80  0f843e010000         je 0x5850c4
// 00584f86  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00584f8d  0f8431010000         je 0x5850c4
// 00584f93  8b542448             mov edx, dword ptr [esp + 0x48]
// 00584f97  89542420             mov dword ptr [esp + 0x20], edx
// 00584f9b  85c9                 test ecx, ecx
// 00584f9d  0f86e7010000         jbe 0x58518a
// 00584fa3  894c2428             mov dword ptr [esp + 0x28], ecx
// 00584fa7  eb07                 jmp 0x584fb0
// 00584fa9  8da42400000000       lea esp, [esp]
// 00584fb0  0fb60a               movzx ecx, byte ptr [edx]
// 00584fb3  0fb67201             movzx esi, byte ptr [edx + 1]
// 00584fb7  66c1e108             shl cx, 8
// 00584fbb  660bce               or cx, si
// 00584fbe  0fb67203             movzx esi, byte ptr [edx + 3]
// 00584fc2  0fb7e9               movzx ebp, cx
// 00584fc5  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00584fc9  83c202               add edx, 2
// 00584fcc  66c1e108             shl cx, 8
// 00584fd0  660bce               or cx, si
// 00584fd3  0fb67203             movzx esi, byte ptr [edx + 3]
// 00584fd7  0fb7c9               movzx ecx, cx
// 00584fda  83c202               add edx, 2
// 00584fdd  894c2424             mov dword ptr [esp + 0x24], ecx
// 00584fe1  0fb60a               movzx ecx, byte ptr [edx]
// 00584fe4  66c1e108             shl cx, 8
// 00584fe8  660bce               or cx, si
// 00584feb  83c202               add edx, 2
// 00584fee  0fb7f1               movzx esi, cx
// 00584ff1  89542438             mov dword ptr [esp + 0x38], edx
// 00584ff5  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 00584ffa  750d                 jne 0x585009
// 00584ffc  663bee               cmp bp, si
// 00584fff  7508                 jne 0x585009
// 00585001  0fb7f5               movzx esi, bp
// 00585004  e989000000           jmp 0x585092
// 00585009  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 0058500e  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00585015  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00585019  0fb7dd               movzx ebx, bp
// 0058501c  0fb6eb               movzx ebp, bl
// 0058501f  d3ed                 shr ebp, cl
// 00585021  0fb7d6               movzx edx, si
// 00585024  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0058502a  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 0058502d  c1eb08               shr ebx, 8
// 00585030  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00585035  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00585039  0fafef               imul ebp, edi
// 0058503c  0fb6fb               movzx edi, bl
// 0058503f  d3ef                 shr edi, cl
// 00585041  c1eb08               shr ebx, 8
// 00585044  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00585047  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0058504b  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00585050  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00585054  03ef                 add ebp, edi
// 00585056  0fb6fa               movzx edi, dl
// 00585059  d3ef                 shr edi, cl
// 0058505b  c1ea08               shr edx, 8
// 0058505e  8b34be               mov esi, dword ptr [esi + edi*4]
// 00585061  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00585065  0fafd3               imul edx, ebx
// 00585068  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0058506c  03ea                 add ebp, edx
// 0058506e  c1ed0f               shr ebp, 0xf
// 00585071  0fb7d5               movzx edx, bp
// 00585074  0fb6f2               movzx esi, dl
// 00585077  d3ee                 shr esi, cl
// 00585079  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0058507f  c1ea08               shr edx, 8
// 00585082  834c241401           or dword ptr [esp + 0x14], 1
// 00585087  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0058508a  0fb73451             movzx esi, word ptr [ecx + edx*2]
// 0058508e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00585092  8bce                 mov ecx, esi
// 00585094  89742424             mov dword ptr [esp + 0x24], esi
// 00585098  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058509c  c1e908               shr ecx, 8
// 0058509f  880e                 mov byte ptr [esi], cl
// 005850a1  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 005850a5  46                   inc esi
// 005850a6  880e                 mov byte ptr [esi], cl
// 005850a8  b901000000           mov ecx, 1
// 005850ad  89742420             mov dword ptr [esp + 0x20], esi
// 005850b1  014c2420             add dword ptr [esp + 0x20], ecx
// 005850b5  294c2428             sub dword ptr [esp + 0x28], ecx
// 005850b9  0f85f1feffff         jne 0x584fb0
// 005850bf  e9c2000000           jmp 0x585186
// 005850c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005850c8  8bf2                 mov esi, edx
// 005850ca  85c9                 test ecx, ecx
// 005850cc  0f86b8000000         jbe 0x58518a
// 005850d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005850d6  eb08                 jmp 0x5850e0
// 005850d8  8da42400000000       lea esp, [esp]
// 005850df  90                   nop 
// 005850e0  0fb60a               movzx ecx, byte ptr [edx]
// 005850e3  660fb66a01           movzx bp, byte ptr [edx + 1]
// 005850e8  66c1e108             shl cx, 8
// 005850ec  660bcd               or cx, bp
// 005850ef  660fb66a03           movzx bp, byte ptr [edx + 3]
// 005850f4  0fb7c9               movzx ecx, cx
// 005850f7  894c2420             mov dword ptr [esp + 0x20], ecx
// 005850fb  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 005850ff  83c202               add edx, 2
// 00585102  66c1e108             shl cx, 8
// 00585106  660bcd               or cx, bp
// 00585109  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0058510e  0fb7c9               movzx ecx, cx
// 00585111  894c2424             mov dword ptr [esp + 0x24], ecx
// 00585115  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00585119  83c202               add edx, 2
// 0058511c  66c1e108             shl cx, 8
// 00585120  660bcd               or cx, bp
// 00585123  0fb7c9               movzx ecx, cx
// 00585126  894c2428             mov dword ptr [esp + 0x28], ecx
// 0058512a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058512e  83c202               add edx, 2
// 00585131  663b4c2424           cmp cx, word ptr [esp + 0x24]
// 00585136  7507                 jne 0x58513f
// 00585138  663b4c2428           cmp cx, word ptr [esp + 0x28]
// 0058513d  7405                 je 0x585144
// 0058513f  834c241401           or dword ptr [esp + 0x14], 1
// 00585144  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 00585149  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 0058514e  0fafcb               imul ecx, ebx
// 00585151  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 00585156  03cd                 add ecx, ebp
// 00585158  0fb76c2420           movzx ebp, word ptr [esp + 0x20]
// 0058515d  0fafef               imul ebp, edi
// 00585160  03cd                 add ecx, ebp
// 00585162  c1e90f               shr ecx, 0xf
// 00585165  0fb7e9               movzx ebp, cx
// 00585168  8bcd                 mov ecx, ebp
// 0058516a  c1e908               shr ecx, 8
// 0058516d  880e                 mov byte ptr [esi], cl
// 0058516f  896c2438             mov dword ptr [esp + 0x38], ebp
// 00585173  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 00585177  46                   inc esi
// 00585178  880e                 mov byte ptr [esi], cl
// 0058517a  46                   inc esi
// 0058517b  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00585180  0f855affffff         jne 0x5850e0
// 00585186  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058518a  8b742448             mov esi, dword ptr [esp + 0x48]
// 0058518e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00585192  807a0806             cmp byte ptr [edx + 8], 6
// 00585196  0f853c030000         jne 0x5854d8
// 0058519c  807a0908             cmp byte ptr [edx + 9], 8
// 005851a0  0f8527010000         jne 0x5852cd
// 005851a6  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 005851ad  0f84ad000000         je 0x585260
// 005851b3  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 005851ba  0f84a0000000         je 0x585260
// 005851c0  837c241800           cmp dword ptr [esp + 0x18], 0
// 005851c5  8bee                 mov ebp, esi
// 005851c7  0f8607030000         jbe 0x5854d4
// 005851cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 005851d1  8954242c             mov dword ptr [esp + 0x2c], edx
// 005851d5  eb09                 jmp 0x5851e0
// 005851d7  8da42400000000       lea esp, [esp]
// 005851de  8bff                 mov edi, edi
// 005851e0  0fb616               movzx edx, byte ptr [esi]
// 005851e3  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 005851e9  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 005851ed  46                   inc esi
// 005851ee  88542413             mov byte ptr [esp + 0x13], dl
// 005851f2  0fb616               movzx edx, byte ptr [esi]
// 005851f5  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 005851f9  46                   inc esi
// 005851fa  88542411             mov byte ptr [esp + 0x11], dl
// 005851fe  0fb616               movzx edx, byte ptr [esi]
// 00585201  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 00585205  884c2412             mov byte ptr [esp + 0x12], cl
// 00585209  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0058520d  46                   inc esi
// 0058520e  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 00585212  7506                 jne 0x58521a
// 00585214  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 00585218  7405                 je 0x58521f
// 0058521a  834c241401           or dword ptr [esp + 0x14], 1
// 0058521f  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00585224  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00585229  0fafd3               imul edx, ebx
// 0058522c  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00585231  03d1                 add edx, ecx
// 00585233  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 00585238  0fafcf               imul ecx, edi
// 0058523b  03d1                 add edx, ecx
// 0058523d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00585243  c1ea0f               shr edx, 0xf
// 00585246  8a140a               mov dl, byte ptr [edx + ecx]
// 00585249  885500               mov byte ptr [ebp], dl
// 0058524c  8a0e                 mov cl, byte ptr [esi]
// 0058524e  45                   inc ebp
// 0058524f  884d00               mov byte ptr [ebp], cl
// 00585252  45                   inc ebp
// 00585253  46                   inc esi
// 00585254  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00585259  7585                 jne 0x5851e0
// 0058525b  e974020000           jmp 0x5854d4
// 00585260  8bc6                 mov eax, esi
// 00585262  85c9                 test ecx, ecx
// 00585264  0f866e020000         jbe 0x5854d8
// 0058526a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0058526e  8bff                 mov edi, edi
// 00585270  8a08                 mov cl, byte ptr [eax]
// 00585272  0fb65001             movzx edx, byte ptr [eax + 1]
// 00585276  40                   inc eax
// 00585277  40                   inc eax
// 00585278  88542412             mov byte ptr [esp + 0x12], dl
// 0058527c  0fb610               movzx edx, byte ptr [eax]
// 0058527f  40                   inc eax
// 00585280  884c2411             mov byte ptr [esp + 0x11], cl
// 00585284  88542413             mov byte ptr [esp + 0x13], dl
// 00585288  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 0058528c  7504                 jne 0x585292
// 0058528e  3aca                 cmp cl, dl
// 00585290  7405                 je 0x585297
// 00585292  834c241401           or dword ptr [esp + 0x14], 1
// 00585297  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0058529c  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 005852a1  0fafcb               imul ecx, ebx
// 005852a4  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 005852a9  03ca                 add ecx, edx
// 005852ab  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 005852b0  0fafd7               imul edx, edi
// 005852b3  03ca                 add ecx, edx
// 005852b5  c1e90f               shr ecx, 0xf
// 005852b8  880e                 mov byte ptr [esi], cl
// 005852ba  8a08                 mov cl, byte ptr [eax]
// 005852bc  46                   inc esi
// 005852bd  880e                 mov byte ptr [esi], cl
// 005852bf  46                   inc esi
// 005852c0  40                   inc eax
// 005852c1  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005852c6  75a8                 jne 0x585270
// 005852c8  e907020000           jmp 0x5854d4
// 005852cd  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 005852d4  0f8439010000         je 0x585413
// 005852da  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 005852e1  0f842c010000         je 0x585413
// 005852e7  837c241800           cmp dword ptr [esp + 0x18], 0
// 005852ec  8bce                 mov ecx, esi
// 005852ee  89742428             mov dword ptr [esp + 0x28], esi
// 005852f2  0f86dc010000         jbe 0x5854d4
// 005852f8  8b542418             mov edx, dword ptr [esp + 0x18]
// 005852fc  89542424             mov dword ptr [esp + 0x24], edx
// 00585300  0fb611               movzx edx, byte ptr [ecx]
// 00585303  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00585307  66c1e208             shl dx, 8
// 0058530b  660bd3               or dx, bx
// 0058530e  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00585312  0fb7ea               movzx ebp, dx
// 00585315  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00585319  83c102               add ecx, 2
// 0058531c  66c1e208             shl dx, 8
// 00585320  660bd3               or dx, bx
// 00585323  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00585327  0fb7d2               movzx edx, dx
// 0058532a  8954242c             mov dword ptr [esp + 0x2c], edx
// 0058532e  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00585332  83c102               add ecx, 2
// 00585335  66c1e208             shl dx, 8
// 00585339  660bd3               or dx, bx
// 0058533c  83c102               add ecx, 2
// 0058533f  0fb7d2               movzx edx, dx
// 00585342  894c2420             mov dword ptr [esp + 0x20], ecx
// 00585346  663b6c242c           cmp bp, word ptr [esp + 0x2c]
// 0058534b  750d                 jne 0x58535a
// 0058534d  663bea               cmp bp, dx
// 00585350  7508                 jne 0x58535a
// 00585352  0fb7d5               movzx edx, bp
// 00585355  e98b000000           jmp 0x5853e5
// 0058535a  0fb75c242c           movzx ebx, word ptr [esp + 0x2c]
// 0058535f  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00585366  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 0058536c  895c2438             mov dword ptr [esp + 0x38], ebx
// 00585370  0fb7dd               movzx ebx, bp
// 00585373  0fb6eb               movzx ebp, bl
// 00585376  d3ed                 shr ebp, cl
// 00585378  c1eb08               shr ebx, 8
// 0058537b  0fb7d2               movzx edx, dx
// 0058537e  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 00585381  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00585386  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0058538a  0fafef               imul ebp, edi
// 0058538d  0fb6fb               movzx edi, bl
// 00585390  d3ef                 shr edi, cl
// 00585392  c1eb08               shr ebx, 8
// 00585395  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00585398  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0058539c  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 005853a1  03ef                 add ebp, edi
// 005853a3  0fb6fa               movzx edi, dl
// 005853a6  d3ef                 shr edi, cl
// 005853a8  c1ea08               shr edx, 8
// 005853ab  8b34be               mov esi, dword ptr [esi + edi*4]
// 005853ae  0fb71456             movzx edx, word ptr [esi + edx*2]
// 005853b2  0faf542430           imul edx, dword ptr [esp + 0x30]
// 005853b7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005853bb  03ea                 add ebp, edx
// 005853bd  c1ed0f               shr ebp, 0xf
// 005853c0  0fb7d5               movzx edx, bp
// 005853c3  0fb6f2               movzx esi, dl
// 005853c6  d3ee                 shr esi, cl
// 005853c8  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 005853ce  c1ea08               shr edx, 8
// 005853d1  834c241401           or dword ptr [esp + 0x14], 1
// 005853d6  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 005853d9  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 005853dd  8b742428             mov esi, dword ptr [esp + 0x28]
// 005853e1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005853e5  8bda                 mov ebx, edx
// 005853e7  c1eb08               shr ebx, 8
// 005853ea  881e                 mov byte ptr [esi], bl
// 005853ec  46                   inc esi
// 005853ed  8816                 mov byte ptr [esi], dl
// 005853ef  0fb611               movzx edx, byte ptr [ecx]
// 005853f2  46                   inc esi
// 005853f3  8816                 mov byte ptr [esi], dl
// 005853f5  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005853f9  41                   inc ecx
// 005853fa  46                   inc esi
// 005853fb  8816                 mov byte ptr [esi], dl
// 005853fd  46                   inc esi
// 005853fe  41                   inc ecx
// 005853ff  836c242401           sub dword ptr [esp + 0x24], 1
// 00585404  89742428             mov dword ptr [esp + 0x28], esi
// 00585408  0f85f2feffff         jne 0x585300
// 0058540e  e9c1000000           jmp 0x5854d4
// 00585413  837c241800           cmp dword ptr [esp + 0x18], 0
// 00585418  8bc6                 mov eax, esi
// 0058541a  8bce                 mov ecx, esi
// 0058541c  0f86b2000000         jbe 0x5854d4
// 00585422  8b542418             mov edx, dword ptr [esp + 0x18]
// 00585426  89542430             mov dword ptr [esp + 0x30], edx
// 0058542a  8d9b00000000         lea ebx, [ebx]
// 00585430  0fb630               movzx esi, byte ptr [eax]
// 00585433  0fb65001             movzx edx, byte ptr [eax + 1]
// 00585437  66c1e608             shl si, 8
// 0058543b  660bd6               or dx, si
// 0058543e  0fb67002             movzx esi, byte ptr [eax + 2]
// 00585442  0fb7d2               movzx edx, dx
// 00585445  83c002               add eax, 2
// 00585448  660fb66802           movzx bp, byte ptr [eax + 2]
// 0058544d  89542434             mov dword ptr [esp + 0x34], edx
// 00585451  0fb65001             movzx edx, byte ptr [eax + 1]
// 00585455  66c1e608             shl si, 8
// 00585459  83c002               add eax, 2
// 0058545c  660bd6               or dx, si
// 0058545f  0fb67001             movzx esi, byte ptr [eax + 1]
// 00585463  66c1e508             shl bp, 8
// 00585467  660bf5               or si, bp
// 0058546a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0058546e  0fb7d2               movzx edx, dx
// 00585471  83c002               add eax, 2
// 00585474  0fb7f6               movzx esi, si
// 00585477  663bea               cmp bp, dx
// 0058547a  7505                 jne 0x585481
// 0058547c  663bee               cmp bp, si
// 0058547f  7405                 je 0x585486
// 00585481  834c241401           or dword ptr [esp + 0x14], 1
// 00585486  0fb7d2               movzx edx, dx
// 00585489  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0058548e  0fb7f6               movzx esi, si
// 00585491  0faff3               imul esi, ebx
// 00585494  03f2                 add esi, edx
// 00585496  0fb7542434           movzx edx, word ptr [esp + 0x34]
// 0058549b  0fafd7               imul edx, edi
// 0058549e  03f2                 add esi, edx
// 005854a0  c1ee0f               shr esi, 0xf
// 005854a3  0fb7f6               movzx esi, si
// 005854a6  8bd6                 mov edx, esi
// 005854a8  c1ea08               shr edx, 8
// 005854ab  8811                 mov byte ptr [ecx], dl
// 005854ad  89742438             mov dword ptr [esp + 0x38], esi
// 005854b1  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 005854b6  41                   inc ecx
// 005854b7  8811                 mov byte ptr [ecx], dl
// 005854b9  0fb610               movzx edx, byte ptr [eax]
// 005854bc  41                   inc ecx
// 005854bd  8811                 mov byte ptr [ecx], dl
// 005854bf  0fb65001             movzx edx, byte ptr [eax + 1]
// 005854c3  40                   inc eax
// 005854c4  41                   inc ecx
// 005854c5  8811                 mov byte ptr [ecx], dl
// 005854c7  41                   inc ecx
// 005854c8  40                   inc eax
// 005854c9  836c243001           sub dword ptr [esp + 0x30], 1
// 005854ce  0f855cffffff         jne 0x585430
// 005854d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005854d8  8b742444             mov esi, dword ptr [esp + 0x44]
// 005854dc  80460afe             add byte ptr [esi + 0xa], 0xfe
// 005854e0  8a4609               mov al, byte ptr [esi + 9]
// 005854e3  8a560a               mov dl, byte ptr [esi + 0xa]
// 005854e6  806608fd             and byte ptr [esi + 8], 0xfd
// 005854ea  f6ea                 imul dl
// 005854ec  88460b               mov byte ptr [esi + 0xb], al
// 005854ef  3c08                 cmp al, 8
// 005854f1  0fb6c0               movzx eax, al
// 005854f4  7215                 jb 0x58550b
// 005854f6  c1e803               shr eax, 3
// 005854f9  0fafc1               imul eax, ecx
// 005854fc  5f                   pop edi
// 005854fd  894604               mov dword ptr [esi + 4], eax
// 00585500  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585504  5e                   pop esi
// 00585505  5d                   pop ebp
// 00585506  5b                   pop ebx
// 00585507  83c42c               add esp, 0x2c
// 0058550a  c3                   ret 
// 0058550b  0fafc1               imul eax, ecx
// 0058550e  83c007               add eax, 7
// 00585511  c1e803               shr eax, 3
// 00585514  5f                   pop edi
// 00585515  894604               mov dword ptr [esi + 4], eax
// 00585518  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058551c  5e                   pop esi
// 0058551d  5d                   pop ebp
// 0058551e  5b                   pop ebx
// 0058551f  83c42c               add esp, 0x2c
// 00585522  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
