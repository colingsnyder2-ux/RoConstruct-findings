// roc 2010-06 004fe7d0  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe7d0
//
// 004fe7d0  8b442404             mov eax, dword ptr [esp + 4]
// 004fe7d4  6a00                 push 0
// 004fe7d6  68ac0cb900           push 0xb90cac
// 004fe7db  68408eb700           push 0xb78e40
// 004fe7e0  6a00                 push 0
// 004fe7e2  50                   push eax
// 004fe7e3  e802a42a00           call 0x7a8bea
// 004fe7e8  83c414               add esp, 0x14
// 004fe7eb  f7d8                 neg eax
// 004fe7ed  1bc0                 sbb eax, eax
// 004fe7ef  f7d8                 neg eax
// 004fe7f1  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
