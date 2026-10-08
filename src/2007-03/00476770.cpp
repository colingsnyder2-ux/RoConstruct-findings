// roc 2007-03 00476770  unit: seg_00470000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00476770
//
// 00476770  56                   push esi
// 00476771  8b742408             mov esi, dword ptr [esp + 8]
// 00476775  56                   push esi
// 00476776  e8c5feffff           call 0x476640
// 0047677b  8bce                 mov ecx, esi
// 0047677d  e8cede0000           call 0x484650
// 00476782  5e                   pop esi
// 00476783  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
