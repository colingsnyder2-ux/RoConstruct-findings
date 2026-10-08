// roc 2008-06 0049ee20  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ee20
//
// 0049ee20  8b442404             mov eax, dword ptr [esp + 4]
// 0049ee24  6a00                 push 0
// 0049ee26  68b48d9300           push 0x938db4
// 0049ee2b  687c909200           push 0x92907c
// 0049ee30  6a00                 push 0
// 0049ee32  50                   push eax
// 0049ee33  e88e292000           call 0x6a17c6
// 0049ee38  83c414               add esp, 0x14
// 0049ee3b  f7d8                 neg eax
// 0049ee3d  1bc0                 sbb eax, eax
// 0049ee3f  f7d8                 neg eax
// 0049ee41  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
