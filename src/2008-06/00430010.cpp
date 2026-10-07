// roc 2008-06 00430010  unit: CPatchedControlComboBox  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430010
//
// 00430010  6aff                 push -1
// 00430012  681afa7b00           push 0x7bfa1a
// 00430017  64a100000000         mov eax, dword ptr fs:[0]
// 0043001d  50                   push eax
// 0043001e  64892500000000       mov dword ptr fs:[0], esp
// 00430025  51                   push ecx
// 00430026  6888010000           push 0x188
// 0043002b  e8f0082700           call 0x6a0920
// 00430030  83c404               add esp, 4
// 00430033  890424               mov dword ptr [esp], eax
// 00430036  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043003e  85c0                 test eax, eax
// 00430040  7416                 je 0x430058
// 00430042  8bc8                 mov ecx, eax
// 00430044  e8f7eaffff           call 0x42eb40
// 00430049  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043004d  64890d00000000       mov dword ptr fs:[0], ecx
// 00430054  83c410               add esp, 0x10
// 00430057  c3                   ret 
// 00430058  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043005c  33c0                 xor eax, eax
// 0043005e  64890d00000000       mov dword ptr fs:[0], ecx
// 00430065  83c410               add esp, 0x10
// 00430068  c3                   ret 
// library rbx2016-raknet/NatPunchthroughClient.cpp (function ??$OP_NEW@VNatPunchthroughClient@RakNet@@@RakNet@@YAPAVNatPunchthroughClient@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet NatPunchthroughClient.cpp
