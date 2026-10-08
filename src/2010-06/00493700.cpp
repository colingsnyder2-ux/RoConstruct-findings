// roc 2010-06 00493700  unit: seg_00490000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493700
//
// 00493700  ff4174               inc dword ptr [ecx + 0x74]
// 00493703  8b442404             mov eax, dword ptr [esp + 4]
// 00493707  8b00                 mov eax, dword ptr [eax]
// 00493709  81c188040000         add ecx, 0x488
// 0049370f  3b01                 cmp eax, dword ptr [ecx]
// 00493711  7409                 je 0x49371c
// 00493713  89442404             mov dword ptr [esp + 4], eax
// 00493717  e90436ffff           jmp 0x486d20
// 0049371c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
