// roc 2008-06 0049f180  unit: RBX::Network::Client  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f180
//
// 0049f180  6aff                 push -1
// 0049f182  683b777c00           push 0x7c773b
// 0049f187  64a100000000         mov eax, dword ptr fs:[0]
// 0049f18d  50                   push eax
// 0049f18e  64892500000000       mov dword ptr fs:[0], esp
// 0049f195  81ec0c020000         sub esp, 0x20c
// 0049f19b  56                   push esi
// 0049f19c  8d4c2404             lea ecx, [esp + 4]
// 0049f1a0  e86bb80100           call 0x4baa10
// 0049f1a5  c74424043c2d8200     mov dword ptr [esp + 4], 0x822d3c
// 0049f1ad  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 0049f1b4  50                   push eax
// 0049f1b5  8d4c2408             lea ecx, [esp + 8]
// 0049f1b9  c784241c02000000000000 mov dword ptr [esp + 0x21c], 0
// 0049f1c4  e8f7bb0100           call 0x4badc0
// 0049f1c9  8d4c2404             lea ecx, [esp + 4]
// 0049f1cd  8bf0                 mov esi, eax
// 0049f1cf  c7842418020000ffffffff mov dword ptr [esp + 0x218], 0xffffffff
// 0049f1da  e861b80100           call 0x4baa40
// 0049f1df  8b8c2410020000       mov ecx, dword ptr [esp + 0x210]
// 0049f1e6  8bc6                 mov eax, esi
// 0049f1e8  5e                   pop esi
// 0049f1e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f1f0  81c418020000         add esp, 0x218
// 0049f1f6  c3                   ret 
// library rbxgs-net/Client.cpp (function ?IDTOString@Exposer@@SAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
