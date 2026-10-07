// roc 2012-06 00436b20  unit: CPatchedControlComboBox  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00436b20
//
// 00436b20  6aff                 push -1
// 00436b22  686a21aa00           push 0xaa216a
// 00436b27  64a100000000         mov eax, dword ptr fs:[0]
// 00436b2d  50                   push eax
// 00436b2e  64892500000000       mov dword ptr fs:[0], esp
// 00436b35  51                   push ecx
// 00436b36  6850010000           push 0x150
// 00436b3b  e8dab55400           call 0x98211a
// 00436b40  83c404               add esp, 4
// 00436b43  890424               mov dword ptr [esp], eax
// 00436b46  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00436b4e  85c0                 test eax, eax
// 00436b50  7416                 je 0x436b68
// 00436b52  8bc8                 mov ecx, eax
// 00436b54  e897e9ffff           call 0x4354f0
// 00436b59  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00436b5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00436b64  83c410               add esp, 0x10
// 00436b67  c3                   ret 
// 00436b68  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00436b6c  33c0                 xor eax, eax
// 00436b6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00436b75  83c410               add esp, 0x10
// 00436b78  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW@VRPC4@RakNet@@@RakNet@@YAPAVRPC4@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
