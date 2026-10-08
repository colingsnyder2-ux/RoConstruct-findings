// from server: 100% by auto
// roc 2009-06 004b0200  unit: G3D::Shader  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0200
//
// 004b0200  8b442404             mov eax, dword ptr [esp + 4]
// 004b0204  56                   push esi
// 004b0205  50                   push eax
// 004b0206  8bf1                 mov esi, ecx
// 004b0208  ff15b8e48900         call dword ptr [0x89e4b8]
// 004b020e  8bc6                 mov eax, esi
// 004b0210  5e                   pop esi
// 004b0211  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
