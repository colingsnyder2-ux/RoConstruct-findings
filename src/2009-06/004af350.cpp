// roc 2009-06 004af350  unit: G3D::Shader  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af350
//
// 004af350  80791400             cmp byte ptr [ecx + 0x14], 0
// 004af354  7409                 je 0x4af35f
// 004af356  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004af35a  e8a14effff           call 0x4a4200
// 004af35f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
