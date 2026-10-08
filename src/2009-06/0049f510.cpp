// roc 2009-06 0049f510  unit: G3D::VARArea  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f510
//
// 0049f510  8b442404             mov eax, dword ptr [esp + 4]
// 0049f514  56                   push esi
// 0049f515  50                   push eax
// 0049f516  8bf1                 mov esi, ecx
// 0049f518  ff1530eb8900         call dword ptr [0x89eb30]
// 0049f51e  ff4634               inc dword ptr [esi + 0x34]
// 0049f521  5e                   pop esi
// 0049f522  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
