// roc 2008-06 007f3840  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3840
//
// 007f3840  6a05                 push 5
// 007f3842  6800058300           push 0x830500
// 007f3847  e84407d6ff           call 0x553f90
// 007f384c  83c408               add esp, 8
// 007f384f  a3fc529700           mov dword ptr [0x9752fc], eax
// 007f3854  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_xmlnsxsi@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
