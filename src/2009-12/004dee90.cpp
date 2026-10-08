// roc 2009-12 004dee90  unit: G3D::VertexAndPixelShader  size: 1363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dee90
//
// 004dee90  6aff                 push -1
// 004dee92  68b0449300           push 0x9344b0
// 004dee97  64a100000000         mov eax, dword ptr fs:[0]
// 004dee9d  50                   push eax
// 004dee9e  64892500000000       mov dword ptr fs:[0], esp
// 004deea5  81ec4c010000         sub esp, 0x14c
// 004deeab  53                   push ebx
// 004deeac  33db                 xor ebx, ebx
// 004deeae  895c2408             mov dword ptr [esp + 8], ebx
// 004deeb2  894c240c             mov dword ptr [esp + 0xc], ecx
// 004deeb6  8d4c2444             lea ecx, [esp + 0x44]
// 004deeba  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004deebf  c644243d01           mov byte ptr [esp + 0x3d], 1
// 004deec4  c644243e01           mov byte ptr [esp + 0x3e], 1
// 004deec9  885c243f             mov byte ptr [esp + 0x3f], bl
// 004deecd  885c2440             mov byte ptr [esp + 0x40], bl
// 004deed1  c644244101           mov byte ptr [esp + 0x41], 1
// 004deed6  c644244201           mov byte ptr [esp + 0x42], 1
// 004deedb  ff15e8b69800         call dword ptr [0x98b6e8]
// 004deee1  895c2460             mov dword ptr [esp + 0x60], ebx
// 004deee5  885c2464             mov byte ptr [esp + 0x64], bl
// 004deee9  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 004deef0  8d44243c             lea eax, [esp + 0x3c]
// 004deef4  50                   push eax
// 004deef5  51                   push ecx
// 004deef6  53                   push ebx
// 004deef7  8d4c2474             lea ecx, [esp + 0x74]
// 004deefb  899c2464010000       mov dword ptr [esp + 0x164], ebx
// 004def02  e809d21100           call 0x5fc110
// 004def07  8d4c2444             lea ecx, [esp + 0x44]
// 004def0b  c684245801000002     mov byte ptr [esp + 0x158], 2
// 004def13  ff15e4b69800         call dword ptr [0x98b6e4]
// 004def19  8d4c2468             lea ecx, [esp + 0x68]
// 004def1d  e80ed91100           call 0x5fc830
// 004def22  84c0                 test al, al
// 004def24  0f848d040000         je 0x4df3b7
// 004def2a  55                   push ebp
// 004def2b  56                   push esi
// 004def2c  57                   push edi
// 004def2d  8d4900               lea ecx, [ecx]
// 004def30  8d9424d8000000       lea edx, [esp + 0xd8]
// 004def37  52                   push edx
// 004def38  8d4c2478             lea ecx, [esp + 0x78]
// 004def3c  e82fd81100           call 0x5fc770
// 004def41  be01000000           mov esi, 1
// 004def46  0bde                 or ebx, esi
// 004def48  c684246401000003     mov byte ptr [esp + 0x164], 3
// 004def50  895c2414             mov dword ptr [esp + 0x14], ebx
// 004def54  397024               cmp dword ptr [eax + 0x24], esi
// 004def57  753c                 jne 0x4def95
// 004def59  8d44241c             lea eax, [esp + 0x1c]
// 004def5d  50                   push eax
// 004def5e  8d4c2478             lea ecx, [esp + 0x78]
// 004def62  e809d81100           call 0x5fc770
// 004def67  8b3dacb69800         mov edi, dword ptr [0x98b6ac]
// 004def6d  68289b9b00           push 0x9b9b28
// 004def72  83cb02               or ebx, 2
// 004def75  50                   push eax
// 004def76  c784246c01000004000000 mov dword ptr [esp + 0x16c], 4
// 004def81  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004def85  ffd7                 call edi
// 004def87  83c408               add esp, 8
// 004def8a  84c0                 test al, al
// 004def8c  740d                 je 0x4def9b
// 004def8e  c644241301           mov byte ptr [esp + 0x13], 1
// 004def93  eb0b                 jmp 0x4defa0
// 004def95  8b3dacb69800         mov edi, dword ptr [0x98b6ac]
// 004def9b  c644241300           mov byte ptr [esp + 0x13], 0
// 004defa0  c784246401000003000000 mov dword ptr [esp + 0x164], 3
// 004defab  f6c302               test bl, 2
// 004defae  7411                 je 0x4defc1
// 004defb0  83e3fd               and ebx, 0xfffffffd
// 004defb3  8d4c241c             lea ecx, [esp + 0x1c]
// 004defb7  895c2414             mov dword ptr [esp + 0x14], ebx
// 004defbb  ff15e4b69800         call dword ptr [0x98b6e4]
// 004defc1  bd02000000           mov ebp, 2
// 004defc6  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004defcd  f6c301               test bl, 1
// 004defd0  7410                 je 0x4defe2
// 004defd2  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004defd9  83e3fe               and ebx, 0xfffffffe
// 004defdc  ff15e4b69800         call dword ptr [0x98b6e4]
// 004defe2  807c241300           cmp byte ptr [esp + 0x13], 0
// 004defe7  0f8498030000         je 0x4df385
// 004defed  68289b9b00           push 0x9b9b28
// 004deff2  8d4c2420             lea ecx, [esp + 0x20]
// 004deff6  ff15f4b69800         call dword ptr [0x98b6f4]
// 004deffc  8d4c241c             lea ecx, [esp + 0x1c]
// 004df000  51                   push ecx
// 004df001  8d4c2478             lea ecx, [esp + 0x78]
// 004df005  c684246801000005     mov byte ptr [esp + 0x168], 5
// 004df00d  e82ed61100           call 0x5fc640
// 004df012  8d4c241c             lea ecx, [esp + 0x1c]
// 004df016  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004df01e  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df024  8d942404010000       lea edx, [esp + 0x104]
// 004df02b  52                   push edx
// 004df02c  8d4c2478             lea ecx, [esp + 0x78]
// 004df030  e83bd71100           call 0x5fc770
// 004df035  83cb04               or ebx, 4
// 004df038  c684246401000006     mov byte ptr [esp + 0x164], 6
// 004df040  895c2414             mov dword ptr [esp + 0x14], ebx
// 004df044  397024               cmp dword ptr [eax + 0x24], esi
// 004df047  7534                 jne 0x4df07d
// 004df049  8d44241c             lea eax, [esp + 0x1c]
// 004df04d  50                   push eax
// 004df04e  8d4c2478             lea ecx, [esp + 0x78]
// 004df052  e819d71100           call 0x5fc770
// 004df057  68209b9b00           push 0x9b9b20
// 004df05c  83cb08               or ebx, 8
// 004df05f  50                   push eax
// 004df060  c784246c01000007000000 mov dword ptr [esp + 0x16c], 7
// 004df06b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004df06f  ffd7                 call edi
// 004df071  83c408               add esp, 8
// 004df074  c644241301           mov byte ptr [esp + 0x13], 1
// 004df079  84c0                 test al, al
// 004df07b  7505                 jne 0x4df082
// 004df07d  c644241300           mov byte ptr [esp + 0x13], 0
// 004df082  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 004df08d  f6c308               test bl, 8
// 004df090  7411                 je 0x4df0a3
// 004df092  83e3f7               and ebx, 0xfffffff7
// 004df095  8d4c241c             lea ecx, [esp + 0x1c]
// 004df099  895c2414             mov dword ptr [esp + 0x14], ebx
// 004df09d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df0a3  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004df0aa  f6c304               test bl, 4
// 004df0ad  7410                 je 0x4df0bf
// 004df0af  8d8c2404010000       lea ecx, [esp + 0x104]
// 004df0b6  83e3fb               and ebx, 0xfffffffb
// 004df0b9  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df0bf  807c241300           cmp byte ptr [esp + 0x13], 0
// 004df0c4  7437                 je 0x4df0fd
// 004df0c6  68209b9b00           push 0x9b9b20
// 004df0cb  8d4c2420             lea ecx, [esp + 0x20]
// 004df0cf  ff15f4b69800         call dword ptr [0x98b6f4]
// 004df0d5  8d4c241c             lea ecx, [esp + 0x1c]
// 004df0d9  51                   push ecx
// 004df0da  8d4c2478             lea ecx, [esp + 0x78]
// 004df0de  c684246801000008     mov byte ptr [esp + 0x168], 8
// 004df0e6  e855d51100           call 0x5fc640
// 004df0eb  8d4c241c             lea ecx, [esp + 0x1c]
// 004df0ef  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004df0f7  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df0fd  8d54241c             lea edx, [esp + 0x1c]
// 004df101  52                   push edx
// 004df102  8d4c2478             lea ecx, [esp + 0x78]
// 004df106  e8c5d41100           call 0x5fc5d0
// 004df10b  8bf0                 mov esi, eax
// 004df10d  c684246401000009     mov byte ptr [esp + 0x164], 9
// 004df115  e8c6cfffff           call 0x4dc0e0
// 004df11a  8d4c241c             lea ecx, [esp + 0x1c]
// 004df11e  8be8                 mov ebp, eax
// 004df120  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004df128  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df12e  8d8424d8000000       lea eax, [esp + 0xd8]
// 004df135  50                   push eax
// 004df136  8d4c2478             lea ecx, [esp + 0x78]
// 004df13a  e891d41100           call 0x5fc5d0
// 004df13f  8d4c241c             lea ecx, [esp + 0x1c]
// 004df143  51                   push ecx
// 004df144  8d4c2478             lea ecx, [esp + 0x78]
// 004df148  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 004df150  e81bd61100           call 0x5fc770
// 004df155  83cb10               or ebx, 0x10
// 004df158  83782401             cmp dword ptr [eax + 0x24], 1
// 004df15c  c68424640100000b     mov byte ptr [esp + 0x164], 0xb
// 004df164  895c2414             mov dword ptr [esp + 0x14], ebx
// 004df168  7537                 jne 0x4df1a1
// 004df16a  8d942404010000       lea edx, [esp + 0x104]
// 004df171  52                   push edx
// 004df172  8d4c2478             lea ecx, [esp + 0x78]
// 004df176  e8f5d51100           call 0x5fc770
// 004df17b  681c9b9b00           push 0x9b9b1c
// 004df180  83cb20               or ebx, 0x20
// 004df183  50                   push eax
// 004df184  c784246c0100000c000000 mov dword ptr [esp + 0x16c], 0xc
// 004df18f  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004df193  ffd7                 call edi
// 004df195  83c408               add esp, 8
// 004df198  c644241301           mov byte ptr [esp + 0x13], 1
// 004df19d  84c0                 test al, al
// 004df19f  7505                 jne 0x4df1a6
// 004df1a1  c644241300           mov byte ptr [esp + 0x13], 0
// 004df1a6  c78424640100000b000000 mov dword ptr [esp + 0x164], 0xb
// 004df1b1  f6c320               test bl, 0x20
// 004df1b4  7414                 je 0x4df1ca
// 004df1b6  83e3df               and ebx, 0xffffffdf
// 004df1b9  8d8c2404010000       lea ecx, [esp + 0x104]
// 004df1c0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004df1c4  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df1ca  c78424640100000a000000 mov dword ptr [esp + 0x164], 0xa
// 004df1d5  f6c310               test bl, 0x10
// 004df1d8  740d                 je 0x4df1e7
// 004df1da  8d4c241c             lea ecx, [esp + 0x1c]
// 004df1de  83e3ef               and ebx, 0xffffffef
// 004df1e1  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df1e7  807c241300           cmp byte ptr [esp + 0x13], 0
// 004df1ec  7479                 je 0x4df267
// 004df1ee  681c9b9b00           push 0x9b9b1c
// 004df1f3  8d4c2420             lea ecx, [esp + 0x20]
// 004df1f7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004df1fd  8d44241c             lea eax, [esp + 0x1c]
// 004df201  50                   push eax
// 004df202  8d4c2478             lea ecx, [esp + 0x78]
// 004df206  c68424680100000d     mov byte ptr [esp + 0x168], 0xd
// 004df20e  e82dd41100           call 0x5fc640
// 004df213  8d4c241c             lea ecx, [esp + 0x1c]
// 004df217  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004df21f  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df225  8d4c2474             lea ecx, [esp + 0x74]
// 004df229  e862d11100           call 0x5fc390
// 004df22e  ddd8                 fstp st(0)
// 004df230  6830409b00           push 0x9b4030
// 004df235  8d4c2420             lea ecx, [esp + 0x20]
// 004df239  ff15f4b69800         call dword ptr [0x98b6f4]
// 004df23f  8d4c241c             lea ecx, [esp + 0x1c]
// 004df243  51                   push ecx
// 004df244  8d4c2478             lea ecx, [esp + 0x78]
// 004df248  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 004df250  e8ebd31100           call 0x5fc640
// 004df255  8d4c241c             lea ecx, [esp + 0x1c]
// 004df259  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004df261  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df267  6844b79a00           push 0x9ab744
// 004df26c  8d4c2420             lea ecx, [esp + 0x20]
// 004df270  ff15f4b69800         call dword ptr [0x98b6f4]
// 004df276  8d54241c             lea edx, [esp + 0x1c]
// 004df27a  52                   push edx
// 004df27b  8d4c2478             lea ecx, [esp + 0x78]
// 004df27f  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 004df287  e8b4d31100           call 0x5fc640
// 004df28c  8d4c241c             lea ecx, [esp + 0x1c]
// 004df290  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004df298  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df29e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004df2a2  33f6                 xor esi, esi
// 004df2a4  39b094010000         cmp dword ptr [eax + 0x194], esi
// 004df2aa  7e3d                 jle 0x4df2e9
// 004df2ac  33ff                 xor edi, edi
// 004df2ae  8bff                 mov edi, edi
// 004df2b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004df2b4  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 004df2ba  03c7                 add eax, edi
// 004df2bc  8d9424d8000000       lea edx, [esp + 0xd8]
// 004df2c3  52                   push edx
// 004df2c4  83c008               add eax, 8
// 004df2c7  50                   push eax
// 004df2c8  ff157cb69800         call dword ptr [0x98b67c]
// 004df2ce  83c408               add esp, 8
// 004df2d1  84c0                 test al, al
// 004df2d3  0f859b000000         jne 0x4df374
// 004df2d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004df2dd  46                   inc esi
// 004df2de  83c730               add edi, 0x30
// 004df2e1  3bb094010000         cmp esi, dword ptr [eax + 0x194]
// 004df2e7  7cc7                 jl 0x4df2b0
// 004df2e9  8b742418             mov esi, dword ptr [esp + 0x18]
// 004df2ed  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 004df2f3  81c690010000         add esi, 0x190
// 004df2f9  41                   inc ecx
// 004df2fa  6a00                 push 0
// 004df2fc  51                   push ecx
// 004df2fd  8bce                 mov ecx, esi
// 004df2ff  e8dcd3ffff           call 0x4dc6e0
// 004df304  8b4604               mov eax, dword ptr [esi + 4]
// 004df307  8d1440               lea edx, [eax + eax*2]
// 004df30a  8b06                 mov eax, dword ptr [esi]
// 004df30c  c1e204               shl edx, 4
// 004df30f  c64402d001           mov byte ptr [edx + eax - 0x30], 1
// 004df314  8b4604               mov eax, dword ptr [esi + 4]
// 004df317  8b16                 mov edx, dword ptr [esi]
// 004df319  8d0c40               lea ecx, [eax + eax*2]
// 004df31c  c1e104               shl ecx, 4
// 004df31f  8d8424d8000000       lea eax, [esp + 0xd8]
// 004df326  83cfff               or edi, 0xffffffff
// 004df329  897c11d4             mov dword ptr [ecx + edx - 0x2c], edi
// 004df32d  8b16                 mov edx, dword ptr [esi]
// 004df32f  50                   push eax
// 004df330  8b4604               mov eax, dword ptr [esi + 4]
// 004df333  8d0c40               lea ecx, [eax + eax*2]
// 004df336  c1e104               shl ecx, 4
// 004df339  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 004df33d  ff159cb69800         call dword ptr [0x98b69c]
// 004df343  8b4604               mov eax, dword ptr [esi + 4]
// 004df346  8b0e                 mov ecx, dword ptr [esi]
// 004df348  8d0440               lea eax, [eax + eax*2]
// 004df34b  c1e004               shl eax, 4
// 004df34e  c74408f801000000     mov dword ptr [eax + ecx - 8], 1
// 004df356  8b4604               mov eax, dword ptr [esi + 4]
// 004df359  8d1440               lea edx, [eax + eax*2]
// 004df35c  8b06                 mov eax, dword ptr [esi]
// 004df35e  c1e204               shl edx, 4
// 004df361  896c02f4             mov dword ptr [edx + eax - 0xc], ebp
// 004df365  8b4604               mov eax, dword ptr [esi + 4]
// 004df368  8b16                 mov edx, dword ptr [esi]
// 004df36a  8d0c40               lea ecx, [eax + eax*2]
// 004df36d  c1e104               shl ecx, 4
// 004df370  897c11fc             mov dword ptr [ecx + edx - 4], edi
// 004df374  c684246401000002     mov byte ptr [esp + 0x164], 2
// 004df37c  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004df383  eb18                 jmp 0x4df39d
// 004df385  8d842430010000       lea eax, [esp + 0x130]
// 004df38c  50                   push eax
// 004df38d  8d4c2478             lea ecx, [esp + 0x78]
// 004df391  e85acc1100           call 0x5fbff0
// 004df396  8d8c2430010000       lea ecx, [esp + 0x130]
// 004df39d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004df3a3  8d4c2474             lea ecx, [esp + 0x74]
// 004df3a7  e884d41100           call 0x5fc830
// 004df3ac  84c0                 test al, al
// 004df3ae  0f857cfbffff         jne 0x4def30
// 004df3b4  5f                   pop edi
// 004df3b5  5e                   pop esi
// 004df3b6  5d                   pop ebp
// 004df3b7  8d4c2468             lea ecx, [esp + 0x68]
// 004df3bb  c7842458010000ffffffff mov dword ptr [esp + 0x158], 0xffffffff
// 004df3c6  e875f2ffff           call 0x4de640
// 004df3cb  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 004df3d2  5b                   pop ebx
// 004df3d3  64890d00000000       mov dword ptr fs:[0], ecx
// 004df3da  81c458010000         add esp, 0x158
// 004df3e0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
