// roc 2007-08 004733d0  unit: G3D::VARArea  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004733d0
//
// 004733d0  807c240400           cmp byte ptr [esp + 4], 0
// 004733d5  b8347c7900           mov eax, 0x797c34
// 004733da  7505                 jne 0x4733e1
// 004733dc  b8287c7900           mov eax, 0x797c28
// 004733e1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?isOk@G3D@@YAPBD_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
