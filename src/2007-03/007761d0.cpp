// roc 2007-03 007761d0  unit: seg_00770000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007761d0
//
// 007761d0  680000a000           push 0xa00000
// 007761d5  b95c138c00           mov ecx, 0x8c135c
// 007761da  e8a1a4fbff           call 0x730680
// 007761df  68f0bf7700           push 0x77bff0
// 007761e4  e8ca8feaff           call 0x61f1b3
// 007761e9  59                   pop ecx
// 007761ea  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__Eevent_Closing@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
