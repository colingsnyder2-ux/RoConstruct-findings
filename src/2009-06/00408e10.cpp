// from server: 100% by auto
// roc 2009-06 00408e10  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00408e10
//
// 00408e10  8b442404             mov eax, dword ptr [esp + 4]
// 00408e14  56                   push esi
// 00408e15  50                   push eax
// 00408e16  8bf1                 mov esi, ecx
// 00408e18  ff15b4e48900         call dword ptr [0x89e4b4]
// 00408e1e  8bc6                 mov eax, esi
// 00408e20  5e                   pop esi
// 00408e21  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
