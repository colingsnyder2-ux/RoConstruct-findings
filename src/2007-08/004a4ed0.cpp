// roc 2007-08 004a4ed0  unit: RBX::Network::Server::ClientProxy  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4ed0
//
// 004a4ed0  8b442404             mov eax, dword ptr [esp + 4]
// 004a4ed4  6a00                 push 0
// 004a4ed6  68200f8900           push 0x890f20
// 004a4edb  684c1f8800           push 0x881f4c
// 004a4ee0  6a00                 push 0
// 004a4ee2  50                   push eax
// 004a4ee3  e84ebe1800           call 0x630d36
// 004a4ee8  83c414               add esp, 0x14
// 004a4eeb  85c0                 test eax, eax
// 004a4eed  0f94c0               sete al
// 004a4ef0  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?wantReplicate@Replicator@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
