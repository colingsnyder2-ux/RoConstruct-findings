// roc 2010-06 009ddd80  unit: seg_009d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddd80
//
// 009ddd80  a17888c000           mov eax, dword ptr [0xc08878]
// 009ddd85  85c0                 test eax, eax
// 009ddd87  7435                 je 0x9dddbe
// 009ddd89  83c004               add eax, 4
// 009ddd8c  50                   push eax
// 009ddd8d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009ddd93  85c0                 test eax, eax
// 009ddd95  751d                 jne 0x9dddb4
// 009ddd97  8b0d7888c000         mov ecx, dword ptr [0xc08878]
// 009ddd9d  e87e5daaff           call 0x483b20
// 009ddda2  8b0d7888c000         mov ecx, dword ptr [0xc08878]
// 009ddda8  85c9                 test ecx, ecx
// 009dddaa  7408                 je 0x9dddb4
// 009dddac  8b01                 mov eax, dword ptr [ecx]
// 009dddae  8b10                 mov edx, dword ptr [eax]
// 009dddb0  6a01                 push 1
// 009dddb2  ffd2                 call edx
// 009dddb4  c7057888c00000000000 mov dword ptr [0xc08878], 0
// 009dddbe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
