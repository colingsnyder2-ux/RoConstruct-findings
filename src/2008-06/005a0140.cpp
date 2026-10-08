// roc 2008-06 005a0140  unit: RBX::ArrowTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0140
//
// 005a0140  8b01                 mov eax, dword ptr [ecx]
// 005a0142  8b5028               mov edx, dword ptr [eax + 0x28]
// 005a0145  ffd2                 call edx
// 005a0147  33c0                 xor eax, eax
// 005a0149  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ?onMouseUp@MouseCommand@RBX@@MAEPAV12@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
