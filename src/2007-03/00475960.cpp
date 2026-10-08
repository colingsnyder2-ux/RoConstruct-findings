// roc 2007-03 00475960  unit: seg_00470000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475960
//
// 00475960  b801000000           mov eax, 1
// 00475965  014178               add dword ptr [ecx + 0x78], eax
// 00475968  014170               add dword ptr [ecx + 0x70], eax
// 0047596b  8b442404             mov eax, dword ptr [esp + 4]
// 0047596f  8b08                 mov ecx, dword ptr [eax]
// 00475971  e8caa90000           call 0x480340
// 00475976  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setMilestone@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VMilestone@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
