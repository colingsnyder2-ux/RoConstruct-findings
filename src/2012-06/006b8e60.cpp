// roc 2012-06 006b8e60  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b8e60
//
// 006b8e60  6aff                 push -1
// 006b8e62  68eb29ad00           push 0xad29eb
// 006b8e67  64a100000000         mov eax, dword ptr fs:[0]
// 006b8e6d  50                   push eax
// 006b8e6e  64892500000000       mov dword ptr fs:[0], esp
// 006b8e75  51                   push ecx
// 006b8e76  6a28                 push 0x28
// 006b8e78  e89d922c00           call 0x98211a
// 006b8e7d  83c404               add esp, 4
// 006b8e80  890424               mov dword ptr [esp], eax
// 006b8e83  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b8e8b  85c0                 test eax, eax
// 006b8e8d  7416                 je 0x6b8ea5
// 006b8e8f  8bc8                 mov ecx, eax
// 006b8e91  e8bafaffff           call 0x6b8950
// 006b8e96  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b8e9a  64890d00000000       mov dword ptr fs:[0], ecx
// 006b8ea1  83c410               add esp, 0x10
// 006b8ea4  c3                   ret 
// 006b8ea5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b8ea9  33c0                 xor eax, eax
// 006b8eab  64890d00000000       mov dword ptr fs:[0], ecx
// 006b8eb2  83c410               add esp, 0x10
// 006b8eb5  c3                   ret 
// library rbx2016-raknet/UDPProxyCoordinator.cpp (function ??$OP_NEW@VUDPProxyCoordinator@RakNet@@@RakNet@@YAPAVUDPProxyCoordinator@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet UDPProxyCoordinator.cpp
