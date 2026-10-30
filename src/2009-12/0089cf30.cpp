// roc 2009-12 0089cf30  unit: CXTPReportPaintManager  size: 1759 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089cf30
//
// 0089cf30  6aff                 push -1
// 0089cf32  68011d9600           push 0x961d01
// 0089cf37  64a100000000         mov eax, dword ptr fs:[0]
// 0089cf3d  50                   push eax
// 0089cf3e  83ec64               sub esp, 0x64
// 0089cf41  53                   push ebx
// 0089cf42  55                   push ebp
// 0089cf43  56                   push esi
// 0089cf44  57                   push edi
// 0089cf45  a10052b600           mov eax, dword ptr [0xb65200]
// 0089cf4a  33c4                 xor eax, esp
// 0089cf4c  50                   push eax
// 0089cf4d  8d442478             lea eax, [esp + 0x78]
// 0089cf51  64a300000000         mov dword ptr fs:[0], eax
// 0089cf57  8bf9                 mov edi, ecx
// 0089cf59  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0089cf60  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0089cf67  85f6                 test esi, esi
// 0089cf69  7431                 je 0x89cf9c
// 0089cf6b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089cf72  e8a9acf8ff           call 0x827c20
// 0089cf77  85c0                 test eax, eax
// 0089cf79  7421                 je 0x89cf9c
// 0089cf7b  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 0089cf83  7517                 jne 0x89cf9c
// 0089cf85  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 0089cf8d  750d                 jne 0x89cf9c
// 0089cf8f  837d4000             cmp dword ptr [ebp + 0x40], 0
// 0089cf93  7407                 je 0x89cf9c
// 0089cf95  b801000000           mov eax, 1
// 0089cf9a  eb02                 jmp 0x89cf9e
// 0089cf9c  33c0                 xor eax, eax
// 0089cf9e  85f6                 test esi, esi
// 0089cfa0  7412                 je 0x89cfb4
// 0089cfa2  85c0                 test eax, eax
// 0089cfa4  750e                 jne 0x89cfb4
// 0089cfa6  bb01000000           mov ebx, 1
// 0089cfab  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0089cfb2  eb12                 jmp 0x89cfc6
// 0089cfb4  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0089cfbf  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0089cfc6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089cfcd  e84eacf8ff           call 0x827c20
// 0089cfd2  85c0                 test eax, eax
// 0089cfd4  7411                 je 0x89cfe7
// 0089cfd6  85f6                 test esi, esi
// 0089cfd8  750d                 jne 0x89cfe7
// 0089cfda  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0089cfe2  397540               cmp dword ptr [ebp + 0x40], esi
// 0089cfe5  7508                 jne 0x89cfef
// 0089cfe7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0089cfef  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0089cff6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0089cffd  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0089d004  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0089d00b  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0089d00f  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 0089d012  89542450             mov dword ptr [esp + 0x50], edx
// 0089d016  89442448             mov dword ptr [esp + 0x48], eax
// 0089d01a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0089d021  8d9424a4000000       lea edx, [esp + 0xa4]
// 0089d028  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089d02c  52                   push edx
// 0089d02d  8bcd                 mov ecx, ebp
// 0089d02f  89442458             mov dword ptr [esp + 0x58], eax
// 0089d033  e838d0f7ff           call 0x81a070
// 0089d038  33c0                 xor eax, eax
// 0089d03a  89842480000000       mov dword ptr [esp + 0x80], eax
// 0089d041  3bd8                 cmp ebx, eax
// 0089d043  0f8511020000         jne 0x89d25a
// 0089d049  3987bc020000         cmp dword ptr [edi + 0x2bc], eax
// 0089d04f  0f8505020000         jne 0x89d25a
// 0089d055  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0089d05d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0089d064  8b17                 mov edx, dword ptr [edi]
// 0089d066  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0089d06d  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 0089d073  8d44241c             lea eax, [esp + 0x1c]
// 0089d077  50                   push eax
// 0089d078  83ec10               sub esp, 0x10
// 0089d07b  8bc4                 mov eax, esp
// 0089d07d  8908                 mov dword ptr [eax], ecx
// 0089d07f  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0089d086  894804               mov dword ptr [eax + 4], ecx
// 0089d089  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0089d090  894808               mov dword ptr [eax + 8], ecx
// 0089d093  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0089d09a  55                   push ebp
// 0089d09b  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d09e  56                   push esi
// 0089d09f  8bcf                 mov ecx, edi
// 0089d0a1  ffd2                 call edx
// 0089d0a3  8b4778               mov eax, dword ptr [edi + 0x78]
// 0089d0a6  83f8ff               cmp eax, -1
// 0089d0a9  7503                 jne 0x89d0ae
// 0089d0ab  8b4774               mov eax, dword ptr [edi + 0x74]
// 0089d0ae  8b16                 mov edx, dword ptr [esi]
// 0089d0b0  50                   push eax
// 0089d0b1  8b4234               mov eax, dword ptr [edx + 0x34]
// 0089d0b4  8bce                 mov ecx, esi
// 0089d0b6  ffd0                 call eax
// 0089d0b8  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0089d0bf  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0089d0c6  83c9ff               or ecx, 0xffffffff
// 0089d0c9  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0089d0cd  89542438             mov dword ptr [esp + 0x38], edx
// 0089d0d1  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0089d0d8  03c1                 add eax, ecx
// 0089d0da  83bda800000000       cmp dword ptr [ebp + 0xa8], 0
// 0089d0e1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0089d0e8  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0089d0ef  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089d0f3  89542440             mov dword ptr [esp + 0x40], edx
// 0089d0f7  89442444             mov dword ptr [esp + 0x44], eax
// 0089d0fb  750f                 jne 0x89d10c
// 0089d0fd  85db                 test ebx, ebx
// 0089d0ff  750b                 jne 0x89d10c
// 0089d101  8bcd                 mov ecx, ebp
// 0089d103  e818aef8ff           call 0x827f20
// 0089d108  01442438             add dword ptr [esp + 0x38], eax
// 0089d10c  8bcd                 mov ecx, ebp
// 0089d10e  e8cdaaf8ff           call 0x827be0
// 0089d113  85c0                 test eax, eax
// 0089d115  7411                 je 0x89d128
// 0089d117  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0089d11b  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 0089d126  740b                 je 0x89d133
// 0089d128  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0089d133  8d4730               lea eax, [edi + 0x30]
// 0089d136  50                   push eax
// 0089d137  56                   push esi
// 0089d138  8d4c2470             lea ecx, [esp + 0x70]
// 0089d13c  e81fe5faff           call 0x84b660
// 0089d141  8d4c2428             lea ecx, [esp + 0x28]
// 0089d145  51                   push ecx
// 0089d146  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0089d14d  c684248400000001     mov byte ptr [esp + 0x84], 1
// 0089d155  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d15b  50                   push eax
// 0089d15c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0089d163  ff1580de9800         call dword ptr [0x98de80]
// 0089d169  8b5608               mov edx, dword ptr [esi + 8]
// 0089d16c  50                   push eax
// 0089d16d  52                   push edx
// 0089d16e  ff156cb19800         call dword ptr [0x98b16c]
// 0089d174  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089d178  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0089d17c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089d183  896c2420             mov dword ptr [esp + 0x20], ebp
// 0089d187  89442424             mov dword ptr [esp + 0x24], eax
// 0089d18b  e8c0a8f8ff           call 0x827a50
// 0089d190  85c0                 test eax, eax
// 0089d192  0f84c2010000         je 0x89d35a
// 0089d198  85db                 test ebx, ebx
// 0089d19a  0f85ba010000         jne 0x89d35a
// 0089d1a0  83c506               add ebp, 6
// 0089d1a3  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 0089d1a8  744b                 je 0x89d1f5
// 0089d1aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089d1ae  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089d1b2  8b1f                 mov ebx, dword ptr [edi]
// 0089d1b4  51                   push ecx
// 0089d1b5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089d1b9  83ec10               sub esp, 0x10
// 0089d1bc  8bc4                 mov eax, esp
// 0089d1be  8910                 mov dword ptr [eax], edx
// 0089d1c0  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089d1c4  894804               mov dword ptr [eax + 4], ecx
// 0089d1c7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089d1cb  895008               mov dword ptr [eax + 8], edx
// 0089d1ce  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d1d1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0089d1d8  e8b3aaf8ff           call 0x827c90
// 0089d1dd  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 0089d1e3  50                   push eax
// 0089d1e4  6a00                 push 0
// 0089d1e6  8bcf                 mov ecx, edi
// 0089d1e8  ffd2                 call edx
// 0089d1ea  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0089d1f1  8d6c2802             lea ebp, [eax + ebp + 2]
// 0089d1f5  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0089d1fd  7403                 je 0x89d202
// 0089d1ff  83c51b               add ebp, 0x1b
// 0089d202  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089d206  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089d20a  2bc8                 sub ecx, eax
// 0089d20c  3bcd                 cmp ecx, ebp
// 0089d20e  0f8e4a010000         jle 0x89d35e
// 0089d214  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089d21b  e830a8f8ff           call 0x827a50
// 0089d220  a802                 test al, 2
// 0089d222  740a                 je 0x89d22e
// 0089d224  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089d228  2bd5                 sub edx, ebp
// 0089d22a  89542438             mov dword ptr [esp + 0x38], edx
// 0089d22e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089d235  e816a8f8ff           call 0x827a50
// 0089d23a  a801                 test al, 1
// 0089d23c  0f8418010000         je 0x89d35a
// 0089d242  8b442440             mov eax, dword ptr [esp + 0x40]
// 0089d246  2bc5                 sub eax, ebp
// 0089d248  03442438             add eax, dword ptr [esp + 0x38]
// 0089d24c  99                   cdq 
// 0089d24d  2bc2                 sub eax, edx
// 0089d24f  d1f8                 sar eax, 1
// 0089d251  89442438             mov dword ptr [esp + 0x38], eax
// 0089d255  e904010000           jmp 0x89d35e
// 0089d25a  89442418             mov dword ptr [esp + 0x18], eax
// 0089d25e  3bd8                 cmp ebx, eax
// 0089d260  0f84f7fdffff         je 0x89d05d
// 0089d266  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 0089d26d  755d                 jne 0x89d2cc
// 0089d26f  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0089d276  50                   push eax
// 0089d277  50                   push eax
// 0089d278  8d8754010000         lea eax, [edi + 0x154]
// 0089d27e  50                   push eax
// 0089d27f  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0089d286  51                   push ecx
// 0089d287  56                   push esi
// 0089d288  e81300fbff           call 0x84d2a0
// 0089d28d  8bc8                 mov ecx, eax
// 0089d28f  e82c03fbff           call 0x84d5c0
// 0089d294  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 0089d29a  83f8ff               cmp eax, -1
// 0089d29d  7506                 jne 0x89d2a5
// 0089d29f  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 0089d2a5  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 0089d2ab  83f9ff               cmp ecx, -1
// 0089d2ae  7506                 jne 0x89d2b6
// 0089d2b0  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 0089d2b6  50                   push eax
// 0089d2b7  51                   push ecx
// 0089d2b8  8d94249c000000       lea edx, [esp + 0x9c]
// 0089d2bf  52                   push edx
// 0089d2c0  8bce                 mov ecx, esi
// 0089d2c2  e83173f5ff           call 0x7f45f8
// 0089d2c7  e9d7fdffff           jmp 0x89d0a3
// 0089d2cc  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 0089d2d2  83f8ff               cmp eax, -1
// 0089d2d5  7508                 jne 0x89d2df
// 0089d2d7  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 0089d2dd  eb02                 jmp 0x89d2e1
// 0089d2df  8bc8                 mov ecx, eax
// 0089d2e1  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 0089d2e7  83f8ff               cmp eax, -1
// 0089d2ea  7506                 jne 0x89d2f2
// 0089d2ec  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 0089d2f2  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0089d2f9  51                   push ecx
// 0089d2fa  50                   push eax
// 0089d2fb  8d84249c000000       lea eax, [esp + 0x9c]
// 0089d302  50                   push eax
// 0089d303  8bce                 mov ecx, esi
// 0089d305  e8ee72f5ff           call 0x7f45f8
// 0089d30a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0089d311  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0089d318  51                   push ecx
// 0089d319  52                   push edx
// 0089d31a  8d442430             lea eax, [esp + 0x30]
// 0089d31e  50                   push eax
// 0089d31f  8bce                 mov ecx, esi
// 0089d321  e81c74f5ff           call 0x7f4742
// 0089d326  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0089d32d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0089d334  51                   push ecx
// 0089d335  52                   push edx
// 0089d336  8bce                 mov ecx, esi
// 0089d338  e8ff73f5ff           call 0x7f473c
// 0089d33d  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0089d344  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0089d34b  48                   dec eax
// 0089d34c  50                   push eax
// 0089d34d  51                   push ecx
// 0089d34e  8bce                 mov ecx, esi
// 0089d350  e8e773f5ff           call 0x7f473c
// 0089d355  e949fdffff           jmp 0x89d0a3
// 0089d35a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089d35e  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 0089d363  0f8481000000         je 0x89d3ea
// 0089d369  85db                 test ebx, ebx
// 0089d36b  757d                 jne 0x89d3ea
// 0089d36d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089d371  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089d375  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0089d379  8bc8                 mov ecx, eax
// 0089d37b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089d37f  89442464             mov dword ptr [esp + 0x64], eax
// 0089d383  03c3                 add eax, ebx
// 0089d385  8b1f                 mov ebx, dword ptr [edi]
// 0089d387  89442464             mov dword ptr [esp + 0x64], eax
// 0089d38b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089d38f  50                   push eax
// 0089d390  83ec10               sub esp, 0x10
// 0089d393  8bc4                 mov eax, esp
// 0089d395  8908                 mov dword ptr [eax], ecx
// 0089d397  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089d39b  895004               mov dword ptr [eax + 4], edx
// 0089d39e  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0089d3a2  896808               mov dword ptr [eax + 8], ebp
// 0089d3a5  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d3a8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0089d3ac  83ec10               sub esp, 0x10
// 0089d3af  8bc4                 mov eax, esp
// 0089d3b1  8910                 mov dword ptr [eax], edx
// 0089d3b3  8b542474             mov edx, dword ptr [esp + 0x74]
// 0089d3b7  894804               mov dword ptr [eax + 4], ecx
// 0089d3ba  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089d3be  895008               mov dword ptr [eax + 8], edx
// 0089d3c1  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 0089d3c8  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d3cb  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 0089d3d1  52                   push edx
// 0089d3d2  56                   push esi
// 0089d3d3  8bcf                 mov ecx, edi
// 0089d3d5  ffd0                 call eax
// 0089d3d7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089d3db  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0089d3e2  8d540102             lea edx, [ecx + eax + 2]
// 0089d3e6  89542438             mov dword ptr [esp + 0x38], edx
// 0089d3ea  6a01                 push 1
// 0089d3ec  8bce                 mov ecx, esi
// 0089d3ee  e89d900800           call 0x926490
// 0089d3f3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089d3f7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089d3fb  83e903               sub ecx, 3
// 0089d3fe  83c003               add eax, 3
// 0089d401  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089d405  894c2450             mov dword ptr [esp + 0x50], ecx
// 0089d409  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089d40d  8be8                 mov ebp, eax
// 0089d40f  89442438             mov dword ptr [esp + 0x38], eax
// 0089d413  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089d417  894c2454             mov dword ptr [esp + 0x54], ecx
// 0089d41b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0089d422  896c2448             mov dword ptr [esp + 0x48], ebp
// 0089d426  8944244c             mov dword ptr [esp + 0x4c], eax
// 0089d42a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d430  85c0                 test eax, eax
// 0089d432  0f8e2f010000         jle 0x89d567
// 0089d438  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089d43c  3b542438             cmp edx, dword ptr [esp + 0x38]
// 0089d440  0f8e21010000         jle 0x89d567
// 0089d446  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0089d44c  83f8ff               cmp eax, -1
// 0089d44f  7506                 jne 0x89d457
// 0089d451  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0089d457  8b16                 mov edx, dword ptr [esi]
// 0089d459  50                   push eax
// 0089d45a  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089d45d  8bce                 mov ecx, esi
// 0089d45f  ffd0                 call eax
// 0089d461  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 0089d468  744c                 je 0x89d4b6
// 0089d46a  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0089d472  7442                 je 0x89d4b6
// 0089d474  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0089d478  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0089d47c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089d480  8bcb                 mov ecx, ebx
// 0089d482  2bcd                 sub ecx, ebp
// 0089d484  8d41e5               lea eax, [ecx - 0x1b]
// 0089d487  3bd0                 cmp edx, eax
// 0089d489  8bca                 mov ecx, edx
// 0089d48b  7c02                 jl 0x89d48f
// 0089d48d  8bc8                 mov ecx, eax
// 0089d48f  83f9fb               cmp ecx, -5
// 0089d492  7d0a                 jge 0x89d49e
// 0089d494  c7442420fbffffff     mov dword ptr [esp + 0x20], 0xfffffffb
// 0089d49c  eb08                 jmp 0x89d4a6
// 0089d49e  3bd0                 cmp edx, eax
// 0089d4a0  7c04                 jl 0x89d4a6
// 0089d4a2  89442420             mov dword ptr [esp + 0x20], eax
// 0089d4a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089d4aa  8d442a08             lea eax, [edx + ebp + 8]
// 0089d4ae  3bd8                 cmp ebx, eax
// 0089d4b0  7c04                 jl 0x89d4b6
// 0089d4b2  89442440             mov dword ptr [esp + 0x40], eax
// 0089d4b6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089d4bd  e88ea5f8ff           call 0x827a50
// 0089d4c2  a810                 test al, 0x10
// 0089d4c4  745e                 je 0x89d524
// 0089d4c6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089d4ca  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089d4ce  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089d4d2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0089d4d6  68108c0000           push 0x8c10
// 0089d4db  8d4c242c             lea ecx, [esp + 0x2c]
// 0089d4df  89542434             mov dword ptr [esp + 0x34], edx
// 0089d4e3  51                   push ecx
// 0089d4e4  89442430             mov dword ptr [esp + 0x30], eax
// 0089d4e8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0089d4ec  8d9424ac000000       lea edx, [esp + 0xac]
// 0089d4f3  52                   push edx
// 0089d4f4  8bce                 mov ecx, esi
// 0089d4f6  bb10880000           mov ebx, 0x8810
// 0089d4fb  89442440             mov dword ptr [esp + 0x40], eax
// 0089d4ff  e81cc6f5ff           call 0x7f9b20
// 0089d504  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089d508  2b442434             sub eax, dword ptr [esp + 0x34]
// 0089d50c  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0089d510  03442444             add eax, dword ptr [esp + 0x44]
// 0089d514  83f801               cmp eax, 1
// 0089d517  7e10                 jle 0x89d529
// 0089d519  99                   cdq 
// 0089d51a  2bc2                 sub eax, edx
// 0089d51c  d1f8                 sar eax, 1
// 0089d51e  0144243c             add dword ptr [esp + 0x3c], eax
// 0089d522  eb05                 jmp 0x89d529
// 0089d524  bb24880000           mov ebx, 0x8824
// 0089d529  8b2e                 mov ebp, dword ptr [esi]
// 0089d52b  53                   push ebx
// 0089d52c  8d44243c             lea eax, [esp + 0x3c]
// 0089d530  50                   push eax
// 0089d531  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0089d538  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d53e  50                   push eax
// 0089d53f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0089d546  ff1580de9800         call dword ptr [0x98de80]
// 0089d54c  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0089d54f  50                   push eax
// 0089d550  8bce                 mov ecx, esi
// 0089d552  ffd2                 call edx
// 0089d554  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089d558  01442448             add dword ptr [esp + 0x48], eax
// 0089d55c  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0089d563  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0089d567  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0089d56f  743d                 je 0x89d5ae
// 0089d571  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089d578  f7db                 neg ebx
// 0089d57a  1bdb                 sbb ebx, ebx
// 0089d57c  83e307               and ebx, 7
// 0089d57f  83c30a               add ebx, 0xa
// 0089d582  03eb                 add ebp, ebx
// 0089d584  e867a5f8ff           call 0x827af0
// 0089d589  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089d58d  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089d591  50                   push eax
// 0089d592  83ec10               sub esp, 0x10
// 0089d595  8bc4                 mov eax, esp
// 0089d597  8928                 mov dword ptr [eax], ebp
// 0089d599  894804               mov dword ptr [eax + 4], ecx
// 0089d59c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089d5a0  895008               mov dword ptr [eax + 8], edx
// 0089d5a3  89480c               mov dword ptr [eax + 0xc], ecx
// 0089d5a6  56                   push esi
// 0089d5a7  8bcf                 mov ecx, edi
// 0089d5a9  e842e4ffff           call 0x89b9f0
// 0089d5ae  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0089d5b3  7426                 je 0x89d5db
// 0089d5b5  83bf1002000000       cmp dword ptr [edi + 0x210], 0
// 0089d5bc  741d                 je 0x89d5db
// 0089d5be  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089d5c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089d5c5  019424a0000000       add dword ptr [esp + 0xa0], edx
// 0089d5cc  8d842494000000       lea eax, [esp + 0x94]
// 0089d5d3  50                   push eax
// 0089d5d4  51                   push ecx
// 0089d5d5  ff15a0ca9800         call dword ptr [0x98caa0]
// 0089d5db  8d4c2468             lea ecx, [esp + 0x68]
// 0089d5df  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0089d5e7  e8f4e0faff           call 0x84b6e0
// 0089d5ec  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0089d5f3  ff15c0de9800         call dword ptr [0x98dec0]
// 0089d5f9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089d5fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0089d604  59                   pop ecx
// 0089d605  5f                   pop edi
// 0089d606  5e                   pop esi
// 0089d607  5d                   pop ebp
// 0089d608  5b                   pop ebx
// 0089d609  83c470               add esp, 0x70
// 0089d60c  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawColumn@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp