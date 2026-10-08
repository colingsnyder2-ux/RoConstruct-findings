// roc 2009-06 0049f550  unit: G3D::VARArea  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f550
//
// 0049f550  8b442404             mov eax, dword ptr [esp + 4]
// 0049f554  56                   push esi
// 0049f555  50                   push eax
// 0049f556  8bf1                 mov esi, ecx
// 0049f558  ff1528eb8900         call dword ptr [0x89eb28]
// 0049f55e  ff4634               inc dword ptr [esi + 0x34]
// 0049f561  5e                   pop esi
// 0049f562  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
