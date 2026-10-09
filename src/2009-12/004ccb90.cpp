// roc 2009-12 004ccb90  unit: G3D::VARArea  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccb90
//
// 004ccb90  ff4174               inc dword ptr [ecx + 0x74]
// 004ccb93  8b442404             mov eax, dword ptr [esp + 4]
// 004ccb97  8b00                 mov eax, dword ptr [eax]
// 004ccb99  81c188040000         add ecx, 0x488
// 004ccb9f  3b01                 cmp eax, dword ptr [ecx]
// 004ccba1  7409                 je 0x4ccbac
// 004ccba3  89442404             mov dword ptr [esp + 4], eax
// 004ccba7  e9c4eff7ff           jmp 0x44bb70
// 004ccbac  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
