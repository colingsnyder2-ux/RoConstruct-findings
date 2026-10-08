// roc 2007-03 0076e580  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e580
//
// 0076e580  b9bc638b00           mov ecx, 0x8b63bc
// 0076e585  ff1568dd7700         call dword ptr [0x77dd68]
// 0076e58b  68407d7700           push 0x777d40
// 0076e590  e81e0cebff           call 0x61f1b3
// 0076e595  59                   pop ecx
// 0076e596  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
