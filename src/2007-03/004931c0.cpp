// roc 2007-03 004931c0  unit: seg_00490000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004931c0
//
// 004931c0  8b442404             mov eax, dword ptr [esp + 4]
// 004931c4  6a00                 push 0
// 004931c6  6884e38800           push 0x88e384
// 004931cb  6864108800           push 0x881064
// 004931d0  6a00                 push 0
// 004931d2  50                   push eax
// 004931d3  e8eebf1800           call 0x61f1c6
// 004931d8  83c414               add esp, 0x14
// 004931db  f7d8                 neg eax
// 004931dd  1bc0                 sbb eax, eax
// 004931df  f7d8                 neg eax
// 004931e1  c20400               ret 4
// library rbxgs-net/Client.cpp (function ?askAddChild@Peer@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Client.cpp
