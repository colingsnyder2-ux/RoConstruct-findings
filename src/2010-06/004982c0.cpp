// from server: 100% by auto
// roc 2010-06 004982c0  unit: G3D::Shader  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004982c0
//
// 004982c0  80791400             cmp byte ptr [ecx + 0x14], 0
// 004982c4  7409                 je 0x4982cf
// 004982c6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004982ca  e831f5ffff           call 0x497800
// 004982cf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?afterPrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
