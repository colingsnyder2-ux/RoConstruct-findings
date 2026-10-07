// roc 2010-06 004fe620  unit: RBX::Network::IdSerializer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe620
//
// 004fe620  6aff                 push -1
// 004fe622  684b1d9a00           push 0x9a1d4b
// 004fe627  64a100000000         mov eax, dword ptr fs:[0]
// 004fe62d  50                   push eax
// 004fe62e  64892500000000       mov dword ptr fs:[0], esp
// 004fe635  51                   push ecx
// 004fe636  6a18                 push 0x18
// 004fe638  e863932a00           call 0x7a79a0
// 004fe63d  83c404               add esp, 4
// 004fe640  890424               mov dword ptr [esp], eax
// 004fe643  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004fe64b  85c0                 test eax, eax
// 004fe64d  7416                 je 0x4fe665
// 004fe64f  8bc8                 mov ecx, eax
// 004fe651  e8aafeffff           call 0x4fe500
// 004fe656  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fe65a  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe661  83c410               add esp, 0x10
// 004fe664  c3                   ret 
// 004fe665  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fe669  33c0                 xor eax, eax
// 004fe66b  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe672  83c410               add esp, 0x10
// 004fe675  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??$OP_NEW@VSimpleMutex@RakNet@@@RakNet@@YAPAVSimpleMutex@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
