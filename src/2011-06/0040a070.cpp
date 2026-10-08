// from server: 100% by auto
// roc 2011-06 0040a070  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040a070
//
// 0040a070  8b442404             mov eax, dword ptr [esp + 4]
// 0040a074  56                   push esi
// 0040a075  50                   push eax
// 0040a076  8bf1                 mov esi, ecx
// 0040a078  ff15c404a400         call dword ptr [0xa404c4]
// 0040a07e  8bc6                 mov eax, esi
// 0040a080  5e                   pop esi
// 0040a081  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
