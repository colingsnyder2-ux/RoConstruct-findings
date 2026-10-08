// roc 2007-03 00476790  unit: seg_00470000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00476790
//
// 00476790  56                   push esi
// 00476791  8b742408             mov esi, dword ptr [esp + 8]
// 00476795  56                   push esi
// 00476796  e8a5feffff           call 0x476640
// 0047679b  8bce                 mov ecx, esi
// 0047679d  e8eede0000           call 0x484690
// 004767a2  5e                   pop esi
// 004767a3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVertexArray@RenderDevice@G3D@@QAEXABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
