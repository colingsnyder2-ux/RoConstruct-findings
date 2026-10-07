// roc 2012-06 005bce00  unit: RakNet::RakPeer  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bce00
//
// 005bce00  8b542404             mov edx, dword ptr [esp + 4]
// 005bce04  56                   push esi
// 005bce05  8b720c               mov esi, dword ptr [edx + 0xc]
// 005bce08  8b4604               mov eax, dword ptr [esi + 4]
// 005bce0b  85c0                 test eax, eax
// 005bce0d  7566                 jne 0x5bce75
// 005bce0f  8b06                 mov eax, dword ptr [esi]
// 005bce11  8910                 mov dword ptr [eax], edx
// 005bce13  ff4604               inc dword ptr [esi + 4]
// 005bce16  ff490c               dec dword ptr [ecx + 0xc]
// 005bce19  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bce1c  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bce1f  894210               mov dword ptr [edx + 0x10], eax
// 005bce22  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bce25  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bce28  89420c               mov dword ptr [edx + 0xc], eax
// 005bce2b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 005bce2f  7e0d                 jle 0x5bce3e
// 005bce31  8b4104               mov eax, dword ptr [ecx + 4]
// 005bce34  3bf0                 cmp esi, eax
// 005bce36  7506                 jne 0x5bce3e
// 005bce38  8b500c               mov edx, dword ptr [eax + 0xc]
// 005bce3b  895104               mov dword ptr [ecx + 4], edx
// 005bce3e  8b4108               mov eax, dword ptr [ecx + 8]
// 005bce41  8d5001               lea edx, [eax + 1]
// 005bce44  895108               mov dword ptr [ecx + 8], edx
// 005bce47  85c0                 test eax, eax
// 005bce49  750c                 jne 0x5bce57
// 005bce4b  8931                 mov dword ptr [ecx], esi
// 005bce4d  89760c               mov dword ptr [esi + 0xc], esi
// 005bce50  897610               mov dword ptr [esi + 0x10], esi
// 005bce53  5e                   pop esi
// 005bce54  c20c00               ret 0xc
// 005bce57  8b01                 mov eax, dword ptr [ecx]
// 005bce59  89460c               mov dword ptr [esi + 0xc], eax
// 005bce5c  8b11                 mov edx, dword ptr [ecx]
// 005bce5e  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bce61  894610               mov dword ptr [esi + 0x10], eax
// 005bce64  8b11                 mov edx, dword ptr [ecx]
// 005bce66  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bce69  89700c               mov dword ptr [eax + 0xc], esi
// 005bce6c  8b09                 mov ecx, dword ptr [ecx]
// 005bce6e  897110               mov dword ptr [ecx + 0x10], esi
// 005bce71  5e                   pop esi
// 005bce72  c20c00               ret 0xc
// 005bce75  57                   push edi
// 005bce76  8b3e                 mov edi, dword ptr [esi]
// 005bce78  891487               mov dword ptr [edi + eax*4], edx
// 005bce7b  ff4604               inc dword ptr [esi + 4]
// 005bce7e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bce81  8b4604               mov eax, dword ptr [esi + 4]
// 005bce84  c1ea04               shr edx, 4
// 005bce87  3bc2                 cmp eax, edx
// 005bce89  7551                 jne 0x5bcedc
// 005bce8b  83790804             cmp dword ptr [ecx + 8], 4
// 005bce8f  7c4b                 jl 0x5bcedc
// 005bce91  3b31                 cmp esi, dword ptr [ecx]
// 005bce93  7505                 jne 0x5bce9a
// 005bce95  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bce98  8901                 mov dword ptr [ecx], eax
// 005bce9a  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bce9d  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bcea0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bcea4  89420c               mov dword ptr [edx + 0xc], eax
// 005bcea7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bceaa  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bcead  53                   push ebx
// 005bceae  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005bceb2  894210               mov dword ptr [edx + 0x10], eax
// 005bceb5  ff4908               dec dword ptr [ecx + 8]
// 005bceb8  8b0e                 mov ecx, dword ptr [esi]
// 005bceba  57                   push edi
// 005bcebb  53                   push ebx
// 005bcebc  51                   push ecx
// 005bcebd  ff159c04d900         call dword ptr [0xd9049c]
// 005bcec3  8b5608               mov edx, dword ptr [esi + 8]
// 005bcec6  57                   push edi
// 005bcec7  53                   push ebx
// 005bcec8  52                   push edx
// 005bcec9  ff159c04d900         call dword ptr [0xd9049c]
// 005bcecf  57                   push edi
// 005bced0  53                   push ebx
// 005bced1  56                   push esi
// 005bced2  ff159c04d900         call dword ptr [0xd9049c]
// 005bced8  83c424               add esp, 0x24
// 005bcedb  5b                   pop ebx
// 005bcedc  5f                   pop edi
// 005bcedd  5e                   pop esi
// 005bcede  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@QAEXPAUSocketQueryOutput@RakPeer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
