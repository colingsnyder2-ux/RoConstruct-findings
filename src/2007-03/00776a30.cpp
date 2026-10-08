// roc 2007-03 00776a30  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a30
//
// 00776a30  6840c17700           push 0x77c140
// 00776a35  e87987eaff           call 0x61f1b3
// 00776a3a  59                   pop ecx
// 00776a3b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
