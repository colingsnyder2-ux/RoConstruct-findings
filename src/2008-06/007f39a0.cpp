// roc 2008-06 007f39a0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f39a0
//
// 007f39a0  6a18                 push 0x18
// 007f39a2  6848058300           push 0x830548
// 007f39a7  e8e405d6ff           call 0x553f90
// 007f39ac  83c408               add esp, 8
// 007f39af  a380539700           mov dword ptr [0x975380], eax
// 007f39b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Y@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
