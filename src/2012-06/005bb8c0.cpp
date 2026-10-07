// roc 2012-06 005bb8c0  unit: RakNet::RakPeer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb8c0
//
// 005bb8c0  51                   push ecx
// 005bb8c1  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005bb8c4  53                   push ebx
// 005bb8c5  55                   push ebp
// 005bb8c6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bb8ca  56                   push esi
// 005bb8cb  57                   push edi
// 005bb8cc  894c2410             mov dword ptr [esp + 0x10], ecx
// 005bb8d0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bb8d4  55                   push ebp
// 005bb8d5  51                   push ecx
// 005bb8d6  8bf0                 mov esi, eax
// 005bb8d8  50                   push eax
// 005bb8d9  33db                 xor ebx, ebx
// 005bb8db  c1ee06               shr esi, 6
// 005bb8de  ff159404d900         call dword ptr [0xd90494]
// 005bb8e4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005bb8e8  83c40c               add esp, 0xc
// 005bb8eb  894708               mov dword ptr [edi + 8], eax
// 005bb8ee  85c0                 test eax, eax
// 005bb8f0  7430                 je 0x5bb922
// 005bb8f2  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bb8f6  55                   push ebp
// 005bb8f7  52                   push edx
// 005bb8f8  8d04b500000000       lea eax, [esi*4]
// 005bb8ff  50                   push eax
// 005bb900  ff159404d900         call dword ptr [0xd90494]
// 005bb906  83c40c               add esp, 0xc
// 005bb909  8907                 mov dword ptr [edi], eax
// 005bb90b  85c0                 test eax, eax
// 005bb90d  751d                 jne 0x5bb92c
// 005bb90f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bb913  8b5708               mov edx, dword ptr [edi + 8]
// 005bb916  55                   push ebp
// 005bb917  51                   push ecx
// 005bb918  52                   push edx
// 005bb919  ff159c04d900         call dword ptr [0xd9049c]
// 005bb91f  83c40c               add esp, 0xc
// 005bb922  5f                   pop edi
// 005bb923  5e                   pop esi
// 005bb924  5d                   pop ebp
// 005bb925  32c0                 xor al, al
// 005bb927  5b                   pop ebx
// 005bb928  59                   pop ecx
// 005bb929  c21000               ret 0x10
// 005bb92c  8b4f08               mov ecx, dword ptr [edi + 8]
// 005bb92f  85f6                 test esi, esi
// 005bb931  7e0e                 jle 0x5bb941
// 005bb933  897938               mov dword ptr [ecx + 0x38], edi
// 005bb936  890c98               mov dword ptr [eax + ebx*4], ecx
// 005bb939  43                   inc ebx
// 005bb93a  83c140               add ecx, 0x40
// 005bb93d  3bde                 cmp ebx, esi
// 005bb93f  7cf2                 jl 0x5bb933
// 005bb941  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bb945  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005bb949  897704               mov dword ptr [edi + 4], esi
// 005bb94c  8b08                 mov ecx, dword ptr [eax]
// 005bb94e  894f0c               mov dword ptr [edi + 0xc], ecx
// 005bb951  895710               mov dword ptr [edi + 0x10], edx
// 005bb954  5f                   pop edi
// 005bb955  5e                   pop esi
// 005bb956  5d                   pop ebp
// 005bb957  b001                 mov al, 1
// 005bb959  5b                   pop ebx
// 005bb95a  59                   pop ecx
// 005bb95b  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@UPacket@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
