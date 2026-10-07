// roc 2010-06 009e9380  unit: seg_009e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9380
//
// 009e9380  a104ccc200           mov eax, dword ptr [0xc2cc04]
// 009e9385  85c0                 test eax, eax
// 009e9387  7435                 je 0x9e93be
// 009e9389  83c004               add eax, 4
// 009e938c  50                   push eax
// 009e938d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009e9393  85c0                 test eax, eax
// 009e9395  751d                 jne 0x9e93b4
// 009e9397  8b0d04ccc200         mov ecx, dword ptr [0xc2cc04]
// 009e939d  e87ea7a9ff           call 0x483b20
// 009e93a2  8b0d04ccc200         mov ecx, dword ptr [0xc2cc04]
// 009e93a8  85c9                 test ecx, ecx
// 009e93aa  7408                 je 0x9e93b4
// 009e93ac  8b01                 mov eax, dword ptr [ecx]
// 009e93ae  8b10                 mov edx, dword ptr [eax]
// 009e93b0  6a01                 push 1
// 009e93b2  ffd2                 call edx
// 009e93b4  c70504ccc20000000000 mov dword ptr [0xc2cc04], 0
// 009e93be  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
