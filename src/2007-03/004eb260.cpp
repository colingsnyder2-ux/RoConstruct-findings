// roc 2007-03 004eb260  unit: seg_004e0000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb260
//
// 004eb260  b801000000           mov eax, 1
// 004eb265  8405c4a08b00         test byte ptr [0x8ba0c4], al
// 004eb26b  751c                 jne 0x4eb289
// 004eb26d  d9ee                 fldz 
// 004eb26f  0905c4a08b00         or dword ptr [0x8ba0c4], eax
// 004eb275  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 004eb27b  d9e8                 fld1 
// 004eb27d  d91dbca08b00         fstp dword ptr [0x8ba0bc]
// 004eb283  d91dc0a08b00         fstp dword ptr [0x8ba0c0]
// 004eb289  b8b8a08b00           mov eax, 0x8ba0b8
// 004eb28e  c3                   ret 
// library rbxgs/tool\GroupDragTool.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp
