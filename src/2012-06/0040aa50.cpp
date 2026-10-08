// from server: 100% by auto
// roc 2012-06 0040aa50  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040aa50
//
// 0040aa50  8b442404             mov eax, dword ptr [esp + 4]
// 0040aa54  56                   push esi
// 0040aa55  50                   push eax
// 0040aa56  8bf1                 mov esi, ecx
// 0040aa58  ff154826b200         call dword ptr [0xb22648]
// 0040aa5e  8bc6                 mov eax, esi
// 0040aa60  5e                   pop esi
// 0040aa61  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
