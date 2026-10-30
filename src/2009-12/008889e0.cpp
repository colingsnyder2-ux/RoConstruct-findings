// roc 2009-12 008889e0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1031 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008889e0
//
// 008889e0  6aff                 push -1
// 008889e2  68180c9600           push 0x960c18
// 008889e7  64a100000000         mov eax, dword ptr fs:[0]
// 008889ed  50                   push eax
// 008889ee  83ec58               sub esp, 0x58
// 008889f1  53                   push ebx
// 008889f2  55                   push ebp
// 008889f3  56                   push esi
// 008889f4  57                   push edi
// 008889f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008889fa  33c4                 xor eax, esp
// 008889fc  50                   push eax
// 008889fd  8d44246c             lea eax, [esp + 0x6c]
// 00888a01  64a300000000         mov dword ptr fs:[0], eax
// 00888a07  8bf9                 mov edi, ecx
// 00888a09  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00888a11  7523                 jne 0x888a36
// 00888a13  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00888a1a  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00888a21  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00888a25  6a00                 push 0
// 00888a27  50                   push eax
// 00888a28  51                   push ecx
// 00888a29  56                   push esi
// 00888a2a  8bcf                 mov ecx, edi
// 00888a2c  e84f79f7ff           call 0x800380
// 00888a31  e999030000           jmp 0x888dcf
// 00888a36  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 00888a3d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00888a43  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00888a49  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00888a50  33d2                 xor edx, edx
// 00888a52  83f802               cmp eax, 2
// 00888a55  0f94c2               sete dl
// 00888a58  8d87a4000000         lea eax, [edi + 0xa4]
// 00888a5e  50                   push eax
// 00888a5f  53                   push ebx
// 00888a60  8d4c2464             lea ecx, [esp + 0x64]
// 00888a64  89542424             mov dword ptr [esp + 0x24], edx
// 00888a68  e8f32bfcff           call 0x84b660
// 00888a6d  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00888a73  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00888a79  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00888a7f  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 00888a85  894c2440             mov dword ptr [esp + 0x40], ecx
// 00888a89  8bce                 mov ecx, esi
// 00888a8b  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00888a93  89542444             mov dword ptr [esp + 0x44], edx
// 00888a97  89442448             mov dword ptr [esp + 0x48], eax
// 00888a9b  e83044eeff           call 0x76ced0
// 00888aa0  8b16                 mov edx, dword ptr [esi]
// 00888aa2  f7d8                 neg eax
// 00888aa4  1bc0                 sbb eax, eax
// 00888aa6  f7d8                 neg eax
// 00888aa8  89442418             mov dword ptr [esp + 0x18], eax
// 00888aac  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00888aaf  8bce                 mov ecx, esi
// 00888ab1  ffd0                 call eax
// 00888ab3  89842484000000       mov dword ptr [esp + 0x84], eax
// 00888aba  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00888ac0  83f8ff               cmp eax, -1
// 00888ac3  750f                 jne 0x888ad4
// 00888ac5  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00888acb  85c9                 test ecx, ecx
// 00888acd  7405                 je 0x888ad4
// 00888acf  e8dcdaf6ff           call 0x7f65b0
// 00888ad4  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00888adb  51                   push ecx
// 00888adc  56                   push esi
// 00888add  53                   push ebx
// 00888ade  8d542430             lea edx, [esp + 0x30]
// 00888ae2  52                   push edx
// 00888ae3  8bcf                 mov ecx, edi
// 00888ae5  89842490000000       mov dword ptr [esp + 0x90], eax
// 00888aec  e88f78f7ff           call 0x800380
// 00888af1  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 00888af7  8b442444             mov eax, dword ptr [esp + 0x44]
// 00888afb  8b542444             mov edx, dword ptr [esp + 0x44]
// 00888aff  03aea0010000         add ebp, dword ptr [esi + 0x1a0]
// 00888b05  2bc1                 sub eax, ecx
// 00888b07  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00888b0b  894c2430             mov dword ptr [esp + 0x30], ecx
// 00888b0f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00888b13  894c2438             mov dword ptr [esp + 0x38], ecx
// 00888b17  49                   dec ecx
// 00888b18  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 00888b20  894c2414             mov dword ptr [esp + 0x14], ecx
// 00888b24  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00888b28  89542434             mov dword ptr [esp + 0x34], edx
// 00888b2c  8d5101               lea edx, [ecx + 1]
// 00888b2f  89942488000000       mov dword ptr [esp + 0x88], edx
// 00888b36  8d5503               lea edx, [ebp + 3]
// 00888b39  8944242c             mov dword ptr [esp + 0x2c], eax
// 00888b3d  89442420             mov dword ptr [esp + 0x20], eax
// 00888b41  8954244c             mov dword ptr [esp + 0x4c], edx
// 00888b45  7560                 jne 0x888ba7
// 00888b47  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00888b4e  45                   inc ebp
// 00888b4f  83f802               cmp eax, 2
// 00888b52  7409                 je 0x888b5d
// 00888b54  83f803               cmp eax, 3
// 00888b57  7404                 je 0x888b5d
// 00888b59  33c0                 xor eax, eax
// 00888b5b  eb05                 jmp 0x888b62
// 00888b5d  b801000000           mov eax, 1
// 00888b62  33d2                 xor edx, edx
// 00888b64  85c0                 test eax, eax
// 00888b66  0f94c2               sete dl
// 00888b69  6a0f                 push 0xf
// 00888b6b  8d14d520000000       lea edx, [edx*8 + 0x20]
// 00888b72  52                   push edx
// 00888b73  8b542450             mov edx, dword ptr [esp + 0x50]
// 00888b77  83ec10               sub esp, 0x10
// 00888b7a  8bc4                 mov eax, esp
// 00888b7c  8928                 mov dword ptr [eax], ebp
// 00888b7e  894804               mov dword ptr [eax + 4], ecx
// 00888b81  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00888b85  894808               mov dword ptr [eax + 8], ecx
// 00888b88  53                   push ebx
// 00888b89  8bcf                 mov ecx, edi
// 00888b8b  89500c               mov dword ptr [eax + 0xc], edx
// 00888b8e  e8cd5bf7ff           call 0x7fe760
// 00888b93  6aff                 push -1
// 00888b95  6aff                 push -1
// 00888b97  8d442434             lea eax, [esp + 0x34]
// 00888b9b  50                   push eax
// 00888b9c  ff1558ca9800         call dword ptr [0x98ca58]
// 00888ba2  e95d010000           jmp 0x888d04
// 00888ba7  6a05                 push 5
// 00888ba9  6a05                 push 5
// 00888bab  8d4801               lea ecx, [eax + 1]
// 00888bae  83ec10               sub esp, 0x10
// 00888bb1  8bc4                 mov eax, esp
// 00888bb3  8d5501               lea edx, [ebp + 1]
// 00888bb6  8910                 mov dword ptr [eax], edx
// 00888bb8  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00888bbf  895004               mov dword ptr [eax + 4], edx
// 00888bc2  894808               mov dword ptr [eax + 8], ecx
// 00888bc5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00888bc9  89480c               mov dword ptr [eax + 0xc], ecx
// 00888bcc  53                   push ebx
// 00888bcd  8bcf                 mov ecx, edi
// 00888bcf  e88c5bf7ff           call 0x7fe760
// 00888bd4  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00888bdc  0f848a000000         je 0x888c6c
// 00888be2  8b542440             mov edx, dword ptr [esp + 0x40]
// 00888be6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00888bea  6a05                 push 5
// 00888bec  6a20                 push 0x20
// 00888bee  83ec10               sub esp, 0x10
// 00888bf1  8bc4                 mov eax, esp
// 00888bf3  8928                 mov dword ptr [eax], ebp
// 00888bf5  895004               mov dword ptr [eax + 4], edx
// 00888bf8  8b542460             mov edx, dword ptr [esp + 0x60]
// 00888bfc  894808               mov dword ptr [eax + 8], ecx
// 00888bff  53                   push ebx
// 00888c00  8bcf                 mov ecx, edi
// 00888c02  89500c               mov dword ptr [eax + 0xc], edx
// 00888c05  e8565bf7ff           call 0x7fe760
// 00888c0a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00888c10  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00888c16  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00888c1c  51                   push ecx
// 00888c1d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888c21  8b17                 mov edx, dword ptr [edi]
// 00888c23  50                   push eax
// 00888c24  8b442420             mov eax, dword ptr [esp + 0x20]
// 00888c28  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00888c2e  6a00                 push 0
// 00888c30  6a00                 push 0
// 00888c32  6a01                 push 1
// 00888c34  50                   push eax
// 00888c35  6a01                 push 1
// 00888c37  83ec10               sub esp, 0x10
// 00888c3a  8bc4                 mov eax, esp
// 00888c3c  8908                 mov dword ptr [eax], ecx
// 00888c3e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00888c42  894804               mov dword ptr [eax + 4], ecx
// 00888c45  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00888c49  894808               mov dword ptr [eax + 8], ecx
// 00888c4c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00888c50  89480c               mov dword ptr [eax + 0xc], ecx
// 00888c53  53                   push ebx
// 00888c54  8bcf                 mov ecx, edi
// 00888c56  ffd2                 call edx
// 00888c58  6aff                 push -1
// 00888c5a  6aff                 push -1
// 00888c5c  8d442434             lea eax, [esp + 0x34]
// 00888c60  50                   push eax
// 00888c61  ff1558ca9800         call dword ptr [0x98ca58]
// 00888c67  e998000000           jmp 0x888d04
// 00888c6c  6aff                 push -1
// 00888c6e  6aff                 push -1
// 00888c70  8d4c2434             lea ecx, [esp + 0x34]
// 00888c74  51                   push ecx
// 00888c75  ff1558ca9800         call dword ptr [0x98ca58]
// 00888c7b  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00888c80  7456                 je 0x888cd8
// 00888c82  8b542440             mov edx, dword ptr [esp + 0x40]
// 00888c86  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00888c8a  6a35                 push 0x35
// 00888c8c  6a35                 push 0x35
// 00888c8e  83ec10               sub esp, 0x10
// 00888c91  8bc4                 mov eax, esp
// 00888c93  8928                 mov dword ptr [eax], ebp
// 00888c95  895004               mov dword ptr [eax + 4], edx
// 00888c98  8b542460             mov edx, dword ptr [esp + 0x60]
// 00888c9c  894808               mov dword ptr [eax + 8], ecx
// 00888c9f  53                   push ebx
// 00888ca0  8bcf                 mov ecx, edi
// 00888ca2  89500c               mov dword ptr [eax + 0xc], edx
// 00888ca5  e8964bf7ff           call 0x7fd840
// 00888caa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00888cae  8b542430             mov edx, dword ptr [esp + 0x30]
// 00888cb2  6a35                 push 0x35
// 00888cb4  6a05                 push 5
// 00888cb6  83ec10               sub esp, 0x10
// 00888cb9  8bc4                 mov eax, esp
// 00888cbb  8908                 mov dword ptr [eax], ecx
// 00888cbd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00888cc1  895004               mov dword ptr [eax + 4], edx
// 00888cc4  8b542450             mov edx, dword ptr [esp + 0x50]
// 00888cc8  894808               mov dword ptr [eax + 8], ecx
// 00888ccb  53                   push ebx
// 00888ccc  8bcf                 mov ecx, edi
// 00888cce  89500c               mov dword ptr [eax + 0xc], edx
// 00888cd1  e88a5af7ff           call 0x7fe760
// 00888cd6  eb2c                 jmp 0x888d04
// 00888cd8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00888cdc  8b542430             mov edx, dword ptr [esp + 0x30]
// 00888ce0  6a05                 push 5
// 00888ce2  6a05                 push 5
// 00888ce4  83ec10               sub esp, 0x10
// 00888ce7  8bc4                 mov eax, esp
// 00888ce9  8908                 mov dword ptr [eax], ecx
// 00888ceb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00888cef  895004               mov dword ptr [eax + 4], edx
// 00888cf2  8b542450             mov edx, dword ptr [esp + 0x50]
// 00888cf6  894808               mov dword ptr [eax + 8], ecx
// 00888cf9  53                   push ebx
// 00888cfa  8bcf                 mov ecx, edi
// 00888cfc  89500c               mov dword ptr [eax + 0xc], edx
// 00888cff  e83c4bf7ff           call 0x7fd840
// 00888d04  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00888d08  8b16                 mov edx, dword ptr [esi]
// 00888d0a  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 00888d10  83ec10               sub esp, 0x10
// 00888d13  8bc4                 mov eax, esp
// 00888d15  8908                 mov dword ptr [eax], ecx
// 00888d17  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00888d1e  894804               mov dword ptr [eax + 4], ecx
// 00888d21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888d25  894808               mov dword ptr [eax + 8], ecx
// 00888d28  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00888d2c  89480c               mov dword ptr [eax + 0xc], ecx
// 00888d2f  53                   push ebx
// 00888d30  8bce                 mov ecx, esi
// 00888d32  ffd2                 call edx
// 00888d34  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00888d3a  83f8ff               cmp eax, -1
// 00888d3d  7511                 jne 0x888d50
// 00888d3f  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 00888d45  85f6                 test esi, esi
// 00888d47  7407                 je 0x888d50
// 00888d49  8bce                 mov ecx, esi
// 00888d4b  e860d8f6ff           call 0x7f65b0
// 00888d50  85c0                 test eax, eax
// 00888d52  7507                 jne 0x888d5b
// 00888d54  b828000000           mov eax, 0x28
// 00888d59  eb1c                 jmp 0x888d77
// 00888d5b  837c241800           cmp dword ptr [esp + 0x18], 0
// 00888d60  7407                 je 0x888d69
// 00888d62  b82f000000           mov eax, 0x2f
// 00888d67  eb0e                 jmp 0x888d77
// 00888d69  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00888d70  f7d8                 neg eax
// 00888d72  1bc0                 sbb eax, eax
// 00888d74  83c02e               add eax, 0x2e
// 00888d77  8b37                 mov esi, dword ptr [edi]
// 00888d79  50                   push eax
// 00888d7a  8bcf                 mov ecx, edi
// 00888d7c  e8bf48f7ff           call 0x7fd640
// 00888d81  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00888d85  8b542430             mov edx, dword ptr [esp + 0x30]
// 00888d89  50                   push eax
// 00888d8a  83ec10               sub esp, 0x10
// 00888d8d  8bc4                 mov eax, esp
// 00888d8f  8908                 mov dword ptr [eax], ecx
// 00888d91  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00888d95  895004               mov dword ptr [eax + 4], edx
// 00888d98  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00888d9c  894808               mov dword ptr [eax + 8], ecx
// 00888d9f  89500c               mov dword ptr [eax + 0xc], edx
// 00888da2  8b86f0000000         mov eax, dword ptr [esi + 0xf0]
// 00888da8  53                   push ebx
// 00888da9  8bcf                 mov ecx, edi
// 00888dab  ffd0                 call eax
// 00888dad  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00888db1  8d4c245c             lea ecx, [esp + 0x5c]
// 00888db5  c70600000000         mov dword ptr [esi], 0
// 00888dbb  c7460400000000       mov dword ptr [esi + 4], 0
// 00888dc2  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00888dca  e81129fcff           call 0x84b6e0
// 00888dcf  8bc6                 mov eax, esi
// 00888dd1  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00888dd5  64890d00000000       mov dword ptr fs:[0], ecx
// 00888ddc  59                   pop ecx
// 00888ddd  5f                   pop edi
// 00888dde  5e                   pop esi
// 00888ddf  5d                   pop ebp
// 00888de0  5b                   pop ebx
// 00888de1  83c464               add esp, 0x64
// 00888de4  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOfficeTheme.cpp