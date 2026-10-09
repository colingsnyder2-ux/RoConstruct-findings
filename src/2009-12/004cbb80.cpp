// roc 2009-12 004cbb80  unit: G3D::VARArea  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbb80
//
// 004cbb80  8b442404             mov eax, dword ptr [esp + 4]
// 004cbb84  56                   push esi
// 004cbb85  50                   push eax
// 004cbb86  8bf1                 mov esi, ecx
// 004cbb88  ff15c0ba9800         call dword ptr [0x98bac0]
// 004cbb8e  ff4634               inc dword ptr [esi + 0x34]
// 004cbb91  5e                   pop esi
// 004cbb92  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
