// roc 2009-12 009747e0  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009747e0
//
// 009747e0  b9c022b900           mov ecx, 0xb922c0
// 009747e5  ff15e8b69800         call dword ptr [0x98b6e8]
// 009747eb  68a0599800           push 0x9859a0
// 009747f0  e83401e8ff           call 0x7f4929
// 009747f5  59                   pop ecx
// 009747f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
