// roc 2009-06 0089d6a0  unit: seg_00890000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d6a0
//
// 0089d6a0  6860d14900           push 0x49d160
// 0089d6a5  6a03                 push 3
// 0089d6a7  6a04                 push 4
// 0089d6a9  684c89a500           push 0xa5894c
// 0089d6ae  e8c3c4e7ff           call 0x719b76
// 0089d6b3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
