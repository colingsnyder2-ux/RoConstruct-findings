// roc 2008-06 007ef220  unit: seg_007e0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef220
//
// 007ef220  51                   push ecx
// 007ef221  8d442403             lea eax, [esp + 3]
// 007ef225  50                   push eax
// 007ef226  8d4c2407             lea ecx, [esp + 7]
// 007ef22a  51                   push ecx
// 007ef22b  b95cd19600           mov ecx, 0x96d15c
// 007ef230  e8db6ec5ff           call 0x446110
// 007ef235  68d0a97f00           push 0x7fa9d0
// 007ef23a  e87025ebff           call 0x6a17af
// 007ef23f  83c408               add esp, 8
// 007ef242  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
