// roc 2007-08 00475280  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475280
//
// 00475280  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00475286  85c0                 test eax, eax
// 00475288  7509                 jne 0x475293
// 0047528a  8b09                 mov ecx, dword ptr [ecx]
// 0047528c  8b01                 mov eax, dword ptr [ecx]
// 0047528e  8b5004               mov edx, dword ptr [eax + 4]
// 00475291  ffe2                 jmp edx
// 00475293  8b4044               mov eax, dword ptr [eax + 0x44]
// 00475296  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?width@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
