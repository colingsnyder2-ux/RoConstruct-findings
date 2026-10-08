// roc 2010-06 00492bc0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492bc0
//
// 00492bc0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00492bc6  85c0                 test eax, eax
// 00492bc8  7509                 jne 0x492bd3
// 00492bca  8b09                 mov ecx, dword ptr [ecx]
// 00492bcc  8b01                 mov eax, dword ptr [ecx]
// 00492bce  8b5004               mov edx, dword ptr [eax + 4]
// 00492bd1  ffe2                 jmp edx
// 00492bd3  8b4044               mov eax, dword ptr [eax + 0x44]
// 00492bd6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?width@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
