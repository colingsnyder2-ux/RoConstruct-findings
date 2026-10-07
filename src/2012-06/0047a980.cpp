// roc 2012-06 0047a980  unit: CRobloxDoc  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047a980
//
// 0047a980  8b442404             mov eax, dword ptr [esp + 4]
// 0047a984  56                   push esi
// 0047a985  50                   push eax
// 0047a986  8bf1                 mov esi, ecx
// 0047a988  ff155826b200         call dword ptr [0xb22658]
// 0047a98e  8bc6                 mov eax, esi
// 0047a990  5e                   pop esi
// 0047a991  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0ArgumentError@VertexAndPixelShader@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
