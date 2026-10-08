// roc 2009-06 008840f0  unit: seg_00880000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008840f0
//
// 008840f0  51                   push ecx
// 008840f1  8d442403             lea eax, [esp + 3]
// 008840f5  50                   push eax
// 008840f6  8d4c2407             lea ecx, [esp + 7]
// 008840fa  51                   push ecx
// 008840fb  b9f096a300           mov ecx, 0xa396f0
// 00884100  e83bb1dfff           call 0x67f240
// 00884105  68103a8900           push 0x893a10
// 0088410a  e8ec59e9ff           call 0x719afb
// 0088410f  83c408               add esp, 8
// 00884112  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
