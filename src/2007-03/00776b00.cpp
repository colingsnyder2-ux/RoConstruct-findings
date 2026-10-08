// roc 2007-03 00776b00  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776b00
//
// 00776b00  6880c17700           push 0x77c180
// 00776b05  e8a986eaff           call 0x61f1b3
// 00776b0a  59                   pop ecx
// 00776b0b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
