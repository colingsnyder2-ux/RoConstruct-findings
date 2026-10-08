// roc 2007-03 0076fc20  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fc20
//
// 0076fc20  6870807700           push 0x778070
// 0076fc25  e889f5eaff           call 0x61f1b3
// 0076fc2a  59                   pop ecx
// 0076fc2b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
