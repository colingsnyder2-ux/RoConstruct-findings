// roc 2007-08 00777060  unit: seg_00770000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777060
//
// 00777060  68f0374600           push 0x4637f0
// 00777065  6840ff4c00           push 0x4cff40
// 0077706a  6a03                 push 3
// 0077706c  6a04                 push 4
// 0077706e  6808998c00           push 0x8c9908
// 00777073  e8649bebff           call 0x630bdc
// 00777078  6880cd7700           push 0x77cd80
// 0077707d  e8a19cebff           call 0x630d23
// 00777082  59                   pop ecx
// 00777083  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
