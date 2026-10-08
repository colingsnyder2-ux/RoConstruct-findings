// roc 2007-08 0049d130  unit: RBX::Network::Server  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d130
//
// 0049d130  8b442404             mov eax, dword ptr [esp + 4]
// 0049d134  6a00                 push 0
// 0049d136  6804038900           push 0x890304
// 0049d13b  684c1f8800           push 0x881f4c
// 0049d140  6a00                 push 0
// 0049d142  50                   push eax
// 0049d143  e8ee3b1900           call 0x630d36
// 0049d148  83c414               add esp, 0x14
// 0049d14b  f7d8                 neg eax
// 0049d14d  1bc0                 sbb eax, eax
// 0049d14f  f7d8                 neg eax
// 0049d151  c20400               ret 4
// library rbxgs-net/Server.cpp (function ?askAddChild@Server@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
