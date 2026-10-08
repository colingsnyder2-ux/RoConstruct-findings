// roc 2010-06 005f55a0  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f55a0
//
// 005f55a0  8b442404             mov eax, dword ptr [esp + 4]
// 005f55a4  6a00                 push 0
// 005f55a6  682c5bb800           push 0xb85b2c
// 005f55ab  68408eb700           push 0xb78e40
// 005f55b0  6a00                 push 0
// 005f55b2  50                   push eax
// 005f55b3  e832361b00           call 0x7a8bea
// 005f55b8  83c414               add esp, 0x14
// 005f55bb  f7d8                 neg eax
// 005f55bd  1bc0                 sbb eax, eax
// 005f55bf  f7d8                 neg eax
// 005f55c1  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
