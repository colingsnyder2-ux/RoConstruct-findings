// from server: 100% by auto
// roc 2007-08 0076f2b0  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f2b0
//
// 0076f2b0  b9b0e48b00           mov ecx, 0x8be4b0
// 0076f2b5  ff15a4e67700         call dword ptr [0x77e6a4]
// 0076f2bb  6890867700           push 0x778690
// 0076f2c0  e85e1aecff           call 0x630d23
// 0076f2c5  59                   pop ecx
// 0076f2c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
