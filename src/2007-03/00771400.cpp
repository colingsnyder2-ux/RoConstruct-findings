// roc 2007-03 00771400  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771400
//
// 00771400  68f0927700           push 0x7792f0
// 00771405  e8a9ddeaff           call 0x61f1b3
// 0077140a  59                   pop ecx
// 0077140b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
