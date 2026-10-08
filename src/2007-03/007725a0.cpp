// roc 2007-03 007725a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007725a0
//
// 007725a0  6a0e                 push 0xe
// 007725a2  6820557900           push 0x795520
// 007725a7  e834b3dbff           call 0x52d8e0
// 007725ac  83c408               add esp, 8
// 007725af  a324c68b00           mov dword ptr [0x8bc624], eax
// 007725b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_name@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
