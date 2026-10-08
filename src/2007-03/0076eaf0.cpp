// roc 2007-03 0076eaf0  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eaf0
//
// 0076eaf0  6830807700           push 0x778030
// 0076eaf5  e8b906ebff           call 0x61f1b3
// 0076eafa  59                   pop ecx
// 0076eafb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
