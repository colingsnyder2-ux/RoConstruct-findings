// roc 2009-06 004e3230  unit: RBX::Network::Replicator  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3230
//
// 004e3230  8b442404             mov eax, dword ptr [esp + 4]
// 004e3234  6a00                 push 0
// 004e3236  68bc3c9f00           push 0x9f3cbc
// 004e323b  6840be9d00           push 0x9dbe40
// 004e3240  6a00                 push 0
// 004e3242  50                   push eax
// 004e3243  e8326a2300           call 0x719c7a
// 004e3248  83c414               add esp, 0x14
// 004e324b  85c0                 test eax, eax
// 004e324d  0f94c0               sete al
// 004e3250  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?wantReplicate@Replicator@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
