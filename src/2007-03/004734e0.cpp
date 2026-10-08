// roc 2007-03 004734e0  unit: seg_00470000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004734e0
//
// 004734e0  8b09                 mov ecx, dword ptr [ecx]
// 004734e2  8b01                 mov eax, dword ptr [ecx]
// 004734e4  8b4044               mov eax, dword ptr [eax + 0x44]
// 004734e7  ffe0                 jmp eax
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?notifyResize@RenderDevice@G3D@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
