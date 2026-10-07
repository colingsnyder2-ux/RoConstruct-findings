// roc 2012-06 005bb960  unit: RakNet::RakPeer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb960
//
// 005bb960  51                   push ecx
// 005bb961  53                   push ebx
// 005bb962  894c2404             mov dword ptr [esp + 4], ecx
// 005bb966  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005bb969  55                   push ebp
// 005bb96a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bb96e  b889888888           mov eax, 0x88888889
// 005bb973  f7e1                 mul ecx
// 005bb975  8b442418             mov eax, dword ptr [esp + 0x18]
// 005bb979  56                   push esi
// 005bb97a  57                   push edi
// 005bb97b  55                   push ebp
// 005bb97c  50                   push eax
// 005bb97d  8bf2                 mov esi, edx
// 005bb97f  51                   push ecx
// 005bb980  33db                 xor ebx, ebx
// 005bb982  c1ee06               shr esi, 6
// 005bb985  ff159404d900         call dword ptr [0xd90494]
// 005bb98b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005bb98f  83c40c               add esp, 0xc
// 005bb992  894708               mov dword ptr [edi + 8], eax
// 005bb995  85c0                 test eax, eax
// 005bb997  7430                 je 0x5bb9c9
// 005bb999  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bb99d  55                   push ebp
// 005bb99e  51                   push ecx
// 005bb99f  8d14b500000000       lea edx, [esi*4]
// 005bb9a6  52                   push edx
// 005bb9a7  ff159404d900         call dword ptr [0xd90494]
// 005bb9ad  8b4f08               mov ecx, dword ptr [edi + 8]
// 005bb9b0  83c40c               add esp, 0xc
// 005bb9b3  8907                 mov dword ptr [edi], eax
// 005bb9b5  85c0                 test eax, eax
// 005bb9b7  751a                 jne 0x5bb9d3
// 005bb9b9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bb9bd  55                   push ebp
// 005bb9be  50                   push eax
// 005bb9bf  51                   push ecx
// 005bb9c0  ff159c04d900         call dword ptr [0xd9049c]
// 005bb9c6  83c40c               add esp, 0xc
// 005bb9c9  5f                   pop edi
// 005bb9ca  5e                   pop esi
// 005bb9cb  5d                   pop ebp
// 005bb9cc  32c0                 xor al, al
// 005bb9ce  5b                   pop ebx
// 005bb9cf  59                   pop ecx
// 005bb9d0  c21000               ret 0x10
// 005bb9d3  85f6                 test esi, esi
// 005bb9d5  7e0e                 jle 0x5bb9e5
// 005bb9d7  897970               mov dword ptr [ecx + 0x70], edi
// 005bb9da  890c98               mov dword ptr [eax + ebx*4], ecx
// 005bb9dd  43                   inc ebx
// 005bb9de  83c178               add ecx, 0x78
// 005bb9e1  3bde                 cmp ebx, esi
// 005bb9e3  7cf2                 jl 0x5bb9d7
// 005bb9e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bb9e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bb9ed  897704               mov dword ptr [edi + 4], esi
// 005bb9f0  8b02                 mov eax, dword ptr [edx]
// 005bb9f2  89470c               mov dword ptr [edi + 0xc], eax
// 005bb9f5  894f10               mov dword ptr [edi + 0x10], ecx
// 005bb9f8  5f                   pop edi
// 005bb9f9  5e                   pop esi
// 005bb9fa  5d                   pop ebp
// 005bb9fb  b001                 mov al, 1
// 005bb9fd  5b                   pop ebx
// 005bb9fe  59                   pop ecx
// 005bb9ff  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@UBufferedCommandStruct@RakPeer@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
