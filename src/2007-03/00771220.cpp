// roc 2007-03 00771220  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771220
//
// 00771220  6880907700           push 0x779080
// 00771225  e889dfeaff           call 0x61f1b3
// 0077122a  59                   pop ecx
// 0077122b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
