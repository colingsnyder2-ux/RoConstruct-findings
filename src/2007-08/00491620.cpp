// roc 2007-08 00491620  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491620
//
// 00491620  8b442404             mov eax, dword ptr [esp + 4]
// 00491624  6a00                 push 0
// 00491626  68c8e18800           push 0x88e1c8
// 0049162b  684c1f8800           push 0x881f4c
// 00491630  6a00                 push 0
// 00491632  50                   push eax
// 00491633  e8fef61900           call 0x630d36
// 00491638  83c414               add esp, 0x14
// 0049163b  f7d8                 neg eax
// 0049163d  1bc0                 sbb eax, eax
// 0049163f  f7d8                 neg eax
// 00491641  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
