// roc 2010-06 00408d60  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00408d60
//
// 00408d60  8b442404             mov eax, dword ptr [esp + 4]
// 00408d64  56                   push esi
// 00408d65  50                   push eax
// 00408d66  8bf1                 mov esi, ecx
// 00408d68  ff1510a49e00         call dword ptr [0x9ea410]
// 00408d6e  8bc6                 mov eax, esi
// 00408d70  5e                   pop esi
// 00408d71  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
