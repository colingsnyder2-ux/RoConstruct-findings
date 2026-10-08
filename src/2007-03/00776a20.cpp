// roc 2007-03 00776a20  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a20
//
// 00776a20  6820c17700           push 0x77c120
// 00776a25  e88987eaff           call 0x61f1b3
// 00776a2a  59                   pop ecx
// 00776a2b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
