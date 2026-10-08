// roc 2009-12 004cd520  unit: G3D::VARArea  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd520
//
// 004cd520  56                   push esi
// 004cd521  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cd525  56                   push esi
// 004cd526  e895feffff           call 0x4cd3c0
// 004cd52b  8b442408             mov eax, dword ptr [esp + 8]
// 004cd52f  50                   push eax
// 004cd530  8bce                 mov ecx, esi
// 004cd532  e8092a0100           call 0x4dff40
// 004cd537  5e                   pop esi
// 004cd538  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
