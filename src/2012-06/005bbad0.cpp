// roc 2012-06 005bbad0  unit: RakNet::RakPeer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bbad0
//
// 005bbad0  51                   push ecx
// 005bbad1  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005bbad4  53                   push ebx
// 005bbad5  55                   push ebp
// 005bbad6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005bbada  56                   push esi
// 005bbadb  57                   push edi
// 005bbadc  894c2410             mov dword ptr [esp + 0x10], ecx
// 005bbae0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbae4  55                   push ebp
// 005bbae5  51                   push ecx
// 005bbae6  8bf0                 mov esi, eax
// 005bbae8  50                   push eax
// 005bbae9  33db                 xor ebx, ebx
// 005bbaeb  c1ee04               shr esi, 4
// 005bbaee  ff159404d900         call dword ptr [0xd90494]
// 005bbaf4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005bbaf8  83c40c               add esp, 0xc
// 005bbafb  894708               mov dword ptr [edi + 8], eax
// 005bbafe  85c0                 test eax, eax
// 005bbb00  7430                 je 0x5bbb32
// 005bbb02  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bbb06  55                   push ebp
// 005bbb07  52                   push edx
// 005bbb08  8d04b500000000       lea eax, [esi*4]
// 005bbb0f  50                   push eax
// 005bbb10  ff159404d900         call dword ptr [0xd90494]
// 005bbb16  83c40c               add esp, 0xc
// 005bbb19  8907                 mov dword ptr [edi], eax
// 005bbb1b  85c0                 test eax, eax
// 005bbb1d  751d                 jne 0x5bbb3c
// 005bbb1f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbb23  8b5708               mov edx, dword ptr [edi + 8]
// 005bbb26  55                   push ebp
// 005bbb27  51                   push ecx
// 005bbb28  52                   push edx
// 005bbb29  ff159c04d900         call dword ptr [0xd9049c]
// 005bbb2f  83c40c               add esp, 0xc
// 005bbb32  5f                   pop edi
// 005bbb33  5e                   pop esi
// 005bbb34  5d                   pop ebp
// 005bbb35  32c0                 xor al, al
// 005bbb37  5b                   pop ebx
// 005bbb38  59                   pop ecx
// 005bbb39  c21000               ret 0x10
// 005bbb3c  8b4f08               mov ecx, dword ptr [edi + 8]
// 005bbb3f  85f6                 test esi, esi
// 005bbb41  7e0e                 jle 0x5bbb51
// 005bbb43  89790c               mov dword ptr [ecx + 0xc], edi
// 005bbb46  890c98               mov dword ptr [eax + ebx*4], ecx
// 005bbb49  43                   inc ebx
// 005bbb4a  83c110               add ecx, 0x10
// 005bbb4d  3bde                 cmp ebx, esi
// 005bbb4f  7cf2                 jl 0x5bbb43
// 005bbb51  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bbb55  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005bbb59  897704               mov dword ptr [edi + 4], esi
// 005bbb5c  8b08                 mov ecx, dword ptr [eax]
// 005bbb5e  894f0c               mov dword ptr [edi + 0xc], ecx
// 005bbb61  895710               mov dword ptr [edi + 0x10], edx
// 005bbb64  5f                   pop edi
// 005bbb65  5e                   pop esi
// 005bbb66  5d                   pop ebp
// 005bbb67  b001                 mov al, 1
// 005bbb69  5b                   pop ebx
// 005bbb6a  59                   pop ecx
// 005bbb6b  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
