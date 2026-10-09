// roc 2009-12 004cc110  unit: G3D::VARArea  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc110
//
// 004cc110  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004cc116  85c0                 test eax, eax
// 004cc118  7509                 jne 0x4cc123
// 004cc11a  8b09                 mov ecx, dword ptr [ecx]
// 004cc11c  8b01                 mov eax, dword ptr [ecx]
// 004cc11e  8b5008               mov edx, dword ptr [eax + 8]
// 004cc121  ffe2                 jmp edx
// 004cc123  8b4040               mov eax, dword ptr [eax + 0x40]
// 004cc126  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
