// roc 2007-08 004831c0  unit: G3D::Shader  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004831c0
//
// 004831c0  8b442404             mov eax, dword ptr [esp + 4]
// 004831c4  56                   push esi
// 004831c5  50                   push eax
// 004831c6  8bf1                 mov esi, ecx
// 004831c8  ff159ce67700         call dword ptr [0x77e69c]
// 004831ce  8bc6                 mov eax, esi
// 004831d0  5e                   pop esi
// 004831d1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
