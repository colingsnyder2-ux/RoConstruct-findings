// roc 2007-08 004827e0  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004827e0
//
// 004827e0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004827e3  051c010000           add eax, 0x11c
// 004827e8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?messages@Shader@G3D@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
