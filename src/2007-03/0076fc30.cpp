// roc 2007-03 0076fc30  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fc30
//
// 0076fc30  6880807700           push 0x778080
// 0076fc35  e879f5eaff           call 0x61f1b3
// 0076fc3a  59                   pop ecx
// 0076fc3b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
