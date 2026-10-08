// roc 2007-03 004753c0  unit: seg_00470000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004753c0
//
// 004753c0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004753c6  85c0                 test eax, eax
// 004753c8  7509                 jne 0x4753d3
// 004753ca  8b09                 mov ecx, dword ptr [ecx]
// 004753cc  8b01                 mov eax, dword ptr [ecx]
// 004753ce  8b5008               mov edx, dword ptr [eax + 8]
// 004753d1  ffe2                 jmp edx
// 004753d3  8b4040               mov eax, dword ptr [eax + 0x40]
// 004753d6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
