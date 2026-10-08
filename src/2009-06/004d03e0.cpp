// roc 2009-06 004d03e0  unit: RBX::Network::VClient::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d03e0
//
// 004d03e0  6aff                 push -1
// 004d03e2  68fbac8500           push 0x85acfb
// 004d03e7  64a100000000         mov eax, dword ptr fs:[0]
// 004d03ed  50                   push eax
// 004d03ee  64892500000000       mov dword ptr fs:[0], esp
// 004d03f5  81ec0c020000         sub esp, 0x20c
// 004d03fb  56                   push esi
// 004d03fc  8d4c2404             lea ecx, [esp + 4]
// 004d0400  e8cb3d0200           call 0x4f41d0
// 004d0405  c744240474558c00     mov dword ptr [esp + 4], 0x8c5574
// 004d040d  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 004d0414  50                   push eax
// 004d0415  8d4c2408             lea ecx, [esp + 8]
// 004d0419  c784241c02000000000000 mov dword ptr [esp + 0x21c], 0
// 004d0424  e807460200           call 0x4f4a30
// 004d0429  8d4c2404             lea ecx, [esp + 4]
// 004d042d  8bf0                 mov esi, eax
// 004d042f  c7842418020000ffffffff mov dword ptr [esp + 0x218], 0xffffffff
// 004d043a  e8c13d0200           call 0x4f4200
// 004d043f  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 004d0446  8bc6                 mov eax, esi
// 004d0448  5e                   pop esi
// 004d0449  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0450  81c418020000         add esp, 0x218
// 004d0456  c3                   ret 
// library rbxgs-net/Client.cpp (function ?IDTOString@Exposer@@SAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
