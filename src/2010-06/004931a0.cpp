// roc 2010-06 004931a0  unit: seg_00490000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004931a0
//
// 004931a0  b801000000           mov eax, 1
// 004931a5  014178               add dword ptr [ecx + 0x78], eax
// 004931a8  014170               add dword ptr [ecx + 0x70], eax
// 004931ab  8b442404             mov eax, dword ptr [esp + 4]
// 004931af  8b08                 mov ecx, dword ptr [eax]
// 004931b1  e81a4f0000           call 0x4980d0
// 004931b6  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setMilestone@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VMilestone@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
