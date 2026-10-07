// roc 2012-06 005bb7c0  unit: RakNet::RakPeer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb7c0
//
// 005bb7c0  6aff                 push -1
// 005bb7c2  68eb29ad00           push 0xad29eb
// 005bb7c7  64a100000000         mov eax, dword ptr fs:[0]
// 005bb7cd  50                   push eax
// 005bb7ce  64892500000000       mov dword ptr fs:[0], esp
// 005bb7d5  51                   push ecx
// 005bb7d6  6a2c                 push 0x2c
// 005bb7d8  e83d693c00           call 0x98211a
// 005bb7dd  83c404               add esp, 4
// 005bb7e0  890424               mov dword ptr [esp], eax
// 005bb7e3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bb7eb  85c0                 test eax, eax
// 005bb7ed  7416                 je 0x5bb805
// 005bb7ef  8bc8                 mov ecx, eax
// 005bb7f1  e8cadb0000           call 0x5c93c0
// 005bb7f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bb7fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb801  83c410               add esp, 0x10
// 005bb804  c3                   ret 
// 005bb805  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bb809  33c0                 xor eax, eax
// 005bb80b  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb812  83c410               add esp, 0x10
// 005bb815  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ??$OP_NEW@URakNetSocket@RakNet@@@RakNet@@YAPAURakNetSocket@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
