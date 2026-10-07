// roc 2008-06 0055c8b0  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055c8b0
//
// 0055c8b0  6aff                 push -1
// 0055c8b2  683bf47b00           push 0x7bf43b
// 0055c8b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055c8bd  50                   push eax
// 0055c8be  64892500000000       mov dword ptr fs:[0], esp
// 0055c8c5  51                   push ecx
// 0055c8c6  6a28                 push 0x28
// 0055c8c8  e853401400           call 0x6a0920
// 0055c8cd  83c404               add esp, 4
// 0055c8d0  890424               mov dword ptr [esp], eax
// 0055c8d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055c8db  85c0                 test eax, eax
// 0055c8dd  7416                 je 0x55c8f5
// 0055c8df  8bc8                 mov ecx, eax
// 0055c8e1  e85afcffff           call 0x55c540
// 0055c8e6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055c8ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c8f1  83c410               add esp, 0x10
// 0055c8f4  c3                   ret 
// 0055c8f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055c8f9  33c0                 xor eax, eax
// 0055c8fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c902  83c410               add esp, 0x10
// 0055c905  c3                   ret 
// library rbx2016-raknet/UDPProxyCoordinator.cpp (function ??$OP_NEW@VUDPProxyCoordinator@RakNet@@@RakNet@@YAPAVUDPProxyCoordinator@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet UDPProxyCoordinator.cpp
