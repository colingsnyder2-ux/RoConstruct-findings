// roc 2007-03 00474d10  unit: seg_00470000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474d10
//
// 00474d10  8b442404             mov eax, dword ptr [esp + 4]
// 00474d14  56                   push esi
// 00474d15  50                   push eax
// 00474d16  8bf1                 mov esi, ecx
// 00474d18  ff1514ec7700         call dword ptr [0x77ec14]
// 00474d1e  83463401             add dword ptr [esi + 0x34], 1
// 00474d22  5e                   pop esi
// 00474d23  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?sendVertex@RenderDevice@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
