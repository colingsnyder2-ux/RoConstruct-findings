// roc 2009-06 004a0400  unit: G3D::VARArea  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0400
//
// 004a0400  ff4174               inc dword ptr [ecx + 0x74]
// 004a0403  8b442404             mov eax, dword ptr [esp + 4]
// 004a0407  8b00                 mov eax, dword ptr [eax]
// 004a0409  81c188040000         add ecx, 0x488
// 004a040f  3b01                 cmp eax, dword ptr [ecx]
// 004a0411  7409                 je 0x4a041c
// 004a0413  89442404             mov dword ptr [esp + 4], eax
// 004a0417  e944f4ffff           jmp 0x49f860
// 004a041c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
