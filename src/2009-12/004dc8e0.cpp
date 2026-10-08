// roc 2009-12 004dc8e0  unit: G3D::Shader  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc8e0
//
// 004dc8e0  6aff                 push -1
// 004dc8e2  68e13f9300           push 0x933fe1
// 004dc8e7  64a100000000         mov eax, dword ptr fs:[0]
// 004dc8ed  50                   push eax
// 004dc8ee  64892500000000       mov dword ptr fs:[0], esp
// 004dc8f5  81ecf0000000         sub esp, 0xf0
// 004dc8fb  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 004dc901  53                   push ebx
// 004dc902  55                   push ebp
// 004dc903  8bac2408010000       mov ebp, dword ptr [esp + 0x108]
// 004dc90a  33d2                 xor edx, edx
// 004dc90c  3bc2                 cmp eax, edx
// 004dc90e  56                   push esi
// 004dc90f  57                   push edi
// 004dc910  894c2414             mov dword ptr [esp + 0x14], ecx
// 004dc914  89542410             mov dword ptr [esp + 0x10], edx
// 004dc918  89542418             mov dword ptr [esp + 0x18], edx
// 004dc91c  0f8e20010000         jle 0x4dca42
// 004dc922  8954241c             mov dword ptr [esp + 0x1c], edx
// 004dc926  eb08                 jmp 0x4dc930
// 004dc928  8da42400000000       lea esp, [esp]
// 004dc92f  90                   nop 
// 004dc930  8bb190010000         mov esi, dword ptr [ecx + 0x190]
// 004dc936  0374241c             add esi, dword ptr [esp + 0x1c]
// 004dc93a  803e00               cmp byte ptr [esi], 0
// 004dc93d  7504                 jne 0x4dc943
// 004dc93f  ff442410             inc dword ptr [esp + 0x10]
// 004dc943  68bc979b00           push 0x9b97bc
// 004dc948  8d4c2440             lea ecx, [esp + 0x40]
// 004dc94c  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dc952  8d44243c             lea eax, [esp + 0x3c]
// 004dc956  50                   push eax
// 004dc957  8d7e08               lea edi, [esi + 8]
// 004dc95a  57                   push edi
// 004dc95b  c784241001000000000000 mov dword ptr [esp + 0x110], 0
// 004dc966  e8456b1100           call 0x5f34b0
// 004dc96b  83c408               add esp, 8
// 004dc96e  8d4c243c             lea ecx, [esp + 0x3c]
// 004dc972  8ad8                 mov bl, al
// 004dc974  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 004dc97f  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc985  84db                 test bl, bl
// 004dc987  7450                 je 0x4dc9d9
// 004dc989  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004dc98c  83c0f7               add eax, -9
// 004dc98f  50                   push eax
// 004dc990  6a09                 push 9
// 004dc992  8d4c2428             lea ecx, [esp + 0x28]
// 004dc996  51                   push ecx
// 004dc997  8bcf                 mov ecx, edi
// 004dc999  ff15a8b69800         call dword ptr [0x98b6a8]
// 004dc99f  8d542420             lea edx, [esp + 0x20]
// 004dc9a3  52                   push edx
// 004dc9a4  8bcd                 mov ecx, ebp
// 004dc9a6  c784240c01000001000000 mov dword ptr [esp + 0x10c], 1
// 004dc9b1  e89af9ffff           call 0x4dc350
// 004dc9b6  84c0                 test al, al
// 004dc9b8  7508                 jne 0x4dc9c2
// 004dc9ba  3806                 cmp byte ptr [esi], al
// 004dc9bc  0f8474010000         je 0x4dcb36
// 004dc9c2  8d4c2420             lea ecx, [esp + 0x20]
// 004dc9c6  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 004dc9d1  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc9d7  eb4b                 jmp 0x4dca24
// 004dc9d9  57                   push edi
// 004dc9da  8bcd                 mov ecx, ebp
// 004dc9dc  e86ff9ffff           call 0x4dc350
// 004dc9e1  84c0                 test al, al
// 004dc9e3  7516                 jne 0x4dc9fb
// 004dc9e5  3806                 cmp byte ptr [esi], al
// 004dc9e7  753b                 jne 0x4dca24
// 004dc9e9  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 004dc9ed  0f8287010000         jb 0x4dcb7a
// 004dc9f3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004dc9f6  e982010000           jmp 0x4dcb7d
// 004dc9fb  57                   push edi
// 004dc9fc  8bcd                 mov ecx, ebp
// 004dc9fe  e8ddf8ffff           call 0x4dc2e0
// 004dca03  8bf8                 mov edi, eax
// 004dca05  8b4744               mov eax, dword ptr [edi + 0x44]
// 004dca08  50                   push eax
// 004dca09  e842f8ffff           call 0x4dc250
// 004dca0e  8bd0                 mov edx, eax
// 004dca10  8b4624               mov eax, dword ptr [esi + 0x24]
// 004dca13  50                   push eax
// 004dca14  e837f8ffff           call 0x4dc250
// 004dca19  83c408               add esp, 8
// 004dca1c  3bd0                 cmp edx, eax
// 004dca1e  0f859b010000         jne 0x4dcbbf
// 004dca24  8b442418             mov eax, dword ptr [esp + 0x18]
// 004dca28  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dca2c  8344241c30           add dword ptr [esp + 0x1c], 0x30
// 004dca31  40                   inc eax
// 004dca32  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 004dca38  89442418             mov dword ptr [esp + 0x18], eax
// 004dca3c  0f8ceefeffff         jl 0x4dc930
// 004dca42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dca46  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 004dca49  0f8dcc020000         jge 0x4dcd1b
// 004dca4f  8b4508               mov eax, dword ptr [ebp + 8]
// 004dca52  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 004dca55  89442410             mov dword ptr [esp + 0x10], eax
// 004dca59  896c2418             mov dword ptr [esp + 0x18], ebp
// 004dca5d  85ed                 test ebp, ebp
// 004dca5f  0f8566020000         jne 0x4dcccb
// 004dca65  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004dca69  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004dca6d  c644243401           mov byte ptr [esp + 0x34], 1
// 004dca72  807c243401           cmp byte ptr [esp + 0x34], 1
// 004dca77  0f849e020000         je 0x4dcd1b
// 004dca7d  8b542414             mov edx, dword ptr [esp + 0x14]
// 004dca81  33ed                 xor ebp, ebp
// 004dca83  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 004dca89  7e3a                 jle 0x4dcac5
// 004dca8b  33f6                 xor esi, esi
// 004dca8d  8d4900               lea ecx, [ecx]
// 004dca90  8b442414             mov eax, dword ptr [esp + 0x14]
// 004dca94  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 004dca9a  03c6                 add eax, esi
// 004dca9c  8d4f04               lea ecx, [edi + 4]
// 004dca9f  51                   push ecx
// 004dcaa0  83c008               add eax, 8
// 004dcaa3  50                   push eax
// 004dcaa4  ff157cb69800         call dword ptr [0x98b67c]
// 004dcaaa  83c408               add esp, 8
// 004dcaad  84c0                 test al, al
// 004dcaaf  0f8540020000         jne 0x4dccf5
// 004dcab5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dcab9  45                   inc ebp
// 004dcaba  83c630               add esi, 0x30
// 004dcabd  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 004dcac3  7ccb                 jl 0x4dca90
// 004dcac5  6878979b00           push 0x9b9778
// 004dcaca  8d8c2494000000       lea ecx, [esp + 0x94]
// 004dcad1  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dcad7  8d4f04               lea ecx, [edi + 4]
// 004dcada  51                   push ecx
// 004dcadb  50                   push eax
// 004dcadc  8d8424b4000000       lea eax, [esp + 0xb4]
// 004dcae3  50                   push eax
// 004dcae4  c784241401000009000000 mov dword ptr [esp + 0x114], 9
// 004dcaef  ff159cb59800         call dword ptr [0x98b59c]
// 004dcaf5  6884169b00           push 0x9b1684
// 004dcafa  50                   push eax
// 004dcafb  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 004dcb02  51                   push ecx
// 004dcb03  c68424200100000a     mov byte ptr [esp + 0x120], 0xa
// 004dcb0b  ff1580b69800         call dword ptr [0x98b680]
// 004dcb11  83c418               add esp, 0x18
// 004dcb14  50                   push eax
// 004dcb15  8d4c2478             lea ecx, [esp + 0x78]
// 004dcb19  c684240c0100000b     mov byte ptr [esp + 0x10c], 0xb
// 004dcb21  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dcb27  688829aa00           push 0xaa2988
// 004dcb2c  8d542478             lea edx, [esp + 0x78]
// 004dcb30  52                   push edx
// 004dcb31  e8427d3100           call 0x7f4878
// 004dcb36  837c243810           cmp dword ptr [esp + 0x38], 0x10
// 004dcb3b  8b442424             mov eax, dword ptr [esp + 0x24]
// 004dcb3f  7304                 jae 0x4dcb45
// 004dcb41  8d442424             lea eax, [esp + 0x24]
// 004dcb45  50                   push eax
// 004dcb46  8d542478             lea edx, [esp + 0x78]
// 004dcb4a  6838979b00           push 0x9b9738
// 004dcb4f  52                   push edx
// 004dcb50  e8ebcd1100           call 0x5f9940
// 004dcb55  83c40c               add esp, 0xc
// 004dcb58  50                   push eax
// 004dcb59  8d4c2440             lea ecx, [esp + 0x40]
// 004dcb5d  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 004dcb65  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dcb6b  688829aa00           push 0xaa2988
// 004dcb70  8d442440             lea eax, [esp + 0x40]
// 004dcb74  50                   push eax
// 004dcb75  e8fe7c3100           call 0x7f4878
// 004dcb7a  8d7e0c               lea edi, [esi + 0xc]
// 004dcb7d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004dcb80  51                   push ecx
// 004dcb81  e86ad9ffff           call 0x4da4f0
// 004dcb86  50                   push eax
// 004dcb87  57                   push edi
// 004dcb88  8d542464             lea edx, [esp + 0x64]
// 004dcb8c  68e8969b00           push 0x9b96e8
// 004dcb91  52                   push edx
// 004dcb92  e8a9cd1100           call 0x5f9940
// 004dcb97  83c414               add esp, 0x14
// 004dcb9a  50                   push eax
// 004dcb9b  8d4c2440             lea ecx, [esp + 0x40]
// 004dcb9f  c784240c01000003000000 mov dword ptr [esp + 0x10c], 3
// 004dcbaa  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dcbb0  688829aa00           push 0xaa2988
// 004dcbb5  8d442440             lea eax, [esp + 0x40]
// 004dcbb9  50                   push eax
// 004dcbba  e8b97c3100           call 0x7f4878
// 004dcbbf  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004dcbc2  51                   push ecx
// 004dcbc3  e828d9ffff           call 0x4da4f0
// 004dcbc8  83c404               add esp, 4
// 004dcbcb  50                   push eax
// 004dcbcc  8d4c2440             lea ecx, [esp + 0x40]
// 004dcbd0  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dcbd6  8b5744               mov edx, dword ptr [edi + 0x44]
// 004dcbd9  52                   push edx
// 004dcbda  c784240c01000004000000 mov dword ptr [esp + 0x10c], 4
// 004dcbe5  e806d9ffff           call 0x4da4f0
// 004dcbea  83c404               add esp, 4
// 004dcbed  50                   push eax
// 004dcbee  8d4c2424             lea ecx, [esp + 0x24]
// 004dcbf2  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dcbf8  8b4624               mov eax, dword ptr [esi + 0x24]
// 004dcbfb  50                   push eax
// 004dcbfc  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 004dcc04  e847f6ffff           call 0x4dc250
// 004dcc09  50                   push eax
// 004dcc0a  e8e1d8ffff           call 0x4da4f0
// 004dcc0f  83c408               add esp, 8
// 004dcc12  50                   push eax
// 004dcc13  8d4c245c             lea ecx, [esp + 0x5c]
// 004dcc17  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dcc1d  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004dcc20  51                   push ecx
// 004dcc21  c684240c01000006     mov byte ptr [esp + 0x10c], 6
// 004dcc29  e822f6ffff           call 0x4dc250
// 004dcc2e  50                   push eax
// 004dcc2f  e8bcd8ffff           call 0x4da4f0
// 004dcc34  83c408               add esp, 8
// 004dcc37  50                   push eax
// 004dcc38  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 004dcc3f  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dcc45  8b442438             mov eax, dword ptr [esp + 0x38]
// 004dcc49  8b542424             mov edx, dword ptr [esp + 0x24]
// 004dcc4d  bb10000000           mov ebx, 0x10
// 004dcc52  c684240801000007     mov byte ptr [esp + 0x108], 7
// 004dcc5a  8bfa                 mov edi, edx
// 004dcc5c  3bc3                 cmp eax, ebx
// 004dcc5e  7306                 jae 0x4dcc66
// 004dcc60  8d7c2424             lea edi, [esp + 0x24]
// 004dcc64  8bd7                 mov edx, edi
// 004dcc66  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004dcc6a  395c2470             cmp dword ptr [esp + 0x70], ebx
// 004dcc6e  7304                 jae 0x4dcc74
// 004dcc70  8d4c245c             lea ecx, [esp + 0x5c]
// 004dcc74  8b442440             mov eax, dword ptr [esp + 0x40]
// 004dcc78  395c2454             cmp dword ptr [esp + 0x54], ebx
// 004dcc7c  7304                 jae 0x4dcc82
// 004dcc7e  8d442440             lea eax, [esp + 0x40]
// 004dcc82  395e20               cmp dword ptr [esi + 0x20], ebx
// 004dcc85  7205                 jb 0x4dcc8c
// 004dcc87  8b760c               mov esi, dword ptr [esi + 0xc]
// 004dcc8a  eb03                 jmp 0x4dcc8f
// 004dcc8c  83c60c               add esi, 0xc
// 004dcc8f  57                   push edi
// 004dcc90  52                   push edx
// 004dcc91  51                   push ecx
// 004dcc92  50                   push eax
// 004dcc93  56                   push esi
// 004dcc94  8d9424a4000000       lea edx, [esp + 0xa4]
// 004dcc9b  6888969b00           push 0x9b9688
// 004dcca0  52                   push edx
// 004dcca1  e89acc1100           call 0x5f9940
// 004dcca6  83c41c               add esp, 0x1c
// 004dcca9  50                   push eax
// 004dccaa  8d4c2478             lea ecx, [esp + 0x78]
// 004dccae  c684240c01000008     mov byte ptr [esp + 0x10c], 8
// 004dccb6  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dccbc  688829aa00           push 0xaa2988
// 004dccc1  8d442478             lea eax, [esp + 0x78]
// 004dccc5  50                   push eax
// 004dccc6  e8ad7b3100           call 0x7f4878
// 004dcccb  8b38                 mov edi, dword ptr [eax]
// 004dcccd  33db                 xor ebx, ebx
// 004dcccf  885c2434             mov byte ptr [esp + 0x34], bl
// 004dccd3  85ff                 test edi, edi
// 004dccd5  0f8597fdffff         jne 0x4dca72
// 004dccdb  eb03                 jmp 0x4dcce0
// 004dccdd  8d4900               lea ecx, [ecx]
// 004dcce0  43                   inc ebx
// 004dcce1  3bdd                 cmp ebx, ebp
// 004dcce3  0f8d84fdffff         jge 0x4dca6d
// 004dcce9  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 004dccec  85ff                 test edi, edi
// 004dccee  74f0                 je 0x4dcce0
// 004dccf0  e97dfdffff           jmp 0x4dca72
// 004dccf5  8b7f68               mov edi, dword ptr [edi + 0x68]
// 004dccf8  85ff                 test edi, edi
// 004dccfa  0f8572fdffff         jne 0x4dca72
// 004dcd00  43                   inc ebx
// 004dcd01  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 004dcd05  0f8d62fdffff         jge 0x4dca6d
// 004dcd0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004dcd0f  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 004dcd12  85ff                 test edi, edi
// 004dcd14  74ea                 je 0x4dcd00
// 004dcd16  e957fdffff           jmp 0x4dca72
// 004dcd1b  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 004dcd22  5f                   pop edi
// 004dcd23  5e                   pop esi
// 004dcd24  5d                   pop ebp
// 004dcd25  5b                   pop ebx
// 004dcd26  64890d00000000       mov dword ptr fs:[0], ecx
// 004dcd2d  81c4fc000000         add esp, 0xfc
// 004dcd33  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
