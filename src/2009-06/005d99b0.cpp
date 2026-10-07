// roc 2009-06 005d99b0  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d99b0
//
// 005d99b0  6aff                 push -1
// 005d99b2  687b9c8600           push 0x869c7b
// 005d99b7  64a100000000         mov eax, dword ptr fs:[0]
// 005d99bd  50                   push eax
// 005d99be  64892500000000       mov dword ptr fs:[0], esp
// 005d99c5  51                   push ecx
// 005d99c6  6a28                 push 0x28
// 005d99c8  e86bf01300           call 0x718a38
// 005d99cd  83c404               add esp, 4
// 005d99d0  890424               mov dword ptr [esp], eax
// 005d99d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d99db  85c0                 test eax, eax
// 005d99dd  7416                 je 0x5d99f5
// 005d99df  8bc8                 mov ecx, eax
// 005d99e1  e8fafaffff           call 0x5d94e0
// 005d99e6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d99ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005d99f1  83c410               add esp, 0x10
// 005d99f4  c3                   ret 
// 005d99f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d99f9  33c0                 xor eax, eax
// 005d99fb  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9a02  83c410               add esp, 0x10
// 005d9a05  c3                   ret 
// library rbx2016-raknet/UDPProxyCoordinator.cpp (function ??$OP_NEW@VUDPProxyCoordinator@RakNet@@@RakNet@@YAPAVUDPProxyCoordinator@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet UDPProxyCoordinator.cpp
