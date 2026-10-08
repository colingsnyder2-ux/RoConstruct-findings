// roc 2008-06 007f8c10  unit: seg_007f0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8c10
//
// 007f8c10  51                   push ecx
// 007f8c11  8d442403             lea eax, [esp + 3]
// 007f8c15  50                   push eax
// 007f8c16  8d4c2407             lea ecx, [esp + 7]
// 007f8c1a  51                   push ecx
// 007f8c1b  b9ecd59700           mov ecx, 0x97d5ec
// 007f8c20  e80b04e5ff           call 0x649030
// 007f8c25  68b0108000           push 0x8010b0
// 007f8c2a  e8808beaff           call 0x6a17af
// 007f8c2f  83c408               add esp, 8
// 007f8c32  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
