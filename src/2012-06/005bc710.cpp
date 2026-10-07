// roc 2012-06 005bc710  unit: RakNet::RakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc710
//
// 005bc710  56                   push esi
// 005bc711  8bf1                 mov esi, ecx
// 005bc713  837e0800             cmp dword ptr [esi + 8], 0
// 005bc717  57                   push edi
// 005bc718  7e6e                 jle 0x5bc788
// 005bc71a  8b0e                 mov ecx, dword ptr [esi]
// 005bc71c  8b39                 mov edi, dword ptr [ecx]
// 005bc71e  83caff               or edx, 0xffffffff
// 005bc721  015104               add dword ptr [ecx + 4], edx
// 005bc724  8b4104               mov eax, dword ptr [ecx + 4]
// 005bc727  8b0487               mov eax, dword ptr [edi + eax*4]
// 005bc72a  0f85a2000000         jne 0x5bc7d2
// 005bc730  015608               add dword ptr [esi + 8], edx
// 005bc733  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc736  8916                 mov dword ptr [esi], edx
// 005bc738  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc73b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005bc73e  897a10               mov dword ptr [edx + 0x10], edi
// 005bc741  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bc744  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005bc747  897a0c               mov dword ptr [edx + 0xc], edi
// 005bc74a  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bc74d  8d7a01               lea edi, [edx + 1]
// 005bc750  897e0c               mov dword ptr [esi + 0xc], edi
// 005bc753  85d2                 test edx, edx
// 005bc755  750e                 jne 0x5bc765
// 005bc757  894e04               mov dword ptr [esi + 4], ecx
// 005bc75a  5f                   pop edi
// 005bc75b  89490c               mov dword ptr [ecx + 0xc], ecx
// 005bc75e  894910               mov dword ptr [ecx + 0x10], ecx
// 005bc761  5e                   pop esi
// 005bc762  c20800               ret 8
// 005bc765  8b5604               mov edx, dword ptr [esi + 4]
// 005bc768  89510c               mov dword ptr [ecx + 0xc], edx
// 005bc76b  8b5604               mov edx, dword ptr [esi + 4]
// 005bc76e  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bc771  895110               mov dword ptr [ecx + 0x10], edx
// 005bc774  8b5604               mov edx, dword ptr [esi + 4]
// 005bc777  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bc77a  894a0c               mov dword ptr [edx + 0xc], ecx
// 005bc77d  8b5604               mov edx, dword ptr [esi + 4]
// 005bc780  5f                   pop edi
// 005bc781  894a10               mov dword ptr [edx + 0x10], ecx
// 005bc784  5e                   pop esi
// 005bc785  c20800               ret 8
// 005bc788  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bc78c  53                   push ebx
// 005bc78d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bc791  57                   push edi
// 005bc792  53                   push ebx
// 005bc793  6a14                 push 0x14
// 005bc795  ff159404d900         call dword ptr [0xd90494]
// 005bc79b  83c40c               add esp, 0xc
// 005bc79e  8906                 mov dword ptr [esi], eax
// 005bc7a0  85c0                 test eax, eax
// 005bc7a2  7416                 je 0x5bc7ba
// 005bc7a4  57                   push edi
// 005bc7a5  53                   push ebx
// 005bc7a6  50                   push eax
// 005bc7a7  50                   push eax
// 005bc7a8  8bce                 mov ecx, esi
// 005bc7aa  c7460801000000       mov dword ptr [esi + 8], 1
// 005bc7b1  e80af1ffff           call 0x5bb8c0
// 005bc7b6  84c0                 test al, al
// 005bc7b8  7508                 jne 0x5bc7c2
// 005bc7ba  5b                   pop ebx
// 005bc7bb  5f                   pop edi
// 005bc7bc  33c0                 xor eax, eax
// 005bc7be  5e                   pop esi
// 005bc7bf  c20800               ret 8
// 005bc7c2  8b06                 mov eax, dword ptr [esi]
// 005bc7c4  ff4804               dec dword ptr [eax + 4]
// 005bc7c7  8b36                 mov esi, dword ptr [esi]
// 005bc7c9  8b4604               mov eax, dword ptr [esi + 4]
// 005bc7cc  8b0e                 mov ecx, dword ptr [esi]
// 005bc7ce  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005bc7d1  5b                   pop ebx
// 005bc7d2  5f                   pop edi
// 005bc7d3  5e                   pop esi
// 005bc7d4  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
