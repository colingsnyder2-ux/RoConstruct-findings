// roc 2011-06 0052f230  unit: RBX::Network::ProfiledRakPeer  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f230
//
// 0052f230  8b542404             mov edx, dword ptr [esp + 4]
// 0052f234  56                   push esi
// 0052f235  8b7208               mov esi, dword ptr [edx + 8]
// 0052f238  8b4604               mov eax, dword ptr [esi + 4]
// 0052f23b  85c0                 test eax, eax
// 0052f23d  7566                 jne 0x52f2a5
// 0052f23f  8b06                 mov eax, dword ptr [esi]
// 0052f241  8910                 mov dword ptr [eax], edx
// 0052f243  ff4604               inc dword ptr [esi + 4]
// 0052f246  ff490c               dec dword ptr [ecx + 0xc]
// 0052f249  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052f24c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052f24f  894210               mov dword ptr [edx + 0x10], eax
// 0052f252  8b5610               mov edx, dword ptr [esi + 0x10]
// 0052f255  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052f258  89420c               mov dword ptr [edx + 0xc], eax
// 0052f25b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0052f25f  7e0d                 jle 0x52f26e
// 0052f261  8b4104               mov eax, dword ptr [ecx + 4]
// 0052f264  3bf0                 cmp esi, eax
// 0052f266  7506                 jne 0x52f26e
// 0052f268  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f26b  895104               mov dword ptr [ecx + 4], edx
// 0052f26e  8b4108               mov eax, dword ptr [ecx + 8]
// 0052f271  8d5001               lea edx, [eax + 1]
// 0052f274  895108               mov dword ptr [ecx + 8], edx
// 0052f277  85c0                 test eax, eax
// 0052f279  750c                 jne 0x52f287
// 0052f27b  8931                 mov dword ptr [ecx], esi
// 0052f27d  89760c               mov dword ptr [esi + 0xc], esi
// 0052f280  897610               mov dword ptr [esi + 0x10], esi
// 0052f283  5e                   pop esi
// 0052f284  c20c00               ret 0xc
// 0052f287  8b01                 mov eax, dword ptr [ecx]
// 0052f289  89460c               mov dword ptr [esi + 0xc], eax
// 0052f28c  8b11                 mov edx, dword ptr [ecx]
// 0052f28e  8b4210               mov eax, dword ptr [edx + 0x10]
// 0052f291  894610               mov dword ptr [esi + 0x10], eax
// 0052f294  8b11                 mov edx, dword ptr [ecx]
// 0052f296  8b4210               mov eax, dword ptr [edx + 0x10]
// 0052f299  89700c               mov dword ptr [eax + 0xc], esi
// 0052f29c  8b09                 mov ecx, dword ptr [ecx]
// 0052f29e  897110               mov dword ptr [ecx + 0x10], esi
// 0052f2a1  5e                   pop esi
// 0052f2a2  c20c00               ret 0xc
// 0052f2a5  57                   push edi
// 0052f2a6  8b3e                 mov edi, dword ptr [esi]
// 0052f2a8  891487               mov dword ptr [edi + eax*4], edx
// 0052f2ab  ff4604               inc dword ptr [esi + 4]
// 0052f2ae  8b7e04               mov edi, dword ptr [esi + 4]
// 0052f2b1  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0052f2b6  f76110               mul dword ptr [ecx + 0x10]
// 0052f2b9  c1ea03               shr edx, 3
// 0052f2bc  3bfa                 cmp edi, edx
// 0052f2be  7551                 jne 0x52f311
// 0052f2c0  83790804             cmp dword ptr [ecx + 8], 4
// 0052f2c4  7c4b                 jl 0x52f311
// 0052f2c6  3b31                 cmp esi, dword ptr [ecx]
// 0052f2c8  7505                 jne 0x52f2cf
// 0052f2ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052f2cd  8911                 mov dword ptr [ecx], edx
// 0052f2cf  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052f2d2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052f2d5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052f2d9  89500c               mov dword ptr [eax + 0xc], edx
// 0052f2dc  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052f2df  8b5610               mov edx, dword ptr [esi + 0x10]
// 0052f2e2  53                   push ebx
// 0052f2e3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052f2e7  895010               mov dword ptr [eax + 0x10], edx
// 0052f2ea  ff4908               dec dword ptr [ecx + 8]
// 0052f2ed  8b06                 mov eax, dword ptr [esi]
// 0052f2ef  57                   push edi
// 0052f2f0  53                   push ebx
// 0052f2f1  50                   push eax
// 0052f2f2  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052f2f8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052f2fb  57                   push edi
// 0052f2fc  53                   push ebx
// 0052f2fd  51                   push ecx
// 0052f2fe  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052f304  57                   push edi
// 0052f305  53                   push ebx
// 0052f306  56                   push esi
// 0052f307  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052f30d  83c424               add esp, 0x24
// 0052f310  5b                   pop ebx
// 0052f311  5f                   pop edi
// 0052f312  5e                   pop esi
// 0052f313  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@URemoteSystemIndex@RakNet@@@DataStructures@@QAEXPAURemoteSystemIndex@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
