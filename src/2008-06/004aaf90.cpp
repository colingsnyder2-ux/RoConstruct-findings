// roc 2008-06 004aaf90  unit: RBX::Network::Server::ClientProxy  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aaf90
//
// 004aaf90  8b442404             mov eax, dword ptr [esp + 4]
// 004aaf94  6a00                 push 0
// 004aaf96  6854ab9300           push 0x93ab54
// 004aaf9b  687c909200           push 0x92907c
// 004aafa0  6a00                 push 0
// 004aafa2  50                   push eax
// 004aafa3  e81e681f00           call 0x6a17c6
// 004aafa8  83c414               add esp, 0x14
// 004aafab  85c0                 test eax, eax
// 004aafad  0f94c0               sete al
// 004aafb0  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?wantReplicate@Replicator@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
