// roc 2008-06 00485a20  unit: G3D::Shader  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485a20
//
// 00485a20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00485a23  8a8018010000         mov al, byte ptr [eax + 0x118]
// 00485a29  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?ok@Shader@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
