// roc 2009-12 005251a0  unit: RBX::Network::VClient::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005251a0
//
// 005251a0  6aff                 push -1
// 005251a2  68cb899300           push 0x9389cb
// 005251a7  64a100000000         mov eax, dword ptr fs:[0]
// 005251ad  50                   push eax
// 005251ae  64892500000000       mov dword ptr fs:[0], esp
// 005251b5  81ec0c020000         sub esp, 0x20c
// 005251bb  56                   push esi
// 005251bc  8d4c2404             lea ecx, [esp + 4]
// 005251c0  e81bcf0200           call 0x5520e0
// 005251c5  c7442404f4ba9b00     mov dword ptr [esp + 4], 0x9bbaf4
// 005251cd  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 005251d4  50                   push eax
// 005251d5  8d4c2408             lea ecx, [esp + 8]
// 005251d9  c784241c02000000000000 mov dword ptr [esp + 0x21c], 0
// 005251e4  e857d70200           call 0x552940
// 005251e9  8d4c2404             lea ecx, [esp + 4]
// 005251ed  8bf0                 mov esi, eax
// 005251ef  c7842418020000ffffffff mov dword ptr [esp + 0x218], 0xffffffff
// 005251fa  e811cf0200           call 0x552110
// 005251ff  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 00525206  8bc6                 mov eax, esi
// 00525208  5e                   pop esi
// 00525209  64890d00000000       mov dword ptr fs:[0], ecx
// 00525210  81c418020000         add esp, 0x218
// 00525216  c3                   ret 
// library rbxgs-net/Client.cpp (function ?IDTOString@Exposer@@SAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
