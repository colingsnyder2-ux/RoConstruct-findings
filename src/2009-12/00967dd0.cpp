// roc 2009-12 00967dd0  unit: seg_00960000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967dd0
//
// 00967dd0  51                   push ecx
// 00967dd1  8d442403             lea eax, [esp + 3]
// 00967dd5  50                   push eax
// 00967dd6  8d4c2407             lea ecx, [esp + 7]
// 00967dda  51                   push ecx
// 00967ddb  b9d894b700           mov ecx, 0xb794d8
// 00967de0  e8aba6a9ff           call 0x402490
// 00967de5  6810d79700           push 0x97d710
// 00967dea  e83acbe8ff           call 0x7f4929
// 00967def  83c408               add esp, 8
// 00967df2  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
