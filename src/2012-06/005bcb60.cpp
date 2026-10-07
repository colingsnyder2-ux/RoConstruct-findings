// roc 2012-06 005bcb60  unit: RakNet::RakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bcb60
//
// 005bcb60  56                   push esi
// 005bcb61  8bf1                 mov esi, ecx
// 005bcb63  837e0800             cmp dword ptr [esi + 8], 0
// 005bcb67  57                   push edi
// 005bcb68  7e6e                 jle 0x5bcbd8
// 005bcb6a  8b0e                 mov ecx, dword ptr [esi]
// 005bcb6c  8b39                 mov edi, dword ptr [ecx]
// 005bcb6e  83caff               or edx, 0xffffffff
// 005bcb71  015104               add dword ptr [ecx + 4], edx
// 005bcb74  8b4104               mov eax, dword ptr [ecx + 4]
// 005bcb77  8b0487               mov eax, dword ptr [edi + eax*4]
// 005bcb7a  0f85a2000000         jne 0x5bcc22
// 005bcb80  015608               add dword ptr [esi + 8], edx
// 005bcb83  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bcb86  8916                 mov dword ptr [esi], edx
// 005bcb88  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bcb8b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005bcb8e  897a10               mov dword ptr [edx + 0x10], edi
// 005bcb91  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bcb94  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005bcb97  897a0c               mov dword ptr [edx + 0xc], edi
// 005bcb9a  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bcb9d  8d7a01               lea edi, [edx + 1]
// 005bcba0  897e0c               mov dword ptr [esi + 0xc], edi
// 005bcba3  85d2                 test edx, edx
// 005bcba5  750e                 jne 0x5bcbb5
// 005bcba7  894e04               mov dword ptr [esi + 4], ecx
// 005bcbaa  5f                   pop edi
// 005bcbab  89490c               mov dword ptr [ecx + 0xc], ecx
// 005bcbae  894910               mov dword ptr [ecx + 0x10], ecx
// 005bcbb1  5e                   pop esi
// 005bcbb2  c20800               ret 8
// 005bcbb5  8b5604               mov edx, dword ptr [esi + 4]
// 005bcbb8  89510c               mov dword ptr [ecx + 0xc], edx
// 005bcbbb  8b5604               mov edx, dword ptr [esi + 4]
// 005bcbbe  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bcbc1  895110               mov dword ptr [ecx + 0x10], edx
// 005bcbc4  8b5604               mov edx, dword ptr [esi + 4]
// 005bcbc7  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bcbca  894a0c               mov dword ptr [edx + 0xc], ecx
// 005bcbcd  8b5604               mov edx, dword ptr [esi + 4]
// 005bcbd0  5f                   pop edi
// 005bcbd1  894a10               mov dword ptr [edx + 0x10], ecx
// 005bcbd4  5e                   pop esi
// 005bcbd5  c20800               ret 8
// 005bcbd8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bcbdc  53                   push ebx
// 005bcbdd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bcbe1  57                   push edi
// 005bcbe2  53                   push ebx
// 005bcbe3  6a14                 push 0x14
// 005bcbe5  ff159404d900         call dword ptr [0xd90494]
// 005bcbeb  83c40c               add esp, 0xc
// 005bcbee  8906                 mov dword ptr [esi], eax
// 005bcbf0  85c0                 test eax, eax
// 005bcbf2  7416                 je 0x5bcc0a
// 005bcbf4  57                   push edi
// 005bcbf5  53                   push ebx
// 005bcbf6  50                   push eax
// 005bcbf7  50                   push eax
// 005bcbf8  8bce                 mov ecx, esi
// 005bcbfa  c7460801000000       mov dword ptr [esi + 8], 1
// 005bcc01  e80aeeffff           call 0x5bba10
// 005bcc06  84c0                 test al, al
// 005bcc08  7508                 jne 0x5bcc12
// 005bcc0a  5b                   pop ebx
// 005bcc0b  5f                   pop edi
// 005bcc0c  33c0                 xor eax, eax
// 005bcc0e  5e                   pop esi
// 005bcc0f  c20800               ret 8
// 005bcc12  8b06                 mov eax, dword ptr [esi]
// 005bcc14  ff4804               dec dword ptr [eax + 4]
// 005bcc17  8b36                 mov esi, dword ptr [esi]
// 005bcc19  8b4604               mov eax, dword ptr [esi + 4]
// 005bcc1c  8b0e                 mov ecx, dword ptr [esi]
// 005bcc1e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005bcc21  5b                   pop ebx
// 005bcc22  5f                   pop edi
// 005bcc23  5e                   pop esi
// 005bcc24  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
