// roc 2007-03 00777120  unit: seg_00770000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777120
//
// 00777120  68c0594700           push 0x4759c0
// 00777125  6860884b00           push 0x4b8860
// 0077712a  6a03                 push 3
// 0077712c  6a04                 push 4
// 0077712e  68c4298c00           push 0x8c29c4
// 00777133  e8347feaff           call 0x61f06c
// 00777138  6830c27700           push 0x77c230
// 0077713d  e87180eaff           call 0x61f1b3
// 00777142  59                   pop ecx
// 00777143  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
