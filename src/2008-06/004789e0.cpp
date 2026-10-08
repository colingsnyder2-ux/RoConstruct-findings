// roc 2008-06 004789e0  unit: CInstanceRecord::CNameItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004789e0
//
// 004789e0  b801000000           mov eax, 1
// 004789e5  014178               add dword ptr [ecx + 0x78], eax
// 004789e8  014170               add dword ptr [ecx + 0x70], eax
// 004789eb  8b442404             mov eax, dword ptr [esp + 4]
// 004789ef  8b08                 mov ecx, dword ptr [eax]
// 004789f1  e8bac70000           call 0x4851b0
// 004789f6  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setMilestone@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VMilestone@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
