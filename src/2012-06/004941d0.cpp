// roc 2012-06 004941d0  unit: CRobloxView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004941d0
//
// 004941d0  6aff                 push -1
// 004941d2  686a21aa00           push 0xaa216a
// 004941d7  64a100000000         mov eax, dword ptr fs:[0]
// 004941dd  50                   push eax
// 004941de  64892500000000       mov dword ptr fs:[0], esp
// 004941e5  51                   push ecx
// 004941e6  680c020000           push 0x20c
// 004941eb  e82adf4e00           call 0x98211a
// 004941f0  83c404               add esp, 4
// 004941f3  890424               mov dword ptr [esp], eax
// 004941f6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004941fe  85c0                 test eax, eax
// 00494200  7416                 je 0x494218
// 00494202  8bc8                 mov ecx, eax
// 00494204  e8d7f9ffff           call 0x493be0
// 00494209  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049420d  64890d00000000       mov dword ptr fs:[0], ecx
// 00494214  83c410               add esp, 0x10
// 00494217  c3                   ret 
// 00494218  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049421c  33c0                 xor eax, eax
// 0049421e  64890d00000000       mov dword ptr fs:[0], ecx
// 00494225  83c410               add esp, 0x10
// 00494228  c3                   ret 
// library rbxgs-raknet/RakNetworkFactory.cpp (function ?GetPacketLogger@RakNetworkFactory@@SAPAVPacketLogger@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetworkFactory.cpp
