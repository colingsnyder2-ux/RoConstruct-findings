// roc 2010-06 004991b0  unit: G3D::Shader  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004991b0
//
// 004991b0  8b442404             mov eax, dword ptr [esp + 4]
// 004991b4  56                   push esi
// 004991b5  50                   push eax
// 004991b6  8bf1                 mov esi, ecx
// 004991b8  ff150ca49e00         call dword ptr [0x9ea40c]
// 004991be  8bc6                 mov eax, esi
// 004991c0  5e                   pop esi
// 004991c1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
