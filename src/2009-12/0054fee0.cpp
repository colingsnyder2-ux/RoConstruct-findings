// roc 2009-12 0054fee0  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054fee0
//
// 0054fee0  8b442404             mov eax, dword ptr [esp + 4]
// 0054fee4  6a00                 push 0
// 0054fee6  680cc0b100           push 0xb1c00c
// 0054feeb  6840feaf00           push 0xaffe40
// 0054fef0  6a00                 push 0
// 0054fef2  50                   push eax
// 0054fef3  e8b24b2a00           call 0x7f4aaa
// 0054fef8  83c414               add esp, 0x14
// 0054fefb  f7d8                 neg eax
// 0054fefd  1bc0                 sbb eax, eax
// 0054feff  f7d8                 neg eax
// 0054ff01  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
