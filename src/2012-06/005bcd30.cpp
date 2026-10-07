// roc 2012-06 005bcd30  unit: RakNet::RakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bcd30
//
// 005bcd30  56                   push esi
// 005bcd31  8bf1                 mov esi, ecx
// 005bcd33  837e0800             cmp dword ptr [esi + 8], 0
// 005bcd37  57                   push edi
// 005bcd38  7e6e                 jle 0x5bcda8
// 005bcd3a  8b0e                 mov ecx, dword ptr [esi]
// 005bcd3c  8b39                 mov edi, dword ptr [ecx]
// 005bcd3e  83caff               or edx, 0xffffffff
// 005bcd41  015104               add dword ptr [ecx + 4], edx
// 005bcd44  8b4104               mov eax, dword ptr [ecx + 4]
// 005bcd47  8b0487               mov eax, dword ptr [edi + eax*4]
// 005bcd4a  0f85a2000000         jne 0x5bcdf2
// 005bcd50  015608               add dword ptr [esi + 8], edx
// 005bcd53  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bcd56  8916                 mov dword ptr [esi], edx
// 005bcd58  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bcd5b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005bcd5e  897a10               mov dword ptr [edx + 0x10], edi
// 005bcd61  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bcd64  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005bcd67  897a0c               mov dword ptr [edx + 0xc], edi
// 005bcd6a  8b560c               mov edx, dword ptr [esi + 0xc]
// 005bcd6d  8d7a01               lea edi, [edx + 1]
// 005bcd70  897e0c               mov dword ptr [esi + 0xc], edi
// 005bcd73  85d2                 test edx, edx
// 005bcd75  750e                 jne 0x5bcd85
// 005bcd77  894e04               mov dword ptr [esi + 4], ecx
// 005bcd7a  5f                   pop edi
// 005bcd7b  89490c               mov dword ptr [ecx + 0xc], ecx
// 005bcd7e  894910               mov dword ptr [ecx + 0x10], ecx
// 005bcd81  5e                   pop esi
// 005bcd82  c20800               ret 8
// 005bcd85  8b5604               mov edx, dword ptr [esi + 4]
// 005bcd88  89510c               mov dword ptr [ecx + 0xc], edx
// 005bcd8b  8b5604               mov edx, dword ptr [esi + 4]
// 005bcd8e  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bcd91  895110               mov dword ptr [ecx + 0x10], edx
// 005bcd94  8b5604               mov edx, dword ptr [esi + 4]
// 005bcd97  8b5210               mov edx, dword ptr [edx + 0x10]
// 005bcd9a  894a0c               mov dword ptr [edx + 0xc], ecx
// 005bcd9d  8b5604               mov edx, dword ptr [esi + 4]
// 005bcda0  5f                   pop edi
// 005bcda1  894a10               mov dword ptr [edx + 0x10], ecx
// 005bcda4  5e                   pop esi
// 005bcda5  c20800               ret 8
// 005bcda8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bcdac  53                   push ebx
// 005bcdad  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bcdb1  57                   push edi
// 005bcdb2  53                   push ebx
// 005bcdb3  6a14                 push 0x14
// 005bcdb5  ff159404d900         call dword ptr [0xd90494]
// 005bcdbb  83c40c               add esp, 0xc
// 005bcdbe  8906                 mov dword ptr [esi], eax
// 005bcdc0  85c0                 test eax, eax
// 005bcdc2  7416                 je 0x5bcdda
// 005bcdc4  57                   push edi
// 005bcdc5  53                   push ebx
// 005bcdc6  50                   push eax
// 005bcdc7  50                   push eax
// 005bcdc8  8bce                 mov ecx, esi
// 005bcdca  c7460801000000       mov dword ptr [esi + 8], 1
// 005bcdd1  e8faecffff           call 0x5bbad0
// 005bcdd6  84c0                 test al, al
// 005bcdd8  7508                 jne 0x5bcde2
// 005bcdda  5b                   pop ebx
// 005bcddb  5f                   pop edi
// 005bcddc  33c0                 xor eax, eax
// 005bcdde  5e                   pop esi
// 005bcddf  c20800               ret 8
// 005bcde2  8b06                 mov eax, dword ptr [esi]
// 005bcde4  ff4804               dec dword ptr [eax + 4]
// 005bcde7  8b36                 mov esi, dword ptr [esi]
// 005bcde9  8b4604               mov eax, dword ptr [esi + 4]
// 005bcdec  8b0e                 mov ecx, dword ptr [esi]
// 005bcdee  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005bcdf1  5b                   pop ebx
// 005bcdf2  5f                   pop edi
// 005bcdf3  5e                   pop esi
// 005bcdf4  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
