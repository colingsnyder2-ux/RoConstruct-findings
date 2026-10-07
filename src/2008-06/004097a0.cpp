// roc 2008-06 004097a0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004097a0
//
// 004097a0  8b442404             mov eax, dword ptr [esp + 4]
// 004097a4  56                   push esi
// 004097a5  50                   push eax
// 004097a6  8bf1                 mov esi, ecx
// 004097a8  ff1558248000         call dword ptr [0x802458]
// 004097ae  8bc6                 mov eax, esi
// 004097b0  5e                   pop esi
// 004097b1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
