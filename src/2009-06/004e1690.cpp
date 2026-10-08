// roc 2009-06 004e1690  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1690
//
// 004e1690  8b442404             mov eax, dword ptr [esp + 4]
// 004e1694  6a00                 push 0
// 004e1696  680c259f00           push 0x9f250c
// 004e169b  6840be9d00           push 0x9dbe40
// 004e16a0  6a00                 push 0
// 004e16a2  50                   push eax
// 004e16a3  e8d2852300           call 0x719c7a
// 004e16a8  83c414               add esp, 0x14
// 004e16ab  f7d8                 neg eax
// 004e16ad  1bc0                 sbb eax, eax
// 004e16af  f7d8                 neg eax
// 004e16b1  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
