// roc 2008-06 005ef840  unit: RBX::FaceInstance  size: 4863 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef840
//
// 005ef840  6aff                 push -1
// 005ef842  68b3717d00           push 0x7d71b3
// 005ef847  64a100000000         mov eax, dword ptr fs:[0]
// 005ef84d  50                   push eax
// 005ef84e  64892500000000       mov dword ptr fs:[0], esp
// 005ef855  81ec9c000000         sub esp, 0x9c
// 005ef85b  53                   push ebx
// 005ef85c  56                   push esi
// 005ef85d  57                   push edi
// 005ef85e  33ff                 xor edi, edi
// 005ef860  897c2438             mov dword ptr [esp + 0x38], edi
// 005ef864  bb01000000           mov ebx, 1
// 005ef869  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 005ef870  c74424245c978100     mov dword ptr [esp + 0x24], 0x81975c
// 005ef878  897c2434             mov dword ptr [esp + 0x34], edi
// 005ef87c  897c2430             mov dword ptr [esp + 0x30], edi
// 005ef880  897c242c             mov dword ptr [esp + 0x2c], edi
// 005ef884  897c2428             mov dword ptr [esp + 0x28], edi
// 005ef888  8b35e4238000         mov esi, dword ptr [0x8023e4]
// 005ef88e  68e4078400           push 0x8407e4
// 005ef893  8d8424c0000000       lea eax, [esp + 0xc0]
// 005ef89a  50                   push eax
// 005ef89b  8d4c246c             lea ecx, [esp + 0x6c]
// 005ef89f  51                   push ecx
// 005ef8a0  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 005ef8a8  ffd6                 call esi
// 005ef8aa  8d9424c8000000       lea edx, [esp + 0xc8]
// 005ef8b1  52                   push edx
// 005ef8b2  8d442474             lea eax, [esp + 0x74]
// 005ef8b6  50                   push eax
// 005ef8b7  c68424c400000003     mov byte ptr [esp + 0xc4], 3
// 005ef8bf  e8dcfeffff           call 0x5ef7a0
// 005ef8c4  83c414               add esp, 0x14
// 005ef8c7  84c0                 test al, al
// 005ef8c9  7454                 je 0x5ef91f
// 005ef8cb  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 005ef8d2  8d4c2464             lea ecx, [esp + 0x64]
// 005ef8d6  51                   push ecx
// 005ef8d7  8bcf                 mov ecx, edi
// 005ef8d9  ff155c248000         call dword ptr [0x80245c]
// 005ef8df  8d4c2464             lea ecx, [esp + 0x64]
// 005ef8e3  895c2438             mov dword ptr [esp + 0x38], ebx
// 005ef8e7  c68424b000000002     mov byte ptr [esp + 0xb0], 2
// 005ef8ef  ff1568248000         call dword ptr [0x802468]
// 005ef8f5  8d4c2424             lea ecx, [esp + 0x24]
// 005ef8f9  889c24b0000000       mov byte ptr [esp + 0xb0], bl
// 005ef900  e82be9f1ff           call 0x50e230
// 005ef905  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 005ef90c  c68424b000000000     mov byte ptr [esp + 0xb0], 0
// 005ef914  ff1568248000         call dword ptr [0x802468]
// 005ef91a  e931190000           jmp 0x5f1250
// 005ef91f  8b9c24d8000000       mov ebx, dword ptr [esp + 0xd8]
// 005ef926  8b5318               mov edx, dword ptr [ebx + 0x18]
// 005ef929  55                   push ebp
// 005ef92a  bd09000000           mov ebp, 9
// 005ef92f  55                   push ebp
// 005ef930  83c304               add ebx, 4
// 005ef933  6848378100           push 0x813748
// 005ef938  52                   push edx
// 005ef939  57                   push edi
// 005ef93a  8bcb                 mov ecx, ebx
// 005ef93c  ff15f4248000         call dword ptr [0x8024f4]
// 005ef942  85c0                 test eax, eax
// 005ef944  7503                 jne 0x5ef949
// 005ef946  8d6805               lea ebp, [eax + 5]
// 005ef949  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005ef94c  6a0a                 push 0xa
// 005ef94e  687c378100           push 0x81377c
// 005ef953  50                   push eax
// 005ef954  57                   push edi
// 005ef955  8bcb                 mov ecx, ebx
// 005ef957  ff15f4248000         call dword ptr [0x8024f4]
// 005ef95d  85c0                 test eax, eax
// 005ef95f  7502                 jne 0x5ef963
// 005ef961  33ed                 xor ebp, ebp
// 005ef963  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 005ef966  6a09                 push 9
// 005ef968  68d8078400           push 0x8407d8
// 005ef96d  51                   push ecx
// 005ef96e  57                   push edi
// 005ef96f  8bcb                 mov ecx, ebx
// 005ef971  ff15f4248000         call dword ptr [0x8024f4]
// 005ef977  85c0                 test eax, eax
// 005ef979  7503                 jne 0x5ef97e
// 005ef97b  8d6802               lea ebp, [eax + 2]
// 005ef97e  8b5314               mov edx, dword ptr [ebx + 0x14]
// 005ef981  6a09                 push 9
// 005ef983  6870378100           push 0x813770
// 005ef988  52                   push edx
// 005ef989  57                   push edi
// 005ef98a  8bcb                 mov ecx, ebx
// 005ef98c  ff15f4248000         call dword ptr [0x8024f4]
// 005ef992  85c0                 test eax, eax
// 005ef994  7505                 jne 0x5ef99b
// 005ef996  8d6801               lea ebp, [eax + 1]
// 005ef999  eb20                 jmp 0x5ef9bb
// 005ef99b  83fd09               cmp ebp, 9
// 005ef99e  751b                 jne 0x5ef9bb
// 005ef9a0  8d8424c0000000       lea eax, [esp + 0xc0]
// 005ef9a7  50                   push eax
// 005ef9a8  e803f4f1ff           call 0x50edb0
// 005ef9ad  8be8                 mov ebp, eax
// 005ef9af  83c404               add esp, 4
// 005ef9b2  83fd09               cmp ebp, 9
// 005ef9b5  0f8495170000         je 0x5f1150
// 005ef9bb  55                   push ebp
// 005ef9bc  8d8c24c4000000       lea ecx, [esp + 0xc4]
// 005ef9c3  51                   push ecx
// 005ef9c4  8d4c244c             lea ecx, [esp + 0x4c]
// 005ef9c8  e8a30cf2ff           call 0x510670
// 005ef9cd  50                   push eax
// 005ef9ce  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef9d2  c68424b800000004     mov byte ptr [esp + 0xb8], 4
// 005ef9da  e881e8f1ff           call 0x50e260
// 005ef9df  8d4c2444             lea ecx, [esp + 0x44]
// 005ef9e3  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 005ef9eb  e840e8f1ff           call 0x50e230
// 005ef9f0  83fd09               cmp ebp, 9
// 005ef9f3  0f8457170000         je 0x5f1150
// 005ef9f9  817c243049020000     cmp dword ptr [esp + 0x30], 0x249
// 005efa01  0f8549170000         jne 0x5f1150
// 005efa07  817c24342f020000     cmp dword ptr [esp + 0x34], 0x22f
// 005efa0f  0f853b170000         jne 0x5f1150
// 005efa15  6a04                 push 4
// 005efa17  6898010000           push 0x198
// 005efa1c  6898010000           push 0x198
// 005efa21  8d4c241c             lea ecx, [esp + 0x1c]
// 005efa25  e876f4f1ff           call 0x50eea0
// 005efa2a  8d4c2428             lea ecx, [esp + 0x28]
// 005efa2e  c68424b400000007     mov byte ptr [esp + 0xb4], 7
// 005efa36  e805eaf1ff           call 0x50e440
// 005efa3b  6880000000           push 0x80
// 005efa40  6a40                 push 0x40
// 005efa42  6a4a                 push 0x4a
// 005efa44  68a5000000           push 0xa5
// 005efa49  6a04                 push 4
// 005efa4b  688a000000           push 0x8a
// 005efa50  8d542440             lea edx, [esp + 0x40]
// 005efa54  52                   push edx
// 005efa55  8d44242c             lea eax, [esp + 0x2c]
// 005efa59  50                   push eax
// 005efa5a  e8d1daf1ff           call 0x50d530
// 005efa5f  6a5a                 push 0x5a
// 005efa61  6a04                 push 4
// 005efa63  6a40                 push 0x40
// 005efa65  6a04                 push 4
// 005efa67  688a000000           push 0x8a
// 005efa6c  6a46                 push 0x46
// 005efa6e  8d4c2448             lea ecx, [esp + 0x48]
// 005efa72  57                   push edi
// 005efa73  51                   push ecx
// 005efa74  8bd1                 mov edx, ecx
// 005efa76  52                   push edx
// 005efa77  e804e8f1ff           call 0x50e280
// 005efa7c  83c444               add esp, 0x44
// 005efa7f  6a5a                 push 0x5a
// 005efa81  6a04                 push 4
// 005efa83  6a40                 push 0x40
// 005efa85  6880000000           push 0x80
// 005efa8a  688a000000           push 0x8a
// 005efa8f  6a02                 push 2
// 005efa91  8d442428             lea eax, [esp + 0x28]
// 005efa95  57                   push edi
// 005efa96  50                   push eax
// 005efa97  8bc8                 mov ecx, eax
// 005efa99  51                   push ecx
// 005efa9a  e8e1e7f1ff           call 0x50e280
// 005efa9f  6880000000           push 0x80
// 005efaa4  6a04                 push 4
// 005efaa6  6a04                 push 4
// 005efaa8  688a000000           push 0x8a
// 005efaad  6a04                 push 4
// 005efaaf  8d542448             lea edx, [esp + 0x48]
// 005efab3  6894010000           push 0x194
// 005efab8  52                   push edx
// 005efab9  8bc2                 mov eax, edx
// 005efabb  50                   push eax
// 005efabc  e86fdaf1ff           call 0x50d530
// 005efac1  83c444               add esp, 0x44
// 005efac4  6880000000           push 0x80
// 005efac9  6a04                 push 4
// 005efacb  6a04                 push 4
// 005efacd  68c6000000           push 0xc6
// 005efad2  688c000000           push 0x8c
// 005efad7  8d4c2424             lea ecx, [esp + 0x24]
// 005efadb  57                   push edi
// 005efadc  51                   push ecx
// 005efadd  8bd1                 mov edx, ecx
// 005efadf  52                   push edx
// 005efae0  e84bdaf1ff           call 0x50d530
// 005efae5  6880000000           push 0x80
// 005efaea  6880000000           push 0x80
// 005efaef  6a4a                 push 0x4a
// 005efaf1  68e7000000           push 0xe7
// 005efaf6  688c000000           push 0x8c
// 005efafb  6a04                 push 4
// 005efafd  8d442460             lea eax, [esp + 0x60]
// 005efb01  50                   push eax
// 005efb02  8d4c244c             lea ecx, [esp + 0x4c]
// 005efb06  51                   push ecx
// 005efb07  e824daf1ff           call 0x50d530
// 005efb0c  83c440               add esp, 0x40
// 005efb0f  6a02                 push 2
// 005efb11  6880000000           push 0x80
// 005efb16  688e000000           push 0x8e
// 005efb1b  6a04                 push 4
// 005efb1d  6886000000           push 0x86
// 005efb22  8d542424             lea edx, [esp + 0x24]
// 005efb26  6a04                 push 4
// 005efb28  52                   push edx
// 005efb29  8bc2                 mov eax, edx
// 005efb2b  50                   push eax
// 005efb2c  e8ffd9f1ff           call 0x50d530
// 005efb31  6a02                 push 2
// 005efb33  6880000000           push 0x80
// 005efb38  680a010000           push 0x10a
// 005efb3d  6a04                 push 4
// 005efb3f  57                   push edi
// 005efb40  8d4c2444             lea ecx, [esp + 0x44]
// 005efb44  6a04                 push 4
// 005efb46  51                   push ecx
// 005efb47  8bd1                 mov edx, ecx
// 005efb49  52                   push edx
// 005efb4a  e8e1d9f1ff           call 0x50d530
// 005efb4f  83c440               add esp, 0x40
// 005efb52  6880000000           push 0x80
// 005efb57  6a02                 push 2
// 005efb59  688c000000           push 0x8c
// 005efb5e  6a04                 push 4
// 005efb60  6a04                 push 4
// 005efb62  8d442424             lea eax, [esp + 0x24]
// 005efb66  68ca000000           push 0xca
// 005efb6b  50                   push eax
// 005efb6c  8bc8                 mov ecx, eax
// 005efb6e  51                   push ecx
// 005efb6f  e8bcd9f1ff           call 0x50d530
// 005efb74  6880000000           push 0x80
// 005efb79  6a02                 push 2
// 005efb7b  688c000000           push 0x8c
// 005efb80  6882000000           push 0x82
// 005efb85  6a04                 push 4
// 005efb87  8d542444             lea edx, [esp + 0x44]
// 005efb8b  68cc000000           push 0xcc
// 005efb90  52                   push edx
// 005efb91  8bc2                 mov eax, edx
// 005efb93  50                   push eax
// 005efb94  e897d9f1ff           call 0x50d530
// 005efb99  83c440               add esp, 0x40
// 005efb9c  6880000000           push 0x80
// 005efba1  6a40                 push 0x40
// 005efba3  6a4a                 push 0x4a
// 005efba5  6869010000           push 0x169
// 005efbaa  6a04                 push 4
// 005efbac  68ce000000           push 0xce
// 005efbb1  8d4c2440             lea ecx, [esp + 0x40]
// 005efbb5  51                   push ecx
// 005efbb6  8d54242c             lea edx, [esp + 0x2c]
// 005efbba  52                   push edx
// 005efbbb  e870d9f1ff           call 0x50d530
// 005efbc0  6a5a                 push 0x5a
// 005efbc2  6a04                 push 4
// 005efbc4  6a40                 push 0x40
// 005efbc6  6a04                 push 4
// 005efbc8  68ce000000           push 0xce
// 005efbcd  6a46                 push 0x46
// 005efbcf  8d442448             lea eax, [esp + 0x48]
// 005efbd3  6884000000           push 0x84
// 005efbd8  50                   push eax
// 005efbd9  8bc8                 mov ecx, eax
// 005efbdb  51                   push ecx
// 005efbdc  e89fe6f1ff           call 0x50e280
// 005efbe1  83c444               add esp, 0x44
// 005efbe4  6a5a                 push 0x5a
// 005efbe6  6a04                 push 4
// 005efbe8  6a40                 push 0x40
// 005efbea  6880000000           push 0x80
// 005efbef  68ce000000           push 0xce
// 005efbf4  6a02                 push 2
// 005efbf6  8d542428             lea edx, [esp + 0x28]
// 005efbfa  6884000000           push 0x84
// 005efbff  52                   push edx
// 005efc00  8bc2                 mov eax, edx
// 005efc02  50                   push eax
// 005efc03  e878e6f1ff           call 0x50e280
// 005efc08  6880000000           push 0x80
// 005efc0d  6a04                 push 4
// 005efc0f  6a04                 push 4
// 005efc11  68ce000000           push 0xce
// 005efc16  688c000000           push 0x8c
// 005efc1b  8d4c2448             lea ecx, [esp + 0x48]
// 005efc1f  6884000000           push 0x84
// 005efc24  51                   push ecx
// 005efc25  8bd1                 mov edx, ecx
// 005efc27  52                   push edx
// 005efc28  e803d9f1ff           call 0x50d530
// 005efc2d  83c444               add esp, 0x44
// 005efc30  6880000000           push 0x80
// 005efc35  6a04                 push 4
// 005efc37  6a04                 push 4
// 005efc39  680a010000           push 0x10a
// 005efc3e  6a04                 push 4
// 005efc40  8d442424             lea eax, [esp + 0x24]
// 005efc44  6810010000           push 0x110
// 005efc49  50                   push eax
// 005efc4a  8bc8                 mov ecx, eax
// 005efc4c  51                   push ecx
// 005efc4d  e8ded8f1ff           call 0x50d530
// 005efc52  6880000000           push 0x80
// 005efc57  6880000000           push 0x80
// 005efc5c  6a4a                 push 0x4a
// 005efc5e  68ab010000           push 0x1ab
// 005efc63  6a04                 push 4
// 005efc65  6814010000           push 0x114
// 005efc6a  8d542460             lea edx, [esp + 0x60]
// 005efc6e  52                   push edx
// 005efc6f  8d44244c             lea eax, [esp + 0x4c]
// 005efc73  50                   push eax
// 005efc74  e8b7d8f1ff           call 0x50d530
// 005efc79  83c440               add esp, 0x40
// 005efc7c  6a04                 push 4
// 005efc7e  6a02                 push 2
// 005efc80  6880000000           push 0x80
// 005efc85  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 005efc8c  e80ff2f1ff           call 0x50eea0
// 005efc91  6a02                 push 2
// 005efc93  6880000000           push 0x80
// 005efc98  6a04                 push 4
// 005efc9a  6814010000           push 0x114
// 005efc9f  57                   push edi
// 005efca0  57                   push edi
// 005efca1  8d4c2428             lea ecx, [esp + 0x28]
// 005efca5  51                   push ecx
// 005efca6  8d9424b4000000       lea edx, [esp + 0xb4]
// 005efcad  52                   push edx
// 005efcae  c68424d400000008     mov byte ptr [esp + 0xd4], 8
// 005efcb6  e875d8f1ff           call 0x50d530
// 005efcbb  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 005efcc2  6a02                 push 2
// 005efcc4  6880000000           push 0x80
// 005efcc9  50                   push eax
// 005efcca  50                   push eax
// 005efccb  e8c0b0f1ff           call 0x50ad90
// 005efcd0  6a02                 push 2
// 005efcd2  6880000000           push 0x80
// 005efcd7  57                   push edi
// 005efcd8  57                   push edi
// 005efcd9  6a44                 push 0x44
// 005efcdb  6a04                 push 4
// 005efcdd  8d8424e0000000       lea eax, [esp + 0xe0]
// 005efce4  50                   push eax
// 005efce5  8d4c245c             lea ecx, [esp + 0x5c]
// 005efce9  51                   push ecx
// 005efcea  e841d8f1ff           call 0x50d530
// 005efcef  83c450               add esp, 0x50
// 005efcf2  68b4000000           push 0xb4
// 005efcf7  6a02                 push 2
// 005efcf9  6880000000           push 0x80
// 005efcfe  6882000000           push 0x82
// 005efd03  6814010000           push 0x114
// 005efd08  6a42                 push 0x42
// 005efd0a  8d542428             lea edx, [esp + 0x28]
// 005efd0e  6a04                 push 4
// 005efd10  52                   push edx
// 005efd11  8bc2                 mov eax, edx
// 005efd13  50                   push eax
// 005efd14  e867e5f1ff           call 0x50e280
// 005efd19  6880000000           push 0x80
// 005efd1e  6a02                 push 2
// 005efd20  6a04                 push 4
// 005efd22  6814010000           push 0x114
// 005efd27  6a04                 push 4
// 005efd29  8d4c2448             lea ecx, [esp + 0x48]
// 005efd2d  680e010000           push 0x10e
// 005efd32  51                   push ecx
// 005efd33  8bd1                 mov edx, ecx
// 005efd35  52                   push edx
// 005efd36  e8f5d7f1ff           call 0x50d530
// 005efd3b  83c444               add esp, 0x44
// 005efd3e  6880000000           push 0x80
// 005efd43  6a02                 push 2
// 005efd45  6a04                 push 4
// 005efd47  6892010000           push 0x192
// 005efd4c  6a04                 push 4
// 005efd4e  8d442424             lea eax, [esp + 0x24]
// 005efd52  6888000000           push 0x88
// 005efd57  50                   push eax
// 005efd58  8bc8                 mov ecx, eax
// 005efd5a  51                   push ecx
// 005efd5b  e8d0d7f1ff           call 0x50d530
// 005efd60  6a40                 push 0x40
// 005efd62  6880000000           push 0x80
// 005efd67  6a08                 push 8
// 005efd69  68e7000000           push 0xe7
// 005efd6e  6a46                 push 0x46
// 005efd70  6a04                 push 4
// 005efd72  8d542460             lea edx, [esp + 0x60]
// 005efd76  52                   push edx
// 005efd77  8d44244c             lea eax, [esp + 0x4c]
// 005efd7b  50                   push eax
// 005efd7c  e8afd7f1ff           call 0x50d530
// 005efd81  83c440               add esp, 0x40
// 005efd84  6a04                 push 4
// 005efd86  6a04                 push 4
// 005efd88  6880000000           push 0x80
// 005efd8d  8d8c2490000000       lea ecx, [esp + 0x90]
// 005efd94  e807f1f1ff           call 0x50eea0
// 005efd99  6a04                 push 4
// 005efd9b  6880000000           push 0x80
// 005efda0  6a46                 push 0x46
// 005efda2  6a04                 push 4
// 005efda4  57                   push edi
// 005efda5  57                   push edi
// 005efda6  8d4c2428             lea ecx, [esp + 0x28]
// 005efdaa  51                   push ecx
// 005efdab  8d9424a0000000       lea edx, [esp + 0xa0]
// 005efdb2  52                   push edx
// 005efdb3  c68424d400000009     mov byte ptr [esp + 0xd4], 9
// 005efdbb  e870d7f1ff           call 0x50d530
// 005efdc0  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 005efdc7  6a04                 push 4
// 005efdc9  6880000000           push 0x80
// 005efdce  50                   push eax
// 005efdcf  50                   push eax
// 005efdd0  e8bbaff1ff           call 0x50ad90
// 005efdd5  6a04                 push 4
// 005efdd7  6880000000           push 0x80
// 005efddc  57                   push edi
// 005efddd  57                   push edi
// 005efdde  57                   push edi
// 005efddf  6814010000           push 0x114
// 005efde4  8d8424cc000000       lea eax, [esp + 0xcc]
// 005efdeb  50                   push eax
// 005efdec  8d4c245c             lea ecx, [esp + 0x5c]
// 005efdf0  51                   push ecx
// 005efdf1  e83ad7f1ff           call 0x50d530
// 005efdf6  83c450               add esp, 0x50
// 005efdf9  6a04                 push 4
// 005efdfb  6880000000           push 0x80
// 005efe00  6880000000           push 0x80
// 005efe05  6a04                 push 4
// 005efe07  6888000000           push 0x88
// 005efe0c  6a04                 push 4
// 005efe0e  8d542428             lea edx, [esp + 0x28]
// 005efe12  52                   push edx
// 005efe13  8bc2                 mov eax, edx
// 005efe15  50                   push eax
// 005efe16  e815d7f1ff           call 0x50d530
// 005efe1b  6a5a                 push 0x5a
// 005efe1d  6a40                 push 0x40
// 005efe1f  6a04                 push 4
// 005efe21  6a46                 push 0x46
// 005efe23  6a04                 push 4
// 005efe25  57                   push edi
// 005efe26  8d4c2448             lea ecx, [esp + 0x48]
// 005efe2a  688a000000           push 0x8a
// 005efe2f  51                   push ecx
// 005efe30  8bd1                 mov edx, ecx
// 005efe32  52                   push edx
// 005efe33  e848e4f1ff           call 0x50e280
// 005efe38  83c444               add esp, 0x44
// 005efe3b  6aa6                 push -0x5a
// 005efe3d  6a40                 push 0x40
// 005efe3f  6a04                 push 4
// 005efe41  6a46                 push 0x46
// 005efe43  6880000000           push 0x80
// 005efe48  57                   push edi
// 005efe49  8d442428             lea eax, [esp + 0x28]
// 005efe4d  68ce000000           push 0xce
// 005efe52  50                   push eax
// 005efe53  8bc8                 mov ecx, eax
// 005efe55  51                   push ecx
// 005efe56  e825e4f1ff           call 0x50e280
// 005efe5b  6a40                 push 0x40
// 005efe5d  6880000000           push 0x80
// 005efe62  68cc000000           push 0xcc
// 005efe67  68e7000000           push 0xe7
// 005efe6c  6a02                 push 2
// 005efe6e  6a04                 push 4
// 005efe70  8d542464             lea edx, [esp + 0x64]
// 005efe74  52                   push edx
// 005efe75  8d442450             lea eax, [esp + 0x50]
// 005efe79  50                   push eax
// 005efe7a  e8b1d6f1ff           call 0x50d530
// 005efe7f  83c444               add esp, 0x44
// 005efe82  6a04                 push 4
// 005efe84  6880000000           push 0x80
// 005efe89  6a02                 push 2
// 005efe8b  6a04                 push 4
// 005efe8d  680c010000           push 0x10c
// 005efe92  8d4c2424             lea ecx, [esp + 0x24]
// 005efe96  6a04                 push 4
// 005efe98  51                   push ecx
// 005efe99  8bd1                 mov edx, ecx
// 005efe9b  52                   push edx
// 005efe9c  e88fd6f1ff           call 0x50d530
// 005efea1  68b4000000           push 0xb4
// 005efea6  6a04                 push 4
// 005efea8  6880000000           push 0x80
// 005efead  6a3e                 push 0x3e
// 005efeaf  6a04                 push 4
// 005efeb1  6884000000           push 0x84
// 005efeb6  8d442448             lea eax, [esp + 0x48]
// 005efeba  6814010000           push 0x114
// 005efebf  50                   push eax
// 005efec0  8bc8                 mov ecx, eax
// 005efec2  51                   push ecx
// 005efec3  e8b8e3f1ff           call 0x50e280
// 005efec8  83c444               add esp, 0x44
// 005efecb  6aa6                 push -0x5a
// 005efecd  6a40                 push 0x40
// 005efecf  6a04                 push 4
// 005efed1  6a02                 push 2
// 005efed3  6a04                 push 4
// 005efed5  6884000000           push 0x84
// 005efeda  8d542428             lea edx, [esp + 0x28]
// 005efede  688a000000           push 0x8a
// 005efee3  52                   push edx
// 005efee4  8bc2                 mov eax, edx
// 005efee6  50                   push eax
// 005efee7  e894e3f1ff           call 0x50e280
// 005efeec  6a5a                 push 0x5a
// 005efeee  6a40                 push 0x40
// 005efef0  6a04                 push 4
// 005efef2  6a02                 push 2
// 005efef4  6880000000           push 0x80
// 005efef9  6884000000           push 0x84
// 005efefe  8d4c244c             lea ecx, [esp + 0x4c]
// 005eff02  68ce000000           push 0xce
// 005eff07  51                   push ecx
// 005eff08  8bd1                 mov edx, ecx
// 005eff0a  52                   push edx
// 005eff0b  e870e3f1ff           call 0x50e280
// 005eff10  83c448               add esp, 0x48
// 005eff13  6880000000           push 0x80
// 005eff18  6a40                 push 0x40
// 005eff1a  6863010000           push 0x163
// 005eff1f  6a13                 push 0x13
// 005eff21  688c000000           push 0x8c
// 005eff26  688a000000           push 0x8a
// 005eff2b  8d442440             lea eax, [esp + 0x40]
// 005eff2f  50                   push eax
// 005eff30  8d4c242c             lea ecx, [esp + 0x2c]
// 005eff34  51                   push ecx
// 005eff35  e8f6d5f1ff           call 0x50d530
// 005eff3a  6a5a                 push 0x5a
// 005eff3c  6a02                 push 2
// 005eff3e  6a40                 push 0x40
// 005eff40  688c000000           push 0x8c
// 005eff45  688a000000           push 0x8a
// 005eff4a  6812010000           push 0x112
// 005eff4f  8d542448             lea edx, [esp + 0x48]
// 005eff53  6a42                 push 0x42
// 005eff55  52                   push edx
// 005eff56  8bc2                 mov eax, edx
// 005eff58  50                   push eax
// 005eff59  e822e3f1ff           call 0x50e280
// 005eff5e  83c444               add esp, 0x44
// 005eff61  6aa6                 push -0x5a
// 005eff63  6a02                 push 2
// 005eff65  6a40                 push 0x40
// 005eff67  680a010000           push 0x10a
// 005eff6c  688a000000           push 0x8a
// 005eff71  6856010000           push 0x156
// 005eff76  8d4c2428             lea ecx, [esp + 0x28]
// 005eff7a  6a42                 push 0x42
// 005eff7c  51                   push ecx
// 005eff7d  8bd1                 mov edx, ecx
// 005eff7f  52                   push edx
// 005eff80  e8fbe2f1ff           call 0x50e280
// 005eff85  6880000000           push 0x80
// 005eff8a  6a02                 push 2
// 005eff8c  688c000000           push 0x8c
// 005eff91  688a000000           push 0x8a
// 005eff96  688c000000           push 0x8c
// 005eff9b  8d442448             lea eax, [esp + 0x48]
// 005eff9f  6896010000           push 0x196
// 005effa4  50                   push eax
// 005effa5  8bc8                 mov ecx, eax
// 005effa7  51                   push ecx
// 005effa8  e883d5f1ff           call 0x50d530
// 005effad  83c444               add esp, 0x44
// 005effb0  6880000000           push 0x80
// 005effb5  6a02                 push 2
// 005effb7  688c000000           push 0x8c
// 005effbc  68c8000000           push 0xc8
// 005effc1  688c000000           push 0x8c
// 005effc6  8d542424             lea edx, [esp + 0x24]
// 005effca  68cc000000           push 0xcc
// 005effcf  52                   push edx
// 005effd0  8bc2                 mov eax, edx
// 005effd2  50                   push eax
// 005effd3  e858d5f1ff           call 0x50d530
// 005effd8  6880000000           push 0x80
// 005effdd  6a40                 push 0x40
// 005effdf  6863010000           push 0x163
// 005effe4  6a55                 push 0x55
// 005effe6  688c000000           push 0x8c
// 005effeb  68ce000000           push 0xce
// 005efff0  8d4c2460             lea ecx, [esp + 0x60]
// 005efff4  51                   push ecx
// 005efff5  8d54244c             lea edx, [esp + 0x4c]
// 005efff9  52                   push edx
// 005efffa  e831d5f1ff           call 0x50d530
// 005effff  83c440               add esp, 0x40
// 005f0002  68b4000000           push 0xb4
// 005f0007  6a02                 push 2
// 005f0009  6a40                 push 0x40
// 005f000b  688c000000           push 0x8c
// 005f0010  68ce000000           push 0xce
// 005f0015  6810010000           push 0x110
// 005f001a  8d442428             lea eax, [esp + 0x28]
// 005f001e  6a02                 push 2
// 005f0020  50                   push eax
// 005f0021  8bc8                 mov ecx, eax
// 005f0023  51                   push ecx
// 005f0024  e857e2f1ff           call 0x50e280
// 005f0029  68b4000000           push 0xb4
// 005f002e  6a02                 push 2
// 005f0030  6a40                 push 0x40
// 005f0032  680a010000           push 0x10a
// 005f0037  68ce000000           push 0xce
// 005f003c  6896010000           push 0x196
// 005f0041  8d54244c             lea edx, [esp + 0x4c]
// 005f0045  6a02                 push 2
// 005f0047  52                   push edx
// 005f0048  8bc2                 mov eax, edx
// 005f004a  50                   push eax
// 005f004b  e830e2f1ff           call 0x50e280
// 005f0050  83c448               add esp, 0x48
// 005f0053  6880000000           push 0x80
// 005f0058  6a02                 push 2
// 005f005a  688c000000           push 0x8c
// 005f005f  68ce000000           push 0xce
// 005f0064  688c000000           push 0x8c
// 005f0069  8d4c2424             lea ecx, [esp + 0x24]
// 005f006d  68ca000000           push 0xca
// 005f0072  51                   push ecx
// 005f0073  8bd1                 mov edx, ecx
// 005f0075  52                   push edx
// 005f0076  e8b5d4f1ff           call 0x50d530
// 005f007b  6880000000           push 0x80
// 005f0080  6a02                 push 2
// 005f0082  688c000000           push 0x8c
// 005f0087  680c010000           push 0x10c
// 005f008c  688c000000           push 0x8c
// 005f0091  8d442444             lea eax, [esp + 0x44]
// 005f0095  6810010000           push 0x110
// 005f009a  50                   push eax
// 005f009b  8bc8                 mov ecx, eax
// 005f009d  51                   push ecx
// 005f009e  e88dd4f1ff           call 0x50d530
// 005f00a3  83c440               add esp, 0x40
// 005f00a6  6880000000           push 0x80
// 005f00ab  6a40                 push 0x40
// 005f00ad  6863010000           push 0x163
// 005f00b2  6897000000           push 0x97
// 005f00b7  688c000000           push 0x8c
// 005f00bc  6812010000           push 0x112
// 005f00c1  8d542440             lea edx, [esp + 0x40]
// 005f00c5  52                   push edx
// 005f00c6  8d44242c             lea eax, [esp + 0x2c]
// 005f00ca  50                   push eax
// 005f00cb  e860d4f1ff           call 0x50d530
// 005f00d0  6aa6                 push -0x5a
// 005f00d2  6a02                 push 2
// 005f00d4  6a40                 push 0x40
// 005f00d6  688c000000           push 0x8c
// 005f00db  6812010000           push 0x112
// 005f00e0  6812010000           push 0x112
// 005f00e5  8d4c2448             lea ecx, [esp + 0x48]
// 005f00e9  57                   push edi
// 005f00ea  51                   push ecx
// 005f00eb  8bd1                 mov edx, ecx
// 005f00ed  52                   push edx
// 005f00ee  e88de1f1ff           call 0x50e280
// 005f00f3  83c444               add esp, 0x44
// 005f00f6  6a5a                 push 0x5a
// 005f00f8  6a02                 push 2
// 005f00fa  6a40                 push 0x40
// 005f00fc  680a010000           push 0x10a
// 005f0101  6812010000           push 0x112
// 005f0106  6856010000           push 0x156
// 005f010b  57                   push edi
// 005f010c  8d44242c             lea eax, [esp + 0x2c]
// 005f0110  50                   push eax
// 005f0111  8bc8                 mov ecx, eax
// 005f0113  51                   push ecx
// 005f0114  e867e1f1ff           call 0x50e280
// 005f0119  6880000000           push 0x80
// 005f011e  6a02                 push 2
// 005f0120  688c000000           push 0x8c
// 005f0125  6812010000           push 0x112
// 005f012a  688c000000           push 0x8c
// 005f012f  8d542448             lea edx, [esp + 0x48]
// 005f0133  680e010000           push 0x10e
// 005f0138  52                   push edx
// 005f0139  8bc2                 mov eax, edx
// 005f013b  50                   push eax
// 005f013c  e8efd3f1ff           call 0x50d530
// 005f0141  83c444               add esp, 0x44
// 005f0144  6880000000           push 0x80
// 005f0149  6a02                 push 2
// 005f014b  688c000000           push 0x8c
// 005f0150  6850010000           push 0x150
// 005f0155  688c000000           push 0x8c
// 005f015a  8d4c2424             lea ecx, [esp + 0x24]
// 005f015e  6854010000           push 0x154
// 005f0163  51                   push ecx
// 005f0164  8bd1                 mov edx, ecx
// 005f0166  52                   push edx
// 005f0167  e8c4d3f1ff           call 0x50d530
// 005f016c  6880000000           push 0x80
// 005f0171  6a40                 push 0x40
// 005f0173  6863010000           push 0x163
// 005f0178  68d9000000           push 0xd9
// 005f017d  688c000000           push 0x8c
// 005f0182  6856010000           push 0x156
// 005f0187  8d442460             lea eax, [esp + 0x60]
// 005f018b  50                   push eax
// 005f018c  8d4c244c             lea ecx, [esp + 0x4c]
// 005f0190  51                   push ecx
// 005f0191  e89ad3f1ff           call 0x50d530
// 005f0196  83c440               add esp, 0x40
// 005f0199  6a02                 push 2
// 005f019b  6a40                 push 0x40
// 005f019d  688c000000           push 0x8c
// 005f01a2  6856010000           push 0x156
// 005f01a7  6852010000           push 0x152
// 005f01ac  8d542424             lea edx, [esp + 0x24]
// 005f01b0  6a02                 push 2
// 005f01b2  52                   push edx
// 005f01b3  8bc2                 mov eax, edx
// 005f01b5  50                   push eax
// 005f01b6  e875d3f1ff           call 0x50d530
// 005f01bb  6a02                 push 2
// 005f01bd  6a40                 push 0x40
// 005f01bf  680a010000           push 0x10a
// 005f01c4  6856010000           push 0x156
// 005f01c9  6854010000           push 0x154
// 005f01ce  8d4c2444             lea ecx, [esp + 0x44]
// 005f01d2  6a02                 push 2
// 005f01d4  51                   push ecx
// 005f01d5  8bd1                 mov edx, ecx
// 005f01d7  52                   push edx
// 005f01d8  e853d3f1ff           call 0x50d530
// 005f01dd  83c440               add esp, 0x40
// 005f01e0  6880000000           push 0x80
// 005f01e5  6a02                 push 2
// 005f01e7  688c000000           push 0x8c
// 005f01ec  6856010000           push 0x156
// 005f01f1  688c000000           push 0x8c
// 005f01f6  8d442424             lea eax, [esp + 0x24]
// 005f01fa  6852010000           push 0x152
// 005f01ff  50                   push eax
// 005f0200  8bc8                 mov ecx, eax
// 005f0202  51                   push ecx
// 005f0203  e828d3f1ff           call 0x50d530
// 005f0208  6880000000           push 0x80
// 005f020d  6a02                 push 2
// 005f020f  688c000000           push 0x8c
// 005f0214  6894010000           push 0x194
// 005f0219  688c000000           push 0x8c
// 005f021e  8d542444             lea edx, [esp + 0x44]
// 005f0222  6888000000           push 0x88
// 005f0227  52                   push edx
// 005f0228  8bc2                 mov eax, edx
// 005f022a  50                   push eax
// 005f022b  e800d3f1ff           call 0x50d530
// 005f0230  83c440               add esp, 0x40
// 005f0233  6a40                 push 0x40
// 005f0235  6a40                 push 0x40
// 005f0237  6821010000           push 0x121
// 005f023c  68d9000000           push 0xd9
// 005f0241  6812010000           push 0x112
// 005f0246  6a02                 push 2
// 005f0248  8d4c2440             lea ecx, [esp + 0x40]
// 005f024c  51                   push ecx
// 005f024d  8d54242c             lea edx, [esp + 0x2c]
// 005f0251  52                   push edx
// 005f0252  e8d9d2f1ff           call 0x50d530
// 005f0257  68b4000000           push 0xb4
// 005f025c  6a04                 push 4
// 005f025e  6a40                 push 0x40
// 005f0260  6812010000           push 0x112
// 005f0265  6a02                 push 2
// 005f0267  6888000000           push 0x88
// 005f026c  8d442448             lea eax, [esp + 0x48]
// 005f0270  68ce000000           push 0xce
// 005f0275  50                   push eax
// 005f0276  8bc8                 mov ecx, eax
// 005f0278  51                   push ecx
// 005f0279  e802e0f1ff           call 0x50e280
// 005f027e  83c444               add esp, 0x44
// 005f0281  6a04                 push 4
// 005f0283  6a40                 push 0x40
// 005f0285  684e010000           push 0x14e
// 005f028a  6a02                 push 2
// 005f028c  6888000000           push 0x88
// 005f0291  8d542424             lea edx, [esp + 0x24]
// 005f0295  6856010000           push 0x156
// 005f029a  52                   push edx
// 005f029b  8bc2                 mov eax, edx
// 005f029d  50                   push eax
// 005f029e  e88dd2f1ff           call 0x50d530
// 005f02a3  6a5a                 push 0x5a
// 005f02a5  6a40                 push 0x40
// 005f02a7  6a04                 push 4
// 005f02a9  6812010000           push 0x112
// 005f02ae  6a02                 push 2
// 005f02b0  6888000000           push 0x88
// 005f02b5  8d4c2448             lea ecx, [esp + 0x48]
// 005f02b9  6812010000           push 0x112
// 005f02be  51                   push ecx
// 005f02bf  8bd1                 mov edx, ecx
// 005f02c1  52                   push edx
// 005f02c2  e8b9dff1ff           call 0x50e280
// 005f02c7  83c444               add esp, 0x44
// 005f02ca  6aa6                 push -0x5a
// 005f02cc  6a40                 push 0x40
// 005f02ce  6a04                 push 4
// 005f02d0  6812010000           push 0x112
// 005f02d5  6a3e                 push 0x3e
// 005f02d7  6888000000           push 0x88
// 005f02dc  8d442428             lea eax, [esp + 0x28]
// 005f02e0  688a000000           push 0x8a
// 005f02e5  50                   push eax
// 005f02e6  8bc8                 mov ecx, eax
// 005f02e8  51                   push ecx
// 005f02e9  e892dff1ff           call 0x50e280
// 005f02ee  6a40                 push 0x40
// 005f02f0  6a40                 push 0x40
// 005f02f2  68e5010000           push 0x1e5
// 005f02f7  68d9000000           push 0xd9
// 005f02fc  6856010000           push 0x156
// 005f0301  6a02                 push 2
// 005f0303  8d542464             lea edx, [esp + 0x64]
// 005f0307  52                   push edx
// 005f0308  8d442450             lea eax, [esp + 0x50]
// 005f030c  50                   push eax
// 005f030d  e81ed2f1ff           call 0x50d530
// 005f0312  83c444               add esp, 0x44
// 005f0315  6a04                 push 4
// 005f0317  6a40                 push 0x40
// 005f0319  6856010000           push 0x156
// 005f031e  6a02                 push 2
// 005f0320  680c010000           push 0x10c
// 005f0325  6856010000           push 0x156
// 005f032a  8d4c2428             lea ecx, [esp + 0x28]
// 005f032e  51                   push ecx
// 005f032f  8bd1                 mov edx, ecx
// 005f0331  52                   push edx
// 005f0332  e8f9d1f1ff           call 0x50d530
// 005f0337  68b4000000           push 0xb4
// 005f033c  6a04                 push 4
// 005f033e  6a40                 push 0x40
// 005f0340  6892010000           push 0x192
// 005f0345  6a02                 push 2
// 005f0347  680c010000           push 0x10c
// 005f034c  8d442448             lea eax, [esp + 0x48]
// 005f0350  68ce000000           push 0xce
// 005f0355  50                   push eax
// 005f0356  8bc8                 mov ecx, eax
// 005f0358  51                   push ecx
// 005f0359  e822dff1ff           call 0x50e280
// 005f035e  83c444               add esp, 0x44
// 005f0361  6aa6                 push -0x5a
// 005f0363  6a40                 push 0x40
// 005f0365  6a04                 push 4
// 005f0367  6856010000           push 0x156
// 005f036c  6a02                 push 2
// 005f036e  680c010000           push 0x10c
// 005f0373  8d542428             lea edx, [esp + 0x28]
// 005f0377  6812010000           push 0x112
// 005f037c  52                   push edx
// 005f037d  8bc2                 mov eax, edx
// 005f037f  50                   push eax
// 005f0380  e8fbdef1ff           call 0x50e280
// 005f0385  6aa6                 push -0x5a
// 005f0387  6a40                 push 0x40
// 005f0389  6a04                 push 4
// 005f038b  6856010000           push 0x156
// 005f0390  6a3e                 push 0x3e
// 005f0392  680c010000           push 0x10c
// 005f0397  8d4c244c             lea ecx, [esp + 0x4c]
// 005f039b  688a000000           push 0x8a
// 005f03a0  51                   push ecx
// 005f03a1  8bd1                 mov edx, ecx
// 005f03a3  52                   push edx
// 005f03a4  e8d7def1ff           call 0x50e280
// 005f03a9  83c448               add esp, 0x48
// 005f03ac  6880000000           push 0x80
// 005f03b1  6a40                 push 0x40
// 005f03b3  6863010000           push 0x163
// 005f03b8  6834010000           push 0x134
// 005f03bd  6814010000           push 0x114
// 005f03c2  688a000000           push 0x8a
// 005f03c7  8d442440             lea eax, [esp + 0x40]
// 005f03cb  50                   push eax
// 005f03cc  8d4c242c             lea ecx, [esp + 0x2c]
// 005f03d0  51                   push ecx
// 005f03d1  e85ad1f1ff           call 0x50d530
// 005f03d6  6a02                 push 2
// 005f03d8  6a40                 push 0x40
// 005f03da  6814010000           push 0x114
// 005f03df  688a000000           push 0x8a
// 005f03e4  6852010000           push 0x152
// 005f03e9  8d542444             lea edx, [esp + 0x44]
// 005f03ed  6a46                 push 0x46
// 005f03ef  52                   push edx
// 005f03f0  8bc2                 mov eax, edx
// 005f03f2  50                   push eax
// 005f03f3  e838d1f1ff           call 0x50d530
// 005f03f8  83c440               add esp, 0x40
// 005f03fb  6a02                 push 2
// 005f03fd  6a40                 push 0x40
// 005f03ff  6892010000           push 0x192
// 005f0404  688a000000           push 0x8a
// 005f0409  6854010000           push 0x154
// 005f040e  8d4c2424             lea ecx, [esp + 0x24]
// 005f0412  6a46                 push 0x46
// 005f0414  51                   push ecx
// 005f0415  8bd1                 mov edx, ecx
// 005f0417  52                   push edx
// 005f0418  e813d1f1ff           call 0x50d530
// 005f041d  6880000000           push 0x80
// 005f0422  6a02                 push 2
// 005f0424  6814010000           push 0x114
// 005f0429  688a000000           push 0x8a
// 005f042e  6814010000           push 0x114
// 005f0433  6896010000           push 0x196
// 005f0438  8d442448             lea eax, [esp + 0x48]
// 005f043c  50                   push eax
// 005f043d  8bc8                 mov ecx, eax
// 005f043f  51                   push ecx
// 005f0440  e8ebd0f1ff           call 0x50d530
// 005f0445  83c440               add esp, 0x40
// 005f0448  6880000000           push 0x80
// 005f044d  6a02                 push 2
// 005f044f  6814010000           push 0x114
// 005f0454  68c8000000           push 0xc8
// 005f0459  6814010000           push 0x114
// 005f045e  8d542424             lea edx, [esp + 0x24]
// 005f0462  68cc000000           push 0xcc
// 005f0467  52                   push edx
// 005f0468  8bc2                 mov eax, edx
// 005f046a  50                   push eax
// 005f046b  e8c0d0f1ff           call 0x50d530
// 005f0470  6880000000           push 0x80
// 005f0475  6a40                 push 0x40
// 005f0477  6863010000           push 0x163
// 005f047c  6876010000           push 0x176
// 005f0481  6814010000           push 0x114
// 005f0486  68ce000000           push 0xce
// 005f048b  8d4c2460             lea ecx, [esp + 0x60]
// 005f048f  51                   push ecx
// 005f0490  8d54244c             lea edx, [esp + 0x4c]
// 005f0494  52                   push edx
// 005f0495  e896d0f1ff           call 0x50d530
// 005f049a  83c440               add esp, 0x40
// 005f049d  6a5a                 push 0x5a
// 005f049f  6a02                 push 2
// 005f04a1  6a40                 push 0x40
// 005f04a3  6814010000           push 0x114
// 005f04a8  68ce000000           push 0xce
// 005f04ad  6812010000           push 0x112
// 005f04b2  8d442428             lea eax, [esp + 0x28]
// 005f04b6  6886000000           push 0x86
// 005f04bb  50                   push eax
// 005f04bc  8bc8                 mov ecx, eax
// 005f04be  51                   push ecx
// 005f04bf  e8bcddf1ff           call 0x50e280
// 005f04c4  6aa6                 push -0x5a
// 005f04c6  6a02                 push 2
// 005f04c8  6a40                 push 0x40
// 005f04ca  6892010000           push 0x192
// 005f04cf  68ce000000           push 0xce
// 005f04d4  6856010000           push 0x156
// 005f04d9  8d54244c             lea edx, [esp + 0x4c]
// 005f04dd  6886000000           push 0x86
// 005f04e2  52                   push edx
// 005f04e3  8bc2                 mov eax, edx
// 005f04e5  50                   push eax
// 005f04e6  e895ddf1ff           call 0x50e280
// 005f04eb  83c448               add esp, 0x48
// 005f04ee  6880000000           push 0x80
// 005f04f3  6a02                 push 2
// 005f04f5  6814010000           push 0x114
// 005f04fa  68ce000000           push 0xce
// 005f04ff  6814010000           push 0x114
// 005f0504  8d4c2424             lea ecx, [esp + 0x24]
// 005f0508  68ca000000           push 0xca
// 005f050d  51                   push ecx
// 005f050e  8bd1                 mov edx, ecx
// 005f0510  52                   push edx
// 005f0511  e81ad0f1ff           call 0x50d530
// 005f0516  6880000000           push 0x80
// 005f051b  6a02                 push 2
// 005f051d  6814010000           push 0x114
// 005f0522  680c010000           push 0x10c
// 005f0527  6814010000           push 0x114
// 005f052c  8d442444             lea eax, [esp + 0x44]
// 005f0530  6810010000           push 0x110
// 005f0535  50                   push eax
// 005f0536  8bc8                 mov ecx, eax
// 005f0538  51                   push ecx
// 005f0539  e8f2cff1ff           call 0x50d530
// 005f053e  83c440               add esp, 0x40
// 005f0541  6880000000           push 0x80
// 005f0546  6a40                 push 0x40
// 005f0548  6863010000           push 0x163
// 005f054d  68b8010000           push 0x1b8
// 005f0552  6814010000           push 0x114
// 005f0557  6812010000           push 0x112
// 005f055c  8d542440             lea edx, [esp + 0x40]
// 005f0560  52                   push edx
// 005f0561  8d44242c             lea eax, [esp + 0x2c]
// 005f0565  50                   push eax
// 005f0566  e8c5cff1ff           call 0x50d530
// 005f056b  68b4000000           push 0xb4
// 005f0570  6a02                 push 2
// 005f0572  6a40                 push 0x40
// 005f0574  6814010000           push 0x114
// 005f0579  6812010000           push 0x112
// 005f057e  6810010000           push 0x110
// 005f0583  8d4c2448             lea ecx, [esp + 0x48]
// 005f0587  6a46                 push 0x46
// 005f0589  51                   push ecx
// 005f058a  8bd1                 mov edx, ecx
// 005f058c  52                   push edx
// 005f058d  e8eedcf1ff           call 0x50e280
// 005f0592  83c444               add esp, 0x44
// 005f0595  68b4000000           push 0xb4
// 005f059a  6a02                 push 2
// 005f059c  6a40                 push 0x40
// 005f059e  6892010000           push 0x192
// 005f05a3  6812010000           push 0x112
// 005f05a8  6896010000           push 0x196
// 005f05ad  8d442428             lea eax, [esp + 0x28]
// 005f05b1  6a46                 push 0x46
// 005f05b3  50                   push eax
// 005f05b4  8bc8                 mov ecx, eax
// 005f05b6  51                   push ecx
// 005f05b7  e8c4dcf1ff           call 0x50e280
// 005f05bc  6880000000           push 0x80
// 005f05c1  6a02                 push 2
// 005f05c3  6814010000           push 0x114
// 005f05c8  6812010000           push 0x112
// 005f05cd  6814010000           push 0x114
// 005f05d2  8d542448             lea edx, [esp + 0x48]
// 005f05d6  680e010000           push 0x10e
// 005f05db  52                   push edx
// 005f05dc  8bc2                 mov eax, edx
// 005f05de  50                   push eax
// 005f05df  e84ccff1ff           call 0x50d530
// 005f05e4  83c444               add esp, 0x44
// 005f05e7  6880000000           push 0x80
// 005f05ec  6a02                 push 2
// 005f05ee  6814010000           push 0x114
// 005f05f3  6850010000           push 0x150
// 005f05f8  6814010000           push 0x114
// 005f05fd  8d4c2424             lea ecx, [esp + 0x24]
// 005f0601  6854010000           push 0x154
// 005f0606  51                   push ecx
// 005f0607  8bd1                 mov edx, ecx
// 005f0609  52                   push edx
// 005f060a  e821cff1ff           call 0x50d530
// 005f060f  6880000000           push 0x80
// 005f0614  6a40                 push 0x40
// 005f0616  6863010000           push 0x163
// 005f061b  68fa010000           push 0x1fa
// 005f0620  6814010000           push 0x114
// 005f0625  6856010000           push 0x156
// 005f062a  8d442460             lea eax, [esp + 0x60]
// 005f062e  50                   push eax
// 005f062f  8d4c244c             lea ecx, [esp + 0x4c]
// 005f0633  51                   push ecx
// 005f0634  e8f7cef1ff           call 0x50d530
// 005f0639  83c440               add esp, 0x40
// 005f063c  6aa6                 push -0x5a
// 005f063e  6a02                 push 2
// 005f0640  6a40                 push 0x40
// 005f0642  6814010000           push 0x114
// 005f0647  6856010000           push 0x156
// 005f064c  6812010000           push 0x112
// 005f0651  8d542428             lea edx, [esp + 0x28]
// 005f0655  6a44                 push 0x44
// 005f0657  52                   push edx
// 005f0658  8bc2                 mov eax, edx
// 005f065a  50                   push eax
// 005f065b  e820dcf1ff           call 0x50e280
// 005f0660  6aa6                 push -0x5a
// 005f0662  6a02                 push 2
// 005f0664  6a40                 push 0x40
// 005f0666  6892010000           push 0x192
// 005f066b  6856010000           push 0x156
// 005f0670  6856010000           push 0x156
// 005f0675  8d4c244c             lea ecx, [esp + 0x4c]
// 005f0679  6a44                 push 0x44
// 005f067b  51                   push ecx
// 005f067c  8bd1                 mov edx, ecx
// 005f067e  52                   push edx
// 005f067f  e8fcdbf1ff           call 0x50e280
// 005f0684  83c448               add esp, 0x48
// 005f0687  6880000000           push 0x80
// 005f068c  6a02                 push 2
// 005f068e  6814010000           push 0x114
// 005f0693  6856010000           push 0x156
// 005f0698  6814010000           push 0x114
// 005f069d  8d442424             lea eax, [esp + 0x24]
// 005f06a1  6852010000           push 0x152
// 005f06a6  50                   push eax
// 005f06a7  8bc8                 mov ecx, eax
// 005f06a9  51                   push ecx
// 005f06aa  e881cef1ff           call 0x50d530
// 005f06af  6880000000           push 0x80
// 005f06b4  6a02                 push 2
// 005f06b6  6814010000           push 0x114
// 005f06bb  6894010000           push 0x194
// 005f06c0  6814010000           push 0x114
// 005f06c5  8d542444             lea edx, [esp + 0x44]
// 005f06c9  6888000000           push 0x88
// 005f06ce  52                   push edx
// 005f06cf  8bc2                 mov eax, edx
// 005f06d1  50                   push eax
// 005f06d2  e859cef1ff           call 0x50d530
// 005f06d7  83c440               add esp, 0x40
// 005f06da  6a40                 push 0x40
// 005f06dc  6a40                 push 0x40
// 005f06de  6821010000           push 0x121
// 005f06e3  6834010000           push 0x134
// 005f06e8  6812010000           push 0x112
// 005f06ed  6a46                 push 0x46
// 005f06ef  8d4c2440             lea ecx, [esp + 0x40]
// 005f06f3  51                   push ecx
// 005f06f4  8d54242c             lea edx, [esp + 0x2c]
// 005f06f8  52                   push edx
// 005f06f9  e832cef1ff           call 0x50d530
// 005f06fe  68b4000000           push 0xb4
// 005f0703  6a04                 push 4
// 005f0705  6a40                 push 0x40
// 005f0707  6812010000           push 0x112
// 005f070c  6a46                 push 0x46
// 005f070e  6810010000           push 0x110
// 005f0713  8d442448             lea eax, [esp + 0x48]
// 005f0717  6812010000           push 0x112
// 005f071c  50                   push eax
// 005f071d  8bc8                 mov ecx, eax
// 005f071f  51                   push ecx
// 005f0720  e85bdbf1ff           call 0x50e280
// 005f0725  83c444               add esp, 0x44
// 005f0728  6a04                 push 4
// 005f072a  6a40                 push 0x40
// 005f072c  684e010000           push 0x14e
// 005f0731  6a46                 push 0x46
// 005f0733  6810010000           push 0x110
// 005f0738  8d542424             lea edx, [esp + 0x24]
// 005f073c  688a000000           push 0x8a
// 005f0741  52                   push edx
// 005f0742  8bc2                 mov eax, edx
// 005f0744  50                   push eax
// 005f0745  e8e6cdf1ff           call 0x50d530
// 005f074a  6aa6                 push -0x5a
// 005f074c  6a40                 push 0x40
// 005f074e  6a04                 push 4
// 005f0750  6812010000           push 0x112
// 005f0755  6a46                 push 0x46
// 005f0757  6810010000           push 0x110
// 005f075c  8d4c2448             lea ecx, [esp + 0x48]
// 005f0760  6856010000           push 0x156
// 005f0765  51                   push ecx
// 005f0766  8bd1                 mov edx, ecx
// 005f0768  52                   push edx
// 005f0769  e812dbf1ff           call 0x50e280
// 005f076e  83c444               add esp, 0x44
// 005f0771  6aa6                 push -0x5a
// 005f0773  6a40                 push 0x40
// 005f0775  6a04                 push 4
// 005f0777  6812010000           push 0x112
// 005f077c  6882000000           push 0x82
// 005f0781  6810010000           push 0x110
// 005f0786  8d442428             lea eax, [esp + 0x28]
// 005f078a  68ce000000           push 0xce
// 005f078f  50                   push eax
// 005f0790  8bc8                 mov ecx, eax
// 005f0792  51                   push ecx
// 005f0793  e8e8daf1ff           call 0x50e280
// 005f0798  6a40                 push 0x40
// 005f079a  6a40                 push 0x40
// 005f079c  68e5010000           push 0x1e5
// 005f07a1  6834010000           push 0x134
// 005f07a6  6856010000           push 0x156
// 005f07ab  6a46                 push 0x46
// 005f07ad  8d542464             lea edx, [esp + 0x64]
// 005f07b1  52                   push edx
// 005f07b2  8d442450             lea eax, [esp + 0x50]
// 005f07b6  50                   push eax
// 005f07b7  e874cdf1ff           call 0x50d530
// 005f07bc  83c444               add esp, 0x44
// 005f07bf  6a04                 push 4
// 005f07c1  6a40                 push 0x40
// 005f07c3  6856010000           push 0x156
// 005f07c8  6a46                 push 0x46
// 005f07ca  6894010000           push 0x194
// 005f07cf  8d4c2424             lea ecx, [esp + 0x24]
// 005f07d3  688a000000           push 0x8a
// 005f07d8  51                   push ecx
// 005f07d9  8bd1                 mov edx, ecx
// 005f07db  52                   push edx
// 005f07dc  e84fcdf1ff           call 0x50d530
// 005f07e1  68b4000000           push 0xb4
// 005f07e6  6a04                 push 4
// 005f07e8  6a40                 push 0x40
// 005f07ea  6892010000           push 0x192
// 005f07ef  6a46                 push 0x46
// 005f07f1  6894010000           push 0x194
// 005f07f6  8d442448             lea eax, [esp + 0x48]
// 005f07fa  6812010000           push 0x112
// 005f07ff  50                   push eax
// 005f0800  8bc8                 mov ecx, eax
// 005f0802  51                   push ecx
// 005f0803  e878daf1ff           call 0x50e280
// 005f0808  83c444               add esp, 0x44
// 005f080b  6aa6                 push -0x5a
// 005f080d  6a40                 push 0x40
// 005f080f  6a04                 push 4
// 005f0811  6856010000           push 0x156
// 005f0816  6a46                 push 0x46
// 005f0818  6894010000           push 0x194
// 005f081d  8d542428             lea edx, [esp + 0x28]
// 005f0821  6856010000           push 0x156
// 005f0826  52                   push edx
// 005f0827  8bc2                 mov eax, edx
// 005f0829  50                   push eax
// 005f082a  e851daf1ff           call 0x50e280
// 005f082f  6a5a                 push 0x5a
// 005f0831  6a40                 push 0x40
// 005f0833  6a04                 push 4
// 005f0835  6856010000           push 0x156
// 005f083a  6882000000           push 0x82
// 005f083f  6894010000           push 0x194
// 005f0844  8d4c244c             lea ecx, [esp + 0x4c]
// 005f0848  68ce000000           push 0xce
// 005f084d  51                   push ecx
// 005f084e  8bd1                 mov edx, ecx
// 005f0850  52                   push edx
// 005f0851  e82adaf1ff           call 0x50e280
// 005f0856  83c448               add esp, 0x48
// 005f0859  57                   push edi
// 005f085a  6a05                 push 5
// 005f085c  6a03                 push 3
// 005f085e  57                   push edi
// 005f085f  68c9000000           push 0xc9
// 005f0864  8d442424             lea eax, [esp + 0x24]
// 005f0868  50                   push eax
// 005f0869  e882e6f1ff           call 0x50eef0
// 005f086e  6aa6                 push -0x5a
// 005f0870  6a05                 push 5
// 005f0872  6a03                 push 3
// 005f0874  57                   push edi
// 005f0875  8d4c2438             lea ecx, [esp + 0x38]
// 005f0879  6888000000           push 0x88
// 005f087e  51                   push ecx
// 005f087f  e86ce6f1ff           call 0x50eef0
// 005f0884  68b4000000           push 0xb4
// 005f0889  6a05                 push 5
// 005f088b  6a03                 push 3
// 005f088d  6883000000           push 0x83
// 005f0892  8d542450             lea edx, [esp + 0x50]
// 005f0896  6888000000           push 0x88
// 005f089b  52                   push edx
// 005f089c  e84fe6f1ff           call 0x50eef0
// 005f08a1  83c448               add esp, 0x48
// 005f08a4  6a5a                 push 0x5a
// 005f08a6  6a05                 push 5
// 005f08a8  6a03                 push 3
// 005f08aa  6883000000           push 0x83
// 005f08af  8d442420             lea eax, [esp + 0x20]
// 005f08b3  68c9000000           push 0xc9
// 005f08b8  50                   push eax
// 005f08b9  e832e6f1ff           call 0x50eef0
// 005f08be  57                   push edi
// 005f08bf  6a05                 push 5
// 005f08c1  6a05                 push 5
// 005f08c3  6888000000           push 0x88
// 005f08c8  8d4c2438             lea ecx, [esp + 0x38]
// 005f08cc  6883000000           push 0x83
// 005f08d1  51                   push ecx
// 005f08d2  e819e6f1ff           call 0x50eef0
// 005f08d7  6aa6                 push -0x5a
// 005f08d9  6a05                 push 5
// 005f08db  6a05                 push 5
// 005f08dd  6888000000           push 0x88
// 005f08e2  8d542450             lea edx, [esp + 0x50]
// 005f08e6  57                   push edi
// 005f08e7  52                   push edx
// 005f08e8  e803e6f1ff           call 0x50eef0
// 005f08ed  83c448               add esp, 0x48
// 005f08f0  68b4000000           push 0xb4
// 005f08f5  6a05                 push 5
// 005f08f7  6a05                 push 5
// 005f08f9  680b010000           push 0x10b
// 005f08fe  8d442420             lea eax, [esp + 0x20]
// 005f0902  57                   push edi
// 005f0903  50                   push eax
// 005f0904  e8e7e5f1ff           call 0x50eef0
// 005f0909  6a5a                 push 0x5a
// 005f090b  6a05                 push 5
// 005f090d  6a05                 push 5
// 005f090f  680b010000           push 0x10b
// 005f0914  8d4c2438             lea ecx, [esp + 0x38]
// 005f0918  6883000000           push 0x83
// 005f091d  51                   push ecx
// 005f091e  e8cde5f1ff           call 0x50eef0
// 005f0923  57                   push edi
// 005f0924  6a05                 push 5
// 005f0926  6a03                 push 3
// 005f0928  57                   push edi
// 005f0929  8d542450             lea edx, [esp + 0x50]
// 005f092d  680d010000           push 0x10d
// 005f0932  52                   push edx
// 005f0933  e8b8e5f1ff           call 0x50eef0
// 005f0938  83c448               add esp, 0x48
// 005f093b  6aa6                 push -0x5a
// 005f093d  6a05                 push 5
// 005f093f  6a03                 push 3
// 005f0941  57                   push edi
// 005f0942  8d442420             lea eax, [esp + 0x20]
// 005f0946  68cc000000           push 0xcc
// 005f094b  50                   push eax
// 005f094c  e89fe5f1ff           call 0x50eef0
// 005f0951  68b4000000           push 0xb4
// 005f0956  6a05                 push 5
// 005f0958  6a03                 push 3
// 005f095a  6883000000           push 0x83
// 005f095f  68cc000000           push 0xcc
// 005f0964  8d4c243c             lea ecx, [esp + 0x3c]
// 005f0968  51                   push ecx
// 005f0969  e882e5f1ff           call 0x50eef0
// 005f096e  6a5a                 push 0x5a
// 005f0970  6a05                 push 5
// 005f0972  6a03                 push 3
// 005f0974  6883000000           push 0x83
// 005f0979  8d542450             lea edx, [esp + 0x50]
// 005f097d  680d010000           push 0x10d
// 005f0982  52                   push edx
// 005f0983  e868e5f1ff           call 0x50eef0
// 005f0988  83c448               add esp, 0x48
// 005f098b  57                   push edi
// 005f098c  6a05                 push 5
// 005f098e  6a05                 push 5
// 005f0990  57                   push edi
// 005f0991  8d442420             lea eax, [esp + 0x20]
// 005f0995  6893010000           push 0x193
// 005f099a  50                   push eax
// 005f099b  e850e5f1ff           call 0x50eef0
// 005f09a0  6aa6                 push -0x5a
// 005f09a2  6a05                 push 5
// 005f09a4  6a05                 push 5
// 005f09a6  57                   push edi
// 005f09a7  8d4c2438             lea ecx, [esp + 0x38]
// 005f09ab  6810010000           push 0x110
// 005f09b0  51                   push ecx
// 005f09b1  e83ae5f1ff           call 0x50eef0
// 005f09b6  68b4000000           push 0xb4
// 005f09bb  6a05                 push 5
// 005f09bd  6a05                 push 5
// 005f09bf  6883000000           push 0x83
// 005f09c4  8d542450             lea edx, [esp + 0x50]
// 005f09c8  6810010000           push 0x110
// 005f09cd  52                   push edx
// 005f09ce  e81de5f1ff           call 0x50eef0
// 005f09d3  83c448               add esp, 0x48
// 005f09d6  6a5a                 push 0x5a
// 005f09d8  6a05                 push 5
// 005f09da  6a05                 push 5
// 005f09dc  6883000000           push 0x83
// 005f09e1  8d442420             lea eax, [esp + 0x20]
// 005f09e5  6893010000           push 0x193
// 005f09ea  50                   push eax
// 005f09eb  e800e5f1ff           call 0x50eef0
// 005f09f0  57                   push edi
// 005f09f1  6a03                 push 3
// 005f09f3  6a05                 push 5
// 005f09f5  6a44                 push 0x44
// 005f09f7  8d4c2438             lea ecx, [esp + 0x38]
// 005f09fb  6883000000           push 0x83
// 005f0a00  51                   push ecx
// 005f0a01  e8eae4f1ff           call 0x50eef0
// 005f0a06  6aa6                 push -0x5a
// 005f0a08  6a03                 push 3
// 005f0a0a  6a05                 push 5
// 005f0a0c  6a44                 push 0x44
// 005f0a0e  8d542450             lea edx, [esp + 0x50]
// 005f0a12  57                   push edi
// 005f0a13  52                   push edx
// 005f0a14  e8d7e4f1ff           call 0x50eef0
// 005f0a19  83c448               add esp, 0x48
// 005f0a1c  68b4000000           push 0xb4
// 005f0a21  6a03                 push 3
// 005f0a23  6a05                 push 5
// 005f0a25  6885000000           push 0x85
// 005f0a2a  8d442420             lea eax, [esp + 0x20]
// 005f0a2e  57                   push edi
// 005f0a2f  50                   push eax
// 005f0a30  e8bbe4f1ff           call 0x50eef0
// 005f0a35  6a5a                 push 0x5a
// 005f0a37  6a03                 push 3
// 005f0a39  6a05                 push 5
// 005f0a3b  6885000000           push 0x85
// 005f0a40  8d4c2438             lea ecx, [esp + 0x38]
// 005f0a44  6883000000           push 0x83
// 005f0a49  51                   push ecx
// 005f0a4a  e8a1e4f1ff           call 0x50eef0
// 005f0a4f  57                   push edi
// 005f0a50  6a03                 push 3
// 005f0a52  6a05                 push 5
// 005f0a54  57                   push edi
// 005f0a55  8d542450             lea edx, [esp + 0x50]
// 005f0a59  6883000000           push 0x83
// 005f0a5e  52                   push edx
// 005f0a5f  e88ce4f1ff           call 0x50eef0
// 005f0a64  83c448               add esp, 0x48
// 005f0a67  6aa6                 push -0x5a
// 005f0a69  6a03                 push 3
// 005f0a6b  6a05                 push 5
// 005f0a6d  57                   push edi
// 005f0a6e  8d442420             lea eax, [esp + 0x20]
// 005f0a72  57                   push edi
// 005f0a73  50                   push eax
// 005f0a74  e877e4f1ff           call 0x50eef0
// 005f0a79  68b4000000           push 0xb4
// 005f0a7e  6a03                 push 3
// 005f0a80  6a05                 push 5
// 005f0a82  6a41                 push 0x41
// 005f0a84  8d4c2438             lea ecx, [esp + 0x38]
// 005f0a88  57                   push edi
// 005f0a89  51                   push ecx
// 005f0a8a  e861e4f1ff           call 0x50eef0
// 005f0a8f  6a5a                 push 0x5a
// 005f0a91  6a03                 push 3
// 005f0a93  6a05                 push 5
// 005f0a95  6a41                 push 0x41
// 005f0a97  8d542450             lea edx, [esp + 0x50]
// 005f0a9b  6883000000           push 0x83
// 005f0aa0  52                   push edx
// 005f0aa1  e84ae4f1ff           call 0x50eef0
// 005f0aa6  83c448               add esp, 0x48
// 005f0aa9  57                   push edi
// 005f0aaa  6a05                 push 5
// 005f0aac  6a03                 push 3
// 005f0aae  6888000000           push 0x88
// 005f0ab3  8d442420             lea eax, [esp + 0x20]
// 005f0ab7  68c9000000           push 0xc9
// 005f0abc  50                   push eax
// 005f0abd  e82ee4f1ff           call 0x50eef0
// 005f0ac2  6aa6                 push -0x5a
// 005f0ac4  6a05                 push 5
// 005f0ac6  6a03                 push 3
// 005f0ac8  6888000000           push 0x88
// 005f0acd  8d4c2438             lea ecx, [esp + 0x38]
// 005f0ad1  6888000000           push 0x88
// 005f0ad6  51                   push ecx
// 005f0ad7  e814e4f1ff           call 0x50eef0
// 005f0adc  68b4000000           push 0xb4
// 005f0ae1  6a05                 push 5
// 005f0ae3  6a03                 push 3
// 005f0ae5  680b010000           push 0x10b
// 005f0aea  8d542450             lea edx, [esp + 0x50]
// 005f0aee  6888000000           push 0x88
// 005f0af3  52                   push edx
// 005f0af4  e8f7e3f1ff           call 0x50eef0
// 005f0af9  83c448               add esp, 0x48
// 005f0afc  6a5a                 push 0x5a
// 005f0afe  6a05                 push 5
// 005f0b00  6a03                 push 3
// 005f0b02  680b010000           push 0x10b
// 005f0b07  8d442420             lea eax, [esp + 0x20]
// 005f0b0b  68c9000000           push 0xc9
// 005f0b10  50                   push eax
// 005f0b11  e8dae3f1ff           call 0x50eef0
// 005f0b16  57                   push edi
// 005f0b17  6a05                 push 5
// 005f0b19  6a03                 push 3
// 005f0b1b  6888000000           push 0x88
// 005f0b20  8d4c2438             lea ecx, [esp + 0x38]
// 005f0b24  680d010000           push 0x10d
// 005f0b29  51                   push ecx
// 005f0b2a  e8c1e3f1ff           call 0x50eef0
// 005f0b2f  6aa6                 push -0x5a
// 005f0b31  6a05                 push 5
// 005f0b33  6a03                 push 3
// 005f0b35  6888000000           push 0x88
// 005f0b3a  8d542450             lea edx, [esp + 0x50]

void func_005ef840()
{
}
