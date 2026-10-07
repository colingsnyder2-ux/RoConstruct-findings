// roc 2011-06 005208f0  unit: RBX::Network::ProfiledRakPeer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005208f0
//
// 005208f0  51                   push ecx
// 005208f1  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005208f4  53                   push ebx
// 005208f5  55                   push ebp
// 005208f6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005208fa  56                   push esi
// 005208fb  57                   push edi
// 005208fc  894c2410             mov dword ptr [esp + 0x10], ecx
// 00520900  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00520904  55                   push ebp
// 00520905  51                   push ecx
// 00520906  8bf0                 mov esi, eax
// 00520908  50                   push eax
// 00520909  33db                 xor ebx, ebx
// 0052090b  c1ee04               shr esi, 4
// 0052090e  ff1584eec200         call dword ptr [0xc2ee84]
// 00520914  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00520918  83c40c               add esp, 0xc
// 0052091b  894708               mov dword ptr [edi + 8], eax
// 0052091e  85c0                 test eax, eax
// 00520920  7430                 je 0x520952
// 00520922  8b542420             mov edx, dword ptr [esp + 0x20]
// 00520926  55                   push ebp
// 00520927  52                   push edx
// 00520928  8d04b500000000       lea eax, [esi*4]
// 0052092f  50                   push eax
// 00520930  ff1584eec200         call dword ptr [0xc2ee84]
// 00520936  83c40c               add esp, 0xc
// 00520939  8907                 mov dword ptr [edi], eax
// 0052093b  85c0                 test eax, eax
// 0052093d  751d                 jne 0x52095c
// 0052093f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00520943  8b5708               mov edx, dword ptr [edi + 8]
// 00520946  55                   push ebp
// 00520947  51                   push ecx
// 00520948  52                   push edx
// 00520949  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052094f  83c40c               add esp, 0xc
// 00520952  5f                   pop edi
// 00520953  5e                   pop esi
// 00520954  5d                   pop ebp
// 00520955  32c0                 xor al, al
// 00520957  5b                   pop ebx
// 00520958  59                   pop ecx
// 00520959  c21000               ret 0x10
// 0052095c  8b4f08               mov ecx, dword ptr [edi + 8]
// 0052095f  85f6                 test esi, esi
// 00520961  7e0e                 jle 0x520971
// 00520963  89790c               mov dword ptr [ecx + 0xc], edi
// 00520966  890c98               mov dword ptr [eax + ebx*4], ecx
// 00520969  43                   inc ebx
// 0052096a  83c110               add ecx, 0x10
// 0052096d  3bde                 cmp ebx, esi
// 0052096f  7cf2                 jl 0x520963
// 00520971  8b442410             mov eax, dword ptr [esp + 0x10]
// 00520975  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00520979  897704               mov dword ptr [edi + 4], esi
// 0052097c  8b08                 mov ecx, dword ptr [eax]
// 0052097e  894f0c               mov dword ptr [edi + 0xc], ecx
// 00520981  895710               mov dword ptr [edi + 0x10], edx
// 00520984  5f                   pop edi
// 00520985  5e                   pop esi
// 00520986  5d                   pop ebp
// 00520987  b001                 mov al, 1
// 00520989  5b                   pop ebx
// 0052098a  59                   pop ecx
// 0052098b  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
