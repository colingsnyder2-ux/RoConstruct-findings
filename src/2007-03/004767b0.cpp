// roc 2007-03 004767b0  unit: seg_00470000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004767b0
//
// 004767b0  56                   push esi
// 004767b1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004767b5  56                   push esi
// 004767b6  e885feffff           call 0x476640
// 004767bb  8b442408             mov eax, dword ptr [esp + 8]
// 004767bf  50                   push eax
// 004767c0  8bce                 mov ecx, esi
// 004767c2  e8f9de0000           call 0x4846c0
// 004767c7  5e                   pop esi
// 004767c8  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
