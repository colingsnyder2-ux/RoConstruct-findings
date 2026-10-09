// roc 2009-12 004cc6d0  unit: G3D::VARArea  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc6d0
//
// 004cc6d0  b801000000           mov eax, 1
// 004cc6d5  014178               add dword ptr [ecx + 0x78], eax
// 004cc6d8  014170               add dword ptr [ecx + 0x70], eax
// 004cc6db  8b442404             mov eax, dword ptr [esp + 4]
// 004cc6df  8b08                 mov ecx, dword ptr [eax]
// 004cc6e1  e8baf50000           call 0x4dbca0
// 004cc6e6  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setMilestone@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VMilestone@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
