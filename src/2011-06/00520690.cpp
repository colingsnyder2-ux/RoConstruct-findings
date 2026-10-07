// roc 2011-06 00520690  unit: RBX::Network::ProfiledRakPeer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00520690
//
// 00520690  6aff                 push -1
// 00520692  683b939f00           push 0x9f933b
// 00520697  64a100000000         mov eax, dword ptr fs:[0]
// 0052069d  50                   push eax
// 0052069e  64892500000000       mov dword ptr fs:[0], esp
// 005206a5  51                   push ecx
// 005206a6  6a18                 push 0x18
// 005206a8  e8b1992e00           call 0x80a05e
// 005206ad  83c404               add esp, 4
// 005206b0  890424               mov dword ptr [esp], eax
// 005206b3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005206bb  85c0                 test eax, eax
// 005206bd  7416                 je 0x5206d5
// 005206bf  8bc8                 mov ecx, eax
// 005206c1  e8fad00000           call 0x52d7c0
// 005206c6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005206ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005206d1  83c410               add esp, 0x10
// 005206d4  c3                   ret 
// 005206d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005206d9  33c0                 xor eax, eax
// 005206db  64890d00000000       mov dword ptr fs:[0], ecx
// 005206e2  83c410               add esp, 0x10
// 005206e5  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??$OP_NEW@VSimpleMutex@RakNet@@@RakNet@@YAPAVSimpleMutex@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
