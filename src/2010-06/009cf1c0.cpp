// roc 2010-06 009cf1c0  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cf1c0
//
// 009cf1c0  b9009ec100           mov ecx, 0xc19e00
// 009cf1c5  ff1504a49e00         call dword ptr [0x9ea404]
// 009cf1cb  68102d9e00           push 0x9e2d10
// 009cf1d0  e88e98ddff           call 0x7a8a63
// 009cf1d5  59                   pop ecx
// 009cf1d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
