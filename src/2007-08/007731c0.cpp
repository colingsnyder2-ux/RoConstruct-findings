// roc 2007-08 007731c0  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007731c0
//
// 007731c0  33c9                 xor ecx, ecx
// 007731c2  51                   push ecx
// 007731c3  6880797800           push 0x787980
// 007731c8  6874027b00           push 0x7b0274
// 007731cd  51                   push ecx
// 007731ce  b8001f5900           mov eax, 0x591f00
// 007731d3  50                   push eax
// 007731d4  b9404c8c00           mov ecx, 0x8c4c40
// 007731d9  e8d2f7e1ff           call 0x5929b0
// 007731de  68a0ae7700           push 0x77aea0
// 007731e3  e83bdbebff           call 0x630d23
// 007731e8  59                   pop ecx
// 007731e9  c3                   ret 
// library rbxgs/v8datamodel\Visit.cpp (function ??__EUploadUrlFunction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Visit.cpp
