// from server: 100% by auto
// roc 2010-06 009dde70  unit: seg_009d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde70
//
// 009dde70  a1e88fc000           mov eax, dword ptr [0xc08fe8]
// 009dde75  85c0                 test eax, eax
// 009dde77  7435                 je 0x9ddeae
// 009dde79  83c004               add eax, 4
// 009dde7c  50                   push eax
// 009dde7d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009dde83  85c0                 test eax, eax
// 009dde85  751d                 jne 0x9ddea4
// 009dde87  8b0de88fc000         mov ecx, dword ptr [0xc08fe8]
// 009dde8d  e88e5caaff           call 0x483b20
// 009dde92  8b0de88fc000         mov ecx, dword ptr [0xc08fe8]
// 009dde98  85c9                 test ecx, ecx
// 009dde9a  7408                 je 0x9ddea4
// 009dde9c  8b01                 mov eax, dword ptr [ecx]
// 009dde9e  8b10                 mov edx, dword ptr [eax]
// 009ddea0  6a01                 push 1
// 009ddea2  ffd2                 call edx
// 009ddea4  c705e88fc00000000000 mov dword ptr [0xc08fe8], 0
// 009ddeae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
