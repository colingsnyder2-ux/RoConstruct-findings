// roc 2011-06 005219f0  unit: RBX::Network::ProfiledRakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005219f0
//
// 005219f0  56                   push esi
// 005219f1  8bf1                 mov esi, ecx
// 005219f3  837e0800             cmp dword ptr [esi + 8], 0
// 005219f7  57                   push edi
// 005219f8  7e6e                 jle 0x521a68
// 005219fa  8b0e                 mov ecx, dword ptr [esi]
// 005219fc  8b39                 mov edi, dword ptr [ecx]
// 005219fe  83caff               or edx, 0xffffffff
// 00521a01  015104               add dword ptr [ecx + 4], edx
// 00521a04  8b4104               mov eax, dword ptr [ecx + 4]
// 00521a07  8b0487               mov eax, dword ptr [edi + eax*4]
// 00521a0a  0f85a2000000         jne 0x521ab2
// 00521a10  015608               add dword ptr [esi + 8], edx
// 00521a13  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00521a16  8916                 mov dword ptr [esi], edx
// 00521a18  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00521a1b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00521a1e  897a10               mov dword ptr [edx + 0x10], edi
// 00521a21  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00521a24  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00521a27  897a0c               mov dword ptr [edx + 0xc], edi
// 00521a2a  8b560c               mov edx, dword ptr [esi + 0xc]
// 00521a2d  8d7a01               lea edi, [edx + 1]
// 00521a30  897e0c               mov dword ptr [esi + 0xc], edi
// 00521a33  85d2                 test edx, edx
// 00521a35  750e                 jne 0x521a45
// 00521a37  894e04               mov dword ptr [esi + 4], ecx
// 00521a3a  5f                   pop edi
// 00521a3b  89490c               mov dword ptr [ecx + 0xc], ecx
// 00521a3e  894910               mov dword ptr [ecx + 0x10], ecx
// 00521a41  5e                   pop esi
// 00521a42  c20800               ret 8
// 00521a45  8b5604               mov edx, dword ptr [esi + 4]
// 00521a48  89510c               mov dword ptr [ecx + 0xc], edx
// 00521a4b  8b5604               mov edx, dword ptr [esi + 4]
// 00521a4e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00521a51  895110               mov dword ptr [ecx + 0x10], edx
// 00521a54  8b5604               mov edx, dword ptr [esi + 4]
// 00521a57  8b5210               mov edx, dword ptr [edx + 0x10]
// 00521a5a  894a0c               mov dword ptr [edx + 0xc], ecx
// 00521a5d  8b5604               mov edx, dword ptr [esi + 4]
// 00521a60  5f                   pop edi
// 00521a61  894a10               mov dword ptr [edx + 0x10], ecx
// 00521a64  5e                   pop esi
// 00521a65  c20800               ret 8
// 00521a68  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00521a6c  53                   push ebx
// 00521a6d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00521a71  57                   push edi
// 00521a72  53                   push ebx
// 00521a73  6a14                 push 0x14
// 00521a75  ff1584eec200         call dword ptr [0xc2ee84]
// 00521a7b  83c40c               add esp, 0xc
// 00521a7e  8906                 mov dword ptr [esi], eax
// 00521a80  85c0                 test eax, eax
// 00521a82  7416                 je 0x521a9a
// 00521a84  57                   push edi
// 00521a85  53                   push ebx
// 00521a86  50                   push eax
// 00521a87  50                   push eax
// 00521a88  8bce                 mov ecx, esi
// 00521a8a  c7460801000000       mov dword ptr [esi + 8], 1
// 00521a91  e85aeeffff           call 0x5208f0
// 00521a96  84c0                 test al, al
// 00521a98  7508                 jne 0x521aa2
// 00521a9a  5b                   pop ebx
// 00521a9b  5f                   pop edi
// 00521a9c  33c0                 xor eax, eax
// 00521a9e  5e                   pop esi
// 00521a9f  c20800               ret 8
// 00521aa2  8b06                 mov eax, dword ptr [esi]
// 00521aa4  ff4804               dec dword ptr [eax + 4]
// 00521aa7  8b36                 mov esi, dword ptr [esi]
// 00521aa9  8b4604               mov eax, dword ptr [esi + 4]
// 00521aac  8b0e                 mov ecx, dword ptr [esi]
// 00521aae  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00521ab1  5b                   pop ebx
// 00521ab2  5f                   pop edi
// 00521ab3  5e                   pop esi
// 00521ab4  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
