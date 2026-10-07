// roc 2011-06 00521590  unit: RBX::Network::ProfiledRakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521590
//
// 00521590  56                   push esi
// 00521591  8bf1                 mov esi, ecx
// 00521593  837e0800             cmp dword ptr [esi + 8], 0
// 00521597  57                   push edi
// 00521598  7e6e                 jle 0x521608
// 0052159a  8b0e                 mov ecx, dword ptr [esi]
// 0052159c  8b39                 mov edi, dword ptr [ecx]
// 0052159e  83caff               or edx, 0xffffffff
// 005215a1  015104               add dword ptr [ecx + 4], edx
// 005215a4  8b4104               mov eax, dword ptr [ecx + 4]
// 005215a7  8b0487               mov eax, dword ptr [edi + eax*4]
// 005215aa  0f85a2000000         jne 0x521652
// 005215b0  015608               add dword ptr [esi + 8], edx
// 005215b3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005215b6  8916                 mov dword ptr [esi], edx
// 005215b8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005215bb  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005215be  897a10               mov dword ptr [edx + 0x10], edi
// 005215c1  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005215c4  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005215c7  897a0c               mov dword ptr [edx + 0xc], edi
// 005215ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 005215cd  8d7a01               lea edi, [edx + 1]
// 005215d0  897e0c               mov dword ptr [esi + 0xc], edi
// 005215d3  85d2                 test edx, edx
// 005215d5  750e                 jne 0x5215e5
// 005215d7  894e04               mov dword ptr [esi + 4], ecx
// 005215da  5f                   pop edi
// 005215db  89490c               mov dword ptr [ecx + 0xc], ecx
// 005215de  894910               mov dword ptr [ecx + 0x10], ecx
// 005215e1  5e                   pop esi
// 005215e2  c20800               ret 8
// 005215e5  8b5604               mov edx, dword ptr [esi + 4]
// 005215e8  89510c               mov dword ptr [ecx + 0xc], edx
// 005215eb  8b5604               mov edx, dword ptr [esi + 4]
// 005215ee  8b5210               mov edx, dword ptr [edx + 0x10]
// 005215f1  895110               mov dword ptr [ecx + 0x10], edx
// 005215f4  8b5604               mov edx, dword ptr [esi + 4]
// 005215f7  8b5210               mov edx, dword ptr [edx + 0x10]
// 005215fa  894a0c               mov dword ptr [edx + 0xc], ecx
// 005215fd  8b5604               mov edx, dword ptr [esi + 4]
// 00521600  5f                   pop edi
// 00521601  894a10               mov dword ptr [edx + 0x10], ecx
// 00521604  5e                   pop esi
// 00521605  c20800               ret 8
// 00521608  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052160c  53                   push ebx
// 0052160d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00521611  57                   push edi
// 00521612  53                   push ebx
// 00521613  6a14                 push 0x14
// 00521615  ff1584eec200         call dword ptr [0xc2ee84]
// 0052161b  83c40c               add esp, 0xc
// 0052161e  8906                 mov dword ptr [esi], eax
// 00521620  85c0                 test eax, eax
// 00521622  7416                 je 0x52163a
// 00521624  57                   push edi
// 00521625  53                   push ebx
// 00521626  50                   push eax
// 00521627  50                   push eax
// 00521628  8bce                 mov ecx, esi
// 0052162a  c7460801000000       mov dword ptr [esi + 8], 1
// 00521631  e85af1ffff           call 0x520790
// 00521636  84c0                 test al, al
// 00521638  7508                 jne 0x521642
// 0052163a  5b                   pop ebx
// 0052163b  5f                   pop edi
// 0052163c  33c0                 xor eax, eax
// 0052163e  5e                   pop esi
// 0052163f  c20800               ret 8
// 00521642  8b06                 mov eax, dword ptr [esi]
// 00521644  ff4804               dec dword ptr [eax + 4]
// 00521647  8b36                 mov esi, dword ptr [esi]
// 00521649  8b4604               mov eax, dword ptr [esi + 4]
// 0052164c  8b0e                 mov ecx, dword ptr [esi]
// 0052164e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00521651  5b                   pop ebx
// 00521652  5f                   pop edi
// 00521653  5e                   pop esi
// 00521654  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
