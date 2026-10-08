// roc 2010-06 00492be0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492be0
//
// 00492be0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00492be6  85c0                 test eax, eax
// 00492be8  7509                 jne 0x492bf3
// 00492bea  8b09                 mov ecx, dword ptr [ecx]
// 00492bec  8b01                 mov eax, dword ptr [ecx]
// 00492bee  8b5008               mov edx, dword ptr [eax + 8]
// 00492bf1  ffe2                 jmp edx
// 00492bf3  8b4040               mov eax, dword ptr [eax + 0x40]
// 00492bf6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
