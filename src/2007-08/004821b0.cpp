// roc 2007-08 004821b0  unit: G3D::Shader  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004821b0
//
// 004821b0  80791400             cmp byte ptr [ecx + 0x14], 0
// 004821b4  7409                 je 0x4821bf
// 004821b6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004821ba  e81175ffff           call 0x4796d0
// 004821bf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
