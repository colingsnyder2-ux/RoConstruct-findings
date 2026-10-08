// roc 2007-03 0077c230  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c230
//
// 0077c230  68c0594700           push 0x4759c0
// 0077c235  6a03                 push 3
// 0077c237  6a04                 push 4
// 0077c239  68c4298c00           push 0x8c29c4
// 0077c23e  e8422deaff           call 0x61ef85
// 0077c243  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
