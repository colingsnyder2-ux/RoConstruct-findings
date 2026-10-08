// roc 2008-06 00478cd0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478cd0
//
// 00478cd0  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00478cd6  85c0                 test eax, eax
// 00478cd8  7509                 jne 0x478ce3
// 00478cda  8b09                 mov ecx, dword ptr [ecx]
// 00478cdc  8b01                 mov eax, dword ptr [ecx]
// 00478cde  8b5008               mov edx, dword ptr [eax + 8]
// 00478ce1  ffe2                 jmp edx
// 00478ce3  8b4040               mov eax, dword ptr [eax + 0x40]
// 00478ce6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?height@RenderDevice@G3D@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
