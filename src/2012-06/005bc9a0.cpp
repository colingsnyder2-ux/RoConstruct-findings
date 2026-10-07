// roc 2012-06 005bc9a0  unit: RakNet::RakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc9a0
//
// 005bc9a0  56                   push esi
// 005bc9a1  8bf1                 mov esi, ecx
// 005bc9a3  837e0800             cmp dword ptr [esi + 8], 0
// 005bc9a7  57                   push edi
// 005bc9a8  7e6e                 jle 0x5bca18
// 005bc9aa  8b0e                 mov ecx, dword ptr [esi]
// 005bc9ac  8b39                 mov edi, dword ptr [ecx]
// 005bc9ae  83caff               or edx, 0xffffffff
// 005bc9b1  015104               add dword ptr [ecx + 4], edx
// 005bc9b4  8b4104               mov eax, dword ptr [ecx + 4]
// 005bc9b7  8b0487               mov eax, dword ptr [edi + eax*4]
// 005bc9ba  0f85a2000000         jne 0x5bca62
// 005bc9c0  015608               add dword ptr [esi + 8], edx
// 005bc9c3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc9c6  8916                 mov dword ptr [esi], edx
// 005bc9c8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc9cb  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005bc9ce  897a10               mov dword ptr [edx + 0x10], edi
// 005bc9d1  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bc9d4  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005bc9d7  897a0c               mov dword ptr [edx + 0xc], edi
// 005bc9da  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bc9dd  8d7a01               lea edi, [edx + 1]
// 005bc9e0  897e0c               mov dword ptr [esi + 0xc], edi
// 005bc9e3  85d2                 test edx, edx
// 005bc9e5  750e                 jne 0x5bc9f5
// 005bc9e7  894e04               mov dword ptr [esi + 4], ecx
// 005bc9ea  5f                   pop edi
// 005bc9eb  89490c               mov dword ptr [ecx + 0xc], ecx
// 005bc9ee  894910               mov dword ptr [ecx + 0x10], ecx
// 005bc9f1  5e                   pop esi
// 005bc9f2  c20800               ret 8
// 005bc9f5  8b5604               mov edx, dword ptr [esi + 4]
// 005bc9f8  89510c               mov dword ptr [ecx + 0xc], edx
// 005bc9fb  8b5604               mov edx, dword ptr [esi + 4]
// 005bc9fe  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bca01  895110               mov dword ptr [ecx + 0x10], edx
// 005bca04  8b5604               mov edx, dword ptr [esi + 4]
// 005bca07  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bca0a  894a0c               mov dword ptr [edx + 0xc], ecx
// 005bca0d  8b5604               mov edx, dword ptr [esi + 4]
// 005bca10  5f                   pop edi
// 005bca11  894a10               mov dword ptr [edx + 0x10], ecx
// 005bca14  5e                   pop esi
// 005bca15  c20800               ret 8
// 005bca18  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bca1c  53                   push ebx
// 005bca1d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bca21  57                   push edi
// 005bca22  53                   push ebx
// 005bca23  6a14                 push 0x14
// 005bca25  ff159404d900         call dword ptr [0xd90494]
// 005bca2b  83c40c               add esp, 0xc
// 005bca2e  8906                 mov dword ptr [esi], eax
// 005bca30  85c0                 test eax, eax
// 005bca32  7416                 je 0x5bca4a
// 005bca34  57                   push edi
// 005bca35  53                   push ebx
// 005bca36  50                   push eax
// 005bca37  50                   push eax
// 005bca38  8bce                 mov ecx, esi
// 005bca3a  c7460801000000       mov dword ptr [esi + 8], 1
// 005bca41  e81aefffff           call 0x5bb960
// 005bca46  84c0                 test al, al
// 005bca48  7508                 jne 0x5bca52
// 005bca4a  5b                   pop ebx
// 005bca4b  5f                   pop edi
// 005bca4c  33c0                 xor eax, eax
// 005bca4e  5e                   pop esi
// 005bca4f  c20800               ret 8
// 005bca52  8b06                 mov eax, dword ptr [esi]
// 005bca54  ff4804               dec dword ptr [eax + 4]
// 005bca57  8b36                 mov esi, dword ptr [esi]
// 005bca59  8b4604               mov eax, dword ptr [esi + 4]
// 005bca5c  8b0e                 mov ecx, dword ptr [esi]
// 005bca5e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005bca61  5b                   pop ebx
// 005bca62  5f                   pop edi
// 005bca63  5e                   pop esi
// 005bca64  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
