// roc 2008-06 007ee720  unit: seg_007e0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee720
//
// 007ee720  51                   push ecx
// 007ee721  8d442403             lea eax, [esp + 3]
// 007ee725  50                   push eax
// 007ee726  8d4c2407             lea ecx, [esp + 7]
// 007ee72a  51                   push ecx
// 007ee72b  b93cc29600           mov ecx, 0x96c23c
// 007ee730  e86bcbe5ff           call 0x64b2a0
// 007ee735  6890a07f00           push 0x7fa090
// 007ee73a  e87030ebff           call 0x6a17af
// 007ee73f  83c408               add esp, 8
// 007ee742  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
