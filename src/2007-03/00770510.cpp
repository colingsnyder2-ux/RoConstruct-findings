// roc 2007-03 00770510  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770510
//
// 00770510  b9f08a8b00           mov ecx, 0x8b8af0
// 00770515  ff1584e77700         call dword ptr [0x77e784]
// 0077051b  68f0867700           push 0x7786f0
// 00770520  e88eeceaff           call 0x61f1b3
// 00770525  59                   pop ecx
// 00770526  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
