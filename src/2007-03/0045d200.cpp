// roc 2007-03 0045d200  unit: seg_00450000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045d200
//
// 0045d200  8d81f0000000         lea eax, [ecx + 0xf0]
// 0045d206  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?getGCamera@Camera@RBX@@QBEABVGCamera@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
