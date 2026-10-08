// roc 2007-08 004993d0  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004993d0
//
// 004993d0  8b442404             mov eax, dword ptr [esp + 4]
// 004993d4  6a00                 push 0
// 004993d6  684cf88800           push 0x88f84c
// 004993db  684c1f8800           push 0x881f4c
// 004993e0  6a00                 push 0
// 004993e2  50                   push eax
// 004993e3  e84e791900           call 0x630d36
// 004993e8  83c414               add esp, 0x14
// 004993eb  f7d8                 neg eax
// 004993ed  1bc0                 sbb eax, eax
// 004993ef  f7d8                 neg eax
// 004993f1  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
