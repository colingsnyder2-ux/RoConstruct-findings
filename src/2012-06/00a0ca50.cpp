// roc 2012-06 00a0ca50  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 669 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0ca50
//
// 00a0ca50  6aff                 push -1
// 00a0ca52  688834ae00           push 0xae3488
// 00a0ca57  64a100000000         mov eax, dword ptr fs:[0]
// 00a0ca5d  50                   push eax
// 00a0ca5e  83ec48               sub esp, 0x48
// 00a0ca61  53                   push ebx
// 00a0ca62  55                   push ebp
// 00a0ca63  56                   push esi
// 00a0ca64  57                   push edi
// 00a0ca65  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0ca6a  33c4                 xor eax, esp
// 00a0ca6c  50                   push eax
// 00a0ca6d  8d44245c             lea eax, [esp + 0x5c]
// 00a0ca71  64a300000000         mov dword ptr fs:[0], eax
// 00a0ca77  8bf1                 mov esi, ecx
// 00a0ca79  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a0ca7d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00a0ca83  83f804               cmp eax, 4
// 00a0ca86  7511                 jne 0xa0ca99
// 00a0ca88  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 00a0ca8f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a0ca97  7508                 jne 0xa0caa1
// 00a0ca99  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a0caa1  33ed                 xor ebp, ebp
// 00a0caa3  396c247c             cmp dword ptr [esp + 0x7c], ebp
// 00a0caa7  7537                 jne 0xa0cae0
// 00a0caa9  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00a0caad  7412                 je 0xa0cac1
// 00a0caaf  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a0cab3  c70006000000         mov dword ptr [eax], 6
// 00a0cab9  896804               mov dword ptr [eax + 4], ebp
// 00a0cabc  e916020000           jmp 0xa0ccd7
// 00a0cac1  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a0cac5  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00a0cac9  55                   push ebp
// 00a0caca  50                   push eax
// 00a0cacb  51                   push ecx
// 00a0cacc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a0cad0  51                   push ecx
// 00a0cad1  57                   push edi
// 00a0cad2  8bce                 mov ecx, esi
// 00a0cad4  e8175d0000           call 0xa127f0
// 00a0cad9  8bc7                 mov eax, edi
// 00a0cadb  e9f7010000           jmp 0xa0ccd7
// 00a0cae0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a0cae3  8d542438             lea edx, [esp + 0x38]
// 00a0cae7  52                   push edx
// 00a0cae8  50                   push eax
// 00a0cae9  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a0caef  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00a0caf3  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00a0caf9  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 00a0cafd  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00a0cb03  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00a0cb09  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a0cb0d  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00a0cb13  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a0cb17  89442430             mov dword ptr [esp + 0x30], eax
// 00a0cb1b  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a0cb1f  3bdd                 cmp ebx, ebp
// 00a0cb21  7403                 je 0xa0cb26
// 00a0cb23  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00a0cb26  6a27                 push 0x27
// 00a0cb28  8bce                 mov ecx, esi
// 00a0cb2a  e861adf7ff           call 0x987890
// 00a0cb2f  50                   push eax
// 00a0cb30  55                   push ebp
// 00a0cb31  8d4c2450             lea ecx, [esp + 0x50]
// 00a0cb35  e8968afcff           call 0x9d55d0
// 00a0cb3a  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00a0cb40  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a0cb44  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a0cb4a  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 00a0cb50  8bafb4000000         mov ebp, dword ptr [edi + 0xb4]
// 00a0cb56  89542418             mov dword ptr [esp + 0x18], edx
// 00a0cb5a  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 00a0cb60  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00a0cb68  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a0cb6c  89542424             mov dword ptr [esp + 0x24], edx
// 00a0cb70  83f803               cmp eax, 3
// 00a0cb73  0f84c2000000         je 0xa0cc3b
// 00a0cb79  83f802               cmp eax, 2
// 00a0cb7c  0f84b9000000         je 0xa0cc3b
// 00a0cb82  85c0                 test eax, eax
// 00a0cb84  743c                 je 0xa0cbc2
// 00a0cb86  83f801               cmp eax, 1
// 00a0cb89  7437                 je 0xa0cbc2
// 00a0cb8b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a0cb90  7530                 jne 0xa0cbc2
// 00a0cb92  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a0cb96  8b542474             mov edx, dword ptr [esp + 0x74]
// 00a0cb9a  51                   push ecx
// 00a0cb9b  57                   push edi
// 00a0cb9c  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00a0cba0  52                   push edx
// 00a0cba1  53                   push ebx
// 00a0cba2  57                   push edi
// 00a0cba3  8bce                 mov ecx, esi
// 00a0cba5  e8465c0000           call 0xa127f0
// 00a0cbaa  8d4c2448             lea ecx, [esp + 0x48]
// 00a0cbae  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a0cbb6  e8a58afcff           call 0x9d5660
// 00a0cbbb  8bc7                 mov eax, edi
// 00a0cbbd  e915010000           jmp 0xa0ccd7
// 00a0cbc2  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00a0cbc9  7537                 jne 0xa0cc02
// 00a0cbcb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a0cbcf  6a27                 push 0x27
// 00a0cbd1  83c2fc               add edx, -4
// 00a0cbd4  52                   push edx
// 00a0cbd5  8d47fc               lea eax, [edi - 4]
// 00a0cbd8  50                   push eax
// 00a0cbd9  8d4d04               lea ecx, [ebp + 4]
// 00a0cbdc  51                   push ecx
// 00a0cbdd  50                   push eax
// 00a0cbde  53                   push ebx
// 00a0cbdf  8bce                 mov ecx, esi
// 00a0cbe1  e8cac1f7ff           call 0x988db0
// 00a0cbe6  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 00a0cbed  0f85c0000000         jne 0xa0ccb3
// 00a0cbf3  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0cbf7  8d47fd               lea eax, [edi - 3]
// 00a0cbfa  83c2fd               add edx, -3
// 00a0cbfd  e9a0000000           jmp 0xa0cca2
// 00a0cc02  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a0cc07  0f85a6000000         jne 0xa0ccb3
// 00a0cc0d  6a27                 push 0x27
// 00a0cc0f  8d45fc               lea eax, [ebp - 4]
// 00a0cc12  50                   push eax
// 00a0cc13  51                   push ecx
// 00a0cc14  50                   push eax
// 00a0cc15  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0cc19  83c004               add eax, 4
// 00a0cc1c  50                   push eax
// 00a0cc1d  53                   push ebx
// 00a0cc1e  8bce                 mov ecx, esi
// 00a0cc20  e88bc1f7ff           call 0x988db0
// 00a0cc25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0cc29  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a0cc2d  6a14                 push 0x14
// 00a0cc2f  83c5fd               add ebp, -3
// 00a0cc32  55                   push ebp
// 00a0cc33  51                   push ecx
// 00a0cc34  55                   push ebp
// 00a0cc35  83c205               add edx, 5
// 00a0cc38  52                   push edx
// 00a0cc39  eb70                 jmp 0xa0ccab
// 00a0cc3b  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00a0cc42  6a27                 push 0x27
// 00a0cc44  753f                 jne 0xa0cc85
// 00a0cc46  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a0cc4a  8d47fc               lea eax, [edi - 4]
// 00a0cc4d  50                   push eax
// 00a0cc4e  83c1fc               add ecx, -4
// 00a0cc51  51                   push ecx
// 00a0cc52  50                   push eax
// 00a0cc53  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0cc57  83c004               add eax, 4
// 00a0cc5a  50                   push eax
// 00a0cc5b  53                   push ebx
// 00a0cc5c  8bce                 mov ecx, esi
// 00a0cc5e  e84dc1f7ff           call 0x988db0
// 00a0cc63  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 00a0cc6a  7547                 jne 0xa0ccb3
// 00a0cc6c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0cc70  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a0cc74  6a14                 push 0x14
// 00a0cc76  8d47fd               lea eax, [edi - 3]
// 00a0cc79  50                   push eax
// 00a0cc7a  83c1fd               add ecx, -3
// 00a0cc7d  51                   push ecx
// 00a0cc7e  50                   push eax
// 00a0cc7f  83c205               add edx, 5
// 00a0cc82  52                   push edx
// 00a0cc83  eb26                 jmp 0xa0ccab
// 00a0cc85  8d4102               lea eax, [ecx + 2]
// 00a0cc88  52                   push edx
// 00a0cc89  50                   push eax
// 00a0cc8a  8d4d04               lea ecx, [ebp + 4]
// 00a0cc8d  51                   push ecx
// 00a0cc8e  50                   push eax
// 00a0cc8f  53                   push ebx
// 00a0cc90  8bce                 mov ecx, esi
// 00a0cc92  e819c1f7ff           call 0x988db0
// 00a0cc97  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0cc9b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0cc9f  83c003               add eax, 3
// 00a0cca2  6a14                 push 0x14
// 00a0cca4  52                   push edx
// 00a0cca5  50                   push eax
// 00a0cca6  83c505               add ebp, 5
// 00a0cca9  55                   push ebp
// 00a0ccaa  50                   push eax
// 00a0ccab  53                   push ebx
// 00a0ccac  8bce                 mov ecx, esi
// 00a0ccae  e8fdc0f7ff           call 0x988db0
// 00a0ccb3  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00a0ccb7  8d4c2448             lea ecx, [esp + 0x48]
// 00a0ccbb  c70600000000         mov dword ptr [esi], 0
// 00a0ccc1  c7460400000000       mov dword ptr [esi + 4], 0
// 00a0ccc8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a0ccd0  e88b89fcff           call 0x9d5660
// 00a0ccd5  8bc6                 mov eax, esi
// 00a0ccd7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a0ccdb  64890d00000000       mov dword ptr fs:[0], ecx
// 00a0cce2  59                   pop ecx
// 00a0cce3  5f                   pop edi
// 00a0cce4  5e                   pop esi
// 00a0cce5  5d                   pop ebp
// 00a0cce6  5b                   pop ebx
// 00a0cce7  83c454               add esp, 0x54
// 00a0ccea  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp