// roc 2008-06 007f38a0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f38a0
//
// 007f38a0  6a09                 push 9
// 007f38a2  6820058300           push 0x830520
// 007f38a7  e8e406d6ff           call 0x553f90
// 007f38ac  83c408               add esp, 8
// 007f38af  a374539700           mov dword ptr [0x975374], eax
// 007f38b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_roblox@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
