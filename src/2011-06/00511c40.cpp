// roc 2011-06 00511c40  unit: RBX::Network::ClientReplicator  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00511c40
//
// 00511c40  56                   push esi
// 00511c41  8bf1                 mov esi, ecx
// 00511c43  837e0800             cmp dword ptr [esi + 8], 0
// 00511c47  57                   push edi
// 00511c48  7e6e                 jle 0x511cb8
// 00511c4a  8b0e                 mov ecx, dword ptr [esi]
// 00511c4c  8b39                 mov edi, dword ptr [ecx]
// 00511c4e  83caff               or edx, 0xffffffff
// 00511c51  015104               add dword ptr [ecx + 4], edx
// 00511c54  8b4104               mov eax, dword ptr [ecx + 4]
// 00511c57  8b0487               mov eax, dword ptr [edi + eax*4]
// 00511c5a  0f85a2000000         jne 0x511d02
// 00511c60  015608               add dword ptr [esi + 8], edx
// 00511c63  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00511c66  8916                 mov dword ptr [esi], edx
// 00511c68  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00511c6b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00511c6e  897a10               mov dword ptr [edx + 0x10], edi
// 00511c71  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00511c74  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00511c77  897a0c               mov dword ptr [edx + 0xc], edi
// 00511c7a  8b560c               mov edx, dword ptr [esi + 0xc]
// 00511c7d  8d7a01               lea edi, [edx + 1]
// 00511c80  897e0c               mov dword ptr [esi + 0xc], edi
// 00511c83  85d2                 test edx, edx
// 00511c85  750e                 jne 0x511c95
// 00511c87  894e04               mov dword ptr [esi + 4], ecx
// 00511c8a  5f                   pop edi
// 00511c8b  89490c               mov dword ptr [ecx + 0xc], ecx
// 00511c8e  894910               mov dword ptr [ecx + 0x10], ecx
// 00511c91  5e                   pop esi
// 00511c92  c20800               ret 8
// 00511c95  8b5604               mov edx, dword ptr [esi + 4]
// 00511c98  89510c               mov dword ptr [ecx + 0xc], edx
// 00511c9b  8b5604               mov edx, dword ptr [esi + 4]
// 00511c9e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00511ca1  895110               mov dword ptr [ecx + 0x10], edx
// 00511ca4  8b5604               mov edx, dword ptr [esi + 4]
// 00511ca7  8b5210               mov edx, dword ptr [edx + 0x10]
// 00511caa  894a0c               mov dword ptr [edx + 0xc], ecx
// 00511cad  8b5604               mov edx, dword ptr [esi + 4]
// 00511cb0  5f                   pop edi
// 00511cb1  894a10               mov dword ptr [edx + 0x10], ecx
// 00511cb4  5e                   pop esi
// 00511cb5  c20800               ret 8
// 00511cb8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00511cbc  53                   push ebx
// 00511cbd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00511cc1  57                   push edi
// 00511cc2  53                   push ebx
// 00511cc3  6a14                 push 0x14
// 00511cc5  ff1584eec200         call dword ptr [0xc2ee84]
// 00511ccb  83c40c               add esp, 0xc
// 00511cce  8906                 mov dword ptr [esi], eax
// 00511cd0  85c0                 test eax, eax
// 00511cd2  7416                 je 0x511cea
// 00511cd4  57                   push edi
// 00511cd5  53                   push ebx
// 00511cd6  50                   push eax
// 00511cd7  50                   push eax
// 00511cd8  8bce                 mov ecx, esi
// 00511cda  c7460801000000       mov dword ptr [esi + 8], 1
// 00511ce1  e8aafeffff           call 0x511b90
// 00511ce6  84c0                 test al, al
// 00511ce8  7508                 jne 0x511cf2
// 00511cea  5b                   pop ebx
// 00511ceb  5f                   pop edi
// 00511cec  33c0                 xor eax, eax
// 00511cee  5e                   pop esi
// 00511cef  c20800               ret 8
// 00511cf2  8b06                 mov eax, dword ptr [esi]
// 00511cf4  ff4804               dec dword ptr [eax + 4]
// 00511cf7  8b36                 mov esi, dword ptr [esi]
// 00511cf9  8b4604               mov eax, dword ptr [esi + 4]
// 00511cfc  8b0e                 mov ecx, dword ptr [esi]
// 00511cfe  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00511d01  5b                   pop ebx
// 00511d02  5f                   pop edi
// 00511d03  5e                   pop esi
// 00511d04  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
