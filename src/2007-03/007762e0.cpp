// roc 2007-03 007762e0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007762e0
//
// 007762e0  6830c07700           push 0x77c030
// 007762e5  e8c98eeaff           call 0x61f1b3
// 007762ea  59                   pop ecx
// 007762eb  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
