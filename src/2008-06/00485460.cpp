// roc 2008-06 00485460  unit: G3D::Shader  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485460
//
// 00485460  80791400             cmp byte ptr [ecx + 0x14], 0
// 00485464  7409                 je 0x48546f
// 00485466  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048546a  e8f17effff           call 0x47d360
// 0048546f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
