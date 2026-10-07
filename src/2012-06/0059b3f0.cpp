// roc 2012-06 0059b3f0  unit: VAuthoringSettings::?$FactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b3f0
//
// 0059b3f0  8b542404             mov edx, dword ptr [esp + 4]
// 0059b3f4  56                   push esi
// 0059b3f5  8bb2e0000000         mov esi, dword ptr [edx + 0xe0]
// 0059b3fb  8b4604               mov eax, dword ptr [esi + 4]
// 0059b3fe  85c0                 test eax, eax
// 0059b400  7566                 jne 0x59b468
// 0059b402  8b06                 mov eax, dword ptr [esi]
// 0059b404  8910                 mov dword ptr [eax], edx
// 0059b406  ff4604               inc dword ptr [esi + 4]
// 0059b409  ff490c               dec dword ptr [ecx + 0xc]
// 0059b40c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b40f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059b412  894210               mov dword ptr [edx + 0x10], eax
// 0059b415  8b5610               mov edx, dword ptr [esi + 0x10]
// 0059b418  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b41b  89420c               mov dword ptr [edx + 0xc], eax
// 0059b41e  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0059b422  7e0d                 jle 0x59b431
// 0059b424  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b427  3bf0                 cmp esi, eax
// 0059b429  7506                 jne 0x59b431
// 0059b42b  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059b42e  895104               mov dword ptr [ecx + 4], edx
// 0059b431  8b4108               mov eax, dword ptr [ecx + 8]
// 0059b434  8d5001               lea edx, [eax + 1]
// 0059b437  895108               mov dword ptr [ecx + 8], edx
// 0059b43a  85c0                 test eax, eax
// 0059b43c  750c                 jne 0x59b44a
// 0059b43e  8931                 mov dword ptr [ecx], esi
// 0059b440  89760c               mov dword ptr [esi + 0xc], esi
// 0059b443  897610               mov dword ptr [esi + 0x10], esi
// 0059b446  5e                   pop esi
// 0059b447  c20c00               ret 0xc
// 0059b44a  8b01                 mov eax, dword ptr [ecx]
// 0059b44c  89460c               mov dword ptr [esi + 0xc], eax
// 0059b44f  8b11                 mov edx, dword ptr [ecx]
// 0059b451  8b4210               mov eax, dword ptr [edx + 0x10]
// 0059b454  894610               mov dword ptr [esi + 0x10], eax
// 0059b457  8b11                 mov edx, dword ptr [ecx]
// 0059b459  8b4210               mov eax, dword ptr [edx + 0x10]
// 0059b45c  89700c               mov dword ptr [eax + 0xc], esi
// 0059b45f  8b09                 mov ecx, dword ptr [ecx]
// 0059b461  897110               mov dword ptr [ecx + 0x10], esi
// 0059b464  5e                   pop esi
// 0059b465  c20c00               ret 0xc
// 0059b468  57                   push edi
// 0059b469  8b3e                 mov edi, dword ptr [esi]
// 0059b46b  891487               mov dword ptr [edi + eax*4], edx
// 0059b46e  ff4604               inc dword ptr [esi + 4]
// 0059b471  8b7e04               mov edi, dword ptr [esi + 4]
// 0059b474  b809cb3d8d           mov eax, 0x8d3dcb09
// 0059b479  f76110               mul dword ptr [ecx + 0x10]
// 0059b47c  c1ea07               shr edx, 7
// 0059b47f  3bfa                 cmp edi, edx
// 0059b481  7551                 jne 0x59b4d4
// 0059b483  83790804             cmp dword ptr [ecx + 8], 4
// 0059b487  7c4b                 jl 0x59b4d4
// 0059b489  3b31                 cmp esi, dword ptr [ecx]
// 0059b48b  7505                 jne 0x59b492
// 0059b48d  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b490  8911                 mov dword ptr [ecx], edx
// 0059b492  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059b495  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b498  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059b49c  89500c               mov dword ptr [eax + 0xc], edx
// 0059b49f  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b4a2  8b5610               mov edx, dword ptr [esi + 0x10]
// 0059b4a5  53                   push ebx
// 0059b4a6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0059b4aa  895010               mov dword ptr [eax + 0x10], edx
// 0059b4ad  ff4908               dec dword ptr [ecx + 8]
// 0059b4b0  8b06                 mov eax, dword ptr [esi]
// 0059b4b2  57                   push edi
// 0059b4b3  53                   push ebx
// 0059b4b4  50                   push eax
// 0059b4b5  ff159c04d900         call dword ptr [0xd9049c]
// 0059b4bb  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059b4be  57                   push edi
// 0059b4bf  53                   push ebx
// 0059b4c0  51                   push ecx
// 0059b4c1  ff159c04d900         call dword ptr [0xd9049c]
// 0059b4c7  57                   push edi
// 0059b4c8  53                   push ebx
// 0059b4c9  56                   push esi
// 0059b4ca  ff159c04d900         call dword ptr [0xd9049c]
// 0059b4d0  83c424               add esp, 0x24
// 0059b4d3  5b                   pop ebx
// 0059b4d4  5f                   pop edi
// 0059b4d5  5e                   pop esi
// 0059b4d6  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Release@?$MemoryPool@UInternalPacket@RakNet@@@DataStructures@@QAEXPAUInternalPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
