// roc 2010-06 009c2bb0  unit: seg_009c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c2bb0
//
// 009c2bb0  51                   push ecx
// 009c2bb1  8d442403             lea eax, [esp + 3]
// 009c2bb5  50                   push eax
// 009c2bb6  8d4c2407             lea ecx, [esp + 7]
// 009c2bba  51                   push ecx
// 009c2bbb  b988fabf00           mov ecx, 0xbffa88
// 009c2bc0  e8fbc9d9ff           call 0x75f5c0
// 009c2bc5  6830a99d00           push 0x9da930
// 009c2bca  e8945edeff           call 0x7a8a63
// 009c2bcf  83c408               add esp, 8
// 009c2bd2  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
