// roc 2008-06 00495f30  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495f30
//
// 00495f30  8b442404             mov eax, dword ptr [esp + 4]
// 00495f34  6a00                 push 0
// 00495f36  6860749300           push 0x937460
// 00495f3b  687c909200           push 0x92907c
// 00495f40  6a00                 push 0
// 00495f42  50                   push eax
// 00495f43  e87eb82000           call 0x6a17c6
// 00495f48  83c414               add esp, 0x14
// 00495f4b  f7d8                 neg eax
// 00495f4d  1bc0                 sbb eax, eax
// 00495f4f  f7d8                 neg eax
// 00495f51  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
