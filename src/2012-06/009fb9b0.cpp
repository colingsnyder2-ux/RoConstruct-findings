// roc 2012-06 009fb9b0  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb9b0
//
// 009fb9b0  81ec84000000         sub esp, 0x84
// 009fb9b6  53                   push ebx
// 009fb9b7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 009fb9be  8b4360               mov eax, dword ptr [ebx + 0x60]
// 009fb9c1  55                   push ebp
// 009fb9c2  56                   push esi
// 009fb9c3  57                   push edi
// 009fb9c4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 009fb9cb  85c0                 test eax, eax
// 009fb9cd  741d                 je 0x9fb9ec
// 009fb9cf  83c9ff               or ecx, 0xffffffff
// 009fb9d2  83783000             cmp dword ptr [eax + 0x30], 0
// 009fb9d6  750b                 jne 0x9fb9e3
// 009fb9d8  833800               cmp dword ptr [eax], 0
// 009fb9db  7506                 jne 0x9fb9e3
// 009fb9dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 009fb9e1  eb14                 jmp 0x9fb9f7
// 009fb9e3  8b4358               mov eax, dword ptr [ebx + 0x58]
// 009fb9e6  89442410             mov dword ptr [esp + 0x10], eax
// 009fb9ea  eb0b                 jmp 0x9fb9f7
// 009fb9ec  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 009fb9ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 009fb9f7  8b5320               mov edx, dword ptr [ebx + 0x20]
// 009fb9fa  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 009fb9fd  894c2414             mov dword ptr [esp + 0x14], ecx
// 009fba01  85d2                 test edx, edx
// 009fba03  0f8eaf0b0000         jle 0x9fc5b8
// 009fba09  8b4308               mov eax, dword ptr [ebx + 8]
// 009fba0c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 009fba0f  2b4304               sub eax, dword ptr [ebx + 4]
// 009fba12  40                   inc eax
// 009fba13  85c0                 test eax, eax
// 009fba15  7e14                 jle 0x9fba2b
// 009fba17  8b13                 mov edx, dword ptr [ebx]
// 009fba19  8b4204               mov eax, dword ptr [edx + 4]
// 009fba1c  8bcb                 mov ecx, ebx
// 009fba1e  ffd0                 call eax
// 009fba20  85c0                 test eax, eax
// 009fba22  7407                 je 0x9fba2b
// 009fba24  bf01000000           mov edi, 1
// 009fba29  eb02                 jmp 0x9fba2d
// 009fba2b  33ff                 xor edi, edi
// 009fba2d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009fba30  8b4338               mov eax, dword ptr [ebx + 0x38]
// 009fba33  8bf1                 mov esi, ecx
// 009fba35  2bf0                 sub esi, eax
// 009fba37  2b4328               sub eax, dword ptr [ebx + 0x28]
// 009fba3a  8944244c             mov dword ptr [esp + 0x4c], eax
// 009fba3e  85ff                 test edi, edi
// 009fba40  7405                 je 0x9fba47
// 009fba42  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 009fba45  7e06                 jle 0x9fba4d
// 009fba47  33f6                 xor esi, esi
// 009fba49  8974244c             mov dword ptr [esp + 0x4c], esi
// 009fba4d  8bcb                 mov ecx, ebx
// 009fba4f  e88c0a0700           call 0xa6c4e0
// 009fba54  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 009fba58  89442448             mov dword ptr [esp + 0x48], eax
// 009fba5c  0f84b1050000         je 0x9fc013
// 009fba62  8d4b48               lea ecx, [ebx + 0x48]
// 009fba65  51                   push ecx
// 009fba66  8d942488000000       lea edx, [esp + 0x88]
// 009fba6d  52                   push edx
// 009fba6e  ff15ec3ab200         call dword ptr [0xb23aec]
// 009fba74  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 009fba77  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 009fba7e  8b5328               mov edx, dword ptr [ebx + 0x28]
// 009fba81  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 009fba88  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009fba8c  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 009fba93  896c2424             mov dword ptr [esp + 0x24], ebp
// 009fba97  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009fba9b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 009fba9f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 009fbaa3  89542444             mov dword ptr [esp + 0x44], edx
// 009fbaa7  89542454             mov dword ptr [esp + 0x54], edx
// 009fbaab  89542474             mov dword ptr [esp + 0x74], edx
// 009fbaaf  03d5                 add edx, ebp
// 009fbab1  03f2                 add esi, edx
// 009fbab3  89442438             mov dword ptr [esp + 0x38], eax
// 009fbab7  89442418             mov dword ptr [esp + 0x18], eax
// 009fbabb  89442450             mov dword ptr [esp + 0x50], eax
// 009fbabf  89442470             mov dword ptr [esp + 0x70], eax
// 009fbac3  89442428             mov dword ptr [esp + 0x28], eax
// 009fbac7  89442460             mov dword ptr [esp + 0x60], eax
// 009fbacb  8b442448             mov eax, dword ptr [esp + 0x48]
// 009fbacf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 009fbad3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009fbada  8954247c             mov dword ptr [esp + 0x7c], edx
// 009fbade  8954242c             mov dword ptr [esp + 0x2c], edx
// 009fbae2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009fbae6  894c2440             mov dword ptr [esp + 0x40], ecx
// 009fbaea  894c2420             mov dword ptr [esp + 0x20], ecx
// 009fbaee  894c2458             mov dword ptr [esp + 0x58], ecx
// 009fbaf2  894c2478             mov dword ptr [esp + 0x78], ecx
// 009fbaf6  894c2430             mov dword ptr [esp + 0x30], ecx
// 009fbafa  89742434             mov dword ptr [esp + 0x34], esi
// 009fbafe  89742464             mov dword ptr [esp + 0x64], esi
// 009fbb02  894c2468             mov dword ptr [esp + 0x68], ecx
// 009fbb06  8954246c             mov dword ptr [esp + 0x6c], edx
// 009fbb0a  83f803               cmp eax, 3
// 009fbb0d  0f85fc010000         jne 0x9fbd0f
// 009fbb13  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 009fbb1a  83c620               add esi, 0x20
// 009fbb1d  8bce                 mov ecx, esi
// 009fbb1f  e84c9dffff           call 0x9f5870
// 009fbb24  85c0                 test eax, eax
// 009fbb26  0f8443030000         je 0x9fbe6f
// 009fbb2c  85ff                 test edi, edi
// 009fbb2e  7505                 jne 0x9fbb35
// 009fbb30  8d4f04               lea ecx, [edi + 4]
// 009fbb33  eb1a                 jmp 0x9fbb4f
// 009fbb35  b83c000000           mov eax, 0x3c
// 009fbb3a  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbb3e  7505                 jne 0x9fbb45
// 009fbb40  8d48c7               lea ecx, [eax - 0x39]
// 009fbb43  eb0a                 jmp 0x9fbb4f
// 009fbb45  33c9                 xor ecx, ecx
// 009fbb47  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbb4b  0f94c1               sete cl
// 009fbb4e  41                   inc ecx
// 009fbb4f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 009fbb56  85db                 test ebx, ebx
// 009fbb58  7504                 jne 0x9fbb5e
// 009fbb5a  33c0                 xor eax, eax
// 009fbb5c  eb03                 jmp 0x9fbb61
// 009fbb5e  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbb61  6a00                 push 0
// 009fbb63  8d54243c             lea edx, [esp + 0x3c]
// 009fbb67  52                   push edx
// 009fbb68  51                   push ecx
// 009fbb69  6a01                 push 1
// 009fbb6b  50                   push eax
// 009fbb6c  8bce                 mov ecx, esi
// 009fbb6e  e82d9affff           call 0x9f55a0
// 009fbb73  85ff                 test edi, edi
// 009fbb75  7505                 jne 0x9fbb7c
// 009fbb77  8d4f08               lea ecx, [edi + 8]
// 009fbb7a  eb1c                 jmp 0x9fbb98
// 009fbb7c  b83d000000           mov eax, 0x3d
// 009fbb81  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbb85  7505                 jne 0x9fbb8c
// 009fbb87  8d48ca               lea ecx, [eax - 0x36]
// 009fbb8a  eb0c                 jmp 0x9fbb98
// 009fbb8c  33c9                 xor ecx, ecx
// 009fbb8e  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbb92  0f94c1               sete cl
// 009fbb95  83c105               add ecx, 5
// 009fbb98  85db                 test ebx, ebx
// 009fbb9a  7504                 jne 0x9fbba0
// 009fbb9c  33c0                 xor eax, eax
// 009fbb9e  eb03                 jmp 0x9fbba3
// 009fbba0  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbba3  6a00                 push 0
// 009fbba5  8d54241c             lea edx, [esp + 0x1c]
// 009fbba9  52                   push edx
// 009fbbaa  51                   push ecx
// 009fbbab  6a01                 push 1
// 009fbbad  50                   push eax
// 009fbbae  8bce                 mov ecx, esi
// 009fbbb0  e8eb99ffff           call 0x9f55a0
// 009fbbb5  8b2df03ab200         mov ebp, dword ptr [0xb23af0]
// 009fbbbb  8d442450             lea eax, [esp + 0x50]
// 009fbbbf  50                   push eax
// 009fbbc0  ffd5                 call ebp
// 009fbbc2  85c0                 test eax, eax
// 009fbbc4  0f85ee090000         jne 0x9fc5b8
// 009fbbca  8d4c2470             lea ecx, [esp + 0x70]
// 009fbbce  51                   push ecx
// 009fbbcf  ffd5                 call ebp
// 009fbbd1  85c0                 test eax, eax
// 009fbbd3  7540                 jne 0x9fbc15
// 009fbbd5  85ff                 test edi, edi
// 009fbbd7  7505                 jne 0x9fbbde
// 009fbbd9  8d4804               lea ecx, [eax + 4]
// 009fbbdc  eb1a                 jmp 0x9fbbf8
// 009fbbde  b83e000000           mov eax, 0x3e
// 009fbbe3  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbbe7  7505                 jne 0x9fbbee
// 009fbbe9  8d48c5               lea ecx, [eax - 0x3b]
// 009fbbec  eb0a                 jmp 0x9fbbf8
// 009fbbee  33c9                 xor ecx, ecx
// 009fbbf0  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbbf4  0f94c1               sete cl
// 009fbbf7  41                   inc ecx
// 009fbbf8  85db                 test ebx, ebx
// 009fbbfa  7504                 jne 0x9fbc00
// 009fbbfc  33c0                 xor eax, eax
// 009fbbfe  eb03                 jmp 0x9fbc03
// 009fbc00  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbc03  6a00                 push 0
// 009fbc05  8d542474             lea edx, [esp + 0x74]
// 009fbc09  52                   push edx
// 009fbc0a  51                   push ecx
// 009fbc0b  6a06                 push 6
// 009fbc0d  50                   push eax
// 009fbc0e  8bce                 mov ecx, esi
// 009fbc10  e88b99ffff           call 0x9f55a0
// 009fbc15  8d442428             lea eax, [esp + 0x28]
// 009fbc19  50                   push eax
// 009fbc1a  ffd5                 call ebp
// 009fbc1c  85c0                 test eax, eax
// 009fbc1e  0f858f000000         jne 0x9fbcb3
// 009fbc24  b840000000           mov eax, 0x40
// 009fbc29  85ff                 test edi, edi
// 009fbc2b  7505                 jne 0x9fbc32
// 009fbc2d  8d48c4               lea ecx, [eax - 0x3c]
// 009fbc30  eb17                 jmp 0x9fbc49
// 009fbc32  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbc36  7507                 jne 0x9fbc3f
// 009fbc38  b903000000           mov ecx, 3
// 009fbc3d  eb0a                 jmp 0x9fbc49
// 009fbc3f  33c9                 xor ecx, ecx
// 009fbc41  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbc45  0f94c1               sete cl
// 009fbc48  41                   inc ecx
// 009fbc49  85db                 test ebx, ebx
// 009fbc4b  7504                 jne 0x9fbc51
// 009fbc4d  33c0                 xor eax, eax
// 009fbc4f  eb03                 jmp 0x9fbc54
// 009fbc51  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbc54  6a00                 push 0
// 009fbc56  8d54242c             lea edx, [esp + 0x2c]
// 009fbc5a  52                   push edx
// 009fbc5b  51                   push ecx
// 009fbc5c  6a03                 push 3
// 009fbc5e  50                   push eax
// 009fbc5f  8bce                 mov ecx, esi
// 009fbc61  e83a99ffff           call 0x9f55a0
// 009fbc66  8b442434             mov eax, dword ptr [esp + 0x34]
// 009fbc6a  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 009fbc6e  83f80d               cmp eax, 0xd
// 009fbc71  7e40                 jle 0x9fbcb3
// 009fbc73  85ff                 test edi, edi
// 009fbc75  7505                 jne 0x9fbc7c
// 009fbc77  8d4f04               lea ecx, [edi + 4]
// 009fbc7a  eb1a                 jmp 0x9fbc96
// 009fbc7c  b840000000           mov eax, 0x40
// 009fbc81  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbc85  7505                 jne 0x9fbc8c
// 009fbc87  8d48c3               lea ecx, [eax - 0x3d]
// 009fbc8a  eb0a                 jmp 0x9fbc96
// 009fbc8c  33c9                 xor ecx, ecx
// 009fbc8e  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbc92  0f94c1               sete cl
// 009fbc95  41                   inc ecx
// 009fbc96  85db                 test ebx, ebx
// 009fbc98  7504                 jne 0x9fbc9e
// 009fbc9a  33c0                 xor eax, eax
// 009fbc9c  eb03                 jmp 0x9fbca1
// 009fbc9e  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbca1  6a00                 push 0
// 009fbca3  8d54242c             lea edx, [esp + 0x2c]
// 009fbca7  52                   push edx
// 009fbca8  51                   push ecx
// 009fbca9  6a09                 push 9
// 009fbcab  50                   push eax
// 009fbcac  8bce                 mov ecx, esi
// 009fbcae  e8ed98ffff           call 0x9f55a0
// 009fbcb3  8d442460             lea eax, [esp + 0x60]
// 009fbcb7  50                   push eax
// 009fbcb8  ffd5                 call ebp
// 009fbcba  85c0                 test eax, eax
// 009fbcbc  0f85f6080000         jne 0x9fc5b8
// 009fbcc2  85ff                 test edi, edi
// 009fbcc4  7505                 jne 0x9fbccb
// 009fbcc6  8d4804               lea ecx, [eax + 4]
// 009fbcc9  eb1a                 jmp 0x9fbce5
// 009fbccb  b83f000000           mov eax, 0x3f
// 009fbcd0  39442410             cmp dword ptr [esp + 0x10], eax
// 009fbcd4  7505                 jne 0x9fbcdb
// 009fbcd6  8d48c4               lea ecx, [eax - 0x3c]
// 009fbcd9  eb0a                 jmp 0x9fbce5
// 009fbcdb  33c9                 xor ecx, ecx
// 009fbcdd  39442414             cmp dword ptr [esp + 0x14], eax
// 009fbce1  0f94c1               sete cl
// 009fbce4  41                   inc ecx
// 009fbce5  85db                 test ebx, ebx
// 009fbce7  7504                 jne 0x9fbced
// 009fbce9  33c0                 xor eax, eax
// 009fbceb  eb03                 jmp 0x9fbcf0
// 009fbced  8b4304               mov eax, dword ptr [ebx + 4]
// 009fbcf0  6a00                 push 0
// 009fbcf2  8d542464             lea edx, [esp + 0x64]
// 009fbcf6  52                   push edx
// 009fbcf7  51                   push ecx
// 009fbcf8  6a07                 push 7
// 009fbcfa  50                   push eax
// 009fbcfb  8bce                 mov ecx, esi
// 009fbcfd  e89e98ffff           call 0x9f55a0
// 009fbd02  5f                   pop edi
// 009fbd03  5e                   pop esi
// 009fbd04  5d                   pop ebp
// 009fbd05  5b                   pop ebx
// 009fbd06  81c484000000         add esp, 0x84
// 009fbd0c  c20800               ret 8
// 009fbd0f  83f802               cmp eax, 2
// 009fbd12  0f8557010000         jne 0x9fbe6f
// 009fbd18  e8431bfcff           call 0x9bd860
// 009fbd1d  6a0f                 push 0xf
// 009fbd1f  8bc8                 mov ecx, eax
// 009fbd21  e8ba12fcff           call 0x9bcfe0
// 009fbd26  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 009fbd2d  50                   push eax
// 009fbd2e  8d44243c             lea eax, [esp + 0x3c]
// 009fbd32  50                   push eax
// 009fbd33  8bce                 mov ecx, esi
// 009fbd35  e87271f8ff           call 0x982eac
// 009fbd3a  85ff                 test edi, edi
// 009fbd3c  742e                 je 0x9fbd6c
// 009fbd3e  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 009fbd43  7527                 jne 0x9fbd6c
// 009fbd45  e8161bfcff           call 0x9bd860
// 009fbd4a  6a14                 push 0x14
// 009fbd4c  8bc8                 mov ecx, eax
// 009fbd4e  e88d12fcff           call 0x9bcfe0
// 009fbd53  8be8                 mov ebp, eax
// 009fbd55  e8061bfcff           call 0x9bd860
// 009fbd5a  6a10                 push 0x10
// 009fbd5c  8bc8                 mov ecx, eax
// 009fbd5e  e87d12fcff           call 0x9bcfe0
// 009fbd63  55                   push ebp
// 009fbd64  50                   push eax
// 009fbd65  8d4c2440             lea ecx, [esp + 0x40]
// 009fbd69  51                   push ecx
// 009fbd6a  eb25                 jmp 0x9fbd91
// 009fbd6c  e8ef1afcff           call 0x9bd860
// 009fbd71  6a10                 push 0x10
// 009fbd73  8bc8                 mov ecx, eax
// 009fbd75  e86612fcff           call 0x9bcfe0
// 009fbd7a  8be8                 mov ebp, eax
// 009fbd7c  e8df1afcff           call 0x9bd860
// 009fbd81  6a14                 push 0x14
// 009fbd83  8bc8                 mov ecx, eax
// 009fbd85  e85612fcff           call 0x9bcfe0
// 009fbd8a  55                   push ebp
// 009fbd8b  50                   push eax
// 009fbd8c  8d542440             lea edx, [esp + 0x40]
// 009fbd90  52                   push edx
// 009fbd91  8bce                 mov ecx, esi
// 009fbd93  e80e71f8ff           call 0x982ea6
// 009fbd98  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009fbd9c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009fbda0  57                   push edi
// 009fbda1  6a01                 push 1
// 009fbda3  6a00                 push 0
// 009fbda5  83ec10               sub esp, 0x10
// 009fbda8  8bc4                 mov eax, esp
// 009fbdaa  8908                 mov dword ptr [eax], ecx
// 009fbdac  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009fbdb0  895004               mov dword ptr [eax + 4], edx
// 009fbdb3  8b542460             mov edx, dword ptr [esp + 0x60]
// 009fbdb7  894808               mov dword ptr [eax + 8], ecx
// 009fbdba  56                   push esi
// 009fbdbb  89500c               mov dword ptr [eax + 0xc], edx
// 009fbdbe  e8bdfaffff           call 0x9fb880
// 009fbdc3  83c420               add esp, 0x20
// 009fbdc6  e8951afcff           call 0x9bd860
// 009fbdcb  6a0f                 push 0xf
// 009fbdcd  8bc8                 mov ecx, eax
// 009fbdcf  e80c12fcff           call 0x9bcfe0
// 009fbdd4  50                   push eax
// 009fbdd5  8d44241c             lea eax, [esp + 0x1c]
// 009fbdd9  50                   push eax
// 009fbdda  8bce                 mov ecx, esi
// 009fbddc  e8cb70f8ff           call 0x982eac
// 009fbde1  85ff                 test edi, edi
// 009fbde3  742e                 je 0x9fbe13
// 009fbde5  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 009fbdea  7527                 jne 0x9fbe13
// 009fbdec  e86f1afcff           call 0x9bd860
// 009fbdf1  6a14                 push 0x14
// 009fbdf3  8bc8                 mov ecx, eax
// 009fbdf5  e8e611fcff           call 0x9bcfe0
// 009fbdfa  8be8                 mov ebp, eax
// 009fbdfc  e85f1afcff           call 0x9bd860
// 009fbe01  6a10                 push 0x10
// 009fbe03  8bc8                 mov ecx, eax
// 009fbe05  e8d611fcff           call 0x9bcfe0
// 009fbe0a  55                   push ebp
// 009fbe0b  50                   push eax
// 009fbe0c  8d4c2420             lea ecx, [esp + 0x20]
// 009fbe10  51                   push ecx
// 009fbe11  eb25                 jmp 0x9fbe38
// 009fbe13  e8481afcff           call 0x9bd860
// 009fbe18  6a10                 push 0x10
// 009fbe1a  8bc8                 mov ecx, eax
// 009fbe1c  e8bf11fcff           call 0x9bcfe0
// 009fbe21  8be8                 mov ebp, eax
// 009fbe23  e8381afcff           call 0x9bd860
// 009fbe28  6a14                 push 0x14
// 009fbe2a  8bc8                 mov ecx, eax
// 009fbe2c  e8af11fcff           call 0x9bcfe0
// 009fbe31  55                   push ebp
// 009fbe32  50                   push eax
// 009fbe33  8d542420             lea edx, [esp + 0x20]
// 009fbe37  52                   push edx
// 009fbe38  8bce                 mov ecx, esi
// 009fbe3a  e86770f8ff           call 0x982ea6
// 009fbe3f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fbe43  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009fbe47  57                   push edi
// 009fbe48  6a00                 push 0
// 009fbe4a  6a00                 push 0
// 009fbe4c  83ec10               sub esp, 0x10
// 009fbe4f  8bc4                 mov eax, esp
// 009fbe51  8908                 mov dword ptr [eax], ecx
// 009fbe53  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009fbe57  895004               mov dword ptr [eax + 4], edx
// 009fbe5a  8b542440             mov edx, dword ptr [esp + 0x40]
// 009fbe5e  894808               mov dword ptr [eax + 8], ecx
// 009fbe61  56                   push esi
// 009fbe62  89500c               mov dword ptr [eax + 0xc], edx
// 009fbe65  e816faffff           call 0x9fb880
// 009fbe6a  83c420               add esp, 0x20
// 009fbe6d  eb72                 jmp 0x9fbee1
// 009fbe6f  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 009fbe76  85f6                 test esi, esi
// 009fbe78  7504                 jne 0x9fbe7e
// 009fbe7a  33c0                 xor eax, eax
// 009fbe7c  eb03                 jmp 0x9fbe81
// 009fbe7e  8b4604               mov eax, dword ptr [esi + 4]
// 009fbe81  f7df                 neg edi
// 009fbe83  1bff                 sbb edi, edi
// 009fbe85  8b2d383bb200         mov ebp, dword ptr [0xb23b38]
// 009fbe8b  33c9                 xor ecx, ecx
// 009fbe8d  81e700ffffff         and edi, 0xffffff00
// 009fbe93  81c700010000         add edi, 0x100
// 009fbe99  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 009fbe9e  8d542438             lea edx, [esp + 0x38]
// 009fbea2  0f95c1               setne cl
// 009fbea5  49                   dec ecx
// 009fbea6  81e100020000         and ecx, 0x200
// 009fbeac  0bcf                 or ecx, edi
// 009fbeae  51                   push ecx
// 009fbeaf  6a03                 push 3
// 009fbeb1  52                   push edx
// 009fbeb2  50                   push eax
// 009fbeb3  ffd5                 call ebp
// 009fbeb5  85f6                 test esi, esi
// 009fbeb7  7504                 jne 0x9fbebd
// 009fbeb9  33c0                 xor eax, eax
// 009fbebb  eb03                 jmp 0x9fbec0
// 009fbebd  8b4604               mov eax, dword ptr [esi + 4]
// 009fbec0  33c9                 xor ecx, ecx
// 009fbec2  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 009fbec7  8d542418             lea edx, [esp + 0x18]
// 009fbecb  0f95c1               setne cl
// 009fbece  49                   dec ecx
// 009fbecf  81e100020000         and ecx, 0x200
// 009fbed5  0bcf                 or ecx, edi
// 009fbed7  83c901               or ecx, 1
// 009fbeda  51                   push ecx
// 009fbedb  6a03                 push 3
// 009fbedd  52                   push edx
// 009fbede  50                   push eax
// 009fbedf  ffd5                 call ebp
// 009fbee1  8b03                 mov eax, dword ptr [ebx]
// 009fbee3  8b5008               mov edx, dword ptr [eax + 8]
// 009fbee6  8bcb                 mov ecx, ebx
// 009fbee8  ffd2                 call edx
// 009fbeea  85c0                 test eax, eax
// 009fbeec  7504                 jne 0x9fbef2
// 009fbeee  33d2                 xor edx, edx
// 009fbef0  eb03                 jmp 0x9fbef5
// 009fbef2  8b5020               mov edx, dword ptr [eax + 0x20]
// 009fbef5  85f6                 test esi, esi
// 009fbef7  7504                 jne 0x9fbefd
// 009fbef9  33c9                 xor ecx, ecx
// 009fbefb  eb03                 jmp 0x9fbf00
// 009fbefd  8b4e04               mov ecx, dword ptr [esi + 4]
// 009fbf00  85c0                 test eax, eax
// 009fbf02  7403                 je 0x9fbf07
// 009fbf04  8b4020               mov eax, dword ptr [eax + 0x20]
// 009fbf07  52                   push edx
// 009fbf08  51                   push ecx
// 009fbf09  6837010000           push 0x137
// 009fbf0e  50                   push eax
// 009fbf0f  ff15b43ab200         call dword ptr [0xb23ab4]
// 009fbf15  85f6                 test esi, esi
// 009fbf17  7504                 jne 0x9fbf1d
// 009fbf19  33c9                 xor ecx, ecx
// 009fbf1b  eb03                 jmp 0x9fbf20
// 009fbf1d  8b4e04               mov ecx, dword ptr [esi + 4]
// 009fbf20  50                   push eax
// 009fbf21  8d442454             lea eax, [esp + 0x54]
// 009fbf25  50                   push eax
// 009fbf26  51                   push ecx
// 009fbf27  ff157c3cb200         call dword ptr [0xb23c7c]
// 009fbf2d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009fbf31  8b2dc03cb200         mov ebp, dword ptr [0xb23cc0]
// 009fbf37  83fb3e               cmp ebx, 0x3e
// 009fbf3a  7513                 jne 0x9fbf4f
// 009fbf3c  85f6                 test esi, esi
// 009fbf3e  7504                 jne 0x9fbf44
// 009fbf40  33c0                 xor eax, eax
// 009fbf42  eb03                 jmp 0x9fbf47
// 009fbf44  8b4604               mov eax, dword ptr [esi + 4]
// 009fbf47  8d4c2470             lea ecx, [esp + 0x70]
// 009fbf4b  51                   push ecx
// 009fbf4c  50                   push eax
// 009fbf4d  ffd5                 call ebp
// 009fbf4f  8b3df03ab200         mov edi, dword ptr [0xb23af0]
// 009fbf55  8d542450             lea edx, [esp + 0x50]
// 009fbf59  52                   push edx
// 009fbf5a  ffd7                 call edi
// 009fbf5c  85c0                 test eax, eax
// 009fbf5e  7579                 jne 0x9fbfd9
// 009fbf60  8d442428             lea eax, [esp + 0x28]
// 009fbf64  50                   push eax
// 009fbf65  ffd7                 call edi
// 009fbf67  85c0                 test eax, eax
// 009fbf69  756e                 jne 0x9fbfd9
// 009fbf6b  e8f018fcff           call 0x9bd860
// 009fbf70  6a0f                 push 0xf
// 009fbf72  8bc8                 mov ecx, eax
// 009fbf74  e86710fcff           call 0x9bcfe0
// 009fbf79  50                   push eax
// 009fbf7a  8d4c242c             lea ecx, [esp + 0x2c]
// 009fbf7e  51                   push ecx
// 009fbf7f  8bce                 mov ecx, esi
// 009fbf81  e8266ff8ff           call 0x982eac
// 009fbf86  837c244802           cmp dword ptr [esp + 0x48], 2
// 009fbf8b  752e                 jne 0x9fbfbb
// 009fbf8d  e8ce18fcff           call 0x9bd860
// 009fbf92  6a10                 push 0x10
// 009fbf94  8bc8                 mov ecx, eax
// 009fbf96  e84510fcff           call 0x9bcfe0
// 009fbf9b  8bf8                 mov edi, eax
// 009fbf9d  e8be18fcff           call 0x9bd860
// 009fbfa2  6a14                 push 0x14
// 009fbfa4  8bc8                 mov ecx, eax
// 009fbfa6  e83510fcff           call 0x9bcfe0
// 009fbfab  57                   push edi
// 009fbfac  50                   push eax
// 009fbfad  8d542430             lea edx, [esp + 0x30]
// 009fbfb1  52                   push edx
// 009fbfb2  8bce                 mov ecx, esi
// 009fbfb4  e8ed6ef8ff           call 0x982ea6
// 009fbfb9  eb1e                 jmp 0x9fbfd9
// 009fbfbb  85f6                 test esi, esi
// 009fbfbd  7504                 jne 0x9fbfc3
// 009fbfbf  33c0                 xor eax, eax
// 009fbfc1  eb03                 jmp 0x9fbfc6
// 009fbfc3  8b4604               mov eax, dword ptr [esi + 4]
// 009fbfc6  680f200000           push 0x200f
// 009fbfcb  6a05                 push 5
// 009fbfcd  8d4c2430             lea ecx, [esp + 0x30]
// 009fbfd1  51                   push ecx
// 009fbfd2  50                   push eax
// 009fbfd3  ff15683cb200         call dword ptr [0xb23c68]
// 009fbfd9  83fb3f               cmp ebx, 0x3f
// 009fbfdc  0f85d6050000         jne 0x9fc5b8
// 009fbfe2  85f6                 test esi, esi
// 009fbfe4  7515                 jne 0x9fbffb
// 009fbfe6  8d542460             lea edx, [esp + 0x60]
// 009fbfea  52                   push edx
// 009fbfeb  56                   push esi
// 009fbfec  ffd5                 call ebp
// 009fbfee  5f                   pop edi
// 009fbfef  5e                   pop esi
// 009fbff0  5d                   pop ebp
// 009fbff1  5b                   pop ebx
// 009fbff2  81c484000000         add esp, 0x84
// 009fbff8  c20800               ret 8
// 009fbffb  8b7604               mov esi, dword ptr [esi + 4]
// 009fbffe  8d542460             lea edx, [esp + 0x60]
// 009fc002  52                   push edx
// 009fc003  56                   push esi
// 009fc004  ffd5                 call ebp
// 009fc006  5f                   pop edi
// 009fc007  5e                   pop esi
// 009fc008  5d                   pop ebp
// 009fc009  5b                   pop ebx
// 009fc00a  81c484000000         add esp, 0x84
// 009fc010  c20800               ret 8
// 009fc013  8d4348               lea eax, [ebx + 0x48]
// 009fc016  50                   push eax
// 009fc017  8d8c2488000000       lea ecx, [esp + 0x88]
// 009fc01e  51                   push ecx
// 009fc01f  ff15ec3ab200         call dword ptr [0xb23aec]
// 009fc025  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 009fc028  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 009fc02f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 009fc036  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 009fc03d  896c2418             mov dword ptr [esp + 0x18], ebp
// 009fc041  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 009fc048  896c2420             mov dword ptr [esp + 0x20], ebp
// 009fc04c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009fc050  89542428             mov dword ptr [esp + 0x28], edx
// 009fc054  8b5328               mov edx, dword ptr [ebx + 0x28]
// 009fc057  8944242c             mov dword ptr [esp + 0x2c], eax
// 009fc05b  8944241c             mov dword ptr [esp + 0x1c], eax
// 009fc05f  89442454             mov dword ptr [esp + 0x54], eax
// 009fc063  89442464             mov dword ptr [esp + 0x64], eax
// 009fc067  8944243c             mov dword ptr [esp + 0x3c], eax
// 009fc06b  89442474             mov dword ptr [esp + 0x74], eax
// 009fc06f  8b442418             mov eax, dword ptr [esp + 0x18]
// 009fc073  896c2458             mov dword ptr [esp + 0x58], ebp
// 009fc077  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 009fc07b  89542430             mov dword ptr [esp + 0x30], edx
// 009fc07f  89542450             mov dword ptr [esp + 0x50], edx
// 009fc083  89542460             mov dword ptr [esp + 0x60], edx
// 009fc087  03d5                 add edx, ebp
// 009fc089  03f2                 add esi, edx
// 009fc08b  89442478             mov dword ptr [esp + 0x78], eax
// 009fc08f  8b442448             mov eax, dword ptr [esp + 0x48]
// 009fc093  894c2434             mov dword ptr [esp + 0x34], ecx
// 009fc097  894c2424             mov dword ptr [esp + 0x24], ecx
// 009fc09b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 009fc09f  89542468             mov dword ptr [esp + 0x68], edx
// 009fc0a3  894c246c             mov dword ptr [esp + 0x6c], ecx
// 009fc0a7  89542438             mov dword ptr [esp + 0x38], edx
// 009fc0ab  89742440             mov dword ptr [esp + 0x40], esi
// 009fc0af  894c2444             mov dword ptr [esp + 0x44], ecx
// 009fc0b3  89742470             mov dword ptr [esp + 0x70], esi
// 009fc0b7  894c247c             mov dword ptr [esp + 0x7c], ecx
// 009fc0bb  83f803               cmp eax, 3
// 009fc0be  0f85fe010000         jne 0x9fc2c2
// 009fc0c4  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 009fc0cb  83c620               add esi, 0x20
// 009fc0ce  8bce                 mov ecx, esi
// 009fc0d0  e89b97ffff           call 0x9f5870
// 009fc0d5  85c0                 test eax, eax
// 009fc0d7  0f8445030000         je 0x9fc422
// 009fc0dd  85ff                 test edi, edi
// 009fc0df  7505                 jne 0x9fc0e6
// 009fc0e1  8d4f0c               lea ecx, [edi + 0xc]
// 009fc0e4  eb1c                 jmp 0x9fc102
// 009fc0e6  b83c000000           mov eax, 0x3c
// 009fc0eb  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc0ef  7505                 jne 0x9fc0f6
// 009fc0f1  8d48cf               lea ecx, [eax - 0x31]
// 009fc0f4  eb0c                 jmp 0x9fc102
// 009fc0f6  33c9                 xor ecx, ecx
// 009fc0f8  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc0fc  0f94c1               sete cl
// 009fc0ff  83c109               add ecx, 9
// 009fc102  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 009fc109  85ed                 test ebp, ebp
// 009fc10b  7504                 jne 0x9fc111
// 009fc10d  33c0                 xor eax, eax
// 009fc10f  eb03                 jmp 0x9fc114
// 009fc111  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc114  6a00                 push 0
// 009fc116  8d54242c             lea edx, [esp + 0x2c]
// 009fc11a  52                   push edx
// 009fc11b  51                   push ecx
// 009fc11c  6a01                 push 1
// 009fc11e  50                   push eax
// 009fc11f  8bce                 mov ecx, esi
// 009fc121  e87a94ffff           call 0x9f55a0
// 009fc126  85ff                 test edi, edi
// 009fc128  7505                 jne 0x9fc12f
// 009fc12a  8d4f10               lea ecx, [edi + 0x10]
// 009fc12d  eb1c                 jmp 0x9fc14b
// 009fc12f  b83d000000           mov eax, 0x3d
// 009fc134  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc138  7505                 jne 0x9fc13f
// 009fc13a  8d48d2               lea ecx, [eax - 0x2e]
// 009fc13d  eb0c                 jmp 0x9fc14b
// 009fc13f  33c9                 xor ecx, ecx
// 009fc141  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc145  0f94c1               sete cl
// 009fc148  83c10d               add ecx, 0xd
// 009fc14b  85ed                 test ebp, ebp
// 009fc14d  7504                 jne 0x9fc153
// 009fc14f  33c0                 xor eax, eax
// 009fc151  eb03                 jmp 0x9fc156
// 009fc153  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc156  6a00                 push 0
// 009fc158  8d54241c             lea edx, [esp + 0x1c]
// 009fc15c  52                   push edx
// 009fc15d  51                   push ecx
// 009fc15e  6a01                 push 1
// 009fc160  50                   push eax
// 009fc161  8bce                 mov ecx, esi
// 009fc163  e83894ffff           call 0x9f55a0
// 009fc168  8b1df03ab200         mov ebx, dword ptr [0xb23af0]
// 009fc16e  8d442450             lea eax, [esp + 0x50]
// 009fc172  50                   push eax
// 009fc173  ffd3                 call ebx
// 009fc175  85c0                 test eax, eax
// 009fc177  0f853b040000         jne 0x9fc5b8
// 009fc17d  8d4c2460             lea ecx, [esp + 0x60]
// 009fc181  51                   push ecx
// 009fc182  ffd3                 call ebx
// 009fc184  85c0                 test eax, eax
// 009fc186  7540                 jne 0x9fc1c8
// 009fc188  85ff                 test edi, edi
// 009fc18a  7505                 jne 0x9fc191
// 009fc18c  8d4804               lea ecx, [eax + 4]
// 009fc18f  eb1a                 jmp 0x9fc1ab
// 009fc191  b83e000000           mov eax, 0x3e
// 009fc196  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc19a  7505                 jne 0x9fc1a1
// 009fc19c  8d48c5               lea ecx, [eax - 0x3b]
// 009fc19f  eb0a                 jmp 0x9fc1ab
// 009fc1a1  33c9                 xor ecx, ecx
// 009fc1a3  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc1a7  0f94c1               sete cl
// 009fc1aa  41                   inc ecx
// 009fc1ab  85ed                 test ebp, ebp
// 009fc1ad  7504                 jne 0x9fc1b3
// 009fc1af  33c0                 xor eax, eax
// 009fc1b1  eb03                 jmp 0x9fc1b6
// 009fc1b3  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc1b6  6a00                 push 0
// 009fc1b8  8d542464             lea edx, [esp + 0x64]
// 009fc1bc  52                   push edx
// 009fc1bd  51                   push ecx
// 009fc1be  6a04                 push 4
// 009fc1c0  50                   push eax
// 009fc1c1  8bce                 mov ecx, esi
// 009fc1c3  e8d893ffff           call 0x9f55a0
// 009fc1c8  8d442438             lea eax, [esp + 0x38]
// 009fc1cc  50                   push eax
// 009fc1cd  ffd3                 call ebx
// 009fc1cf  85c0                 test eax, eax
// 009fc1d1  0f858f000000         jne 0x9fc266
// 009fc1d7  b840000000           mov eax, 0x40
// 009fc1dc  85ff                 test edi, edi
// 009fc1de  7505                 jne 0x9fc1e5
// 009fc1e0  8d48c4               lea ecx, [eax - 0x3c]
// 009fc1e3  eb17                 jmp 0x9fc1fc
// 009fc1e5  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc1e9  7507                 jne 0x9fc1f2
// 009fc1eb  b903000000           mov ecx, 3
// 009fc1f0  eb0a                 jmp 0x9fc1fc
// 009fc1f2  33c9                 xor ecx, ecx
// 009fc1f4  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc1f8  0f94c1               sete cl
// 009fc1fb  41                   inc ecx
// 009fc1fc  85ed                 test ebp, ebp
// 009fc1fe  7504                 jne 0x9fc204
// 009fc200  33c0                 xor eax, eax
// 009fc202  eb03                 jmp 0x9fc207
// 009fc204  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc207  6a00                 push 0
// 009fc209  8d54243c             lea edx, [esp + 0x3c]
// 009fc20d  52                   push edx
// 009fc20e  51                   push ecx
// 009fc20f  6a02                 push 2
// 009fc211  50                   push eax
// 009fc212  8bce                 mov ecx, esi
// 009fc214  e88793ffff           call 0x9f55a0
// 009fc219  8b442440             mov eax, dword ptr [esp + 0x40]
// 009fc21d  2b442438             sub eax, dword ptr [esp + 0x38]
// 009fc221  83f80d               cmp eax, 0xd
// 009fc224  7e40                 jle 0x9fc266
// 009fc226  85ff                 test edi, edi
// 009fc228  7505                 jne 0x9fc22f
// 009fc22a  8d4f04               lea ecx, [edi + 4]
// 009fc22d  eb1a                 jmp 0x9fc249
// 009fc22f  b840000000           mov eax, 0x40
// 009fc234  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc238  7505                 jne 0x9fc23f
// 009fc23a  8d48c3               lea ecx, [eax - 0x3d]
// 009fc23d  eb0a                 jmp 0x9fc249
// 009fc23f  33c9                 xor ecx, ecx
// 009fc241  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc245  0f94c1               sete cl
// 009fc248  41                   inc ecx
// 009fc249  85ed                 test ebp, ebp
// 009fc24b  7504                 jne 0x9fc251
// 009fc24d  33c0                 xor eax, eax
// 009fc24f  eb03                 jmp 0x9fc254
// 009fc251  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc254  6a00                 push 0
// 009fc256  8d54243c             lea edx, [esp + 0x3c]
// 009fc25a  52                   push edx
// 009fc25b  51                   push ecx
// 009fc25c  6a08                 push 8
// 009fc25e  50                   push eax
// 009fc25f  8bce                 mov ecx, esi
// 009fc261  e83a93ffff           call 0x9f55a0
// 009fc266  8d442470             lea eax, [esp + 0x70]
// 009fc26a  50                   push eax
// 009fc26b  ffd3                 call ebx
// 009fc26d  85c0                 test eax, eax
// 009fc26f  0f8543030000         jne 0x9fc5b8
// 009fc275  85ff                 test edi, edi
// 009fc277  7505                 jne 0x9fc27e
// 009fc279  8d4804               lea ecx, [eax + 4]
// 009fc27c  eb1a                 jmp 0x9fc298
// 009fc27e  b83f000000           mov eax, 0x3f
// 009fc283  39442410             cmp dword ptr [esp + 0x10], eax
// 009fc287  7505                 jne 0x9fc28e
// 009fc289  8d48c4               lea ecx, [eax - 0x3c]
// 009fc28c  eb0a                 jmp 0x9fc298
// 009fc28e  33c9                 xor ecx, ecx
// 009fc290  39442414             cmp dword ptr [esp + 0x14], eax
// 009fc294  0f94c1               sete cl
// 009fc297  41                   inc ecx
// 009fc298  85ed                 test ebp, ebp
// 009fc29a  7504                 jne 0x9fc2a0
// 009fc29c  33c0                 xor eax, eax
// 009fc29e  eb03                 jmp 0x9fc2a3
// 009fc2a0  8b4504               mov eax, dword ptr [ebp + 4]
// 009fc2a3  6a00                 push 0
// 009fc2a5  8d542474             lea edx, [esp + 0x74]
// 009fc2a9  52                   push edx
// 009fc2aa  51                   push ecx
// 009fc2ab  6a05                 push 5
// 009fc2ad  50                   push eax
// 009fc2ae  8bce                 mov ecx, esi
// 009fc2b0  e8eb92ffff           call 0x9f55a0
// 009fc2b5  5f                   pop edi
// 009fc2b6  5e                   pop esi
// 009fc2b7  5d                   pop ebp
// 009fc2b8  5b                   pop ebx
// 009fc2b9  81c484000000         add esp, 0x84
// 009fc2bf  c20800               ret 8
// 009fc2c2  83f802               cmp eax, 2
// 009fc2c5  0f8557010000         jne 0x9fc422
// 009fc2cb  e89015fcff           call 0x9bd860
// 009fc2d0  6a0f                 push 0xf
// 009fc2d2  8bc8                 mov ecx, eax
// 009fc2d4  e8070dfcff           call 0x9bcfe0
// 009fc2d9  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 009fc2e0  50                   push eax
// 009fc2e1  8d44242c             lea eax, [esp + 0x2c]
// 009fc2e5  50                   push eax
// 009fc2e6  8bce                 mov ecx, esi
// 009fc2e8  e8bf6bf8ff           call 0x982eac
// 009fc2ed  85ff                 test edi, edi
// 009fc2ef  742e                 je 0x9fc31f
// 009fc2f1  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 009fc2f6  7527                 jne 0x9fc31f
// 009fc2f8  e86315fcff           call 0x9bd860
// 009fc2fd  6a14                 push 0x14
// 009fc2ff  8bc8                 mov ecx, eax
// 009fc301  e8da0cfcff           call 0x9bcfe0
// 009fc306  8be8                 mov ebp, eax
// 009fc308  e85315fcff           call 0x9bd860
// 009fc30d  6a10                 push 0x10
// 009fc30f  8bc8                 mov ecx, eax
// 009fc311  e8ca0cfcff           call 0x9bcfe0
// 009fc316  55                   push ebp
// 009fc317  50                   push eax
// 009fc318  8d4c2430             lea ecx, [esp + 0x30]
// 009fc31c  51                   push ecx
// 009fc31d  eb25                 jmp 0x9fc344
// 009fc31f  e83c15fcff           call 0x9bd860
// 009fc324  6a10                 push 0x10
// 009fc326  8bc8                 mov ecx, eax
// 009fc328  e8b30cfcff           call 0x9bcfe0
// 009fc32d  8be8                 mov ebp, eax
// 009fc32f  e82c15fcff           call 0x9bd860
// 009fc334  6a14                 push 0x14
// 009fc336  8bc8                 mov ecx, eax
// 009fc338  e8a30cfcff           call 0x9bcfe0
// 009fc33d  55                   push ebp
// 009fc33e  50                   push eax
// 009fc33f  8d542430             lea edx, [esp + 0x30]
// 009fc343  52                   push edx
// 009fc344  8bce                 mov ecx, esi
// 009fc346  e85b6bf8ff           call 0x982ea6
// 009fc34b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009fc34f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009fc353  57                   push edi
// 009fc354  6a01                 push 1
// 009fc356  6a01                 push 1
// 009fc358  83ec10               sub esp, 0x10
// 009fc35b  8bc4                 mov eax, esp
// 009fc35d  8908                 mov dword ptr [eax], ecx
// 009fc35f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009fc363  895004               mov dword ptr [eax + 4], edx
// 009fc366  8b542450             mov edx, dword ptr [esp + 0x50]
// 009fc36a  894808               mov dword ptr [eax + 8], ecx
// 009fc36d  56                   push esi
// 009fc36e  89500c               mov dword ptr [eax + 0xc], edx
// 009fc371  e80af5ffff           call 0x9fb880
// 009fc376  83c420               add esp, 0x20
// 009fc379  e8e214fcff           call 0x9bd860
// 009fc37e  6a0f                 push 0xf
// 009fc380  8bc8                 mov ecx, eax
// 009fc382  e8590cfcff           call 0x9bcfe0
// 009fc387  50                   push eax
// 009fc388  8d44241c             lea eax, [esp + 0x1c]
// 009fc38c  50                   push eax
// 009fc38d  8bce                 mov ecx, esi
// 009fc38f  e8186bf8ff           call 0x982eac
// 009fc394  85ff                 test edi, edi
// 009fc396  742e                 je 0x9fc3c6
// 009fc398  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 009fc39d  7527                 jne 0x9fc3c6
// 009fc39f  e8bc14fcff           call 0x9bd860
// 009fc3a4  6a14                 push 0x14
// 009fc3a6  8bc8                 mov ecx, eax
// 009fc3a8  e8330cfcff           call 0x9bcfe0
// 009fc3ad  8be8                 mov ebp, eax
// 009fc3af  e8ac14fcff           call 0x9bd860
// 009fc3b4  6a10                 push 0x10
// 009fc3b6  8bc8                 mov ecx, eax
// 009fc3b8  e8230cfcff           call 0x9bcfe0
// 009fc3bd  55                   push ebp
// 009fc3be  50                   push eax
// 009fc3bf  8d4c2420             lea ecx, [esp + 0x20]
// 009fc3c3  51                   push ecx
// 009fc3c4  eb25                 jmp 0x9fc3eb
// 009fc3c6  e89514fcff           call 0x9bd860
// 009fc3cb  6a10                 push 0x10
// 009fc3cd  8bc8                 mov ecx, eax
// 009fc3cf  e80c0cfcff           call 0x9bcfe0
// 009fc3d4  8be8                 mov ebp, eax
// 009fc3d6  e88514fcff           call 0x9bd860
// 009fc3db  6a14                 push 0x14
// 009fc3dd  8bc8                 mov ecx, eax
// 009fc3df  e8fc0bfcff           call 0x9bcfe0
// 009fc3e4  55                   push ebp
// 009fc3e5  50                   push eax
// 009fc3e6  8d542420             lea edx, [esp + 0x20]
// 009fc3ea  52                   push edx
// 009fc3eb  8bce                 mov ecx, esi
// 009fc3ed  e8b46af8ff           call 0x982ea6
// 009fc3f2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fc3f6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009fc3fa  57                   push edi
// 009fc3fb  6a00                 push 0
// 009fc3fd  6a01                 push 1
// 009fc3ff  83ec10               sub esp, 0x10
// 009fc402  8bc4                 mov eax, esp
// 009fc404  8908                 mov dword ptr [eax], ecx
// 009fc406  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009fc40a  895004               mov dword ptr [eax + 4], edx
// 009fc40d  8b542440             mov edx, dword ptr [esp + 0x40]
// 009fc411  894808               mov dword ptr [eax + 8], ecx
// 009fc414  56                   push esi
// 009fc415  89500c               mov dword ptr [eax + 0xc], edx
// 009fc418  e863f4ffff           call 0x9fb880
// 009fc41d  83c420               add esp, 0x20
// 009fc420  eb75                 jmp 0x9fc497
// 009fc422  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 009fc429  85f6                 test esi, esi
// 009fc42b  7504                 jne 0x9fc431
// 009fc42d  33c0                 xor eax, eax
// 009fc42f  eb03                 jmp 0x9fc434
// 009fc431  8b4604               mov eax, dword ptr [esi + 4]
// 009fc434  f7df                 neg edi
// 009fc436  1bff                 sbb edi, edi
// 009fc438  33c9                 xor ecx, ecx
// 009fc43a  8b2d383bb200         mov ebp, dword ptr [0xb23b38]
// 009fc440  81e700ffffff         and edi, 0xffffff00
// 009fc446  81c700010000         add edi, 0x100
// 009fc44c  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 009fc451  8d542428             lea edx, [esp + 0x28]
// 009fc455  0f95c1               setne cl
// 009fc458  49                   dec ecx
// 009fc459  81e100020000         and ecx, 0x200
// 009fc45f  0bcf                 or ecx, edi
// 009fc461  83c902               or ecx, 2
// 009fc464  51                   push ecx
// 009fc465  6a03                 push 3
// 009fc467  52                   push edx
// 009fc468  50                   push eax
// 009fc469  ffd5                 call ebp
// 009fc46b  85f6                 test esi, esi
// 009fc46d  7504                 jne 0x9fc473
// 009fc46f  33c0                 xor eax, eax
// 009fc471  eb03                 jmp 0x9fc476
// 009fc473  8b4604               mov eax, dword ptr [esi + 4]
// 009fc476  33c9                 xor ecx, ecx
// 009fc478  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 009fc47d  8d542418             lea edx, [esp + 0x18]
// 009fc481  0f95c1               setne cl
// 009fc484  49                   dec ecx
// 009fc485  81e100020000         and ecx, 0x200
// 009fc48b  0bcf                 or ecx, edi
// 009fc48d  83c903               or ecx, 3
// 009fc490  51                   push ecx
// 009fc491  6a03                 push 3
// 009fc493  52                   push edx
// 009fc494  50                   push eax
// 009fc495  ffd5                 call ebp
// 009fc497  8b03                 mov eax, dword ptr [ebx]
// 009fc499  8b5008               mov edx, dword ptr [eax + 8]
// 009fc49c  8bcb                 mov ecx, ebx
// 009fc49e  ffd2                 call edx
// 009fc4a0  85c0                 test eax, eax
// 009fc4a2  7504                 jne 0x9fc4a8
// 009fc4a4  33d2                 xor edx, edx
// 009fc4a6  eb03                 jmp 0x9fc4ab
// 009fc4a8  8b5020               mov edx, dword ptr [eax + 0x20]
// 009fc4ab  85f6                 test esi, esi
// 009fc4ad  7504                 jne 0x9fc4b3
// 009fc4af  33c9                 xor ecx, ecx
// 009fc4b1  eb03                 jmp 0x9fc4b6
// 009fc4b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 009fc4b6  85c0                 test eax, eax
// 009fc4b8  7403                 je 0x9fc4bd
// 009fc4ba  8b4020               mov eax, dword ptr [eax + 0x20]
// 009fc4bd  52                   push edx
// 009fc4be  51                   push ecx
// 009fc4bf  6837010000           push 0x137
// 009fc4c4  50                   push eax
// 009fc4c5  ff15b43ab200         call dword ptr [0xb23ab4]
// 009fc4cb  85f6                 test esi, esi
// 009fc4cd  7504                 jne 0x9fc4d3
// 009fc4cf  33c9                 xor ecx, ecx
// 009fc4d1  eb03                 jmp 0x9fc4d6
// 009fc4d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 009fc4d6  50                   push eax
// 009fc4d7  8d442454             lea eax, [esp + 0x54]
// 009fc4db  50                   push eax
// 009fc4dc  51                   push ecx
// 009fc4dd  ff157c3cb200         call dword ptr [0xb23c7c]
// 009fc4e3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009fc4e7  8b2dc03cb200         mov ebp, dword ptr [0xb23cc0]
// 009fc4ed  83fb3e               cmp ebx, 0x3e
// 009fc4f0  7513                 jne 0x9fc505
// 009fc4f2  85f6                 test esi, esi
// 009fc4f4  7504                 jne 0x9fc4fa
// 009fc4f6  33c0                 xor eax, eax
// 009fc4f8  eb03                 jmp 0x9fc4fd
// 009fc4fa  8b4604               mov eax, dword ptr [esi + 4]
// 009fc4fd  8d4c2460             lea ecx, [esp + 0x60]
// 009fc501  51                   push ecx
// 009fc502  50                   push eax
// 009fc503  ffd5                 call ebp
// 009fc505  8b3df03ab200         mov edi, dword ptr [0xb23af0]
// 009fc50b  8d542450             lea edx, [esp + 0x50]
// 009fc50f  52                   push edx
// 009fc510  ffd7                 call edi
// 009fc512  85c0                 test eax, eax
// 009fc514  7579                 jne 0x9fc58f
// 009fc516  8d442438             lea eax, [esp + 0x38]
// 009fc51a  50                   push eax
// 009fc51b  ffd7                 call edi
// 009fc51d  85c0                 test eax, eax
// 009fc51f  756e                 jne 0x9fc58f
// 009fc521  e83a13fcff           call 0x9bd860
// 009fc526  6a0f                 push 0xf
// 009fc528  8bc8                 mov ecx, eax
// 009fc52a  e8b10afcff           call 0x9bcfe0
// 009fc52f  50                   push eax
// 009fc530  8d4c243c             lea ecx, [esp + 0x3c]
// 009fc534  51                   push ecx
// 009fc535  8bce                 mov ecx, esi
// 009fc537  e87069f8ff           call 0x982eac
// 009fc53c  837c244802           cmp dword ptr [esp + 0x48], 2
// 009fc541  752e                 jne 0x9fc571
// 009fc543  e81813fcff           call 0x9bd860
// 009fc548  6a10                 push 0x10
// 009fc54a  8bc8                 mov ecx, eax
// 009fc54c  e88f0afcff           call 0x9bcfe0
// 009fc551  8bf8                 mov edi, eax
// 009fc553  e80813fcff           call 0x9bd860
// 009fc558  6a14                 push 0x14
// 009fc55a  8bc8                 mov ecx, eax
// 009fc55c  e87f0afcff           call 0x9bcfe0
// 009fc561  57                   push edi
// 009fc562  50                   push eax
// 009fc563  8d542440             lea edx, [esp + 0x40]
// 009fc567  52                   push edx
// 009fc568  8bce                 mov ecx, esi
// 009fc56a  e83769f8ff           call 0x982ea6
// 009fc56f  eb1e                 jmp 0x9fc58f
// 009fc571  85f6                 test esi, esi
// 009fc573  7504                 jne 0x9fc579
// 009fc575  33c0                 xor eax, eax
// 009fc577  eb03                 jmp 0x9fc57c
// 009fc579  8b4604               mov eax, dword ptr [esi + 4]
// 009fc57c  680f200000           push 0x200f
// 009fc581  6a05                 push 5
// 009fc583  8d4c2440             lea ecx, [esp + 0x40]
// 009fc587  51                   push ecx
// 009fc588  50                   push eax
// 009fc589  ff15683cb200         call dword ptr [0xb23c68]
// 009fc58f  83fb3f               cmp ebx, 0x3f
// 009fc592  7524                 jne 0x9fc5b8
// 009fc594  85f6                 test esi, esi
// 009fc596  7515                 jne 0x9fc5ad
// 009fc598  8d542470             lea edx, [esp + 0x70]
// 009fc59c  52                   push edx
// 009fc59d  56                   push esi
// 009fc59e  ffd5                 call ebp
// 009fc5a0  5f                   pop edi
// 009fc5a1  5e                   pop esi
// 009fc5a2  5d                   pop ebp
// 009fc5a3  5b                   pop ebx
// 009fc5a4  81c484000000         add esp, 0x84
// 009fc5aa  c20800               ret 8
// 009fc5ad  8b7604               mov esi, dword ptr [esi + 4]
// 009fc5b0  8d542470             lea edx, [esp + 0x70]
// 009fc5b4  52                   push edx
// 009fc5b5  56                   push esi
// 009fc5b6  ffd5                 call ebp
// 009fc5b8  5f                   pop edi
// 009fc5b9  5e                   pop esi
// 009fc5ba  5d                   pop ebp
// 009fc5bb  5b                   pop ebx
// 009fc5bc  81c484000000         add esp, 0x84
// 009fc5c2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
