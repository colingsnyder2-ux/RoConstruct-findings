// roc 2007-03 00776900  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776900
//
// 00776900  6890c07700           push 0x77c090
// 00776905  e8a988eaff           call 0x61f1b3
// 0077690a  59                   pop ecx
// 0077690b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
