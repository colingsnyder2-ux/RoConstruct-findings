// roc 2011-06 0052e830  unit: RBX::Network::ProfiledRakPeer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e830
//
// 0052e830  51                   push ecx
// 0052e831  53                   push ebx
// 0052e832  894c2404             mov dword ptr [esp + 4], ecx
// 0052e836  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0052e839  55                   push ebp
// 0052e83a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0052e83e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0052e843  f7e1                 mul ecx
// 0052e845  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052e849  56                   push esi
// 0052e84a  57                   push edi
// 0052e84b  55                   push ebp
// 0052e84c  50                   push eax
// 0052e84d  8bf2                 mov esi, edx
// 0052e84f  51                   push ecx
// 0052e850  33db                 xor ebx, ebx
// 0052e852  c1ee03               shr esi, 3
// 0052e855  ff1584eec200         call dword ptr [0xc2ee84]
// 0052e85b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052e85f  83c40c               add esp, 0xc
// 0052e862  894708               mov dword ptr [edi + 8], eax
// 0052e865  85c0                 test eax, eax
// 0052e867  7430                 je 0x52e899
// 0052e869  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052e86d  55                   push ebp
// 0052e86e  51                   push ecx
// 0052e86f  8d14b500000000       lea edx, [esi*4]
// 0052e876  52                   push edx
// 0052e877  ff1584eec200         call dword ptr [0xc2ee84]
// 0052e87d  8b4f08               mov ecx, dword ptr [edi + 8]
// 0052e880  83c40c               add esp, 0xc
// 0052e883  8907                 mov dword ptr [edi], eax
// 0052e885  85c0                 test eax, eax
// 0052e887  751a                 jne 0x52e8a3
// 0052e889  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052e88d  55                   push ebp
// 0052e88e  50                   push eax
// 0052e88f  51                   push ecx
// 0052e890  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e896  83c40c               add esp, 0xc
// 0052e899  5f                   pop edi
// 0052e89a  5e                   pop esi
// 0052e89b  5d                   pop ebp
// 0052e89c  32c0                 xor al, al
// 0052e89e  5b                   pop ebx
// 0052e89f  59                   pop ecx
// 0052e8a0  c21000               ret 0x10
// 0052e8a3  85f6                 test esi, esi
// 0052e8a5  7e0e                 jle 0x52e8b5
// 0052e8a7  897908               mov dword ptr [ecx + 8], edi
// 0052e8aa  890c98               mov dword ptr [eax + ebx*4], ecx
// 0052e8ad  43                   inc ebx
// 0052e8ae  83c10c               add ecx, 0xc
// 0052e8b1  3bde                 cmp ebx, esi
// 0052e8b3  7cf2                 jl 0x52e8a7
// 0052e8b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052e8b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052e8bd  897704               mov dword ptr [edi + 4], esi
// 0052e8c0  8b02                 mov eax, dword ptr [edx]
// 0052e8c2  89470c               mov dword ptr [edi + 0xc], eax
// 0052e8c5  894f10               mov dword ptr [edi + 0x10], ecx
// 0052e8c8  5f                   pop edi
// 0052e8c9  5e                   pop esi
// 0052e8ca  5d                   pop ebp
// 0052e8cb  b001                 mov al, 1
// 0052e8cd  5b                   pop ebx
// 0052e8ce  59                   pop ecx
// 0052e8cf  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@URemoteSystemIndex@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
