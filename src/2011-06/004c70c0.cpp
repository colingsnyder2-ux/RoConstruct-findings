// roc 2011-06 004c70c0  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c70c0
//
// 004c70c0  8b442404             mov eax, dword ptr [esp + 4]
// 004c70c4  6a00                 push 0
// 004c70c6  6870a9c100           push 0xc1a970
// 004c70cb  68f871c000           push 0xc071f8
// 004c70d0  6a00                 push 0
// 004c70d2  50                   push eax
// 004c70d3  e812423400           call 0x80b2ea
// 004c70d8  83c414               add esp, 0x14
// 004c70db  f7d8                 neg eax
// 004c70dd  1bc0                 sbb eax, eax
// 004c70df  f7d8                 neg eax
// 004c70e1  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
