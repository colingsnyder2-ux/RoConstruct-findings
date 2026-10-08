// roc 2009-06 0062ad90  unit: RBX::ArrowTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ad90
//
// 0062ad90  8b01                 mov eax, dword ptr [ecx]
// 0062ad92  8b5028               mov edx, dword ptr [eax + 0x28]
// 0062ad95  ffd2                 call edx
// 0062ad97  33c0                 xor eax, eax
// 0062ad99  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ?onMouseUp@MouseCommand@RBX@@MAEPAV12@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
