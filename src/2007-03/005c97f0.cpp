// roc 2007-03 005c97f0  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c97f0
//
// 005c97f0  8b01                 mov eax, dword ptr [ecx]
// 005c97f2  8b4008               mov eax, dword ptr [eax + 8]
// 005c97f5  ffe0                 jmp eax
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseHover@ArrowToolBase@RBX@@MAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
