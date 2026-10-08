// roc 2007-03 0076eb00  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eb00
//
// 0076eb00  b9a8778b00           mov ecx, 0x8b77a8
// 0076eb05  ff1584e77700         call dword ptr [0x77e784]
// 0076eb0b  6840807700           push 0x778040
// 0076eb10  e89e06ebff           call 0x61f1b3
// 0076eb15  59                   pop ecx
// 0076eb16  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
