// roc 2008-06 00478450  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478450
//
// 00478450  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00478456  85c0                 test eax, eax
// 00478458  7509                 jne 0x478463
// 0047845a  8b09                 mov ecx, dword ptr [ecx]
// 0047845c  8b01                 mov eax, dword ptr [ecx]
// 0047845e  8b5004               mov edx, dword ptr [eax + 4]
// 00478461  ffe2                 jmp edx
// 00478463  8b4044               mov eax, dword ptr [eax + 0x44]
// 00478466  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?width@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
