// roc 2009-12 009692c0  unit: seg_00960000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009692c0
//
// 009692c0  b9e8b3b700           mov ecx, 0xb7b3e8
// 009692c5  ff1574de9800         call dword ptr [0x98de74]
// 009692cb  6820e69700           push 0x97e620
// 009692d0  e854b6e8ff           call 0x7f4929
// 009692d5  59                   pop ecx
// 009692d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
