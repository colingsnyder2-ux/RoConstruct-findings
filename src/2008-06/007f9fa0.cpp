// roc 2008-06 007f9fa0  unit: seg_007f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9fa0
//
// 007f9fa0  68702a5000           push 0x502a70
// 007f9fa5  6810084f00           push 0x4f0810
// 007f9faa  6a03                 push 3
// 007f9fac  6a04                 push 4
// 007f9fae  68dcf39700           push 0x97f3dc
// 007f9fb3  e8e075eaff           call 0x6a1598
// 007f9fb8  68d0198000           push 0x8019d0
// 007f9fbd  e8ed77eaff           call 0x6a17af
// 007f9fc2  59                   pop ecx
// 007f9fc3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
