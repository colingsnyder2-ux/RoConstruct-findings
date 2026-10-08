// roc 2009-12 006da8b0  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da8b0
//
// 006da8b0  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 006da8b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?numTextureCoords@RenderDevice@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
