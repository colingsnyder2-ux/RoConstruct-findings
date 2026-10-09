// roc 2009-12 0097d3a0  unit: seg_00970000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d3a0
//
// 0097d3a0  6820cc5c00           push 0x5ccc20
// 0097d3a5  6800bf4c00           push 0x4cbf00
// 0097d3aa  6a03                 push 3
// 0097d3ac  6a04                 push 4
// 0097d3ae  68a41cba00           push 0xba1ca4
// 0097d3b3  e8f876e7ff           call 0x7f4ab0
// 0097d3b8  6800a89800           push 0x98a800
// 0097d3bd  e86775e7ff           call 0x7f4929
// 0097d3c2  59                   pop ecx
// 0097d3c3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
