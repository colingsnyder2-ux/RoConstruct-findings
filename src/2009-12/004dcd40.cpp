// roc 2009-12 004dcd40  unit: G3D::Shader  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dcd40
//
// 004dcd40  8b442404             mov eax, dword ptr [esp + 4]
// 004dcd44  56                   push esi
// 004dcd45  50                   push eax
// 004dcd46  8bf1                 mov esi, ecx
// 004dcd48  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dcd4e  8bc6                 mov eax, esi
// 004dcd50  5e                   pop esi
// 004dcd51  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
