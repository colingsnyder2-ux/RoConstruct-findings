// roc 2007-03 00770c40  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770c40
//
// 00770c40  68c08b7700           push 0x778bc0
// 00770c45  e869e5eaff           call 0x61f1b3
// 00770c4a  59                   pop ecx
// 00770c4b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
