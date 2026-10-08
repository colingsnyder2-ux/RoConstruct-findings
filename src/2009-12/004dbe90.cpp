// roc 2009-12 004dbe90  unit: G3D::Shader  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbe90
//
// 004dbe90  80791400             cmp byte ptr [ecx + 0x14], 0
// 004dbe94  7409                 je 0x4dbe9f
// 004dbe96  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dbe9a  e8314effff           call 0x4d0cd0
// 004dbe9f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
