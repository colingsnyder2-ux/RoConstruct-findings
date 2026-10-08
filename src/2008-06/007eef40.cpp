// roc 2008-06 007eef40  unit: seg_007e0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eef40
//
// 007eef40  51                   push ecx
// 007eef41  8d442403             lea eax, [esp + 3]
// 007eef45  50                   push eax
// 007eef46  8d4c2407             lea ecx, [esp + 7]
// 007eef4a  51                   push ecx
// 007eef4b  b9c4ce9600           mov ecx, 0x96cec4
// 007eef50  e8bb71c5ff           call 0x446110
// 007eef55  6840a67f00           push 0x7fa640
// 007eef5a  e85028ebff           call 0x6a17af
// 007eef5f  83c408               add esp, 8
// 007eef62  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
