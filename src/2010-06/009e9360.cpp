// roc 2010-06 009e9360  unit: seg_009e0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9360
//
// 009e9360  68f0ca5200           push 0x52caf0
// 009e9365  6a03                 push 3
// 009e9367  6a04                 push 4
// 009e9369  68f4cbc200           push 0xc2cbf4
// 009e936e  e86bf7dbff           call 0x7a8ade
// 009e9373  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
