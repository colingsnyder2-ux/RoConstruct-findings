// roc 2007-03 0076e5e0  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e5e0
//
// 0076e5e0  68f07d7700           push 0x777df0
// 0076e5e5  e8c90bebff           call 0x61f1b3
// 0076e5ea  59                   pop ecx
// 0076e5eb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
