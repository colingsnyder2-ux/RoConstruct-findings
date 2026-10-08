// roc 2007-03 00771210  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771210
//
// 00771210  6860907700           push 0x779060
// 00771215  e899dfeaff           call 0x61f1b3
// 0077121a  59                   pop ecx
// 0077121b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
