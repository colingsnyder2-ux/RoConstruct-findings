// roc 2007-03 00583a60  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00583a60
//
// 00583a60  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 00583a66  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?numTextureCoords@RenderDevice@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
