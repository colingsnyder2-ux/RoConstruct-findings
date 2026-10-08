// roc 2007-08 0077cd80  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd80
//
// 0077cd80  68f0374600           push 0x4637f0
// 0077cd85  6a03                 push 3
// 0077cd87  6a04                 push 4
// 0077cd89  6808998c00           push 0x8c9908
// 0077cd8e  e8643debff           call 0x630af7
// 0077cd93  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
