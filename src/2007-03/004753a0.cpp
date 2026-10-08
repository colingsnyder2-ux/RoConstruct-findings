// roc 2007-03 004753a0  unit: seg_00470000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004753a0
//
// 004753a0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004753a6  85c0                 test eax, eax
// 004753a8  7509                 jne 0x4753b3
// 004753aa  8b09                 mov ecx, dword ptr [ecx]
// 004753ac  8b01                 mov eax, dword ptr [ecx]
// 004753ae  8b5004               mov edx, dword ptr [eax + 4]
// 004753b1  ffe2                 jmp edx
// 004753b3  8b4044               mov eax, dword ptr [eax + 0x44]
// 004753b6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?width@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
