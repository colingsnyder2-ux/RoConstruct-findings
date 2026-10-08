// roc 2009-06 004a01b0  unit: G3D::VARArea  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a01b0
//
// 004a01b0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004a01b6  85c0                 test eax, eax
// 004a01b8  7509                 jne 0x4a01c3
// 004a01ba  8b09                 mov ecx, dword ptr [ecx]
// 004a01bc  8b01                 mov eax, dword ptr [ecx]
// 004a01be  8b5004               mov edx, dword ptr [eax + 4]
// 004a01c1  ffe2                 jmp edx
// 004a01c3  8b4044               mov eax, dword ptr [eax + 0x44]
// 004a01c6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?width@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
