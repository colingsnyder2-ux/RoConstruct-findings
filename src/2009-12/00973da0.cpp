// roc 2009-12 00973da0  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973da0
//
// 00973da0  b98816b900           mov ecx, 0xb91688
// 00973da5  ff15e8b69800         call dword ptr [0x98b6e8]
// 00973dab  6800549800           push 0x985400
// 00973db0  e8740be8ff           call 0x7f4929
// 00973db5  59                   pop ecx
// 00973db6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
