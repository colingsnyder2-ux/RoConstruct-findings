// roc 2008-06 00520d50  unit: seg_00520000  size: 1859 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520d50
//
// 00520d50  83ec2c               sub esp, 0x2c
// 00520d53  8b542434             mov edx, dword ptr [esp + 0x34]
// 00520d57  8b0a                 mov ecx, dword ptr [edx]
// 00520d59  8a5208               mov dl, byte ptr [edx + 8]
// 00520d5c  33c0                 xor eax, eax
// 00520d5e  894c2408             mov dword ptr [esp + 8], ecx
// 00520d62  89442404             mov dword ptr [esp + 4], eax
// 00520d66  f6c202               test dl, 2
// 00520d69  0f8420070000         je 0x52148f
// 00520d6f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00520d73  53                   push ebx
// 00520d74  0fb7982e020000       movzx ebx, word ptr [eax + 0x22e]
// 00520d7b  55                   push ebp
// 00520d7c  56                   push esi
// 00520d7d  0fb7b02c020000       movzx esi, word ptr [eax + 0x22c]
// 00520d84  57                   push edi
// 00520d85  0fb7b82a020000       movzx edi, word ptr [eax + 0x22a]
// 00520d8c  897c2434             mov dword ptr [esp + 0x34], edi
// 00520d90  8974241c             mov dword ptr [esp + 0x1c], esi
// 00520d94  895c2430             mov dword ptr [esp + 0x30], ebx
// 00520d98  80fa02               cmp dl, 2
// 00520d9b  0f8559030000         jne 0x5210fa
// 00520da1  8b542444             mov edx, dword ptr [esp + 0x44]
// 00520da5  807a0908             cmp byte ptr [edx + 9], 8
// 00520da9  0f853a010000         jne 0x520ee9
// 00520daf  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00520db6  0f84b5000000         je 0x520e71
// 00520dbc  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 00520dc3  0f84a8000000         je 0x520e71
// 00520dc9  8b742448             mov esi, dword ptr [esp + 0x48]
// 00520dcd  89742420             mov dword ptr [esp + 0x20], esi
// 00520dd1  85c9                 test ecx, ecx
// 00520dd3  0f8625030000         jbe 0x5210fe
// 00520dd9  894c2424             mov dword ptr [esp + 0x24], ecx
// 00520ddd  8d4900               lea ecx, [ecx]
// 00520de0  0fb60e               movzx ecx, byte ptr [esi]
// 00520de3  8ba86c010000         mov ebp, dword ptr [eax + 0x16c]
// 00520de9  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00520ded  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00520df1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00520df4  46                   inc esi
// 00520df5  46                   inc esi
// 00520df6  88542412             mov byte ptr [esp + 0x12], dl
// 00520dfa  0fb616               movzx edx, byte ptr [esi]
// 00520dfd  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 00520e01  88542411             mov byte ptr [esp + 0x11], dl
// 00520e05  8a542412             mov dl, byte ptr [esp + 0x12]
// 00520e09  46                   inc esi
// 00520e0a  884c2413             mov byte ptr [esp + 0x13], cl
// 00520e0e  3ad1                 cmp dl, cl
// 00520e10  7516                 jne 0x520e28
// 00520e12  3a542411             cmp dl, byte ptr [esp + 0x11]
// 00520e16  750c                 jne 0x520e24
// 00520e18  8a4eff               mov cl, byte ptr [esi - 1]
// 00520e1b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00520e1f  884d00               mov byte ptr [ebp], cl
// 00520e22  eb38                 jmp 0x520e5c
// 00520e24  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00520e28  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00520e2d  0fb6c9               movzx ecx, cl
// 00520e30  0fafd3               imul edx, ebx
// 00520e33  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00520e38  834c241401           or dword ptr [esp + 0x14], 1
// 00520e3d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00520e41  03d1                 add edx, ecx
// 00520e43  0fb64c2412           movzx ecx, byte ptr [esp + 0x12]
// 00520e48  0fafcf               imul ecx, edi
// 00520e4b  03d1                 add edx, ecx
// 00520e4d  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 00520e53  c1ea0f               shr edx, 0xf
// 00520e56  8a140a               mov dl, byte ptr [edx + ecx]
// 00520e59  885500               mov byte ptr [ebp], dl
// 00520e5c  45                   inc ebp
// 00520e5d  836c242401           sub dword ptr [esp + 0x24], 1
// 00520e62  896c2420             mov dword ptr [esp + 0x20], ebp
// 00520e66  0f8574ffffff         jne 0x520de0
// 00520e6c  e985020000           jmp 0x5210f6
// 00520e71  8b742448             mov esi, dword ptr [esp + 0x48]
// 00520e75  8bee                 mov ebp, esi
// 00520e77  85c9                 test ecx, ecx
// 00520e79  0f867b020000         jbe 0x5210fa
// 00520e7f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00520e83  0fb60e               movzx ecx, byte ptr [esi]
// 00520e86  46                   inc esi
// 00520e87  0fb65601             movzx edx, byte ptr [esi + 1]
// 00520e8b  884c2411             mov byte ptr [esp + 0x11], cl
// 00520e8f  8a0e                 mov cl, byte ptr [esi]
// 00520e91  46                   inc esi
// 00520e92  88542412             mov byte ptr [esp + 0x12], dl
// 00520e96  8a542411             mov dl, byte ptr [esp + 0x11]
// 00520e9a  46                   inc esi
// 00520e9b  884c2413             mov byte ptr [esp + 0x13], cl
// 00520e9f  3ad1                 cmp dl, cl
// 00520ea1  7512                 jne 0x520eb5
// 00520ea3  3a542412             cmp dl, byte ptr [esp + 0x12]
// 00520ea7  7508                 jne 0x520eb1
// 00520ea9  8a4eff               mov cl, byte ptr [esi - 1]
// 00520eac  884d00               mov byte ptr [ebp], cl
// 00520eaf  eb2b                 jmp 0x520edc
// 00520eb1  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 00520eb5  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00520eba  0fb6c9               movzx ecx, cl
// 00520ebd  0fafd3               imul edx, ebx
// 00520ec0  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00520ec5  834c241401           or dword ptr [esp + 0x14], 1
// 00520eca  03d1                 add edx, ecx
// 00520ecc  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00520ed1  0fafcf               imul ecx, edi
// 00520ed4  03d1                 add edx, ecx
// 00520ed6  c1ea0f               shr edx, 0xf
// 00520ed9  885500               mov byte ptr [ebp], dl
// 00520edc  45                   inc ebp
// 00520edd  836c242401           sub dword ptr [esp + 0x24], 1
// 00520ee2  759f                 jne 0x520e83
// 00520ee4  e90d020000           jmp 0x5210f6
// 00520ee9  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00520ef0  0f843e010000         je 0x521034
// 00520ef6  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00520efd  0f8431010000         je 0x521034
// 00520f03  8b542448             mov edx, dword ptr [esp + 0x48]
// 00520f07  89542420             mov dword ptr [esp + 0x20], edx
// 00520f0b  85c9                 test ecx, ecx
// 00520f0d  0f86e7010000         jbe 0x5210fa
// 00520f13  894c2428             mov dword ptr [esp + 0x28], ecx
// 00520f17  eb07                 jmp 0x520f20
// 00520f19  8da42400000000       lea esp, [esp]
// 00520f20  0fb60a               movzx ecx, byte ptr [edx]
// 00520f23  0fb67201             movzx esi, byte ptr [edx + 1]
// 00520f27  66c1e108             shl cx, 8
// 00520f2b  660bce               or cx, si
// 00520f2e  0fb67203             movzx esi, byte ptr [edx + 3]
// 00520f32  0fb7e9               movzx ebp, cx
// 00520f35  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00520f39  83c202               add edx, 2
// 00520f3c  66c1e108             shl cx, 8
// 00520f40  660bce               or cx, si
// 00520f43  0fb67203             movzx esi, byte ptr [edx + 3]
// 00520f47  0fb7c9               movzx ecx, cx
// 00520f4a  83c202               add edx, 2
// 00520f4d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00520f51  0fb60a               movzx ecx, byte ptr [edx]
// 00520f54  66c1e108             shl cx, 8
// 00520f58  660bce               or cx, si
// 00520f5b  83c202               add edx, 2
// 00520f5e  0fb7f1               movzx esi, cx
// 00520f61  89542438             mov dword ptr [esp + 0x38], edx
// 00520f65  663b6c2424           cmp bp, word ptr [esp + 0x24]
// 00520f6a  750d                 jne 0x520f79
// 00520f6c  663bee               cmp bp, si
// 00520f6f  7508                 jne 0x520f79
// 00520f71  0fb7f5               movzx esi, bp
// 00520f74  e989000000           jmp 0x521002
// 00520f79  0fb75c2424           movzx ebx, word ptr [esp + 0x24]
// 00520f7e  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 00520f85  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00520f89  0fb7dd               movzx ebx, bp
// 00520f8c  0fb6eb               movzx ebp, bl
// 00520f8f  d3ed                 shr ebp, cl
// 00520f91  0fb7d6               movzx edx, si
// 00520f94  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 00520f9a  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 00520f9d  c1eb08               shr ebx, 8
// 00520fa0  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 00520fa5  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00520fa9  0fafef               imul ebp, edi
// 00520fac  0fb6fb               movzx edi, bl
// 00520faf  d3ef                 shr edi, cl
// 00520fb1  c1eb08               shr ebx, 8
// 00520fb4  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00520fb7  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 00520fbb  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00520fc0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00520fc4  03ef                 add ebp, edi
// 00520fc6  0fb6fa               movzx edi, dl
// 00520fc9  d3ef                 shr edi, cl
// 00520fcb  c1ea08               shr edx, 8
// 00520fce  8b34be               mov esi, dword ptr [esi + edi*4]
// 00520fd1  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00520fd5  0fafd3               imul edx, ebx
// 00520fd8  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00520fdc  03ea                 add ebp, edx
// 00520fde  c1ed0f               shr ebp, 0xf
// 00520fe1  0fb7d5               movzx edx, bp
// 00520fe4  0fb6f2               movzx esi, dl
// 00520fe7  d3ee                 shr esi, cl
// 00520fe9  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 00520fef  c1ea08               shr edx, 8
// 00520ff2  834c241401           or dword ptr [esp + 0x14], 1
// 00520ff7  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00520ffa  0fb73451             movzx esi, word ptr [ecx + edx*2]
// 00520ffe  8b542438             mov edx, dword ptr [esp + 0x38]
// 00521002  8bce                 mov ecx, esi
// 00521004  89742424             mov dword ptr [esp + 0x24], esi
// 00521008  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052100c  c1e908               shr ecx, 8
// 0052100f  880e                 mov byte ptr [esi], cl
// 00521011  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 00521015  46                   inc esi
// 00521016  880e                 mov byte ptr [esi], cl
// 00521018  b901000000           mov ecx, 1
// 0052101d  89742420             mov dword ptr [esp + 0x20], esi
// 00521021  014c2420             add dword ptr [esp + 0x20], ecx
// 00521025  294c2428             sub dword ptr [esp + 0x28], ecx
// 00521029  0f85f1feffff         jne 0x520f20
// 0052102f  e9c2000000           jmp 0x5210f6
// 00521034  8b542448             mov edx, dword ptr [esp + 0x48]
// 00521038  8bf2                 mov esi, edx
// 0052103a  85c9                 test ecx, ecx
// 0052103c  0f86b8000000         jbe 0x5210fa
// 00521042  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00521046  eb08                 jmp 0x521050
// 00521048  8da42400000000       lea esp, [esp]
// 0052104f  90                   nop 
// 00521050  0fb60a               movzx ecx, byte ptr [edx]
// 00521053  660fb66a01           movzx bp, byte ptr [edx + 1]
// 00521058  66c1e108             shl cx, 8
// 0052105c  660bcd               or cx, bp
// 0052105f  660fb66a03           movzx bp, byte ptr [edx + 3]
// 00521064  0fb7c9               movzx ecx, cx
// 00521067  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052106b  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0052106f  83c202               add edx, 2
// 00521072  66c1e108             shl cx, 8
// 00521076  660bcd               or cx, bp
// 00521079  660fb66a03           movzx bp, byte ptr [edx + 3]
// 0052107e  0fb7c9               movzx ecx, cx
// 00521081  894c2424             mov dword ptr [esp + 0x24], ecx
// 00521085  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00521089  83c202               add edx, 2
// 0052108c  66c1e108             shl cx, 8
// 00521090  660bcd               or cx, bp
// 00521093  0fb7c9               movzx ecx, cx
// 00521096  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052109a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052109e  83c202               add edx, 2
// 005210a1  663b4c2424           cmp cx, word ptr [esp + 0x24]
// 005210a6  7507                 jne 0x5210af
// 005210a8  663b4c2428           cmp cx, word ptr [esp + 0x28]
// 005210ad  7405                 je 0x5210b4
// 005210af  834c241401           or dword ptr [esp + 0x14], 1
// 005210b4  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 005210b9  0fb76c2424           movzx ebp, word ptr [esp + 0x24]
// 005210be  0fafcb               imul ecx, ebx
// 005210c1  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 005210c6  03cd                 add ecx, ebp
// 005210c8  0fb76c2420           movzx ebp, word ptr [esp + 0x20]
// 005210cd  0fafef               imul ebp, edi
// 005210d0  03cd                 add ecx, ebp
// 005210d2  c1e90f               shr ecx, 0xf
// 005210d5  0fb7e9               movzx ebp, cx
// 005210d8  8bcd                 mov ecx, ebp
// 005210da  c1e908               shr ecx, 8
// 005210dd  880e                 mov byte ptr [esi], cl
// 005210df  896c2438             mov dword ptr [esp + 0x38], ebp
// 005210e3  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 005210e7  46                   inc esi
// 005210e8  880e                 mov byte ptr [esi], cl
// 005210ea  46                   inc esi
// 005210eb  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005210f0  0f855affffff         jne 0x521050
// 005210f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005210fa  8b742448             mov esi, dword ptr [esp + 0x48]
// 005210fe  8b542444             mov edx, dword ptr [esp + 0x44]
// 00521102  807a0806             cmp byte ptr [edx + 8], 6
// 00521106  0f853c030000         jne 0x521448
// 0052110c  807a0908             cmp byte ptr [edx + 9], 8
// 00521110  0f8527010000         jne 0x52123d
// 00521116  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 0052111d  0f84ad000000         je 0x5211d0
// 00521123  83b86c01000000       cmp dword ptr [eax + 0x16c], 0
// 0052112a  0f84a0000000         je 0x5211d0
// 00521130  837c241800           cmp dword ptr [esp + 0x18], 0
// 00521135  8bee                 mov ebp, esi
// 00521137  0f8607030000         jbe 0x521444
// 0052113d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00521141  8954242c             mov dword ptr [esp + 0x2c], edx
// 00521145  eb09                 jmp 0x521150
// 00521147  8da42400000000       lea esp, [esp]
// 0052114e  8bff                 mov edi, edi
// 00521150  0fb616               movzx edx, byte ptr [esi]
// 00521153  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00521159  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0052115d  46                   inc esi
// 0052115e  88542413             mov byte ptr [esp + 0x13], dl
// 00521162  0fb616               movzx edx, byte ptr [esi]
// 00521165  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 00521169  46                   inc esi
// 0052116a  88542411             mov byte ptr [esp + 0x11], dl
// 0052116e  0fb616               movzx edx, byte ptr [esi]
// 00521171  0fb60c0a             movzx ecx, byte ptr [edx + ecx]
// 00521175  884c2412             mov byte ptr [esp + 0x12], cl
// 00521179  8a4c2413             mov cl, byte ptr [esp + 0x13]
// 0052117d  46                   inc esi
// 0052117e  3a4c2411             cmp cl, byte ptr [esp + 0x11]
// 00521182  7506                 jne 0x52118a
// 00521184  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 00521188  7405                 je 0x52118f
// 0052118a  834c241401           or dword ptr [esp + 0x14], 1
// 0052118f  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00521194  0fb64c2411           movzx ecx, byte ptr [esp + 0x11]
// 00521199  0fafd3               imul edx, ebx
// 0052119c  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 005211a1  03d1                 add edx, ecx
// 005211a3  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 005211a8  0fafcf               imul ecx, edi
// 005211ab  03d1                 add edx, ecx
// 005211ad  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 005211b3  c1ea0f               shr edx, 0xf
// 005211b6  8a140a               mov dl, byte ptr [edx + ecx]
// 005211b9  885500               mov byte ptr [ebp], dl
// 005211bc  8a0e                 mov cl, byte ptr [esi]
// 005211be  45                   inc ebp
// 005211bf  884d00               mov byte ptr [ebp], cl
// 005211c2  45                   inc ebp
// 005211c3  46                   inc esi
// 005211c4  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005211c9  7585                 jne 0x521150
// 005211cb  e974020000           jmp 0x521444
// 005211d0  8bc6                 mov eax, esi
// 005211d2  85c9                 test ecx, ecx
// 005211d4  0f866e020000         jbe 0x521448
// 005211da  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005211de  8bff                 mov edi, edi
// 005211e0  8a08                 mov cl, byte ptr [eax]
// 005211e2  0fb65001             movzx edx, byte ptr [eax + 1]
// 005211e6  40                   inc eax
// 005211e7  40                   inc eax
// 005211e8  88542412             mov byte ptr [esp + 0x12], dl
// 005211ec  0fb610               movzx edx, byte ptr [eax]
// 005211ef  40                   inc eax
// 005211f0  884c2411             mov byte ptr [esp + 0x11], cl
// 005211f4  88542413             mov byte ptr [esp + 0x13], dl
// 005211f8  3a4c2412             cmp cl, byte ptr [esp + 0x12]
// 005211fc  7504                 jne 0x521202
// 005211fe  3aca                 cmp cl, dl
// 00521200  7405                 je 0x521207
// 00521202  834c241401           or dword ptr [esp + 0x14], 1
// 00521207  0fb64c2413           movzx ecx, byte ptr [esp + 0x13]
// 0052120c  0fb6542412           movzx edx, byte ptr [esp + 0x12]
// 00521211  0fafcb               imul ecx, ebx
// 00521214  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 00521219  03ca                 add ecx, edx
// 0052121b  0fb6542411           movzx edx, byte ptr [esp + 0x11]
// 00521220  0fafd7               imul edx, edi
// 00521223  03ca                 add ecx, edx
// 00521225  c1e90f               shr ecx, 0xf
// 00521228  880e                 mov byte ptr [esi], cl
// 0052122a  8a08                 mov cl, byte ptr [eax]
// 0052122c  46                   inc esi
// 0052122d  880e                 mov byte ptr [esi], cl
// 0052122f  46                   inc esi
// 00521230  40                   inc eax
// 00521231  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00521236  75a8                 jne 0x5211e0
// 00521238  e907020000           jmp 0x521444
// 0052123d  83b87801000000       cmp dword ptr [eax + 0x178], 0
// 00521244  0f8439010000         je 0x521383
// 0052124a  83b87401000000       cmp dword ptr [eax + 0x174], 0
// 00521251  0f842c010000         je 0x521383
// 00521257  837c241800           cmp dword ptr [esp + 0x18], 0
// 0052125c  8bce                 mov ecx, esi
// 0052125e  89742428             mov dword ptr [esp + 0x28], esi
// 00521262  0f86dc010000         jbe 0x521444
// 00521268  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052126c  89542424             mov dword ptr [esp + 0x24], edx
// 00521270  0fb611               movzx edx, byte ptr [ecx]
// 00521273  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00521277  66c1e208             shl dx, 8
// 0052127b  660bd3               or dx, bx
// 0052127e  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00521282  0fb7ea               movzx ebp, dx
// 00521285  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00521289  83c102               add ecx, 2
// 0052128c  66c1e208             shl dx, 8
// 00521290  660bd3               or dx, bx
// 00521293  0fb65903             movzx ebx, byte ptr [ecx + 3]
// 00521297  0fb7d2               movzx edx, dx
// 0052129a  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052129e  0fb65102             movzx edx, byte ptr [ecx + 2]
// 005212a2  83c102               add ecx, 2
// 005212a5  66c1e208             shl dx, 8
// 005212a9  660bd3               or dx, bx
// 005212ac  83c102               add ecx, 2
// 005212af  0fb7d2               movzx edx, dx
// 005212b2  894c2420             mov dword ptr [esp + 0x20], ecx
// 005212b6  663b6c242c           cmp bp, word ptr [esp + 0x2c]
// 005212bb  750d                 jne 0x5212ca
// 005212bd  663bea               cmp bp, dx
// 005212c0  7508                 jne 0x5212ca
// 005212c2  0fb7d5               movzx edx, bp
// 005212c5  e98b000000           jmp 0x521355
// 005212ca  0fb75c242c           movzx ebx, word ptr [esp + 0x2c]
// 005212cf  0fb78858010000       movzx ecx, word ptr [eax + 0x158]
// 005212d6  8bb078010000         mov esi, dword ptr [eax + 0x178]
// 005212dc  895c2438             mov dword ptr [esp + 0x38], ebx
// 005212e0  0fb7dd               movzx ebx, bp
// 005212e3  0fb6eb               movzx ebp, bl
// 005212e6  d3ed                 shr ebp, cl
// 005212e8  c1eb08               shr ebx, 8
// 005212eb  0fb7d2               movzx edx, dx
// 005212ee  8b2cae               mov ebp, dword ptr [esi + ebp*4]
// 005212f1  0fb76c5d00           movzx ebp, word ptr [ebp + ebx*2]
// 005212f6  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005212fa  0fafef               imul ebp, edi
// 005212fd  0fb6fb               movzx edi, bl
// 00521300  d3ef                 shr edi, cl
// 00521302  c1eb08               shr ebx, 8
// 00521305  8b3cbe               mov edi, dword ptr [esi + edi*4]
// 00521308  0fb73c5f             movzx edi, word ptr [edi + ebx*2]
// 0052130c  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 00521311  03ef                 add ebp, edi
// 00521313  0fb6fa               movzx edi, dl
// 00521316  d3ef                 shr edi, cl
// 00521318  c1ea08               shr edx, 8
// 0052131b  8b34be               mov esi, dword ptr [esi + edi*4]
// 0052131e  0fb71456             movzx edx, word ptr [esi + edx*2]
// 00521322  0faf542430           imul edx, dword ptr [esp + 0x30]
// 00521327  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0052132b  03ea                 add ebp, edx
// 0052132d  c1ed0f               shr ebp, 0xf
// 00521330  0fb7d5               movzx edx, bp
// 00521333  0fb6f2               movzx esi, dl
// 00521336  d3ee                 shr esi, cl
// 00521338  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 0052133e  c1ea08               shr edx, 8
// 00521341  834c241401           or dword ptr [esp + 0x14], 1
// 00521346  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00521349  0fb71451             movzx edx, word ptr [ecx + edx*2]
// 0052134d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00521351  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521355  8bda                 mov ebx, edx
// 00521357  c1eb08               shr ebx, 8
// 0052135a  881e                 mov byte ptr [esi], bl
// 0052135c  46                   inc esi
// 0052135d  8816                 mov byte ptr [esi], dl
// 0052135f  0fb611               movzx edx, byte ptr [ecx]
// 00521362  46                   inc esi
// 00521363  8816                 mov byte ptr [esi], dl
// 00521365  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00521369  41                   inc ecx
// 0052136a  46                   inc esi
// 0052136b  8816                 mov byte ptr [esi], dl
// 0052136d  46                   inc esi
// 0052136e  41                   inc ecx
// 0052136f  836c242401           sub dword ptr [esp + 0x24], 1
// 00521374  89742428             mov dword ptr [esp + 0x28], esi
// 00521378  0f85f2feffff         jne 0x521270
// 0052137e  e9c1000000           jmp 0x521444
// 00521383  837c241800           cmp dword ptr [esp + 0x18], 0
// 00521388  8bc6                 mov eax, esi
// 0052138a  8bce                 mov ecx, esi
// 0052138c  0f86b2000000         jbe 0x521444
// 00521392  8b542418             mov edx, dword ptr [esp + 0x18]
// 00521396  89542430             mov dword ptr [esp + 0x30], edx
// 0052139a  8d9b00000000         lea ebx, [ebx]
// 005213a0  0fb630               movzx esi, byte ptr [eax]
// 005213a3  0fb65001             movzx edx, byte ptr [eax + 1]
// 005213a7  66c1e608             shl si, 8
// 005213ab  660bd6               or dx, si
// 005213ae  0fb67002             movzx esi, byte ptr [eax + 2]
// 005213b2  0fb7d2               movzx edx, dx
// 005213b5  83c002               add eax, 2
// 005213b8  660fb66802           movzx bp, byte ptr [eax + 2]
// 005213bd  89542434             mov dword ptr [esp + 0x34], edx
// 005213c1  0fb65001             movzx edx, byte ptr [eax + 1]
// 005213c5  66c1e608             shl si, 8
// 005213c9  83c002               add eax, 2
// 005213cc  660bd6               or dx, si
// 005213cf  0fb67001             movzx esi, byte ptr [eax + 1]
// 005213d3  66c1e508             shl bp, 8
// 005213d7  660bf5               or si, bp
// 005213da  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005213de  0fb7d2               movzx edx, dx
// 005213e1  83c002               add eax, 2
// 005213e4  0fb7f6               movzx esi, si
// 005213e7  663bea               cmp bp, dx
// 005213ea  7505                 jne 0x5213f1
// 005213ec  663bee               cmp bp, si
// 005213ef  7405                 je 0x5213f6
// 005213f1  834c241401           or dword ptr [esp + 0x14], 1
// 005213f6  0fb7d2               movzx edx, dx
// 005213f9  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 005213fe  0fb7f6               movzx esi, si
// 00521401  0faff3               imul esi, ebx
// 00521404  03f2                 add esi, edx
// 00521406  0fb7542434           movzx edx, word ptr [esp + 0x34]
// 0052140b  0fafd7               imul edx, edi
// 0052140e  03f2                 add esi, edx
// 00521410  c1ee0f               shr esi, 0xf
// 00521413  0fb7f6               movzx esi, si
// 00521416  8bd6                 mov edx, esi
// 00521418  c1ea08               shr edx, 8
// 0052141b  8811                 mov byte ptr [ecx], dl
// 0052141d  89742438             mov dword ptr [esp + 0x38], esi
// 00521421  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 00521426  41                   inc ecx
// 00521427  8811                 mov byte ptr [ecx], dl
// 00521429  0fb610               movzx edx, byte ptr [eax]
// 0052142c  41                   inc ecx
// 0052142d  8811                 mov byte ptr [ecx], dl
// 0052142f  0fb65001             movzx edx, byte ptr [eax + 1]
// 00521433  40                   inc eax
// 00521434  41                   inc ecx
// 00521435  8811                 mov byte ptr [ecx], dl
// 00521437  41                   inc ecx
// 00521438  40                   inc eax
// 00521439  836c243001           sub dword ptr [esp + 0x30], 1
// 0052143e  0f855cffffff         jne 0x5213a0
// 00521444  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00521448  8b742444             mov esi, dword ptr [esp + 0x44]
// 0052144c  80460afe             add byte ptr [esi + 0xa], 0xfe
// 00521450  8a4609               mov al, byte ptr [esi + 9]
// 00521453  8a560a               mov dl, byte ptr [esi + 0xa]
// 00521456  806608fd             and byte ptr [esi + 8], 0xfd
// 0052145a  f6ea                 imul dl
// 0052145c  88460b               mov byte ptr [esi + 0xb], al
// 0052145f  3c08                 cmp al, 8
// 00521461  0fb6c0               movzx eax, al
// 00521464  7215                 jb 0x52147b
// 00521466  c1e803               shr eax, 3
// 00521469  0fafc1               imul eax, ecx
// 0052146c  5f                   pop edi
// 0052146d  894604               mov dword ptr [esi + 4], eax
// 00521470  8b442410             mov eax, dword ptr [esp + 0x10]
// 00521474  5e                   pop esi
// 00521475  5d                   pop ebp
// 00521476  5b                   pop ebx
// 00521477  83c42c               add esp, 0x2c
// 0052147a  c3                   ret 
// 0052147b  0fafc1               imul eax, ecx
// 0052147e  83c007               add eax, 7
// 00521481  c1e803               shr eax, 3
// 00521484  5f                   pop edi
// 00521485  894604               mov dword ptr [esi + 4], eax
// 00521488  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052148c  5e                   pop esi
// 0052148d  5d                   pop ebp
// 0052148e  5b                   pop ebx
// 0052148f  83c42c               add esp, 0x2c
// 00521492  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_rgb_to_gray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
