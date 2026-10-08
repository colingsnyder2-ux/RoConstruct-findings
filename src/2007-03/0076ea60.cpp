// roc 2007-03 0076ea60  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ea60
//
// 0076ea60  68807f7700           push 0x777f80
// 0076ea65  e84907ebff           call 0x61f1b3
// 0076ea6a  59                   pop ecx
// 0076ea6b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
