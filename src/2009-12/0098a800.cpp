// roc 2009-12 0098a800  unit: seg_00980000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a800
//
// 0098a800  6820cc5c00           push 0x5ccc20
// 0098a805  6a03                 push 3
// 0098a807  6a04                 push 4
// 0098a809  68a41cba00           push 0xba1ca4
// 0098a80e  e891a1e6ff           call 0x7f49a4
// 0098a813  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
