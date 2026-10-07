// roc 2009-06 00430f40  unit: CStandardOutputView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430f40
//
// 00430f40  6aff                 push -1
// 00430f42  687aef8400           push 0x84ef7a
// 00430f47  64a100000000         mov eax, dword ptr fs:[0]
// 00430f4d  50                   push eax
// 00430f4e  64892500000000       mov dword ptr fs:[0], esp
// 00430f55  51                   push ecx
// 00430f56  6850010000           push 0x150
// 00430f5b  e8d87a2e00           call 0x718a38
// 00430f60  83c404               add esp, 4
// 00430f63  890424               mov dword ptr [esp], eax
// 00430f66  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00430f6e  85c0                 test eax, eax
// 00430f70  7416                 je 0x430f88
// 00430f72  8bc8                 mov ecx, eax
// 00430f74  e8e7fcffff           call 0x430c60
// 00430f79  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430f7d  64890d00000000       mov dword ptr fs:[0], ecx
// 00430f84  83c410               add esp, 0x10
// 00430f87  c3                   ret 
// 00430f88  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430f8c  33c0                 xor eax, eax
// 00430f8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00430f95  83c410               add esp, 0x10
// 00430f98  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW@VRPC4@RakNet@@@RakNet@@YAPAVRPC4@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
