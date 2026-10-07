// roc 2011-06 0052eda0  unit: RBX::Network::ProfiledRakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052eda0
//
// 0052eda0  56                   push esi
// 0052eda1  8bf1                 mov esi, ecx
// 0052eda3  837e0800             cmp dword ptr [esi + 8], 0
// 0052eda7  57                   push edi
// 0052eda8  7e6e                 jle 0x52ee18
// 0052edaa  8b0e                 mov ecx, dword ptr [esi]
// 0052edac  8b39                 mov edi, dword ptr [ecx]
// 0052edae  83caff               or edx, 0xffffffff
// 0052edb1  015104               add dword ptr [ecx + 4], edx
// 0052edb4  8b4104               mov eax, dword ptr [ecx + 4]
// 0052edb7  8b0487               mov eax, dword ptr [edi + eax*4]
// 0052edba  0f85a2000000         jne 0x52ee62
// 0052edc0  015608               add dword ptr [esi + 8], edx
// 0052edc3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052edc6  8916                 mov dword ptr [esi], edx
// 0052edc8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052edcb  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052edce  897a10               mov dword ptr [edx + 0x10], edi
// 0052edd1  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052edd4  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0052edd7  897a0c               mov dword ptr [edx + 0xc], edi
// 0052edda  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052eddd  8d7a01               lea edi, [edx + 1]
// 0052ede0  897e0c               mov dword ptr [esi + 0xc], edi
// 0052ede3  85d2                 test edx, edx
// 0052ede5  750e                 jne 0x52edf5
// 0052ede7  894e04               mov dword ptr [esi + 4], ecx
// 0052edea  5f                   pop edi
// 0052edeb  89490c               mov dword ptr [ecx + 0xc], ecx
// 0052edee  894910               mov dword ptr [ecx + 0x10], ecx
// 0052edf1  5e                   pop esi
// 0052edf2  c20800               ret 8
// 0052edf5  8b5604               mov edx, dword ptr [esi + 4]
// 0052edf8  89510c               mov dword ptr [ecx + 0xc], edx
// 0052edfb  8b5604               mov edx, dword ptr [esi + 4]
// 0052edfe  8b5210               mov edx, dword ptr [edx + 0x10]
// 0052ee01  895110               mov dword ptr [ecx + 0x10], edx
// 0052ee04  8b5604               mov edx, dword ptr [esi + 4]
// 0052ee07  8b5210               mov edx, dword ptr [edx + 0x10]
// 0052ee0a  894a0c               mov dword ptr [edx + 0xc], ecx
// 0052ee0d  8b5604               mov edx, dword ptr [esi + 4]
// 0052ee10  5f                   pop edi
// 0052ee11  894a10               mov dword ptr [edx + 0x10], ecx
// 0052ee14  5e                   pop esi
// 0052ee15  c20800               ret 8
// 0052ee18  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052ee1c  53                   push ebx
// 0052ee1d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052ee21  57                   push edi
// 0052ee22  53                   push ebx
// 0052ee23  6a14                 push 0x14
// 0052ee25  ff1584eec200         call dword ptr [0xc2ee84]
// 0052ee2b  83c40c               add esp, 0xc
// 0052ee2e  8906                 mov dword ptr [esi], eax
// 0052ee30  85c0                 test eax, eax
// 0052ee32  7416                 je 0x52ee4a
// 0052ee34  57                   push edi
// 0052ee35  53                   push ebx
// 0052ee36  50                   push eax
// 0052ee37  50                   push eax
// 0052ee38  8bce                 mov ecx, esi
// 0052ee3a  c7460801000000       mov dword ptr [esi + 8], 1
// 0052ee41  e8baf8ffff           call 0x52e700
// 0052ee46  84c0                 test al, al
// 0052ee48  7508                 jne 0x52ee52
// 0052ee4a  5b                   pop ebx
// 0052ee4b  5f                   pop edi
// 0052ee4c  33c0                 xor eax, eax
// 0052ee4e  5e                   pop esi
// 0052ee4f  c20800               ret 8
// 0052ee52  8b06                 mov eax, dword ptr [esi]
// 0052ee54  ff4804               dec dword ptr [eax + 4]
// 0052ee57  8b36                 mov esi, dword ptr [esi]
// 0052ee59  8b4604               mov eax, dword ptr [esi + 4]
// 0052ee5c  8b0e                 mov ecx, dword ptr [esi]
// 0052ee5e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0052ee61  5b                   pop ebx
// 0052ee62  5f                   pop edi
// 0052ee63  5e                   pop esi
// 0052ee64  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
