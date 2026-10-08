// roc 2007-03 00495530  unit: seg_00490000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00495530
//
// 00495530  8b442404             mov eax, dword ptr [esp + 4]
// 00495534  6a00                 push 0
// 00495536  68b4e88800           push 0x88e8b4
// 0049553b  6864108800           push 0x881064
// 00495540  6a00                 push 0
// 00495542  50                   push eax
// 00495543  e87e9c1800           call 0x61f1c6
// 00495548  83c414               add esp, 0x14
// 0049554b  f7d8                 neg eax
// 0049554d  1bc0                 sbb eax, eax
// 0049554f  f7d8                 neg eax
// 00495551  c20400               ret 4
// library rbxgs-net/Server.cpp (function ?askAddChild@Server@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
