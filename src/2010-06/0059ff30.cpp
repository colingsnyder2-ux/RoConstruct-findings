// roc 2010-06 0059ff30  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059ff30
//
// 0059ff30  6aff                 push -1
// 0059ff32  684b1d9a00           push 0x9a1d4b
// 0059ff37  64a100000000         mov eax, dword ptr fs:[0]
// 0059ff3d  50                   push eax
// 0059ff3e  64892500000000       mov dword ptr fs:[0], esp
// 0059ff45  51                   push ecx
// 0059ff46  6a28                 push 0x28
// 0059ff48  e8537a2000           call 0x7a79a0
// 0059ff4d  83c404               add esp, 4
// 0059ff50  890424               mov dword ptr [esp], eax
// 0059ff53  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059ff5b  85c0                 test eax, eax
// 0059ff5d  7416                 je 0x59ff75
// 0059ff5f  8bc8                 mov ecx, eax
// 0059ff61  e8fafaffff           call 0x59fa60
// 0059ff66  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ff6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ff71  83c410               add esp, 0x10
// 0059ff74  c3                   ret 
// 0059ff75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ff79  33c0                 xor eax, eax
// 0059ff7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ff82  83c410               add esp, 0x10
// 0059ff85  c3                   ret 
// library rbx2016-raknet/UDPProxyCoordinator.cpp (function ??$OP_NEW@VUDPProxyCoordinator@RakNet@@@RakNet@@YAPAVUDPProxyCoordinator@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet UDPProxyCoordinator.cpp
