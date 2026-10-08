// roc 2008-06 004a3640  unit: RBX::Network::Server  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3640
//
// 004a3640  8b442404             mov eax, dword ptr [esp + 4]
// 004a3644  6a00                 push 0
// 004a3646  68dc989300           push 0x9398dc
// 004a364b  687c909200           push 0x92907c
// 004a3650  6a00                 push 0
// 004a3652  50                   push eax
// 004a3653  e86ee11f00           call 0x6a17c6
// 004a3658  83c414               add esp, 0x14
// 004a365b  f7d8                 neg eax
// 004a365d  1bc0                 sbb eax, eax
// 004a365f  f7d8                 neg eax
// 004a3661  c20400               ret 4
// library rbxgs-net/Server.cpp (function ?askAddChild@Server@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
