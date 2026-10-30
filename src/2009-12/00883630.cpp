// roc 2009-12 00883630  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00883630
//
// 00883630  6aff                 push -1
// 00883632  68e8099600           push 0x9609e8
// 00883637  64a100000000         mov eax, dword ptr fs:[0]
// 0088363d  50                   push eax
// 0088363e  81ec84000000         sub esp, 0x84
// 00883644  53                   push ebx
// 00883645  55                   push ebp
// 00883646  56                   push esi
// 00883647  57                   push edi
// 00883648  a10052b600           mov eax, dword ptr [0xb65200]
// 0088364d  33c4                 xor eax, esp
// 0088364f  50                   push eax
// 00883650  8d842498000000       lea eax, [esp + 0x98]
// 00883657  64a300000000         mov dword ptr fs:[0], eax
// 0088365d  8bf1                 mov esi, ecx
// 0088365f  8bac24ac000000       mov ebp, dword ptr [esp + 0xac]
// 00883666  55                   push ebp
// 00883667  8d4c2418             lea ecx, [esp + 0x18]
// 0088366b  e8607cfcff           call 0x84b2d0
// 00883670  83bd0001000005       cmp dword ptr [ebp + 0x100], 5
// 00883677  754b                 jne 0x8836c4
// 00883679  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088367d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883681  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 00883688  6a29                 push 0x29
// 0088368a  6a2b                 push 0x2b
// 0088368c  83ec10               sub esp, 0x10
// 0088368f  8bc4                 mov eax, esp
// 00883691  8908                 mov dword ptr [eax], ecx
// 00883693  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00883697  895004               mov dword ptr [eax + 4], edx
// 0088369a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088369e  894808               mov dword ptr [eax + 8], ecx
// 008836a1  57                   push edi
// 008836a2  8bce                 mov ecx, esi
// 008836a4  89500c               mov dword ptr [eax + 0xc], edx
// 008836a7  e8b4b0f7ff           call 0x7fe760
// 008836ac  6a29                 push 0x29
// 008836ae  8bce                 mov ecx, esi
// 008836b0  e88b9ff7ff           call 0x7fd640
// 008836b5  50                   push eax
// 008836b6  55                   push ebp
// 008836b7  57                   push edi
// 008836b8  8bce                 mov ecx, esi
// 008836ba  e8015f0000           call 0x8895c0
// 008836bf  e9f3070000           jmp 0x883eb7
// 008836c4  55                   push ebp
// 008836c5  8bce                 mov ecx, esi
// 008836c7  e864a9f7ff           call 0x7fe030
// 008836cc  85c0                 test eax, eax
// 008836ce  0f8493010000         je 0x883867
// 008836d4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008836d8  8b1ddccb9800         mov ebx, dword ptr [0x98cbdc]
// 008836de  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 008836e2  6a10                 push 0x10
// 008836e4  ffd3                 call ebx
// 008836e6  99                   cdq 
// 008836e7  2bc2                 sub eax, edx
// 008836e9  d1f8                 sar eax, 1
// 008836eb  3bf8                 cmp edi, eax
// 008836ed  7e0a                 jle 0x8836f9
// 008836ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008836f3  2b442414             sub eax, dword ptr [esp + 0x14]
// 008836f7  eb09                 jmp 0x883702
// 008836f9  6a10                 push 0x10
// 008836fb  ffd3                 call ebx
// 008836fd  99                   cdq 
// 008836fe  2bc2                 sub eax, edx
// 00883700  d1f8                 sar eax, 1
// 00883702  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00883706  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088370a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088370e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00883712  89442430             mov dword ptr [esp + 0x30], eax
// 00883716  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0088371c  894c2424             mov dword ptr [esp + 0x24], ecx
// 00883720  89542428             mov dword ptr [esp + 0x28], edx
// 00883724  83f802               cmp eax, 2
// 00883727  740e                 je 0x883737
// 00883729  85c0                 test eax, eax
// 0088372b  740a                 je 0x883737
// 0088372d  83f803               cmp eax, 3
// 00883730  7405                 je 0x883737
// 00883732  83f801               cmp eax, 1
// 00883735  7577                 jne 0x8837ae
// 00883737  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0088373a  51                   push ecx
// 0088373b  ff15bccb9800         call dword ptr [0x98cbbc]
// 00883741  50                   push eax
// 00883742  e8e303f7ff           call 0x7f3b2a
// 00883747  85c0                 test eax, eax
// 00883749  7463                 je 0x8837ae
// 0088374b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088374e  8d542434             lea edx, [esp + 0x34]
// 00883752  52                   push edx
// 00883753  50                   push eax
// 00883754  ff1570cc9800         call dword ptr [0x98cc70]
// 0088375a  8d4c2434             lea ecx, [esp + 0x34]
// 0088375e  51                   push ecx
// 0088375f  8bcd                 mov ecx, ebp
// 00883761  e87210f7ff           call 0x7f47d8
// 00883766  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0088376a  2b7c2434             sub edi, dword ptr [esp + 0x34]
// 0088376e  6a10                 push 0x10
// 00883770  ffd3                 call ebx
// 00883772  99                   cdq 
// 00883773  2bc2                 sub eax, edx
// 00883775  d1f8                 sar eax, 1
// 00883777  3bf8                 cmp edi, eax
// 00883779  7e0c                 jle 0x883787
// 0088377b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088377f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00883783  2bc1                 sub eax, ecx
// 00883785  eb0d                 jmp 0x883794
// 00883787  6a10                 push 0x10
// 00883789  ffd3                 call ebx
// 0088378b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088378f  99                   cdq 
// 00883790  2bc2                 sub eax, edx
// 00883792  d1f8                 sar eax, 1
// 00883794  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883798  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0088379c  03c1                 add eax, ecx
// 0088379e  894c2424             mov dword ptr [esp + 0x24], ecx
// 008837a2  89542428             mov dword ptr [esp + 0x28], edx
// 008837a6  8944242c             mov dword ptr [esp + 0x2c], eax
// 008837aa  897c2430             mov dword ptr [esp + 0x30], edi
// 008837ae  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 008837b5  8d542414             lea edx, [esp + 0x14]
// 008837b9  52                   push edx
// 008837ba  6a01                 push 1
// 008837bc  8d865c040000         lea eax, [esi + 0x45c]
// 008837c2  50                   push eax
// 008837c3  8d4c2430             lea ecx, [esp + 0x30]
// 008837c7  51                   push ecx
// 008837c8  57                   push edi
// 008837c9  e8d29afcff           call 0x84d2a0
// 008837ce  8bc8                 mov ecx, eax
// 008837d0  e8eb9dfcff           call 0x84d5c0
// 008837d5  83bd0001000004       cmp dword ptr [ebp + 0x100], 4
// 008837dc  0f85d5060000         jne 0x883eb7
// 008837e2  6a3d                 push 0x3d
// 008837e4  8bce                 mov ecx, esi
// 008837e6  e8559ef7ff           call 0x7fd640
// 008837eb  8bf0                 mov esi, eax
// 008837ed  56                   push esi
// 008837ee  56                   push esi
// 008837ef  8d54241c             lea edx, [esp + 0x1c]
// 008837f3  52                   push edx
// 008837f4  8bcf                 mov ecx, edi
// 008837f6  e8fd0df7ff           call 0x7f45f8
// 008837fb  6aff                 push -1
// 008837fd  6aff                 push -1
// 008837ff  8d44241c             lea eax, [esp + 0x1c]
// 00883803  50                   push eax
// 00883804  ff1558ca9800         call dword ptr [0x98ca58]
// 0088380a  56                   push esi
// 0088380b  56                   push esi
// 0088380c  8d4c241c             lea ecx, [esp + 0x1c]
// 00883810  51                   push ecx
// 00883811  8bcf                 mov ecx, edi
// 00883813  e8e00df7ff           call 0x7f45f8
// 00883818  8b5704               mov edx, dword ptr [edi + 4]
// 0088381b  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 00883821  56                   push esi
// 00883822  6a02                 push 2
// 00883824  6a02                 push 2
// 00883826  52                   push edx
// 00883827  ffd3                 call ebx
// 00883829  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088382d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00883830  56                   push esi
// 00883831  6a02                 push 2
// 00883833  83c0fe               add eax, -2
// 00883836  50                   push eax
// 00883837  51                   push ecx
// 00883838  ffd3                 call ebx
// 0088383a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088383e  8b4704               mov eax, dword ptr [edi + 4]
// 00883841  56                   push esi
// 00883842  83c2fe               add edx, -2
// 00883845  52                   push edx
// 00883846  6a02                 push 2
// 00883848  50                   push eax
// 00883849  ffd3                 call ebx
// 0088384b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088384f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883853  8b4704               mov eax, dword ptr [edi + 4]
// 00883856  56                   push esi
// 00883857  83c1fe               add ecx, -2
// 0088385a  51                   push ecx
// 0088385b  83c2fe               add edx, -2
// 0088385e  52                   push edx
// 0088385f  50                   push eax
// 00883860  ffd3                 call ebx
// 00883862  e950060000           jmp 0x883eb7
// 00883867  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0088386d  85c0                 test eax, eax
// 0088386f  0f842d040000         je 0x883ca2
// 00883875  83f801               cmp eax, 1
// 00883878  0f8424040000         je 0x883ca2
// 0088387e  83f802               cmp eax, 2
// 00883881  0f844b020000         je 0x883ad2
// 00883887  83f803               cmp eax, 3
// 0088388a  0f8442020000         je 0x883ad2
// 00883890  83f804               cmp eax, 4
// 00883893  0f8524020000         jne 0x883abd
// 00883899  8b16                 mov edx, dword ptr [esi]
// 0088389b  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 008838a1  55                   push ebp
// 008838a2  8bce                 mov ecx, esi
// 008838a4  ffd0                 call eax
// 008838a6  85c0                 test eax, eax
// 008838a8  0f840f020000         je 0x883abd
// 008838ae  6a1e                 push 0x1e
// 008838b0  8bce                 mov ecx, esi
// 008838b2  e8899df7ff           call 0x7fd640
// 008838b7  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 008838be  50                   push eax
// 008838bf  8d4c2418             lea ecx, [esp + 0x18]
// 008838c3  51                   push ecx
// 008838c4  8bcf                 mov ecx, edi
// 008838c6  e8330df7ff           call 0x7f45fe
// 008838cb  6a3d                 push 0x3d
// 008838cd  8bce                 mov ecx, esi
// 008838cf  e86c9df7ff           call 0x7fd640
// 008838d4  8bd8                 mov ebx, eax
// 008838d6  53                   push ebx
// 008838d7  53                   push ebx
// 008838d8  8d54241c             lea edx, [esp + 0x1c]
// 008838dc  52                   push edx
// 008838dd  8bcf                 mov ecx, edi
// 008838df  e8140df7ff           call 0x7f45f8
// 008838e4  6aff                 push -1
// 008838e6  6aff                 push -1
// 008838e8  8d44241c             lea eax, [esp + 0x1c]
// 008838ec  50                   push eax
// 008838ed  ff1558ca9800         call dword ptr [0x98ca58]
// 008838f3  53                   push ebx
// 008838f4  53                   push ebx
// 008838f5  8d4c241c             lea ecx, [esp + 0x1c]
// 008838f9  51                   push ecx
// 008838fa  8bcf                 mov ecx, edi
// 008838fc  e8f70cf7ff           call 0x7f45f8
// 00883901  8d9698000000         lea edx, [esi + 0x98]
// 00883907  52                   push edx
// 00883908  57                   push edi
// 00883909  8d4c2470             lea ecx, [esp + 0x70]
// 0088390d  e84e7dfcff           call 0x84b660
// 00883912  6a01                 push 1
// 00883914  6868619a00           push 0x9a6168
// 00883919  8d44242c             lea eax, [esp + 0x2c]
// 0088391d  50                   push eax
// 0088391e  8bcf                 mov ecx, edi
// 00883920  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 0088392b  e8e0a8f7ff           call 0x7fe210
// 00883930  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00883934  83f90f               cmp ecx, 0xf
// 00883937  7d05                 jge 0x88393e
// 00883939  b90f000000           mov ecx, 0xf
// 0088393e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883942  8b442420             mov eax, dword ptr [esp + 0x20]
// 00883946  83c2fe               add edx, -2
// 00883949  89542424             mov dword ptr [esp + 0x24], edx
// 0088394d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883951  8d4c1102             lea ecx, [ecx + edx + 2]
// 00883955  8b542414             mov edx, dword ptr [esp + 0x14]
// 00883959  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0088395d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00883961  83c0fe               add eax, -2
// 00883964  83c202               add edx, 2
// 00883967  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088396b  8bcd                 mov ecx, ebp
// 0088396d  89542448             mov dword ptr [esp + 0x48], edx
// 00883971  89442454             mov dword ptr [esp + 0x54], eax
// 00883975  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0088397d  e8ce18f8ff           call 0x805250
// 00883982  85c0                 test eax, eax
// 00883984  0f8eb2000000         jle 0x883a3c
// 0088398a  8d9b00000000         lea ebx, [ebx]
// 00883990  8b542444             mov edx, dword ptr [esp + 0x44]
// 00883994  52                   push edx
// 00883995  8bcd                 mov ecx, ebp
// 00883997  e8c418f8ff           call 0x805260
// 0088399c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008839a3  89442424             mov dword ptr [esp + 0x24], eax
// 008839a7  747e                 je 0x883a27
// 008839a9  8b10                 mov edx, dword ptr [eax]
// 008839ab  8bc8                 mov ecx, eax
// 008839ad  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008839b3  6a00                 push 0
// 008839b5  ffd0                 call eax
// 008839b7  85c0                 test eax, eax
// 008839b9  746c                 je 0x883a27
// 008839bb  8d4c2478             lea ecx, [esp + 0x78]
// 008839bf  51                   push ecx
// 008839c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008839c4  e8e721f7ff           call 0x7f5bb0
// 008839c9  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008839cd  395004               cmp dword ptr [eax + 4], edx
// 008839d0  7e55                 jle 0x883a27
// 008839d2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008839d6  8d842488000000       lea eax, [esp + 0x88]
// 008839dd  50                   push eax
// 008839de  e87d07f8ff           call 0x804160
// 008839e3  8b4004               mov eax, dword ptr [eax + 4]
// 008839e6  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008839ea  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008839ee  6a00                 push 0
// 008839f0  89542460             mov dword ptr [esp + 0x60], edx
// 008839f4  6a00                 push 0
// 008839f6  8d967c040000         lea edx, [esi + 0x47c]
// 008839fc  8944246c             mov dword ptr [esp + 0x6c], eax
// 00883a00  52                   push edx
// 00883a01  8d442464             lea eax, [esp + 0x64]
// 00883a05  894c2464             mov dword ptr [esp + 0x64], ecx
// 00883a09  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00883a0d  50                   push eax
// 00883a0e  57                   push edi
// 00883a0f  894c2474             mov dword ptr [esp + 0x74], ecx
// 00883a13  e88898fcff           call 0x84d2a0
// 00883a18  8bc8                 mov ecx, eax
// 00883a1a  e8a19bfcff           call 0x84d5c0
// 00883a1f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00883a23  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00883a27  ff442444             inc dword ptr [esp + 0x44]
// 00883a2b  8bcd                 mov ecx, ebp
// 00883a2d  e81e18f8ff           call 0x805250
// 00883a32  39442444             cmp dword ptr [esp + 0x44], eax
// 00883a36  0f8c54ffffff         jl 0x883990
// 00883a3c  6a00                 push 0
// 00883a3e  6a00                 push 0
// 00883a40  81c67c040000         add esi, 0x47c
// 00883a46  56                   push esi
// 00883a47  8d542454             lea edx, [esp + 0x54]
// 00883a4b  52                   push edx
// 00883a4c  57                   push edi
// 00883a4d  e84e98fcff           call 0x84d2a0
// 00883a52  8bc8                 mov ecx, eax
// 00883a54  e8679bfcff           call 0x84d5c0
// 00883a59  8b4704               mov eax, dword ptr [edi + 4]
// 00883a5c  53                   push ebx
// 00883a5d  6a02                 push 2
// 00883a5f  6a02                 push 2
// 00883a61  50                   push eax
// 00883a62  ff1514b19800         call dword ptr [0x98b114]
// 00883a68  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00883a6c  53                   push ebx
// 00883a6d  83c1fe               add ecx, -2
// 00883a70  6a02                 push 2
// 00883a72  51                   push ecx
// 00883a73  8bcf                 mov ecx, edi
// 00883a75  e876a7f7ff           call 0x7fe1f0
// 00883a7a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00883a7e  53                   push ebx
// 00883a7f  83c2fe               add edx, -2
// 00883a82  52                   push edx
// 00883a83  6a02                 push 2
// 00883a85  8bcf                 mov ecx, edi
// 00883a87  e864a7f7ff           call 0x7fe1f0
// 00883a8c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00883a90  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00883a94  53                   push ebx
// 00883a95  83c0fe               add eax, -2
// 00883a98  83c1fe               add ecx, -2
// 00883a9b  50                   push eax
// 00883a9c  51                   push ecx
// 00883a9d  8bcf                 mov ecx, edi
// 00883a9f  e84ca7f7ff           call 0x7fe1f0
// 00883aa4  8d4c2468             lea ecx, [esp + 0x68]
// 00883aa8  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 00883ab3  e8287cfcff           call 0x84b6e0
// 00883ab8  e9fa030000           jmp 0x883eb7
// 00883abd  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00883ac4  55                   push ebp
// 00883ac5  52                   push edx
// 00883ac6  8bce                 mov ecx, esi
// 00883ac8  e8e35b0000           call 0x8896b0
// 00883acd  e9e5030000           jmp 0x883eb7
// 00883ad2  6a0f                 push 0xf
// 00883ad4  8bce                 mov ecx, esi
// 00883ad6  e8659bf7ff           call 0x7fd640
// 00883adb  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 00883ae2  50                   push eax
// 00883ae3  8d442418             lea eax, [esp + 0x18]
// 00883ae7  50                   push eax
// 00883ae8  8bcf                 mov ecx, edi
// 00883aea  e80f0bf7ff           call 0x7f45fe
// 00883aef  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00883af2  51                   push ecx
// 00883af3  ff15bccb9800         call dword ptr [0x98cbbc]
// 00883af9  50                   push eax
// 00883afa  e82b00f7ff           call 0x7f3b2a
// 00883aff  8bd8                 mov ebx, eax
// 00883b01  85db                 test ebx, ebx
// 00883b03  0f84e5000000         je 0x883bee
// 00883b09  8bcb                 mov ecx, ebx
// 00883b0b  e862290a00           call 0x926472
// 00883b10  a900410000           test eax, 0x4100
// 00883b15  7420                 je 0x883b37
// 00883b17  8b8674040000         mov eax, dword ptr [esi + 0x474]
// 00883b1d  83f8ff               cmp eax, -1
// 00883b20  7506                 jne 0x883b28
// 00883b22  8b8670040000         mov eax, dword ptr [esi + 0x470]
// 00883b28  50                   push eax
// 00883b29  8d542418             lea edx, [esp + 0x18]
// 00883b2d  52                   push edx
// 00883b2e  8bcf                 mov ecx, edi
// 00883b30  e8c90af7ff           call 0x7f45fe
// 00883b35  eb70                 jmp 0x883ba7
// 00883b37  53                   push ebx
// 00883b38  8d4c2428             lea ecx, [esp + 0x28]
// 00883b3c  e82f77fcff           call 0x84b270
// 00883b41  8d442424             lea eax, [esp + 0x24]
// 00883b45  50                   push eax
// 00883b46  8bcd                 mov ecx, ebp
// 00883b48  e88b0cf7ff           call 0x7f47d8
// 00883b4d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00883b51  2b5c2424             sub ebx, dword ptr [esp + 0x24]
// 00883b55  6a10                 push 0x10
// 00883b57  ff15dccb9800         call dword ptr [0x98cbdc]
// 00883b5d  99                   cdq 
// 00883b5e  2bc2                 sub eax, edx
// 00883b60  d1f8                 sar eax, 1
// 00883b62  3bd8                 cmp ebx, eax
// 00883b64  7e0a                 jle 0x883b70
// 00883b66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00883b6a  2b442424             sub eax, dword ptr [esp + 0x24]
// 00883b6e  eb0d                 jmp 0x883b7d
// 00883b70  6a10                 push 0x10
// 00883b72  ff15dccb9800         call dword ptr [0x98cbdc]
// 00883b78  99                   cdq 
// 00883b79  2bc2                 sub eax, edx
// 00883b7b  d1f8                 sar eax, 1
// 00883b7d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00883b81  03c1                 add eax, ecx
// 00883b83  8d542414             lea edx, [esp + 0x14]
// 00883b87  52                   push edx
// 00883b88  89442430             mov dword ptr [esp + 0x30], eax
// 00883b8c  6a01                 push 1
// 00883b8e  8d865c040000         lea eax, [esi + 0x45c]
// 00883b94  50                   push eax
// 00883b95  8d4c2430             lea ecx, [esp + 0x30]
// 00883b99  51                   push ecx
// 00883b9a  57                   push edi
// 00883b9b  e80097fcff           call 0x84d2a0
// 00883ba0  8bc8                 mov ecx, eax
// 00883ba2  e8199afcff           call 0x84d5c0
// 00883ba7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00883bab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00883baf  8d5003               lea edx, [eax + 3]
// 00883bb2  52                   push edx
// 00883bb3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883bb7  51                   push ecx
// 00883bb8  50                   push eax
// 00883bb9  52                   push edx
// 00883bba  8bcf                 mov ecx, edi
// 00883bbc  e8912d0a00           call 0x926952
// 00883bc1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00883bc5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883bc9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00883bcd  83ec10               sub esp, 0x10
// 00883bd0  8bc4                 mov eax, esp
// 00883bd2  41                   inc ecx
// 00883bd3  8908                 mov dword ptr [eax], ecx
// 00883bd5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00883bd9  83c203               add edx, 3
// 00883bdc  4b                   dec ebx
// 00883bdd  895004               mov dword ptr [eax + 4], edx
// 00883be0  895808               mov dword ptr [eax + 8], ebx
// 00883be3  89480c               mov dword ptr [eax + 0xc], ecx
// 00883be6  57                   push edi
// 00883be7  8bce                 mov ecx, esi
// 00883be9  e8d266fcff           call 0x84a2c0
// 00883bee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883bf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00883bf6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883bfa  6a01                 push 1
// 00883bfc  6a01                 push 1
// 00883bfe  894c2440             mov dword ptr [esp + 0x40], ecx
// 00883c02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00883c06  6a00                 push 0
// 00883c08  89442440             mov dword ptr [esp + 0x40], eax
// 00883c0c  6a01                 push 1
// 00883c0e  894c2450             mov dword ptr [esp + 0x50], ecx
// 00883c12  8b8dfc000000         mov ecx, dword ptr [ebp + 0xfc]
// 00883c18  40                   inc eax
// 00883c19  6aff                 push -1
// 00883c1b  89542450             mov dword ptr [esp + 0x50], edx
// 00883c1f  89442448             mov dword ptr [esp + 0x48], eax
// 00883c23  e8a818fcff           call 0x8454d0
// 00883c28  83f8ff               cmp eax, -1
// 00883c2b  7423                 je 0x883c50
// 00883c2d  8badfc000000         mov ebp, dword ptr [ebp + 0xfc]
// 00883c33  8d542468             lea edx, [esp + 0x68]
// 00883c37  52                   push edx
// 00883c38  50                   push eax
// 00883c39  8bcd                 mov ecx, ebp
// 00883c3b  e81050baff           call 0x428c50
// 00883c40  8bc8                 mov ecx, eax
// 00883c42  e81905f8ff           call 0x804160
// 00883c47  8b442470             mov eax, dword ptr [esp + 0x70]
// 00883c4b  40                   inc eax
// 00883c4c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00883c50  6a00                 push 0
// 00883c52  6a01                 push 1
// 00883c54  8d8e7c040000         lea ecx, [esi + 0x47c]
// 00883c5a  51                   push ecx
// 00883c5b  8d542440             lea edx, [esp + 0x40]
// 00883c5f  52                   push edx
// 00883c60  57                   push edi
// 00883c61  e83a96fcff           call 0x84d2a0
// 00883c66  8bc8                 mov ecx, eax
// 00883c68  e85399fcff           call 0x84d5c0
// 00883c6d  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 00883c73  83f8ff               cmp eax, -1
// 00883c76  7508                 jne 0x883c80
// 00883c78  8bb620050000         mov esi, dword ptr [esi + 0x520]
// 00883c7e  eb02                 jmp 0x883c82
// 00883c80  8bf0                 mov esi, eax
// 00883c82  8b442418             mov eax, dword ptr [esp + 0x18]
// 00883c86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00883c8a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883c8e  2bc8                 sub ecx, eax
// 00883c90  56                   push esi
// 00883c91  83e907               sub ecx, 7
// 00883c94  51                   push ecx
// 00883c95  6a01                 push 1
// 00883c97  83c005               add eax, 5
// 00883c9a  50                   push eax
// 00883c9b  4a                   dec edx
// 00883c9c  52                   push edx
// 00883c9d  e905020000           jmp 0x883ea7
// 00883ca2  6a0f                 push 0xf
// 00883ca4  8bce                 mov ecx, esi
// 00883ca6  e89599f7ff           call 0x7fd640
// 00883cab  8bbc24a8000000       mov edi, dword ptr [esp + 0xa8]
// 00883cb2  50                   push eax
// 00883cb3  8d442418             lea eax, [esp + 0x18]
// 00883cb7  50                   push eax
// 00883cb8  8bcf                 mov ecx, edi
// 00883cba  e83f09f7ff           call 0x7f45fe
// 00883cbf  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00883cc2  51                   push ecx
// 00883cc3  ff15bccb9800         call dword ptr [0x98cbbc]
// 00883cc9  50                   push eax
// 00883cca  e85bfef6ff           call 0x7f3b2a
// 00883ccf  85c0                 test eax, eax
// 00883cd1  0f84c5000000         je 0x883d9c
// 00883cd7  50                   push eax
// 00883cd8  8d4c2438             lea ecx, [esp + 0x38]
// 00883cdc  e88f75fcff           call 0x84b270
// 00883ce1  8d542434             lea edx, [esp + 0x34]
// 00883ce5  52                   push edx
// 00883ce6  8bcd                 mov ecx, ebp
// 00883ce8  e8eb0af7ff           call 0x7f47d8
// 00883ced  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00883cf1  2b5c2434             sub ebx, dword ptr [esp + 0x34]
// 00883cf5  6a10                 push 0x10
// 00883cf7  ff15dccb9800         call dword ptr [0x98cbdc]
// 00883cfd  99                   cdq 
// 00883cfe  2bc2                 sub eax, edx
// 00883d00  d1f8                 sar eax, 1
// 00883d02  3bd8                 cmp ebx, eax
// 00883d04  7e0a                 jle 0x883d10
// 00883d06  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00883d0a  2b442434             sub eax, dword ptr [esp + 0x34]
// 00883d0e  eb0d                 jmp 0x883d1d
// 00883d10  6a10                 push 0x10
// 00883d12  ff15dccb9800         call dword ptr [0x98cbdc]
// 00883d18  99                   cdq 
// 00883d19  2bc2                 sub eax, edx
// 00883d1b  d1f8                 sar eax, 1
// 00883d1d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00883d21  03c1                 add eax, ecx
// 00883d23  8d542414             lea edx, [esp + 0x14]
// 00883d27  52                   push edx
// 00883d28  89442440             mov dword ptr [esp + 0x40], eax
// 00883d2c  6a01                 push 1
// 00883d2e  8d865c040000         lea eax, [esi + 0x45c]
// 00883d34  50                   push eax
// 00883d35  8d4c2440             lea ecx, [esp + 0x40]
// 00883d39  51                   push ecx
// 00883d3a  57                   push edi
// 00883d3b  e86095fcff           call 0x84d2a0
// 00883d40  8bc8                 mov ecx, eax
// 00883d42  e87998fcff           call 0x84d5c0
// 00883d47  8b542420             mov edx, dword ptr [esp + 0x20]
// 00883d4b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00883d4f  52                   push edx
// 00883d50  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00883d54  8d4803               lea ecx, [eax + 3]
// 00883d57  51                   push ecx
// 00883d58  52                   push edx
// 00883d59  50                   push eax
// 00883d5a  8bcf                 mov ecx, edi
// 00883d5c  e8f12b0a00           call 0x926952
// 00883d61  8b442420             mov eax, dword ptr [esp + 0x20]
// 00883d65  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00883d69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00883d6d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00883d71  48                   dec eax
// 00883d72  83ec10               sub esp, 0x10
// 00883d75  83c103               add ecx, 3
// 00883d78  89842494000000       mov dword ptr [esp + 0x94], eax
// 00883d7f  8bc4                 mov eax, esp
// 00883d81  8908                 mov dword ptr [eax], ecx
// 00883d83  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00883d8a  42                   inc edx
// 00883d8b  895004               mov dword ptr [eax + 4], edx
// 00883d8e  895808               mov dword ptr [eax + 8], ebx
// 00883d91  89480c               mov dword ptr [eax + 0xc], ecx
// 00883d94  57                   push edi
// 00883d95  8bce                 mov ecx, esi
// 00883d97  e82465fcff           call 0x84a2c0
// 00883d9c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00883da0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00883da4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00883da8  6a01                 push 1
// 00883daa  6a01                 push 1
// 00883dac  6a00                 push 0
// 00883dae  89442434             mov dword ptr [esp + 0x34], eax
// 00883db2  89542430             mov dword ptr [esp + 0x30], edx
// 00883db6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00883dba  6a01                 push 1
// 00883dbc  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00883dc0  8b8dfc000000         mov ecx, dword ptr [ebp + 0xfc]
// 00883dc6  40                   inc eax
// 00883dc7  6aff                 push -1
// 00883dc9  89542444             mov dword ptr [esp + 0x44], edx
// 00883dcd  8944243c             mov dword ptr [esp + 0x3c], eax
// 00883dd1  e8fa16fcff           call 0x8454d0
// 00883dd6  83f8ff               cmp eax, -1
// 00883dd9  7442                 je 0x883e1d
// 00883ddb  8badfc000000         mov ebp, dword ptr [ebp + 0xfc]
// 00883de1  85c0                 test eax, eax
// 00883de3  7c0d                 jl 0x883df2
// 00883de5  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00883de8  7d08                 jge 0x883df2
// 00883dea  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00883ded  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00883df0  eb02                 jmp 0x883df4
// 00883df2  33c0                 xor eax, eax
// 00883df4  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00883dfa  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 00883e00  89542458             mov dword ptr [esp + 0x58], edx
// 00883e04  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00883e0a  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00883e10  40                   inc eax
// 00883e11  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00883e15  89542460             mov dword ptr [esp + 0x60], edx
// 00883e19  89442430             mov dword ptr [esp + 0x30], eax
// 00883e1d  6a00                 push 0
// 00883e1f  6a00                 push 0
// 00883e21  8d867c040000         lea eax, [esi + 0x47c]
// 00883e27  50                   push eax
// 00883e28  8d4c2430             lea ecx, [esp + 0x30]
// 00883e2c  51                   push ecx
// 00883e2d  57                   push edi
// 00883e2e  e86d94fcff           call 0x84d2a0
// 00883e33  8bc8                 mov ecx, eax
// 00883e35  e88697fcff           call 0x84d5c0
// 00883e3a  8b8694040000         mov eax, dword ptr [esi + 0x494]
// 00883e40  83f8ff               cmp eax, -1
// 00883e43  7506                 jne 0x883e4b
// 00883e45  8b8690040000         mov eax, dword ptr [esi + 0x490]
// 00883e4b  8b542428             mov edx, dword ptr [esp + 0x28]
// 00883e4f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00883e53  50                   push eax
// 00883e54  8b442434             mov eax, dword ptr [esp + 0x34]
// 00883e58  2bd0                 sub edx, eax
// 00883e5a  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 00883e5e  8d540afe             lea edx, [edx + ecx - 2]
// 00883e62  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00883e66  52                   push edx
// 00883e67  8b542434             mov edx, dword ptr [esp + 0x34]
// 00883e6b  2bd1                 sub edx, ecx
// 00883e6d  52                   push edx
// 00883e6e  50                   push eax
// 00883e6f  51                   push ecx
// 00883e70  8bcf                 mov ecx, edi
// 00883e72  e81f260a00           call 0x926496
// 00883e77  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 00883e7d  83f8ff               cmp eax, -1
// 00883e80  7508                 jne 0x883e8a
// 00883e82  8bb620050000         mov esi, dword ptr [esi + 0x520]
// 00883e88  eb02                 jmp 0x883e8c
// 00883e8a  8bf0                 mov esi, eax
// 00883e8c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00883e90  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00883e94  8b542420             mov edx, dword ptr [esp + 0x20]
// 00883e98  56                   push esi
// 00883e99  2bc8                 sub ecx, eax
// 00883e9b  6a01                 push 1
// 00883e9d  83e907               sub ecx, 7
// 00883ea0  51                   push ecx
// 00883ea1  4a                   dec edx
// 00883ea2  52                   push edx
// 00883ea3  83c005               add eax, 5
// 00883ea6  50                   push eax
// 00883ea7  8bcf                 mov ecx, edi
// 00883ea9  e8e8250a00           call 0x926496
// 00883eae  6a00                 push 0
// 00883eb0  8bcf                 mov ecx, edi
// 00883eb2  e8ad270a00           call 0x926664
// 00883eb7  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00883ebe  64890d00000000       mov dword ptr fs:[0], ecx
// 00883ec5  59                   pop ecx
// 00883ec6  5f                   pop edi
// 00883ec7  5e                   pop esi
// 00883ec8  5d                   pop ebp
// 00883ec9  5b                   pop ebx
// 00883eca  81c490000000         add esp, 0x90
// 00883ed0  c20800               ret 8
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp