// roc 2007-08 00474bf0  unit: G3D::VARArea  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474bf0
//
// 00474bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00474bf4  56                   push esi
// 00474bf5  50                   push eax
// 00474bf6  8bf1                 mov esi, ecx
// 00474bf8  ff15acea7700         call dword ptr [0x77eaac]
// 00474bfe  83463401             add dword ptr [esi + 0x34], 1
// 00474c02  5e                   pop esi
// 00474c03  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
