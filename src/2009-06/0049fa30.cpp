// roc 2009-06 0049fa30  unit: G3D::VARArea  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049fa30
//
// 0049fa30  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 0049fa36  85c0                 test eax, eax
// 0049fa38  7509                 jne 0x49fa43
// 0049fa3a  8b09                 mov ecx, dword ptr [ecx]
// 0049fa3c  8b01                 mov eax, dword ptr [ecx]
// 0049fa3e  8b5008               mov edx, dword ptr [eax + 8]
// 0049fa41  ffe2                 jmp edx
// 0049fa43  8b4040               mov eax, dword ptr [eax + 0x40]
// 0049fa46  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
