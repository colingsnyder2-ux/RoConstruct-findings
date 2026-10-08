// roc 2011-06 0050ce00  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050ce00
//
// 0050ce00  8b442404             mov eax, dword ptr [esp + 4]
// 0050ce04  6a00                 push 0
// 0050ce06  68a45cc200           push 0xc25ca4
// 0050ce0b  68f871c000           push 0xc071f8
// 0050ce10  6a00                 push 0
// 0050ce12  50                   push eax
// 0050ce13  e8d2e42f00           call 0x80b2ea
// 0050ce18  83c414               add esp, 0x14
// 0050ce1b  f7d8                 neg eax
// 0050ce1d  1bc0                 sbb eax, eax
// 0050ce1f  f7d8                 neg eax
// 0050ce21  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
