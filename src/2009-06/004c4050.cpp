// roc 2009-06 004c4050  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4050
//
// 004c4050  8b442404             mov eax, dword ptr [esp + 4]
// 004c4054  6a00                 push 0
// 004c4056  6820ed9e00           push 0x9eed20
// 004c405b  6840be9d00           push 0x9dbe40
// 004c4060  6a00                 push 0
// 004c4062  50                   push eax
// 004c4063  e8125c2500           call 0x719c7a
// 004c4068  83c414               add esp, 0x14
// 004c406b  f7d8                 neg eax
// 004c406d  1bc0                 sbb eax, eax
// 004c406f  f7d8                 neg eax
// 004c4071  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
