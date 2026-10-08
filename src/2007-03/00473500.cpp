// roc 2007-03 00473500  unit: seg_00470000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473500
//
// 00473500  8b442408             mov eax, dword ptr [esp + 8]
// 00473504  56                   push esi
// 00473505  8b742408             mov esi, dword ptr [esp + 8]
// 00473509  50                   push eax
// 0047350a  56                   push esi
// 0047350b  e860b10000           call 0x47e670
// 00473510  83c408               add esp, 8
// 00473513  8bc6                 mov eax, esi
// 00473515  5e                   pop esi
// 00473516  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
