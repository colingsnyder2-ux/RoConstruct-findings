// roc 2010-06 004d2d50  unit: RBX::Network::VClient::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d2d50
//
// 004d2d50  6aff                 push -1
// 004d2d52  683baf9800           push 0x98af3b
// 004d2d57  64a100000000         mov eax, dword ptr fs:[0]
// 004d2d5d  50                   push eax
// 004d2d5e  64892500000000       mov dword ptr fs:[0], esp
// 004d2d65  81ec0c020000         sub esp, 0x20c
// 004d2d6b  56                   push esi
// 004d2d6c  8d4c2404             lea ecx, [esp + 4]
// 004d2d70  e85bdc0200           call 0x5009d0
// 004d2d75  c74424041c99a100     mov dword ptr [esp + 4], 0xa1991c
// 004d2d7d  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 004d2d84  50                   push eax
// 004d2d85  8d4c2408             lea ecx, [esp + 8]
// 004d2d89  c784241c02000000000000 mov dword ptr [esp + 0x21c], 0
// 004d2d94  e897e40200           call 0x501230
// 004d2d99  8d4c2404             lea ecx, [esp + 4]
// 004d2d9d  8bf0                 mov esi, eax
// 004d2d9f  c7842418020000ffffffff mov dword ptr [esp + 0x218], 0xffffffff
// 004d2daa  e851dc0200           call 0x500a00
// 004d2daf  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 004d2db6  8bc6                 mov eax, esi
// 004d2db8  5e                   pop esi
// 004d2db9  64890d00000000       mov dword ptr fs:[0], ecx
// 004d2dc0  81c418020000         add esp, 0x218
// 004d2dc6  c3                   ret 
// library rbxgs-net/Client.cpp (function ?IDTOString@Exposer@@SAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
