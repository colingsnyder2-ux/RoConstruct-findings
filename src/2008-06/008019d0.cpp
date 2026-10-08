// roc 2008-06 008019d0  unit: seg_00800000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008019d0
//
// 008019d0  68702a5000           push 0x502a70
// 008019d5  6a03                 push 3
// 008019d7  6a04                 push 4
// 008019d9  68dcf39700           push 0x97f3dc
// 008019de  e878fce9ff           call 0x6a165b
// 008019e3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__F?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
