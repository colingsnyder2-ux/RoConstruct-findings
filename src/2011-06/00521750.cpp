// roc 2011-06 00521750  unit: RBX::Network::ProfiledRakPeer  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521750
//
// 00521750  56                   push esi
// 00521751  8bf1                 mov esi, ecx
// 00521753  837e0800             cmp dword ptr [esi + 8], 0
// 00521757  57                   push edi
// 00521758  7e6e                 jle 0x5217c8
// 0052175a  8b0e                 mov ecx, dword ptr [esi]
// 0052175c  8b39                 mov edi, dword ptr [ecx]
// 0052175e  83caff               or edx, 0xffffffff
// 00521761  015104               add dword ptr [ecx + 4], edx
// 00521764  8b4104               mov eax, dword ptr [ecx + 4]
// 00521767  8b0487               mov eax, dword ptr [edi + eax*4]
// 0052176a  0f85a2000000         jne 0x521812
// 00521770  015608               add dword ptr [esi + 8], edx
// 00521773  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00521776  8916                 mov dword ptr [esi], edx
// 00521778  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052177b  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052177e  897a10               mov dword ptr [edx + 0x10], edi
// 00521781  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00521784  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00521787  897a0c               mov dword ptr [edx + 0xc], edi
// 0052178a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052178d  8d7a01               lea edi, [edx + 1]
// 00521790  897e0c               mov dword ptr [esi + 0xc], edi
// 00521793  85d2                 test edx, edx
// 00521795  750e                 jne 0x5217a5
// 00521797  894e04               mov dword ptr [esi + 4], ecx
// 0052179a  5f                   pop edi
// 0052179b  89490c               mov dword ptr [ecx + 0xc], ecx
// 0052179e  894910               mov dword ptr [ecx + 0x10], ecx
// 005217a1  5e                   pop esi
// 005217a2  c20800               ret 8
// 005217a5  8b5604               mov edx, dword ptr [esi + 4]
// 005217a8  89510c               mov dword ptr [ecx + 0xc], edx
// 005217ab  8b5604               mov edx, dword ptr [esi + 4]
// 005217ae  8b5210               mov edx, dword ptr [edx + 0x10]
// 005217b1  895110               mov dword ptr [ecx + 0x10], edx
// 005217b4  8b5604               mov edx, dword ptr [esi + 4]
// 005217b7  8b5210               mov edx, dword ptr [edx + 0x10]
// 005217ba  894a0c               mov dword ptr [edx + 0xc], ecx
// 005217bd  8b5604               mov edx, dword ptr [esi + 4]
// 005217c0  5f                   pop edi
// 005217c1  894a10               mov dword ptr [edx + 0x10], ecx
// 005217c4  5e                   pop esi
// 005217c5  c20800               ret 8
// 005217c8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005217cc  53                   push ebx
// 005217cd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005217d1  57                   push edi
// 005217d2  53                   push ebx
// 005217d3  6a14                 push 0x14
// 005217d5  ff1584eec200         call dword ptr [0xc2ee84]
// 005217db  83c40c               add esp, 0xc
// 005217de  8906                 mov dword ptr [esi], eax
// 005217e0  85c0                 test eax, eax
// 005217e2  7416                 je 0x5217fa
// 005217e4  57                   push edi
// 005217e5  53                   push ebx
// 005217e6  50                   push eax
// 005217e7  50                   push eax
// 005217e8  8bce                 mov ecx, esi
// 005217ea  c7460801000000       mov dword ptr [esi + 8], 1
// 005217f1  e83af0ffff           call 0x520830
// 005217f6  84c0                 test al, al
// 005217f8  7508                 jne 0x521802
// 005217fa  5b                   pop ebx
// 005217fb  5f                   pop edi
// 005217fc  33c0                 xor eax, eax
// 005217fe  5e                   pop esi
// 005217ff  c20800               ret 8
// 00521802  8b06                 mov eax, dword ptr [esi]
// 00521804  ff4804               dec dword ptr [eax + 4]
// 00521807  8b36                 mov esi, dword ptr [esi]
// 00521809  8b4604               mov eax, dword ptr [esi + 4]
// 0052180c  8b0e                 mov ecx, dword ptr [esi]
// 0052180e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00521811  5b                   pop ebx
// 00521812  5f                   pop edi
// 00521813  5e                   pop esi
// 00521814  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Allocate@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEPAY0IA@EPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
