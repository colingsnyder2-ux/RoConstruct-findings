// roc 2009-12 00408d90  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00408d90
//
// 00408d90  8b442404             mov eax, dword ptr [esp + 4]
// 00408d94  56                   push esi
// 00408d95  50                   push eax
// 00408d96  8bf1                 mov esi, ecx
// 00408d98  ff15f4b69800         call dword ptr [0x98b6f4]
// 00408d9e  8bc6                 mov eax, esi
// 00408da0  5e                   pop esi
// 00408da1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
