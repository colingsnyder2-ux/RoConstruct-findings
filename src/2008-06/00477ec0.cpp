// roc 2008-06 00477ec0  unit: G3D::VARArea  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477ec0
//
// 00477ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00477ec4  56                   push esi
// 00477ec5  50                   push eax
// 00477ec6  8bf1                 mov esi, ecx
// 00477ec8  ff15782a8000         call dword ptr [0x802a78]
// 00477ece  ff4634               inc dword ptr [esi + 0x34]
// 00477ed1  5e                   pop esi
// 00477ed2  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
