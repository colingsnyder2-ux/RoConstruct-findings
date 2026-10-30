// roc 2009-12 008896b0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008896b0
//
// 008896b0  83ec10               sub esp, 0x10
// 008896b3  53                   push ebx
// 008896b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008896b8  56                   push esi
// 008896b9  57                   push edi
// 008896ba  8d44240c             lea eax, [esp + 0xc]
// 008896be  8bf9                 mov edi, ecx
// 008896c0  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008896c3  50                   push eax
// 008896c4  51                   push ecx
// 008896c5  ff1550cc9800         call dword ptr [0x98cc50]
// 008896cb  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008896d1  83f804               cmp eax, 4
// 008896d4  0f85c6000000         jne 0x8897a0
// 008896da  6a3d                 push 0x3d
// 008896dc  8bcf                 mov ecx, edi
// 008896de  e85d3ff7ff           call 0x7fd640
// 008896e3  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 008896ea  8bf0                 mov esi, eax
// 008896ec  7507                 jne 0x8896f5
// 008896ee  b829000000           mov eax, 0x29
// 008896f3  eb12                 jmp 0x889707
// 008896f5  53                   push ebx
// 008896f6  8bcf                 mov ecx, edi
// 008896f8  e83349f7ff           call 0x7fe030
// 008896fd  f7d8                 neg eax
// 008896ff  1bc0                 sbb eax, eax
// 00889701  83e0f1               and eax, 0xfffffff1
// 00889704  83c01e               add eax, 0x1e
// 00889707  50                   push eax
// 00889708  8bcf                 mov ecx, edi
// 0088970a  e8313ff7ff           call 0x7fd640
// 0088970f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00889713  56                   push esi
// 00889714  56                   push esi
// 00889715  8d542414             lea edx, [esp + 0x14]
// 00889719  52                   push edx
// 0088971a  8bcf                 mov ecx, edi
// 0088971c  8bd8                 mov ebx, eax
// 0088971e  e8d5aef6ff           call 0x7f45f8
// 00889723  6aff                 push -1
// 00889725  6aff                 push -1
// 00889727  8d442414             lea eax, [esp + 0x14]
// 0088972b  50                   push eax
// 0088972c  ff1558ca9800         call dword ptr [0x98ca58]
// 00889732  53                   push ebx
// 00889733  8d4c2410             lea ecx, [esp + 0x10]
// 00889737  51                   push ecx
// 00889738  8bcf                 mov ecx, edi
// 0088973a  e8bfaef6ff           call 0x7f45fe
// 0088973f  56                   push esi
// 00889740  56                   push esi
// 00889741  8d542414             lea edx, [esp + 0x14]
// 00889745  52                   push edx
// 00889746  8bcf                 mov ecx, edi
// 00889748  e8abaef6ff           call 0x7f45f8
// 0088974d  8b4704               mov eax, dword ptr [edi + 4]
// 00889750  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 00889756  56                   push esi
// 00889757  6a02                 push 2
// 00889759  6a02                 push 2
// 0088975b  50                   push eax
// 0088975c  ffd3                 call ebx
// 0088975e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00889762  8b5704               mov edx, dword ptr [edi + 4]
// 00889765  56                   push esi
// 00889766  6a02                 push 2
// 00889768  83c1fe               add ecx, -2
// 0088976b  51                   push ecx
// 0088976c  52                   push edx
// 0088976d  ffd3                 call ebx
// 0088976f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00889773  8b4f04               mov ecx, dword ptr [edi + 4]
// 00889776  56                   push esi
// 00889777  83c0fe               add eax, -2
// 0088977a  50                   push eax
// 0088977b  6a02                 push 2
// 0088977d  51                   push ecx
// 0088977e  ffd3                 call ebx
// 00889780  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889784  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889788  8b4f04               mov ecx, dword ptr [edi + 4]
// 0088978b  56                   push esi
// 0088978c  83c2fe               add edx, -2
// 0088978f  52                   push edx
// 00889790  83c0fe               add eax, -2
// 00889793  50                   push eax
// 00889794  51                   push ecx
// 00889795  ffd3                 call ebx
// 00889797  5f                   pop edi
// 00889798  5e                   pop esi
// 00889799  5b                   pop ebx
// 0088979a  83c410               add esp, 0x10
// 0088979d  c20800               ret 8
// 008897a0  83f805               cmp eax, 5
// 008897a3  754c                 jne 0x8897f1
// 008897a5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008897a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008897ad  8b742420             mov esi, dword ptr [esp + 0x20]
// 008897b1  6a29                 push 0x29
// 008897b3  6a2b                 push 0x2b
// 008897b5  83ec10               sub esp, 0x10
// 008897b8  8bc4                 mov eax, esp
// 008897ba  8910                 mov dword ptr [eax], edx
// 008897bc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008897c0  894804               mov dword ptr [eax + 4], ecx
// 008897c3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008897c7  895008               mov dword ptr [eax + 8], edx
// 008897ca  89480c               mov dword ptr [eax + 0xc], ecx
// 008897cd  56                   push esi
// 008897ce  8bcf                 mov ecx, edi
// 008897d0  e88b4ff7ff           call 0x7fe760
// 008897d5  6a1e                 push 0x1e
// 008897d7  8bcf                 mov ecx, edi
// 008897d9  e8623ef7ff           call 0x7fd640
// 008897de  50                   push eax
// 008897df  53                   push ebx
// 008897e0  56                   push esi
// 008897e1  8bcf                 mov ecx, edi
// 008897e3  e8d8fdffff           call 0x8895c0
// 008897e8  5f                   pop edi
// 008897e9  5e                   pop esi
// 008897ea  5b                   pop ebx
// 008897eb  83c410               add esp, 0x10
// 008897ee  c20800               ret 8
// 008897f1  53                   push ebx
// 008897f2  8bcf                 mov ecx, edi
// 008897f4  e83748f7ff           call 0x7fe030
// 008897f9  6a0f                 push 0xf
// 008897fb  8bcf                 mov ecx, edi
// 008897fd  85c0                 test eax, eax
// 008897ff  741d                 je 0x88981e
// 00889801  e83a3ef7ff           call 0x7fd640
// 00889806  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088980a  50                   push eax
// 0088980b  8d542410             lea edx, [esp + 0x10]
// 0088980f  52                   push edx
// 00889810  e8e9adf6ff           call 0x7f45fe
// 00889815  5f                   pop edi
// 00889816  5e                   pop esi
// 00889817  5b                   pop ebx
// 00889818  83c410               add esp, 0x10
// 0088981b  c20800               ret 8
// 0088981e  e81d3ef7ff           call 0x7fd640
// 00889823  6a1e                 push 0x1e
// 00889825  8bcf                 mov ecx, edi
// 00889827  8bf0                 mov esi, eax
// 00889829  e8123ef7ff           call 0x7fd640
// 0088982e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00889832  50                   push eax
// 00889833  8d442410             lea eax, [esp + 0x10]
// 00889837  50                   push eax
// 00889838  8bcf                 mov ecx, edi
// 0088983a  e8bfadf6ff           call 0x7f45fe
// 0088983f  56                   push esi
// 00889840  56                   push esi
// 00889841  8d4c2414             lea ecx, [esp + 0x14]
// 00889845  51                   push ecx
// 00889846  8bcf                 mov ecx, edi
// 00889848  e8abadf6ff           call 0x7f45f8
// 0088984d  8b5704               mov edx, dword ptr [edi + 4]
// 00889850  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 00889856  56                   push esi
// 00889857  6a01                 push 1
// 00889859  6a01                 push 1
// 0088985b  52                   push edx
// 0088985c  ffd3                 call ebx
// 0088985e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889862  8b4f04               mov ecx, dword ptr [edi + 4]
// 00889865  56                   push esi
// 00889866  6a01                 push 1
// 00889868  83c0fe               add eax, -2
// 0088986b  50                   push eax
// 0088986c  51                   push ecx
// 0088986d  ffd3                 call ebx
// 0088986f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889873  8b4704               mov eax, dword ptr [edi + 4]
// 00889876  56                   push esi
// 00889877  83c2fe               add edx, -2
// 0088987a  52                   push edx
// 0088987b  6a01                 push 1
// 0088987d  50                   push eax
// 0088987e  ffd3                 call ebx
// 00889880  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889884  8b542414             mov edx, dword ptr [esp + 0x14]
// 00889888  8b4704               mov eax, dword ptr [edi + 4]
// 0088988b  56                   push esi
// 0088988c  83c1fe               add ecx, -2
// 0088988f  51                   push ecx
// 00889890  83c2fe               add edx, -2
// 00889893  52                   push edx
// 00889894  50                   push eax
// 00889895  ffd3                 call ebx
// 00889897  5f                   pop edi
// 00889898  5e                   pop esi
// 00889899  5b                   pop ebx
// 0088989a  83c410               add esp, 0x10
// 0088989d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
