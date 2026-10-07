// roc 2012-06 0059b1d0  unit: VAuthoringSettings::?$FactoryProduct  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b1d0
//
// 0059b1d0  8b542404             mov edx, dword ptr [esp + 4]
// 0059b1d4  56                   push esi
// 0059b1d5  8b7208               mov esi, dword ptr [edx + 8]
// 0059b1d8  8b4604               mov eax, dword ptr [esi + 4]
// 0059b1db  85c0                 test eax, eax
// 0059b1dd  7566                 jne 0x59b245
// 0059b1df  8b06                 mov eax, dword ptr [esi]
// 0059b1e1  8910                 mov dword ptr [eax], edx
// 0059b1e3  ff4604               inc dword ptr [esi + 4]
// 0059b1e6  ff490c               dec dword ptr [ecx + 0xc]
// 0059b1e9  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b1ec  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059b1ef  894210               mov dword ptr [edx + 0x10], eax
// 0059b1f2  8b5610               mov edx, dword ptr [esi + 0x10]
// 0059b1f5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b1f8  89420c               mov dword ptr [edx + 0xc], eax
// 0059b1fb  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0059b1ff  7e0d                 jle 0x59b20e
// 0059b201  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b204  3bf0                 cmp esi, eax
// 0059b206  7506                 jne 0x59b20e
// 0059b208  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059b20b  895104               mov dword ptr [ecx + 4], edx
// 0059b20e  8b4108               mov eax, dword ptr [ecx + 8]
// 0059b211  8d5001               lea edx, [eax + 1]
// 0059b214  895108               mov dword ptr [ecx + 8], edx
// 0059b217  85c0                 test eax, eax
// 0059b219  750c                 jne 0x59b227
// 0059b21b  8931                 mov dword ptr [ecx], esi
// 0059b21d  89760c               mov dword ptr [esi + 0xc], esi
// 0059b220  897610               mov dword ptr [esi + 0x10], esi
// 0059b223  5e                   pop esi
// 0059b224  c20c00               ret 0xc
// 0059b227  8b01                 mov eax, dword ptr [ecx]
// 0059b229  89460c               mov dword ptr [esi + 0xc], eax
// 0059b22c  8b11                 mov edx, dword ptr [ecx]
// 0059b22e  8b4210               mov eax, dword ptr [edx + 0x10]
// 0059b231  894610               mov dword ptr [esi + 0x10], eax
// 0059b234  8b11                 mov edx, dword ptr [ecx]
// 0059b236  8b4210               mov eax, dword ptr [edx + 0x10]
// 0059b239  89700c               mov dword ptr [eax + 0xc], esi
// 0059b23c  8b09                 mov ecx, dword ptr [ecx]
// 0059b23e  897110               mov dword ptr [ecx + 0x10], esi
// 0059b241  5e                   pop esi
// 0059b242  c20c00               ret 0xc
// 0059b245  57                   push edi
// 0059b246  8b3e                 mov edi, dword ptr [esi]
// 0059b248  891487               mov dword ptr [edi + eax*4], edx
// 0059b24b  ff4604               inc dword ptr [esi + 4]
// 0059b24e  8b7e04               mov edi, dword ptr [esi + 4]
// 0059b251  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0059b256  f76110               mul dword ptr [ecx + 0x10]
// 0059b259  c1ea03               shr edx, 3
// 0059b25c  3bfa                 cmp edi, edx
// 0059b25e  7551                 jne 0x59b2b1
// 0059b260  83790804             cmp dword ptr [ecx + 8], 4
// 0059b264  7c4b                 jl 0x59b2b1
// 0059b266  3b31                 cmp esi, dword ptr [ecx]
// 0059b268  7505                 jne 0x59b26f
// 0059b26a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b26d  8911                 mov dword ptr [ecx], edx
// 0059b26f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059b272  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b275  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059b279  89500c               mov dword ptr [eax + 0xc], edx
// 0059b27c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b27f  8b5610               mov edx, dword ptr [esi + 0x10]
// 0059b282  53                   push ebx
// 0059b283  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0059b287  895010               mov dword ptr [eax + 0x10], edx
// 0059b28a  ff4908               dec dword ptr [ecx + 8]
// 0059b28d  8b06                 mov eax, dword ptr [esi]
// 0059b28f  57                   push edi
// 0059b290  53                   push ebx
// 0059b291  50                   push eax
// 0059b292  ff159c04d900         call dword ptr [0xd9049c]
// 0059b298  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059b29b  57                   push edi
// 0059b29c  53                   push ebx
// 0059b29d  51                   push ecx
// 0059b29e  ff159c04d900         call dword ptr [0xd9049c]
// 0059b2a4  57                   push edi
// 0059b2a5  53                   push ebx
// 0059b2a6  56                   push esi
// 0059b2a7  ff159c04d900         call dword ptr [0xd9049c]
// 0059b2ad  83c424               add esp, 0x24
// 0059b2b0  5b                   pop ebx
// 0059b2b1  5f                   pop edi
// 0059b2b2  5e                   pop esi
// 0059b2b3  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@URemoteSystemIndex@RakNet@@@DataStructures@@QAEXPAURemoteSystemIndex@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
