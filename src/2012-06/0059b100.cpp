// roc 2012-06 0059b100  unit: VAuthoringSettings::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b100
//
// 0059b100  56                   push esi
// 0059b101  8bf1                 mov esi, ecx
// 0059b103  837e0800             cmp dword ptr [esi + 8], 0
// 0059b107  57                   push edi
// 0059b108  7e6e                 jle 0x59b178
// 0059b10a  8b0e                 mov ecx, dword ptr [esi]
// 0059b10c  8b39                 mov edi, dword ptr [ecx]
// 0059b10e  83caff               or edx, 0xffffffff
// 0059b111  015104               add dword ptr [ecx + 4], edx
// 0059b114  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b117  8b0487               mov eax, dword ptr [edi + eax*4]
// 0059b11a  0f85a2000000         jne 0x59b1c2
// 0059b120  015608               add dword ptr [esi + 8], edx
// 0059b123  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059b126  8916                 mov dword ptr [esi], edx
// 0059b128  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059b12b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0059b12e  897a10               mov dword ptr [edx + 0x10], edi
// 0059b131  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059b134  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0059b137  897a0c               mov dword ptr [edx + 0xc], edi
// 0059b13a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b13d  8d7a01               lea edi, [edx + 1]
// 0059b140  897e0c               mov dword ptr [esi + 0xc], edi
// 0059b143  85d2                 test edx, edx
// 0059b145  750e                 jne 0x59b155
// 0059b147  894e04               mov dword ptr [esi + 4], ecx
// 0059b14a  5f                   pop edi
// 0059b14b  89490c               mov dword ptr [ecx + 0xc], ecx
// 0059b14e  894910               mov dword ptr [ecx + 0x10], ecx
// 0059b151  5e                   pop esi
// 0059b152  c20800               ret 8
// 0059b155  8b5604               mov edx, dword ptr [esi + 4]
// 0059b158  89510c               mov dword ptr [ecx + 0xc], edx
// 0059b15b  8b5604               mov edx, dword ptr [esi + 4]
// 0059b15e  8b5210               mov edx, dword ptr [edx + 0x10]
// 0059b161  895110               mov dword ptr [ecx + 0x10], edx
// 0059b164  8b5604               mov edx, dword ptr [esi + 4]
// 0059b167  8b5210               mov edx, dword ptr [edx + 0x10]
// 0059b16a  894a0c               mov dword ptr [edx + 0xc], ecx
// 0059b16d  8b5604               mov edx, dword ptr [esi + 4]
// 0059b170  5f                   pop edi
// 0059b171  894a10               mov dword ptr [edx + 0x10], ecx
// 0059b174  5e                   pop esi
// 0059b175  c20800               ret 8
// 0059b178  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059b17c  53                   push ebx
// 0059b17d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059b181  57                   push edi
// 0059b182  53                   push ebx
// 0059b183  6a14                 push 0x14
// 0059b185  ff159404d900         call dword ptr [0xd90494]
// 0059b18b  83c40c               add esp, 0xc
// 0059b18e  8906                 mov dword ptr [esi], eax
// 0059b190  85c0                 test eax, eax
// 0059b192  7416                 je 0x59b1aa
// 0059b194  57                   push edi
// 0059b195  53                   push ebx
// 0059b196  50                   push eax
// 0059b197  50                   push eax
// 0059b198  8bce                 mov ecx, esi
// 0059b19a  c7460801000000       mov dword ptr [esi + 8], 1
// 0059b1a1  e89af6ffff           call 0x59a840
// 0059b1a6  84c0                 test al, al
// 0059b1a8  7508                 jne 0x59b1b2
// 0059b1aa  5b                   pop ebx
// 0059b1ab  5f                   pop edi
// 0059b1ac  33c0                 xor eax, eax
// 0059b1ae  5e                   pop esi
// 0059b1af  c20800               ret 8
// 0059b1b2  8b06                 mov eax, dword ptr [esi]
// 0059b1b4  ff4804               dec dword ptr [eax + 4]
// 0059b1b7  8b36                 mov esi, dword ptr [esi]
// 0059b1b9  8b4604               mov eax, dword ptr [esi + 4]
// 0059b1bc  8b0e                 mov ecx, dword ptr [esi]
// 0059b1be  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0059b1c1  5b                   pop ebx
// 0059b1c2  5f                   pop edi
// 0059b1c3  5e                   pop esi
// 0059b1c4  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
