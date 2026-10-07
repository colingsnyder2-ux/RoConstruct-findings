// roc 2008-06 00486350  unit: G3D::Shader  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486350
//
// 00486350  8b442404             mov eax, dword ptr [esp + 4]
// 00486354  56                   push esi
// 00486355  50                   push eax
// 00486356  8bf1                 mov esi, ecx
// 00486358  ff155c248000         call dword ptr [0x80245c]
// 0048635e  8bc6                 mov eax, esi
// 00486360  5e                   pop esi
// 00486361  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
