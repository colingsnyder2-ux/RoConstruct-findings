// roc 2009-12 00512820  unit: RBX::Network::Players  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00512820
//
// 00512820  8b442404             mov eax, dword ptr [esp + 4]
// 00512824  6a00                 push 0
// 00512826  6840c0b000           push 0xb0c040
// 0051282b  6840feaf00           push 0xaffe40
// 00512830  6a00                 push 0
// 00512832  50                   push eax
// 00512833  e872222e00           call 0x7f4aaa
// 00512838  83c414               add esp, 0x14
// 0051283b  f7d8                 neg eax
// 0051283d  1bc0                 sbb eax, eax
// 0051283f  f7d8                 neg eax
// 00512841  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
