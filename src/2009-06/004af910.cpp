// from server: 100% by auto
// roc 2009-06 004af910  unit: G3D::Shader  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af910
//
// 004af910  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004af913  8a8018010000         mov al, byte ptr [eax + 0x118]
// 004af919  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?ok@Shader@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
