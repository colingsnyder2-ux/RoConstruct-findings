// roc 2012-06 005bca70  unit: RakNet::RakPeer  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bca70
//
// 005bca70  8b542404             mov edx, dword ptr [esp + 4]
// 005bca74  56                   push esi
// 005bca75  8b7270               mov esi, dword ptr [edx + 0x70]
// 005bca78  8b4604               mov eax, dword ptr [esi + 4]
// 005bca7b  85c0                 test eax, eax
// 005bca7d  7566                 jne 0x5bcae5
// 005bca7f  8b06                 mov eax, dword ptr [esi]
// 005bca81  8910                 mov dword ptr [eax], edx
// 005bca83  ff4604               inc dword ptr [esi + 4]
// 005bca86  ff490c               dec dword ptr [ecx + 0xc]
// 005bca89  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bca8c  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bca8f  894210               mov dword ptr [edx + 0x10], eax
// 005bca92  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bca95  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bca98  89420c               mov dword ptr [edx + 0xc], eax
// 005bca9b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 005bca9f  7e0d                 jle 0x5bcaae
// 005bcaa1  8b4104               mov eax, dword ptr [ecx + 4]
// 005bcaa4  3bf0                 cmp esi, eax
// 005bcaa6  7506                 jne 0x5bcaae
// 005bcaa8  8b500c               mov edx, dword ptr [eax + 0xc]
// 005bcaab  895104               mov dword ptr [ecx + 4], edx
// 005bcaae  8b4108               mov eax, dword ptr [ecx + 8]
// 005bcab1  8d5001               lea edx, [eax + 1]
// 005bcab4  895108               mov dword ptr [ecx + 8], edx
// 005bcab7  85c0                 test eax, eax
// 005bcab9  750c                 jne 0x5bcac7
// 005bcabb  8931                 mov dword ptr [ecx], esi
// 005bcabd  89760c               mov dword ptr [esi + 0xc], esi
// 005bcac0  897610               mov dword ptr [esi + 0x10], esi
// 005bcac3  5e                   pop esi
// 005bcac4  c20c00               ret 0xc
// 005bcac7  8b01                 mov eax, dword ptr [ecx]
// 005bcac9  89460c               mov dword ptr [esi + 0xc], eax
// 005bcacc  8b11                 mov edx, dword ptr [ecx]
// 005bcace  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bcad1  894610               mov dword ptr [esi + 0x10], eax
// 005bcad4  8b11                 mov edx, dword ptr [ecx]
// 005bcad6  8b4210               mov eax, dword ptr [edx + 0x10]
// 005bcad9  89700c               mov dword ptr [eax + 0xc], esi
// 005bcadc  8b09                 mov ecx, dword ptr [ecx]
// 005bcade  897110               mov dword ptr [ecx + 0x10], esi
// 005bcae1  5e                   pop esi
// 005bcae2  c20c00               ret 0xc
// 005bcae5  57                   push edi
// 005bcae6  8b3e                 mov edi, dword ptr [esi]
// 005bcae8  891487               mov dword ptr [edi + eax*4], edx
// 005bcaeb  ff4604               inc dword ptr [esi + 4]
// 005bcaee  8b7e04               mov edi, dword ptr [esi + 4]
// 005bcaf1  b889888888           mov eax, 0x88888889
// 005bcaf6  f76110               mul dword ptr [ecx + 0x10]
// 005bcaf9  c1ea06               shr edx, 6
// 005bcafc  3bfa                 cmp edi, edx
// 005bcafe  7551                 jne 0x5bcb51
// 005bcb00  83790804             cmp dword ptr [ecx + 8], 4
// 005bcb04  7c4b                 jl 0x5bcb51
// 005bcb06  3b31                 cmp esi, dword ptr [ecx]
// 005bcb08  7505                 jne 0x5bcb0f
// 005bcb0a  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bcb0d  8911                 mov dword ptr [ecx], edx
// 005bcb0f  8b4610               mov eax, dword ptr [esi + 0x10]
// 005bcb12  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bcb15  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bcb19  89500c               mov dword ptr [eax + 0xc], edx
// 005bcb1c  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bcb1f  8b5610               mov edx, dword ptr [esi + 0x10]
// 005bcb22  53                   push ebx
// 005bcb23  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005bcb27  895010               mov dword ptr [eax + 0x10], edx
// 005bcb2a  ff4908               dec dword ptr [ecx + 8]
// 005bcb2d  8b06                 mov eax, dword ptr [esi]
// 005bcb2f  57                   push edi
// 005bcb30  53                   push ebx
// 005bcb31  50                   push eax
// 005bcb32  ff159c04d900         call dword ptr [0xd9049c]
// 005bcb38  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bcb3b  57                   push edi
// 005bcb3c  53                   push ebx
// 005bcb3d  51                   push ecx
// 005bcb3e  ff159c04d900         call dword ptr [0xd9049c]
// 005bcb44  57                   push edi
// 005bcb45  53                   push ebx
// 005bcb46  56                   push esi
// 005bcb47  ff159c04d900         call dword ptr [0xd9049c]
// 005bcb4d  83c424               add esp, 0x24
// 005bcb50  5b                   pop ebx
// 005bcb51  5f                   pop edi
// 005bcb52  5e                   pop esi
// 005bcb53  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@QAEXPAUBufferedCommandStruct@RakPeer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
