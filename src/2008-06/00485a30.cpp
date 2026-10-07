// roc 2008-06 00485a30  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485a30
//
// 00485a30  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00485a33  051c010000           add eax, 0x11c
// 00485a38  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?messages@Shader@G3D@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
