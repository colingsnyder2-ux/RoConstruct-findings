// roc 2007-03 005007a0  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005007a0
//
// 005007a0  b801000000           mov eax, 1
// 005007a5  8405bcaf8b00         test byte ptr [0x8bafbc], al
// 005007ab  751c                 jne 0x5007c9
// 005007ad  d9ee                 fldz 
// 005007af  0905bcaf8b00         or dword ptr [0x8bafbc], eax
// 005007b5  d915b0af8b00         fst dword ptr [0x8bafb0]
// 005007bb  d9e8                 fld1 
// 005007bd  d91db4af8b00         fstp dword ptr [0x8bafb4]
// 005007c3  d91db8af8b00         fstp dword ptr [0x8bafb8]
// 005007c9  b8b0af8b00           mov eax, 0x8bafb0
// 005007ce  c3                   ret 
// library rbxgs/tool\GroupDragTool.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
