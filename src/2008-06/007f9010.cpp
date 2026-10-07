// roc 2008-06 007f9010  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9010
//
// 007f9010  b9c8da9700           mov ecx, 0x97dac8
// 007f9015  ff15904c8000         call dword ptr [0x804c90]
// 007f901b  6880148000           push 0x801480
// 007f9020  e88a87eaff           call 0x6a17af
// 007f9025  59                   pop ecx
// 007f9026  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
