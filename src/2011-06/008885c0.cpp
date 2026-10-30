// roc 2011-06 008885c0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 1636 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008885c0
//
// 008885c0  6aff                 push -1
// 008885c2  68b18da000           push 0xa08db1
// 008885c7  64a100000000         mov eax, dword ptr fs:[0]
// 008885cd  50                   push eax
// 008885ce  83ec68               sub esp, 0x68
// 008885d1  53                   push ebx
// 008885d2  55                   push ebp
// 008885d3  56                   push esi
// 008885d4  57                   push edi
// 008885d5  a12058c900           mov eax, dword ptr [0xc95820]
// 008885da  33c4                 xor eax, esp
// 008885dc  50                   push eax
// 008885dd  8d44247c             lea eax, [esp + 0x7c]
// 008885e1  64a300000000         mov dword ptr fs:[0], eax
// 008885e7  8bf9                 mov edi, ecx
// 008885e9  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008885f0  85c0                 test eax, eax
// 008885f2  7414                 je 0x888608
// 008885f4  8b4074               mov eax, dword ptr [eax + 0x74]
// 008885f7  83787400             cmp dword ptr [eax + 0x74], 0
// 008885fb  7506                 jne 0x888603
// 008885fd  83787800             cmp dword ptr [eax + 0x78], 0
// 00888601  7405                 je 0x888608
// 00888603  83c074               add eax, 0x74
// 00888606  eb0c                 jmp 0x888614
// 00888608  6a00                 push 0
// 0088860a  8d442428             lea eax, [esp + 0x28]
// 0088860e  50                   push eax
// 0088860f  e8ac79f8ff           call 0x80ffc0
// 00888614  8b10                 mov edx, dword ptr [eax]
// 00888616  8b4004               mov eax, dword ptr [eax + 4]
// 00888619  8d4804               lea ecx, [eax + 4]
// 0088861c  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 00888622  3bc8                 cmp ecx, eax
// 00888624  8954242c             mov dword ptr [esp + 0x2c], edx
// 00888628  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088862c  7f04                 jg 0x888632
// 0088862e  89442418             mov dword ptr [esp + 0x18], eax
// 00888632  8d4a04               lea ecx, [edx + 4]
// 00888635  3bc8                 cmp ecx, eax
// 00888637  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088863b  7f04                 jg 0x888641
// 0088863d  89442414             mov dword ptr [esp + 0x14], eax
// 00888641  83bc24ac00000000     cmp dword ptr [esp + 0xac], 0
// 00888649  0f84ab050000         je 0x888bfa
// 0088864f  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00888656  6a0f                 push 0xf
// 00888658  8bcf                 mov ecx, edi
// 0088865a  e8516ff8ff           call 0x80f5b0
// 0088865f  50                   push eax
// 00888660  85ed                 test ebp, ebp
// 00888662  7525                 jne 0x888689
// 00888664  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0088866b  51                   push ecx
// 0088866c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00888673  e8a827f8ff           call 0x80ae20
// 00888678  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0088867f  8928                 mov dword ptr [eax], ebp
// 00888681  896804               mov dword ptr [eax + 4], ebp
// 00888684  e985050000           jmp 0x888c0e
// 00888689  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 00888690  8d94249c000000       lea edx, [esp + 0x9c]
// 00888697  52                   push edx
// 00888698  8bce                 mov ecx, esi
// 0088869a  e88127f8ff           call 0x80ae20
// 0088869f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008886a6  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008886ad  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008886b4  8b9dfc000000         mov ebx, dword ptr [ebp + 0xfc]
// 008886ba  48                   dec eax
// 008886bb  41                   inc ecx
// 008886bc  89442424             mov dword ptr [esp + 0x24], eax
// 008886c0  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008886c7  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008886cb  8bcd                 mov ecx, ebp
// 008886cd  89542460             mov dword ptr [esp + 0x60], edx
// 008886d1  89442468             mov dword ptr [esp + 0x68], eax
// 008886d5  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 008886dc  e8df3df8ff           call 0x80c4c0
// 008886e1  85c0                 test eax, eax
// 008886e3  7534                 jne 0x888719
// 008886e5  83fb02               cmp ebx, 2
// 008886e8  7439                 je 0x888723
// 008886ea  ba01000000           mov edx, 1
// 008886ef  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 008886f5  85c0                 test eax, eax
// 008886f7  753c                 jne 0x888735
// 008886f9  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008886ff  85c0                 test eax, eax
// 00888701  7f32                 jg 0x888735
// 00888703  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00888709  85c9                 test ecx, ecx
// 0088870b  741a                 je 0x888727
// 0088870d  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00888710  85c0                 test eax, eax
// 00888712  7f21                 jg 0x888735
// 00888714  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00888717  eb14                 jmp 0x88872d
// 00888719  83f802               cmp eax, 2
// 0088871c  74cc                 je 0x8886ea
// 0088871e  83f803               cmp eax, 3
// 00888721  74c7                 je 0x8886ea
// 00888723  33d2                 xor edx, edx
// 00888725  ebc8                 jmp 0x8886ef
// 00888727  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 0088872d  85c0                 test eax, eax
// 0088872f  0f841c010000         je 0x888851
// 00888735  85d2                 test edx, edx
// 00888737  0f8414010000         je 0x888851
// 0088873d  8b5500               mov edx, dword ptr [ebp]
// 00888740  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00888744  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 0088874a  50                   push eax
// 0088874b  8bcd                 mov ecx, ebp
// 0088874d  ffd2                 call edx
// 0088874f  8bd8                 mov ebx, eax
// 00888751  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00888755  85db                 test ebx, ebx
// 00888757  0f84f4000000         je 0x888851
// 0088875d  8bcb                 mov ecx, ebx
// 0088875f  e86cba0100           call 0x8a41d0
// 00888764  8be8                 mov ebp, eax
// 00888766  0faf6c242c           imul ebp, dword ptr [esp + 0x2c]
// 0088876b  8bcb                 mov ecx, ebx
// 0088876d  e81e0cfeff           call 0x869390
// 00888772  8bc8                 mov ecx, eax
// 00888774  8bc5                 mov eax, ebp
// 00888776  99                   cdq 
// 00888777  f7f9                 idiv ecx
// 00888779  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00888780  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00888787  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088878b  6a05                 push 5
// 0088878d  6a01                 push 1
// 0088878f  6a00                 push 0
// 00888791  6a00                 push 0
// 00888793  6a01                 push 1
// 00888795  6a00                 push 0
// 00888797  8d1c2a               lea ebx, [edx + ebp]
// 0088879a  8b17                 mov edx, dword ptr [edi]
// 0088879c  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 008887a2  894c2468             mov dword ptr [esp + 0x68], ecx
// 008887a6  896c2464             mov dword ptr [esp + 0x64], ebp
// 008887aa  89442448             mov dword ptr [esp + 0x48], eax
// 008887ae  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008887b5  89442470             mov dword ptr [esp + 0x70], eax
// 008887b9  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 008887c0  50                   push eax
// 008887c1  83ec10               sub esp, 0x10
// 008887c4  8bc4                 mov eax, esp
// 008887c6  8928                 mov dword ptr [eax], ebp
// 008887c8  894804               mov dword ptr [eax + 4], ecx
// 008887cb  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008887d2  895808               mov dword ptr [eax + 8], ebx
// 008887d5  89480c               mov dword ptr [eax + 0xc], ecx
// 008887d8  56                   push esi
// 008887d9  8bcf                 mov ecx, edi
// 008887db  ffd2                 call edx
// 008887dd  8b442458             mov eax, dword ptr [esp + 0x58]
// 008887e1  2b442450             sub eax, dword ptr [esp + 0x50]
// 008887e5  6a00                 push 0
// 008887e7  99                   cdq 
// 008887e8  2bc2                 sub eax, edx
// 008887ea  8bc8                 mov ecx, eax
// 008887ec  8b442434             mov eax, dword ptr [esp + 0x34]
// 008887f0  99                   cdq 
// 008887f1  2bc2                 sub eax, edx
// 008887f3  d1f8                 sar eax, 1
// 008887f5  d1f9                 sar ecx, 1
// 008887f7  2bc8                 sub ecx, eax
// 008887f9  034c2454             add ecx, dword ptr [esp + 0x54]
// 008887fd  8bc3                 mov eax, ebx
// 008887ff  2bc5                 sub eax, ebp
// 00888801  99                   cdq 
// 00888802  2bc2                 sub eax, edx
// 00888804  6a00                 push 0
// 00888806  8be8                 mov ebp, eax
// 00888808  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088880c  6a00                 push 0
// 0088880e  6a01                 push 1
// 00888810  99                   cdq 
// 00888811  2bc2                 sub eax, edx
// 00888813  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0088881a  6a00                 push 0
// 0088881c  52                   push edx
// 0088881d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00888821  52                   push edx
// 00888822  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00888826  52                   push edx
// 00888827  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088882b  d1f8                 sar eax, 1
// 0088882d  d1fd                 sar ebp, 1
// 0088882f  2be8                 sub ebp, eax
// 00888831  036c246c             add ebp, dword ptr [esp + 0x6c]
// 00888835  8b07                 mov eax, dword ptr [edi]
// 00888837  52                   push edx
// 00888838  51                   push ecx
// 00888839  55                   push ebp
// 0088883a  56                   push esi
// 0088883b  8bcf                 mov ecx, edi
// 0088883d  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 00888843  ffd0                 call eax
// 00888845  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0088884c  43                   inc ebx
// 0088884d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00888851  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 00888858  85db                 test ebx, ebx
// 0088885a  742f                 je 0x88888b
// 0088885c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00888860  8b542460             mov edx, dword ptr [esp + 0x60]
// 00888864  6a0d                 push 0xd
// 00888866  6a0d                 push 0xd
// 00888868  83ec10               sub esp, 0x10
// 0088886b  8bc4                 mov eax, esp
// 0088886d  8908                 mov dword ptr [eax], ecx
// 0088886f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00888873  895004               mov dword ptr [eax + 4], edx
// 00888876  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0088887d  894808               mov dword ptr [eax + 8], ecx
// 00888880  56                   push esi
// 00888881  8bcf                 mov ecx, edi
// 00888883  89500c               mov dword ptr [eax + 0xc], edx
// 00888886  e8f57df8ff           call 0x810680
// 0088888b  33c0                 xor eax, eax
// 0088888d  85db                 test ebx, ebx
// 0088888f  0f94c0               sete al
// 00888892  8bcf                 mov ecx, edi
// 00888894  8d04850e000000       lea eax, [eax*4 + 0xe]
// 0088889b  50                   push eax
// 0088889c  89442428             mov dword ptr [esp + 0x28], eax
// 008888a0  e80b6df8ff           call 0x80f5b0
// 008888a5  8b16                 mov edx, dword ptr [esi]
// 008888a7  89842494000000       mov dword ptr [esp + 0x94], eax
// 008888ae  50                   push eax
// 008888af  8b4238               mov eax, dword ptr [edx + 0x38]
// 008888b2  8bce                 mov ecx, esi
// 008888b4  ffd0                 call eax
// 008888b6  6a01                 push 1
// 008888b8  8bce                 mov ecx, esi
// 008888ba  e82f3d1400           call 0x9cc5ee
// 008888bf  8b5500               mov edx, dword ptr [ebp]
// 008888c2  8b5258               mov edx, dword ptr [edx + 0x58]
// 008888c5  8d8424ac000000       lea eax, [esp + 0xac]
// 008888cc  50                   push eax
// 008888cd  8bcd                 mov ecx, ebp
// 008888cf  ffd2                 call edx
// 008888d1  8d8424ac000000       lea eax, [esp + 0xac]
// 008888d8  50                   push eax
// 008888d9  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 008888e4  e8576ff8ff           call 0x80f840
// 008888e9  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008888f0  83c404               add esp, 4
// 008888f3  85c9                 test ecx, ecx
// 008888f5  741d                 je 0x888914
// 008888f7  e8f415faff           call 0x829ef0
// 008888fc  85c0                 test eax, eax
// 008888fe  7414                 je 0x888914
// 00888900  8b17                 mov edx, dword ptr [edi]
// 00888902  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00888908  8d8424ac000000       lea eax, [esp + 0xac]
// 0088890f  50                   push eax
// 00888910  8bcf                 mov ecx, edi
// 00888912  ffd2                 call edx
// 00888914  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0088891b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088891f  8d540104             lea edx, [ecx + eax + 4]
// 00888923  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0088892a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00888931  89442440             mov dword ptr [esp + 0x40], eax
// 00888935  8d87f0000000         lea eax, [edi + 0xf0]
// 0088893b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0088893f  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00888946  50                   push eax
// 00888947  894c2448             mov dword ptr [esp + 0x48], ecx
// 0088894b  56                   push esi
// 0088894c  8d4c2474             lea ecx, [esp + 0x74]
// 00888950  89542450             mov dword ptr [esp + 0x50], edx
// 00888954  e8c747fdff           call 0x85d120
// 00888959  8b2e                 mov ebp, dword ptr [esi]
// 0088895b  6824880000           push 0x8824
// 00888960  8d4c2440             lea ecx, [esp + 0x40]
// 00888964  51                   push ecx
// 00888965  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0088896c  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00888974  ff15a826a400         call dword ptr [0xa426a8]
// 0088897a  50                   push eax
// 0088897b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00888982  ff15c82da400         call dword ptr [0xa42dc8]
// 00888988  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0088898b  50                   push eax
// 0088898c  8bce                 mov ecx, esi
// 0088898e  ffd2                 call edx
// 00888990  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00888997  83f802               cmp eax, 2
// 0088899a  740e                 je 0x8889aa
// 0088899c  83f803               cmp eax, 3
// 0088899f  7409                 je 0x8889aa
// 008889a1  83f804               cmp eax, 4
// 008889a4  0f858e000000         jne 0x888a38
// 008889aa  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008889b1  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008889b8  03c1                 add eax, ecx
// 008889ba  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008889c1  99                   cdq 
// 008889c2  2bc2                 sub eax, edx
// 008889c4  d1f8                 sar eax, 1
// 008889c6  8d58fb               lea ebx, [eax - 5]
// 008889c9  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 008889d0  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 008889d7  53                   push ebx
// 008889d8  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 008889df  83c1f9               add ecx, -7
// 008889e2  8d6805               lea ebp, [eax + 5]
// 008889e5  55                   push ebp
// 008889e6  8d51fb               lea edx, [ecx - 5]
// 008889e9  52                   push edx
// 008889ea  53                   push ebx
// 008889eb  52                   push edx
// 008889ec  50                   push eax
// 008889ed  51                   push ecx
// 008889ee  56                   push esi
// 008889ef  e8bc7bf8ff           call 0x8105b0
// 008889f4  83c420               add esp, 0x20
// 008889f7  83bc249000000004     cmp dword ptr [esp + 0x90], 4
// 008889ff  7530                 jne 0x888a31
// 00888a01  8b542424             mov edx, dword ptr [esp + 0x24]
// 00888a05  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00888a0c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00888a13  52                   push edx
// 00888a14  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00888a1b  49                   dec ecx
// 00888a1c  51                   push ecx
// 00888a1d  83c0ec               add eax, -0x14
// 00888a20  50                   push eax
// 00888a21  42                   inc edx
// 00888a22  52                   push edx
// 00888a23  50                   push eax
// 00888a24  56                   push esi
// 00888a25  8bcf                 mov ecx, edi
// 00888a27  e89480f8ff           call 0x810ac0
// 00888a2c  e9ab010000           jmp 0x888bdc
// 00888a31  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00888a38  83f805               cmp eax, 5
// 00888a3b  7409                 je 0x888a46
// 00888a3d  83f806               cmp eax, 6
// 00888a40  0f8596010000         jne 0x888bdc
// 00888a46  8d44243c             lea eax, [esp + 0x3c]
// 00888a4a  50                   push eax
// 00888a4b  ff15ac19a400         call dword ptr [0xa419ac]
// 00888a51  8b1e                 mov ebx, dword ptr [esi]
// 00888a53  6820040000           push 0x420
// 00888a58  8d4c2440             lea ecx, [esp + 0x40]
// 00888a5c  51                   push ecx
// 00888a5d  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00888a64  ff15a826a400         call dword ptr [0xa426a8]
// 00888a6a  50                   push eax
// 00888a6b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00888a72  ff15c82da400         call dword ptr [0xa42dc8]
// 00888a78  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00888a7b  50                   push eax
// 00888a7c  8bce                 mov ecx, esi
// 00888a7e  ffd2                 call edx
// 00888a80  8b4e08               mov ecx, dword ptr [esi + 8]
// 00888a83  8d44241c             lea eax, [esp + 0x1c]
// 00888a87  50                   push eax
// 00888a88  6a01                 push 1
// 00888a8a  686056a600           push 0xa65660
// 00888a8f  51                   push ecx
// 00888a90  ff153801a400         call dword ptr [0xa40138]
// 00888a96  8b542444             mov edx, dword ptr [esp + 0x44]
// 00888a9a  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00888a9e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00888aa5  03542414             add edx, dword ptr [esp + 0x14]
// 00888aa9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00888aad  8d540a09             lea edx, [edx + ecx + 9]
// 00888ab1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00888ab8  83c002               add eax, 2
// 00888abb  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 00888ac2  8be9                 mov ebp, ecx
// 00888ac4  2be8                 sub ebp, eax
// 00888ac6  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00888acd  89442438             mov dword ptr [esp + 0x38], eax
// 00888ad1  33c0                 xor eax, eax
// 00888ad3  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 00888ada  6a05                 push 5
// 00888adc  0f94c0               sete al
// 00888adf  894c2438             mov dword ptr [esp + 0x38], ecx
// 00888ae3  8d44000d             lea eax, [eax + eax + 0xd]
// 00888ae7  50                   push eax
// 00888ae8  83ec10               sub esp, 0x10
// 00888aeb  8bc4                 mov eax, esp
// 00888aed  8910                 mov dword ptr [eax], edx
// 00888aef  8bd3                 mov edx, ebx
// 00888af1  895004               mov dword ptr [eax + 4], edx
// 00888af4  894808               mov dword ptr [eax + 8], ecx
// 00888af7  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00888afe  89480c               mov dword ptr [eax + 0xc], ecx
// 00888b01  56                   push esi
// 00888b02  8bcf                 mov ecx, edi
// 00888b04  e8777bf8ff           call 0x810680
// 00888b09  83bc249000000005     cmp dword ptr [esp + 0x90], 5
// 00888b11  0f85c5000000         jne 0x888bdc
// 00888b17  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 00888b1f  6a0f                 push 0xf
// 00888b21  7549                 jne 0x888b6c
// 00888b23  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00888b27  2bc3                 sub eax, ebx
// 00888b29  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00888b30  8b442438             mov eax, dword ptr [esp + 0x38]
// 00888b34  2bc5                 sub eax, ebp
// 00888b36  8bcf                 mov ecx, edi
// 00888b38  89842494000000       mov dword ptr [esp + 0x94], eax
// 00888b3f  e86c6af8ff           call 0x80f5b0
// 00888b44  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00888b4b  50                   push eax
// 00888b4c  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00888b53  83c2fc               add edx, -4
// 00888b56  52                   push edx
// 00888b57  83c0fc               add eax, -4
// 00888b5a  50                   push eax
// 00888b5b  8d4b02               lea ecx, [ebx + 2]
// 00888b5e  51                   push ecx
// 00888b5f  8d5502               lea edx, [ebp + 2]
// 00888b62  52                   push edx
// 00888b63  8bce                 mov ecx, esi
// 00888b65  e86c3a1400           call 0x9cc5d6
// 00888b6a  eb22                 jmp 0x888b8e
// 00888b6c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00888b70  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00888b74  6a0d                 push 0xd
// 00888b76  83ec10               sub esp, 0x10
// 00888b79  8bc4                 mov eax, esp
// 00888b7b  8928                 mov dword ptr [eax], ebp
// 00888b7d  895804               mov dword ptr [eax + 4], ebx
// 00888b80  894808               mov dword ptr [eax + 8], ecx
// 00888b83  56                   push esi
// 00888b84  8bcf                 mov ecx, edi
// 00888b86  89500c               mov dword ptr [eax + 0xc], edx
// 00888b89  e8f27af8ff           call 0x810680
// 00888b8e  b801000000           mov eax, 1
// 00888b93  29442434             sub dword ptr [esp + 0x34], eax
// 00888b97  29442438             sub dword ptr [esp + 0x38], eax
// 00888b9b  03e8                 add ebp, eax
// 00888b9d  03d8                 add ebx, eax
// 00888b9f  8b07                 mov eax, dword ptr [edi]
// 00888ba1  6a12                 push 0x12
// 00888ba3  8bcf                 mov ecx, edi
// 00888ba5  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00888bac  e8ff69f8ff           call 0x80f5b0
// 00888bb1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00888bb5  8b542438             mov edx, dword ptr [esp + 0x38]
// 00888bb9  50                   push eax
// 00888bba  83ec10               sub esp, 0x10
// 00888bbd  8bc4                 mov eax, esp
// 00888bbf  8928                 mov dword ptr [eax], ebp
// 00888bc1  895804               mov dword ptr [eax + 4], ebx
// 00888bc4  894808               mov dword ptr [eax + 8], ecx
// 00888bc7  89500c               mov dword ptr [eax + 0xc], edx
// 00888bca  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00888bd1  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 00888bd7  56                   push esi
// 00888bd8  8bcf                 mov ecx, edi
// 00888bda  ffd2                 call edx
// 00888bdc  8d4c246c             lea ecx, [esp + 0x6c]
// 00888be0  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00888be8  e8b345fdff           call 0x85d1a0
// 00888bed  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00888bf4  ff15082ea400         call dword ptr [0xa42e08]
// 00888bfa  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00888c01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00888c05  8b542418             mov edx, dword ptr [esp + 0x18]
// 00888c09  8908                 mov dword ptr [eax], ecx
// 00888c0b  895004               mov dword ptr [eax + 4], edx
// 00888c0e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00888c12  64890d00000000       mov dword ptr fs:[0], ecx
// 00888c19  59                   pop ecx
// 00888c1a  5f                   pop edi
// 00888c1b  5e                   pop esi
// 00888c1c  5d                   pop ebp
// 00888c1d  5b                   pop ebx
// 00888c1e  83c474               add esp, 0x74
// 00888c21  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDefaultTheme.cpp