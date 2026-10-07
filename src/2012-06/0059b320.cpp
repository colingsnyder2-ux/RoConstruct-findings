// roc 2012-06 0059b320  unit: VAuthoringSettings::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b320
//
// 0059b320  56                   push esi
// 0059b321  8bf1                 mov esi, ecx
// 0059b323  837e0800             cmp dword ptr [esi + 8], 0
// 0059b327  57                   push edi
// 0059b328  7e6e                 jle 0x59b398
// 0059b32a  8b0e                 mov ecx, dword ptr [esi]
// 0059b32c  8b39                 mov edi, dword ptr [ecx]
// 0059b32e  83caff               or edx, 0xffffffff
// 0059b331  015104               add dword ptr [ecx + 4], edx
// 0059b334  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b337  8b0487               mov eax, dword ptr [edi + eax*4]
// 0059b33a  0f85a2000000         jne 0x59b3e2
// 0059b340  015608               add dword ptr [esi + 8], edx
// 0059b343  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059b346  8916                 mov dword ptr [esi], edx
// 0059b348  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059b34b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0059b34e  897a10               mov dword ptr [edx + 0x10], edi
// 0059b351  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059b354  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0059b357  897a0c               mov dword ptr [edx + 0xc], edi
// 0059b35a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059b35d  8d7a01               lea edi, [edx + 1]
// 0059b360  897e0c               mov dword ptr [esi + 0xc], edi
// 0059b363  85d2                 test edx, edx
// 0059b365  750e                 jne 0x59b375
// 0059b367  894e04               mov dword ptr [esi + 4], ecx
// 0059b36a  5f                   pop edi
// 0059b36b  89490c               mov dword ptr [ecx + 0xc], ecx
// 0059b36e  894910               mov dword ptr [ecx + 0x10], ecx
// 0059b371  5e                   pop esi
// 0059b372  c20800               ret 8
// 0059b375  8b5604               mov edx, dword ptr [esi + 4]
// 0059b378  89510c               mov dword ptr [ecx + 0xc], edx
// 0059b37b  8b5604               mov edx, dword ptr [esi + 4]
// 0059b37e  8b5210               mov edx, dword ptr [edx + 0x10]
// 0059b381  895110               mov dword ptr [ecx + 0x10], edx
// 0059b384  8b5604               mov edx, dword ptr [esi + 4]
// 0059b387  8b5210               mov edx, dword ptr [edx + 0x10]
// 0059b38a  894a0c               mov dword ptr [edx + 0xc], ecx
// 0059b38d  8b5604               mov edx, dword ptr [esi + 4]
// 0059b390  5f                   pop edi
// 0059b391  894a10               mov dword ptr [edx + 0x10], ecx
// 0059b394  5e                   pop esi
// 0059b395  c20800               ret 8
// 0059b398  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059b39c  53                   push ebx
// 0059b39d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059b3a1  57                   push edi
// 0059b3a2  53                   push ebx
// 0059b3a3  6a14                 push 0x14
// 0059b3a5  ff159404d900         call dword ptr [0xd90494]
// 0059b3ab  83c40c               add esp, 0xc
// 0059b3ae  8906                 mov dword ptr [esi], eax
// 0059b3b0  85c0                 test eax, eax
// 0059b3b2  7416                 je 0x59b3ca
// 0059b3b4  57                   push edi
// 0059b3b5  53                   push ebx
// 0059b3b6  50                   push eax
// 0059b3b7  50                   push eax
// 0059b3b8  8bce                 mov ecx, esi
// 0059b3ba  c7460801000000       mov dword ptr [esi + 8], 1
// 0059b3c1  e82af5ffff           call 0x59a8f0
// 0059b3c6  84c0                 test al, al
// 0059b3c8  7508                 jne 0x59b3d2
// 0059b3ca  5b                   pop ebx
// 0059b3cb  5f                   pop edi
// 0059b3cc  33c0                 xor eax, eax
// 0059b3ce  5e                   pop esi
// 0059b3cf  c20800               ret 8
// 0059b3d2  8b06                 mov eax, dword ptr [esi]
// 0059b3d4  ff4804               dec dword ptr [eax + 4]
// 0059b3d7  8b36                 mov esi, dword ptr [esi]
// 0059b3d9  8b4604               mov eax, dword ptr [esi + 4]
// 0059b3dc  8b0e                 mov ecx, dword ptr [esi]
// 0059b3de  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0059b3e1  5b                   pop ebx
// 0059b3e2  5f                   pop edi
// 0059b3e3  5e                   pop esi
// 0059b3e4  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
