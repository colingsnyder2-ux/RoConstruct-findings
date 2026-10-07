// roc 2012-06 005bc7e0  unit: RakNet::RakPeer  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc7e0
//
// 005bc7e0  8b542404             mov edx, dword ptr [esp + 4]
// 005bc7e4  56                   push esi
// 005bc7e5  8b7238               mov esi, dword ptr [edx + 0x38]
// 005bc7e8  8b4604               mov eax, dword ptr [esi + 4]
// 005bc7eb  85c0                 test eax, eax
// 005bc7ed  7566                 jne 0x5bc855
// 005bc7ef  8b06                 mov eax, dword ptr [esi]
// 005bc7f1  8910                 mov dword ptr [eax], edx
// 005bc7f3  ff4604               inc dword ptr [esi + 4]
// 005bc7f6  ff490c               dec dword ptr [ecx + 0xc]
// 005bc7f9  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bc7fc  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bc7ff  894210               mov dword ptr [edx + 0x10], eax
// 005bc802  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bc805  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bc808  89420c               mov dword ptr [edx + 0xc], eax
// 005bc80b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 005bc80f  7e0d                 jle 0x5bc81e
// 005bc811  8b4104               mov eax, dword ptr [ecx + 4]
// 005bc814  3bf0                 cmp esi, eax
// 005bc816  7506                 jne 0x5bc81e
// 005bc818  8b500c               mov edx, dword ptr [eax + 0xc]
// 005bc81b  895104               mov dword ptr [ecx + 4], edx
// 005bc81e  8b4108               mov eax, dword ptr [ecx + 8]
// 005bc821  8d5001               lea edx, [eax + 1]
// 005bc824  895108               mov dword ptr [ecx + 8], edx
// 005bc827  85c0                 test eax, eax
// 005bc829  750c                 jne 0x5bc837
// 005bc82b  8931                 mov dword ptr [ecx], esi
// 005bc82d  89760c               mov dword ptr [esi + 0xc], esi
// 005bc830  897610               mov dword ptr [esi + 0x10], esi
// 005bc833  5e                   pop esi
// 005bc834  c20c00               ret 0xc
// 005bc837  8b01                 mov eax, dword ptr [ecx]
// 005bc839  89460c               mov dword ptr [esi + 0xc], eax
// 005bc83c  8b11                 mov edx, dword ptr [ecx]
// 005bc83e  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bc841  894610               mov dword ptr [esi + 0x10], eax
// 005bc844  8b11                 mov edx, dword ptr [ecx]
// 005bc846  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bc849  89700c               mov dword ptr [eax + 0xc], esi
// 005bc84c  8b09                 mov ecx, dword ptr [ecx]
// 005bc84e  897110               mov dword ptr [ecx + 0x10], esi
// 005bc851  5e                   pop esi
// 005bc852  c20c00               ret 0xc
// 005bc855  57                   push edi
// 005bc856  8b3e                 mov edi, dword ptr [esi]
// 005bc858  891487               mov dword ptr [edi + eax*4], edx
// 005bc85b  ff4604               inc dword ptr [esi + 4]
// 005bc85e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bc861  8b4604               mov eax, dword ptr [esi + 4]
// 005bc864  c1ea06               shr edx, 6
// 005bc867  3bc2                 cmp eax, edx
// 005bc869  7551                 jne 0x5bc8bc
// 005bc86b  83790804             cmp dword ptr [ecx + 8], 4
// 005bc86f  7c4b                 jl 0x5bc8bc
// 005bc871  3b31                 cmp esi, dword ptr [ecx]
// 005bc873  7505                 jne 0x5bc87a
// 005bc875  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bc878  8901                 mov dword ptr [ecx], eax
// 005bc87a  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bc87d  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bc880  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bc884  89420c               mov dword ptr [edx + 0xc], eax
// 005bc887  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bc88a  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bc88d  53                   push ebx
// 005bc88e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005bc892  894210               mov dword ptr [edx + 0x10], eax
// 005bc895  ff4908               dec dword ptr [ecx + 8]
// 005bc898  8b0e                 mov ecx, dword ptr [esi]
// 005bc89a  57                   push edi
// 005bc89b  53                   push ebx
// 005bc89c  51                   push ecx
// 005bc89d  ff159c04d900         call dword ptr [0xd9049c]
// 005bc8a3  8b5608               mov edx, dword ptr [esi + 8]
// 005bc8a6  57                   push edi
// 005bc8a7  53                   push ebx
// 005bc8a8  52                   push edx
// 005bc8a9  ff159c04d900         call dword ptr [0xd9049c]
// 005bc8af  57                   push edi
// 005bc8b0  53                   push ebx
// 005bc8b1  56                   push esi
// 005bc8b2  ff159c04d900         call dword ptr [0xd9049c]
// 005bc8b8  83c424               add esp, 0x24
// 005bc8bb  5b                   pop ebx
// 005bc8bc  5f                   pop edi
// 005bc8bd  5e                   pop esi
// 005bc8be  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@UPacket@RakNet@@@DataStructures@@QAEXPAUPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
