// roc 2008-06 005a04a0  unit: RBX::ArrowTool  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a04a0
//
// 005a04a0  80791400             cmp byte ptr [ecx + 0x14], 0
// 005a04a4  7407                 je 0x5a04ad
// 005a04a6  8b01                 mov eax, dword ptr [ecx]
// 005a04a8  8b5028               mov edx, dword ptr [eax + 0x28]
// 005a04ab  ffe2                 jmp edx
// 005a04ad  c3                   ret 
// library rbxgs/tool\GroupDragTool.cpp (function ?cancel@MouseCommand@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
