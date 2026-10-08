// roc 2009-06 00627090  unit: RBX::ToolMouseCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627090
//
// 00627090  80791400             cmp byte ptr [ecx + 0x14], 0
// 00627094  7407                 je 0x62709d
// 00627096  8b01                 mov eax, dword ptr [ecx]
// 00627098  8b5028               mov edx, dword ptr [eax + 0x28]
// 0062709b  ffe2                 jmp edx
// 0062709d  c3                   ret 
// library rbxgs/tool\GroupDragTool.cpp (function ?cancel@MouseCommand@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
