// roc 2007-08 00475820  unit: CInstanceRecord::CNameItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475820
//
// 00475820  b801000000           mov eax, 1
// 00475825  014178               add dword ptr [ecx + 0x78], eax
// 00475828  014170               add dword ptr [ecx + 0x70], eax
// 0047582b  8b442404             mov eax, dword ptr [esp + 4]
// 0047582f  8b08                 mov ecx, dword ptr [eax]
// 00475831  e83ac60000           call 0x481e70
// 00475836  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setMilestone@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VMilestone@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
