// roc 2011-06 0052f160  unit: RBX::Network::ProfiledRakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f160
//
// 0052f160  56                   push esi
// 0052f161  8bf1                 mov esi, ecx
// 0052f163  837e0800             cmp dword ptr [esi + 8], 0
// 0052f167  57                   push edi
// 0052f168  7e6e                 jle 0x52f1d8
// 0052f16a  8b0e                 mov ecx, dword ptr [esi]
// 0052f16c  8b39                 mov edi, dword ptr [ecx]
// 0052f16e  83caff               or edx, 0xffffffff
// 0052f171  015104               add dword ptr [ecx + 4], edx
// 0052f174  8b4104               mov eax, dword ptr [ecx + 4]
// 0052f177  8b0487               mov eax, dword ptr [edi + eax*4]
// 0052f17a  0f85a2000000         jne 0x52f222
// 0052f180  015608               add dword ptr [esi + 8], edx
// 0052f183  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052f186  8916                 mov dword ptr [esi], edx
// 0052f188  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052f18b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052f18e  897a10               mov dword ptr [edx + 0x10], edi
// 0052f191  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052f194  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0052f197  897a0c               mov dword ptr [edx + 0xc], edi
// 0052f19a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052f19d  8d7a01               lea edi, [edx + 1]
// 0052f1a0  897e0c               mov dword ptr [esi + 0xc], edi
// 0052f1a3  85d2                 test edx, edx
// 0052f1a5  750e                 jne 0x52f1b5
// 0052f1a7  894e04               mov dword ptr [esi + 4], ecx
// 0052f1aa  5f                   pop edi
// 0052f1ab  89490c               mov dword ptr [ecx + 0xc], ecx
// 0052f1ae  894910               mov dword ptr [ecx + 0x10], ecx
// 0052f1b1  5e                   pop esi
// 0052f1b2  c20800               ret 8
// 0052f1b5  8b5604               mov edx, dword ptr [esi + 4]
// 0052f1b8  89510c               mov dword ptr [ecx + 0xc], edx
// 0052f1bb  8b5604               mov edx, dword ptr [esi + 4]
// 0052f1be  8b5210               mov edx, dword ptr [edx + 0x10]
// 0052f1c1  895110               mov dword ptr [ecx + 0x10], edx
// 0052f1c4  8b5604               mov edx, dword ptr [esi + 4]
// 0052f1c7  8b5210               mov edx, dword ptr [edx + 0x10]
// 0052f1ca  894a0c               mov dword ptr [edx + 0xc], ecx
// 0052f1cd  8b5604               mov edx, dword ptr [esi + 4]
// 0052f1d0  5f                   pop edi
// 0052f1d1  894a10               mov dword ptr [edx + 0x10], ecx
// 0052f1d4  5e                   pop esi
// 0052f1d5  c20800               ret 8
// 0052f1d8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052f1dc  53                   push ebx
// 0052f1dd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052f1e1  57                   push edi
// 0052f1e2  53                   push ebx
// 0052f1e3  6a14                 push 0x14
// 0052f1e5  ff1584eec200         call dword ptr [0xc2ee84]
// 0052f1eb  83c40c               add esp, 0xc
// 0052f1ee  8906                 mov dword ptr [esi], eax
// 0052f1f0  85c0                 test eax, eax
// 0052f1f2  7416                 je 0x52f20a
// 0052f1f4  57                   push edi
// 0052f1f5  53                   push ebx
// 0052f1f6  50                   push eax
// 0052f1f7  50                   push eax
// 0052f1f8  8bce                 mov ecx, esi
// 0052f1fa  c7460801000000       mov dword ptr [esi + 8], 1
// 0052f201  e82af6ffff           call 0x52e830
// 0052f206  84c0                 test al, al
// 0052f208  7508                 jne 0x52f212
// 0052f20a  5b                   pop ebx
// 0052f20b  5f                   pop edi
// 0052f20c  33c0                 xor eax, eax
// 0052f20e  5e                   pop esi
// 0052f20f  c20800               ret 8
// 0052f212  8b06                 mov eax, dword ptr [esi]
// 0052f214  ff4804               dec dword ptr [eax + 4]
// 0052f217  8b36                 mov esi, dword ptr [esi]
// 0052f219  8b4604               mov eax, dword ptr [esi + 4]
// 0052f21c  8b0e                 mov ecx, dword ptr [esi]
// 0052f21e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0052f221  5b                   pop ebx
// 0052f222  5f                   pop edi
// 0052f223  5e                   pop esi
// 0052f224  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
