// roc 2011-06 005b1180  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b1180
//
// 005b1180  6aff                 push -1
// 005b1182  683b939f00           push 0x9f933b
// 005b1187  64a100000000         mov eax, dword ptr fs:[0]
// 005b118d  50                   push eax
// 005b118e  64892500000000       mov dword ptr fs:[0], esp
// 005b1195  51                   push ecx
// 005b1196  6a28                 push 0x28
// 005b1198  e8c18e2500           call 0x80a05e
// 005b119d  83c404               add esp, 4
// 005b11a0  890424               mov dword ptr [esp], eax
// 005b11a3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b11ab  85c0                 test eax, eax
// 005b11ad  7416                 je 0x5b11c5
// 005b11af  8bc8                 mov ecx, eax
// 005b11b1  e8fafaffff           call 0x5b0cb0
// 005b11b6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b11ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005b11c1  83c410               add esp, 0x10
// 005b11c4  c3                   ret 
// 005b11c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b11c9  33c0                 xor eax, eax
// 005b11cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005b11d2  83c410               add esp, 0x10
// 005b11d5  c3                   ret 
// library rbx2016-raknet/UDPProxyCoordinator.cpp (function ??$OP_NEW@VUDPProxyCoordinator@RakNet@@@RakNet@@YAPAVUDPProxyCoordinator@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet UDPProxyCoordinator.cpp
