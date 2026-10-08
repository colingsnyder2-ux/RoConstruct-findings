// roc 2007-08 004752a0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004752a0
//
// 004752a0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004752a6  85c0                 test eax, eax
// 004752a8  7509                 jne 0x4752b3
// 004752aa  8b09                 mov ecx, dword ptr [ecx]
// 004752ac  8b01                 mov eax, dword ptr [ecx]
// 004752ae  8b5008               mov edx, dword ptr [eax + 8]
// 004752b1  ffe2                 jmp edx
// 004752b3  8b4040               mov eax, dword ptr [eax + 0x40]
// 004752b6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
