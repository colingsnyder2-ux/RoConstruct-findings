// roc 2007-03 0048b5a0  unit: seg_00480000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048b5a0
//
// 0048b5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0048b5a4  6a00                 push 0
// 0048b5a6  68f0cd8800           push 0x88cdf0
// 0048b5ab  6864108800           push 0x881064
// 0048b5b0  6a00                 push 0
// 0048b5b2  50                   push eax
// 0048b5b3  e80e3c1900           call 0x61f1c6
// 0048b5b8  83c414               add esp, 0x14
// 0048b5bb  f7d8                 neg eax
// 0048b5bd  1bc0                 sbb eax, eax
// 0048b5bf  f7d8                 neg eax
// 0048b5c1  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?askAddChild@Players@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
